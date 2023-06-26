/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/DatabaseMigrationServiceErrorMarshaller.h>
#include <aws/dms/DatabaseMigrationServiceEndpointProvider.h>
#include <aws/dms/model/AddTagsToResourceRequest.h>
#include <aws/dms/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/dms/model/BatchStartRecommendationsRequest.h>
#include <aws/dms/model/CancelReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/CreateEndpointRequest.h>
#include <aws/dms/model/CreateEventSubscriptionRequest.h>
#include <aws/dms/model/CreateFleetAdvisorCollectorRequest.h>
#include <aws/dms/model/CreateReplicationInstanceRequest.h>
#include <aws/dms/model/CreateReplicationSubnetGroupRequest.h>
#include <aws/dms/model/CreateReplicationTaskRequest.h>
#include <aws/dms/model/DeleteCertificateRequest.h>
#include <aws/dms/model/DeleteConnectionRequest.h>
#include <aws/dms/model/DeleteEndpointRequest.h>
#include <aws/dms/model/DeleteEventSubscriptionRequest.h>
#include <aws/dms/model/DeleteFleetAdvisorCollectorRequest.h>
#include <aws/dms/model/DeleteFleetAdvisorDatabasesRequest.h>
#include <aws/dms/model/DeleteReplicationInstanceRequest.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupRequest.h>
#include <aws/dms/model/DeleteReplicationTaskRequest.h>
#include <aws/dms/model/DeleteReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/DescribeAccountAttributesRequest.h>
#include <aws/dms/model/DescribeApplicableIndividualAssessmentsRequest.h>
#include <aws/dms/model/DescribeCertificatesRequest.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeEndpointSettingsRequest.h>
#include <aws/dms/model/DescribeEndpointTypesRequest.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeEventCategoriesRequest.h>
#include <aws/dms/model/DescribeEventSubscriptionsRequest.h>
#include <aws/dms/model/DescribeEventsRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemasRequest.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesRequest.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/dms/model/DescribeRecommendationLimitationsRequest.h>
#include <aws/dms/model/DescribeRecommendationsRequest.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusRequest.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsRequest.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeSchemasRequest.h>
#include <aws/dms/model/DescribeTableStatisticsRequest.h>
#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/dms/model/ListTagsForResourceRequest.h>
#include <aws/dms/model/ModifyEndpointRequest.h>
#include <aws/dms/model/ModifyEventSubscriptionRequest.h>
#include <aws/dms/model/ModifyReplicationInstanceRequest.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupRequest.h>
#include <aws/dms/model/ModifyReplicationTaskRequest.h>
#include <aws/dms/model/MoveReplicationTaskRequest.h>
#include <aws/dms/model/RebootReplicationInstanceRequest.h>
#include <aws/dms/model/RefreshSchemasRequest.h>
#include <aws/dms/model/ReloadTablesRequest.h>
#include <aws/dms/model/RemoveTagsFromResourceRequest.h>
#include <aws/dms/model/StartRecommendationsRequest.h>
#include <aws/dms/model/StartReplicationTaskRequest.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRequest.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/StopReplicationTaskRequest.h>
#include <aws/dms/model/TestConnectionRequest.h>
#include <aws/dms/model/UpdateSubscriptionsToEventBridgeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DatabaseMigrationService;
using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DatabaseMigrationServiceClient::SERVICE_NAME = "dms";
const char* DatabaseMigrationServiceClient::ALLOCATION_TAG = "DatabaseMigrationServiceClient";

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration,
                                                               std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const AWSCredentials& credentials,
                                                               std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider,
                                                               const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider,
                                                               const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DatabaseMigrationServiceClient::~DatabaseMigrationServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase>& DatabaseMigrationServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DatabaseMigrationServiceClient::init(const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Database Migration Service");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DatabaseMigrationServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsToResourceOutcome DatabaseMigrationServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  AWS_OPERATION_GUARD(AddTagsToResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  AWS_OPERATION_GUARD(ApplyPendingMaintenanceAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplyPendingMaintenanceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplyPendingMaintenanceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchStartRecommendationsOutcome DatabaseMigrationServiceClient::BatchStartRecommendations(const BatchStartRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchStartRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchStartRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchStartRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchStartRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun(const CancelReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_GUARD(CancelReplicationTaskAssessmentRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEventSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::CreateFleetAdvisorCollector(const CreateFleetAdvisorCollectorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFleetAdvisorCollector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetAdvisorCollectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(const CreateReplicationInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReplicationInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReplicationSubnetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcome DatabaseMigrationServiceClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEventSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector(const DeleteFleetAdvisorCollectorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFleetAdvisorCollector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetAdvisorCollectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases(const DeleteFleetAdvisorDatabasesRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFleetAdvisorDatabases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetAdvisorDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReplicationInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReplicationSubnetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun(const DeleteReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReplicationTaskAssessmentRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicableIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments(const DescribeApplicableIndividualAssessmentsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeApplicableIndividualAssessments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicableIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicableIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicableIndividualAssessmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeCertificates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeConnections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointSettingsOutcome DatabaseMigrationServiceClient::DescribeEndpointSettings(const DescribeEndpointSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpointSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpointTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventCategories);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventCategoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventSubscriptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorCollectorsOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors(const DescribeFleetAdvisorCollectorsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetAdvisorCollectors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorCollectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorCollectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorCollectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases(const DescribeFleetAdvisorDatabasesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetAdvisorDatabases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis(const DescribeFleetAdvisorLsaAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetAdvisorLsaAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorLsaAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemaObjectSummaryOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetAdvisorSchemaObjectSummary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorSchemaObjectSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorSchemaObjectSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorSchemaObjectSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemasOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas(const DescribeFleetAdvisorSchemasRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFleetAdvisorSchemas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeOrderableReplicationInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrderableReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrderableReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOrderableReplicationInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePendingMaintenanceActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePendingMaintenanceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePendingMaintenanceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecommendationLimitationsOutcome DatabaseMigrationServiceClient::DescribeRecommendationLimitations(const DescribeRecommendationLimitationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRecommendationLimitations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecommendationLimitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecommendationLimitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecommendationLimitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecommendationsOutcome DatabaseMigrationServiceClient::DescribeRecommendations(const DescribeRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRefreshSchemasStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRefreshSchemasStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRefreshSchemasStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRefreshSchemasStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationInstanceTaskLogs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationInstanceTaskLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationInstanceTaskLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationInstanceTaskLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationSubnetGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationSubnetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationTaskAssessmentResults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskAssessmentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskAssessmentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskAssessmentResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentRunsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns(const DescribeReplicationTaskAssessmentRunsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationTaskAssessmentRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskAssessmentRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskAssessmentRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskAssessmentRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments(const DescribeReplicationTaskIndividualAssessmentsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationTaskIndividualAssessments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskIndividualAssessmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(const DescribeReplicationTasksRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSchemas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(const DescribeTableStatisticsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTableStatistics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(ImportCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyEventSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(const ModifyReplicationInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyReplicationInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyReplicationSubnetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MoveReplicationTaskOutcome DatabaseMigrationServiceClient::MoveReplicationTask(const MoveReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(MoveReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(const RebootReplicationInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(RebootReplicationInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const
{
  AWS_OPERATION_GUARD(RefreshSchemas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RefreshSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RefreshSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RefreshSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ReloadTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReloadTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReloadTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReloadTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveTagsFromResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis() const
{
AWS_OPERATION_GUARD(RunFleetAdvisorLsaAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunFleetAdvisorLsaAnalysisOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "RunFleetAdvisorLsaAnalysis"));
}

StartRecommendationsOutcome DatabaseMigrationServiceClient::StartRecommendations(const StartRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(StartRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(StartReplicationTaskAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTaskAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTaskAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun(const StartReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_GUARD(StartReplicationTaskAssessmentRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StopReplicationTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(TestConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionsToEventBridgeOutcome DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge(const UpdateSubscriptionsToEventBridgeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSubscriptionsToEventBridge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionsToEventBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionsToEventBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSubscriptionsToEventBridgeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

