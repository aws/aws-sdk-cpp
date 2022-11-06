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
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable DatabaseMigrationServiceClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToResource(request), context);
    } );
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplyPendingMaintenanceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplyPendingMaintenanceAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ApplyPendingMaintenanceActionOutcomeCallable DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ApplyPendingMaintenanceAction(request), context);
    } );
}

CancelReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun(const CancelReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRunCallable(const CancelReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRunAsync(const CancelReplicationTaskAssessmentRunRequest& request, const CancelReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelReplicationTaskAssessmentRun(request), context);
    } );
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable DatabaseMigrationServiceClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpoint(request), context);
    } );
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventSubscription(request), context);
    } );
}

CreateFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::CreateFleetAdvisorCollector(const CreateFleetAdvisorCollectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetAdvisorCollectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetAdvisorCollectorOutcomeCallable DatabaseMigrationServiceClient::CreateFleetAdvisorCollectorCallable(const CreateFleetAdvisorCollectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetAdvisorCollectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleetAdvisorCollector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateFleetAdvisorCollectorAsync(const CreateFleetAdvisorCollectorRequest& request, const CreateFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFleetAdvisorCollector(request), context);
    } );
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(const CreateReplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationInstanceAsync(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationInstance(request), context);
    } );
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationSubnetGroupCallable(const CreateReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationSubnetGroupAsync(const CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationSubnetGroup(request), context);
    } );
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationTaskCallable(const CreateReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::CreateReplicationTaskAsync(const CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationTask(request), context);
    } );
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable DatabaseMigrationServiceClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCertificate(request), context);
    } );
}

DeleteConnectionOutcome DatabaseMigrationServiceClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable DatabaseMigrationServiceClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnection(request), context);
    } );
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable DatabaseMigrationServiceClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpoint(request), context);
    } );
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventSubscription(request), context);
    } );
}

DeleteFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector(const DeleteFleetAdvisorCollectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleetAdvisorCollector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetAdvisorCollectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorCollectorOutcomeCallable DatabaseMigrationServiceClient::DeleteFleetAdvisorCollectorCallable(const DeleteFleetAdvisorCollectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetAdvisorCollectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetAdvisorCollector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteFleetAdvisorCollectorAsync(const DeleteFleetAdvisorCollectorRequest& request, const DeleteFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFleetAdvisorCollector(request), context);
    } );
}

DeleteFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases(const DeleteFleetAdvisorDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetAdvisorDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorDatabasesOutcomeCallable DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabasesCallable(const DeleteFleetAdvisorDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetAdvisorDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetAdvisorDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabasesAsync(const DeleteFleetAdvisorDatabasesRequest& request, const DeleteFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFleetAdvisorDatabases(request), context);
    } );
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationInstance(request), context);
    } );
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupCallable(const DeleteReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupAsync(const DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationSubnetGroup(request), context);
    } );
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationTaskCallable(const DeleteReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAsync(const DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationTask(request), context);
    } );
}

DeleteReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun(const DeleteReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRunCallable(const DeleteReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRunAsync(const DeleteReplicationTaskAssessmentRunRequest& request, const DeleteReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationTaskAssessmentRun(request), context);
    } );
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAttributesOutcomeCallable DatabaseMigrationServiceClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountAttributes(request), context);
    } );
}

DescribeApplicableIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments(const DescribeApplicableIndividualAssessmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicableIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicableIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeApplicableIndividualAssessmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicableIndividualAssessmentsOutcomeCallable DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessmentsCallable(const DescribeApplicableIndividualAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicableIndividualAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicableIndividualAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessmentsAsync(const DescribeApplicableIndividualAssessmentsRequest& request, const DescribeApplicableIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApplicableIndividualAssessments(request), context);
    } );
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificatesOutcomeCallable DatabaseMigrationServiceClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCertificates(request), context);
    } );
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionsOutcomeCallable DatabaseMigrationServiceClient::DescribeConnectionsCallable(const DescribeConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeConnectionsAsync(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnections(request), context);
    } );
}

DescribeEndpointSettingsOutcome DatabaseMigrationServiceClient::DescribeEndpointSettings(const DescribeEndpointSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointSettingsOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointSettingsCallable(const DescribeEndpointSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEndpointSettingsAsync(const DescribeEndpointSettingsRequest& request, const DescribeEndpointSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointSettings(request), context);
    } );
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointTypesOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointTypesCallable(const DescribeEndpointTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEndpointTypesAsync(const DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointTypes(request), context);
    } );
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpoints(request), context);
    } );
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventCategoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventCategoriesOutcomeCallable DatabaseMigrationServiceClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventCategories(request), context);
    } );
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSubscriptionsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventSubscriptions(request), context);
    } );
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEvents(request), context);
    } );
}

DescribeFleetAdvisorCollectorsOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors(const DescribeFleetAdvisorCollectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorCollectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorCollectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorCollectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorCollectorsOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectorsCallable(const DescribeFleetAdvisorCollectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorCollectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorCollectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectorsAsync(const DescribeFleetAdvisorCollectorsRequest& request, const DescribeFleetAdvisorCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetAdvisorCollectors(request), context);
    } );
}

DescribeFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases(const DescribeFleetAdvisorDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorDatabasesOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabasesCallable(const DescribeFleetAdvisorDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabasesAsync(const DescribeFleetAdvisorDatabasesRequest& request, const DescribeFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetAdvisorDatabases(request), context);
    } );
}

DescribeFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis(const DescribeFleetAdvisorLsaAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorLsaAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorLsaAnalysisOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysisCallable(const DescribeFleetAdvisorLsaAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorLsaAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorLsaAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysisAsync(const DescribeFleetAdvisorLsaAnalysisRequest& request, const DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetAdvisorLsaAnalysis(request), context);
    } );
}

DescribeFleetAdvisorSchemaObjectSummaryOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorSchemaObjectSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorSchemaObjectSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorSchemaObjectSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemaObjectSummaryOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummaryCallable(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorSchemaObjectSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorSchemaObjectSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummaryAsync(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request, const DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetAdvisorSchemaObjectSummary(request), context);
    } );
}

DescribeFleetAdvisorSchemasOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas(const DescribeFleetAdvisorSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetAdvisorSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetAdvisorSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetAdvisorSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemasOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemasCallable(const DescribeFleetAdvisorSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemasAsync(const DescribeFleetAdvisorSchemasRequest& request, const DescribeFleetAdvisorSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFleetAdvisorSchemas(request), context);
    } );
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrderableReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrderableReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOrderableReplicationInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrderableReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesCallable(const DescribeOrderableReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesAsync(const DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOrderableReplicationInstances(request), context);
    } );
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePendingMaintenanceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePendingMaintenanceActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePendingMaintenanceActionsOutcomeCallable DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePendingMaintenanceActions(request), context);
    } );
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRefreshSchemasStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRefreshSchemasStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRefreshSchemasStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRefreshSchemasStatusOutcomeCallable DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusCallable(const DescribeRefreshSchemasStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRefreshSchemasStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRefreshSchemasStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusAsync(const DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRefreshSchemasStatus(request), context);
    } );
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationInstanceTaskLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationInstanceTaskLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationInstanceTaskLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstanceTaskLogsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsCallable(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstanceTaskLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstanceTaskLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsAsync(const DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationInstanceTaskLogs(request), context);
    } );
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationInstances(request), context);
    } );
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationSubnetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationSubnetGroupsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsCallable(const DescribeReplicationSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsAsync(const DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationSubnetGroups(request), context);
    } );
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskAssessmentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskAssessmentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskAssessmentResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentResultsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsCallable(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskAssessmentResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskAssessmentResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsAsync(const DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationTaskAssessmentResults(request), context);
    } );
}

DescribeReplicationTaskAssessmentRunsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns(const DescribeReplicationTaskAssessmentRunsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskAssessmentRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskAssessmentRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskAssessmentRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentRunsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRunsCallable(const DescribeReplicationTaskAssessmentRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskAssessmentRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskAssessmentRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRunsAsync(const DescribeReplicationTaskAssessmentRunsRequest& request, const DescribeReplicationTaskAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationTaskAssessmentRuns(request), context);
    } );
}

DescribeReplicationTaskIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments(const DescribeReplicationTaskIndividualAssessmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTaskIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTaskIndividualAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTaskIndividualAssessmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskIndividualAssessmentsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessmentsCallable(const DescribeReplicationTaskIndividualAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskIndividualAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskIndividualAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessmentsAsync(const DescribeReplicationTaskIndividualAssessmentsRequest& request, const DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationTaskIndividualAssessments(request), context);
    } );
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(const DescribeReplicationTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplicationTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTasksOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTasksCallable(const DescribeReplicationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeReplicationTasksAsync(const DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationTasks(request), context);
    } );
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSchemasOutcomeCallable DatabaseMigrationServiceClient::DescribeSchemasCallable(const DescribeSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeSchemasAsync(const DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSchemas(request), context);
    } );
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(const DescribeTableStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableStatisticsOutcomeCallable DatabaseMigrationServiceClient::DescribeTableStatisticsCallable(const DescribeTableStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::DescribeTableStatisticsAsync(const DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTableStatistics(request), context);
    } );
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateOutcomeCallable DatabaseMigrationServiceClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportCertificate(request), context);
    } );
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DatabaseMigrationServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEndpointOutcomeCallable DatabaseMigrationServiceClient::ModifyEndpointCallable(const ModifyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyEndpointAsync(const ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyEndpoint(request), context);
    } );
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyEventSubscription(request), context);
    } );
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(const ModifyReplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationInstanceCallable(const ModifyReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationInstanceAsync(const ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReplicationInstance(request), context);
    } );
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupCallable(const ModifyReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupAsync(const ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReplicationSubnetGroup(request), context);
    } );
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationTaskCallable(const ModifyReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ModifyReplicationTaskAsync(const ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReplicationTask(request), context);
    } );
}

MoveReplicationTaskOutcome DatabaseMigrationServiceClient::MoveReplicationTask(const MoveReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MoveReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::MoveReplicationTaskCallable(const MoveReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MoveReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MoveReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::MoveReplicationTaskAsync(const MoveReplicationTaskRequest& request, const MoveReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MoveReplicationTask(request), context);
    } );
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(const RebootReplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootReplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootReplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::RebootReplicationInstanceCallable(const RebootReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RebootReplicationInstanceAsync(const RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootReplicationInstance(request), context);
    } );
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RefreshSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RefreshSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RefreshSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshSchemasOutcomeCallable DatabaseMigrationServiceClient::RefreshSchemasCallable(const RefreshSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RefreshSchemasAsync(const RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RefreshSchemas(request), context);
    } );
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReloadTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReloadTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReloadTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReloadTablesOutcomeCallable DatabaseMigrationServiceClient::ReloadTablesCallable(const ReloadTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReloadTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReloadTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::ReloadTablesAsync(const ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReloadTables(request), context);
    } );
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable DatabaseMigrationServiceClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromResource(request), context);
    } );
}

RunFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunFleetAdvisorLsaAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunFleetAdvisorLsaAnalysisOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "RunFleetAdvisorLsaAnalysis"));
}

RunFleetAdvisorLsaAnalysisOutcomeCallable DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysisCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< RunFleetAdvisorLsaAnalysisOutcome() > >(ALLOCATION_TAG, [this](){ return this->RunFleetAdvisorLsaAnalysis(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysisAsync(const RunFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, RunFleetAdvisorLsaAnalysis(), context);
    } );
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskCallable(const StartReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StartReplicationTaskAsync(const StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartReplicationTask(request), context);
    } );
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTaskAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTaskAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskAssessmentCallable(const StartReplicationTaskAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTaskAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentAsync(const StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartReplicationTaskAssessment(request), context);
    } );
}

StartReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun(const StartReplicationTaskAssessmentRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReplicationTaskAssessmentRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartReplicationTaskAssessmentRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRunCallable(const StartReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRunAsync(const StartReplicationTaskAssessmentRunRequest& request, const StartReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartReplicationTaskAssessmentRun(request), context);
    } );
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopReplicationTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopReplicationTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StopReplicationTaskCallable(const StopReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::StopReplicationTaskAsync(const StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopReplicationTask(request), context);
    } );
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestConnectionOutcomeCallable DatabaseMigrationServiceClient::TestConnectionCallable(const TestConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::TestConnectionAsync(const TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestConnection(request), context);
    } );
}

UpdateSubscriptionsToEventBridgeOutcome DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge(const UpdateSubscriptionsToEventBridgeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionsToEventBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionsToEventBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSubscriptionsToEventBridgeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionsToEventBridgeOutcomeCallable DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridgeCallable(const UpdateSubscriptionsToEventBridgeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionsToEventBridgeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriptionsToEventBridge(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridgeAsync(const UpdateSubscriptionsToEventBridgeRequest& request, const UpdateSubscriptionsToEventBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSubscriptionsToEventBridge(request), context);
    } );
}

