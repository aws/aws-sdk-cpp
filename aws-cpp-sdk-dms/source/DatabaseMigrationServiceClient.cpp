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

#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/DatabaseMigrationServiceEndpoint.h>
#include <aws/dms/DatabaseMigrationServiceErrorMarshaller.h>
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

static const char* SERVICE_NAME = "dms";
static const char* ALLOCATION_TAG = "DatabaseMigrationServiceClient";

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DatabaseMigrationServiceClient::~DatabaseMigrationServiceClient()
{
}

void DatabaseMigrationServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Database Migration Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DatabaseMigrationServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DatabaseMigrationServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddTagsToResourceOutcome DatabaseMigrationServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable DatabaseMigrationServiceClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientAddTagsToResourceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void DatabaseMigrationServiceClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ApplyPendingMaintenanceActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ApplyPendingMaintenanceActionOutcomeCallable DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyPendingMaintenanceActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyPendingMaintenanceAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientApplyPendingMaintenanceActionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplyPendingMaintenanceAction(request), context);
}

void DatabaseMigrationServiceClient::ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequest& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientApplyPendingMaintenanceActionAsyncHelper( this, request, handler, context ); } );
}

CancelReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun(const CancelReplicationTaskAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelReplicationTaskAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRunCallable(const CancelReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCancelReplicationTaskAssessmentRunAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CancelReplicationTaskAssessmentRunRequest& request, const CancelReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelReplicationTaskAssessmentRun(request), context);
}

void DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRunAsync(const CancelReplicationTaskAssessmentRunRequest& request, const CancelReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCancelReplicationTaskAssessmentRunAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable DatabaseMigrationServiceClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateEndpointAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpoint(request), context);
}

void DatabaseMigrationServiceClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::CreateEventSubscriptionCallable(const CreateEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateEventSubscriptionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventSubscription(request), context);
}

void DatabaseMigrationServiceClient::CreateEventSubscriptionAsync(const CreateEventSubscriptionRequest& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::CreateFleetAdvisorCollector(const CreateFleetAdvisorCollectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFleetAdvisorCollectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetAdvisorCollectorOutcomeCallable DatabaseMigrationServiceClient::CreateFleetAdvisorCollectorCallable(const CreateFleetAdvisorCollectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetAdvisorCollectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleetAdvisorCollector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateFleetAdvisorCollectorAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateFleetAdvisorCollectorRequest& request, const CreateFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFleetAdvisorCollector(request), context);
}

void DatabaseMigrationServiceClient::CreateFleetAdvisorCollectorAsync(const CreateFleetAdvisorCollectorRequest& request, const CreateFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateFleetAdvisorCollectorAsyncHelper( this, request, handler, context ); } );
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(const CreateReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateReplicationInstanceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReplicationInstance(request), context);
}

void DatabaseMigrationServiceClient::CreateReplicationInstanceAsync(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateReplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReplicationSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationSubnetGroupCallable(const CreateReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateReplicationSubnetGroupAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReplicationSubnetGroup(request), context);
}

void DatabaseMigrationServiceClient::CreateReplicationSubnetGroupAsync(const CreateReplicationSubnetGroupRequest& request, const CreateReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateReplicationSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::CreateReplicationTaskCallable(const CreateReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientCreateReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::CreateReplicationTaskAsync(const CreateReplicationTaskRequest& request, const CreateReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientCreateReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable DatabaseMigrationServiceClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteCertificateAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCertificate(request), context);
}

void DatabaseMigrationServiceClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteCertificateAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionOutcome DatabaseMigrationServiceClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable DatabaseMigrationServiceClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteConnectionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnection(request), context);
}

void DatabaseMigrationServiceClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable DatabaseMigrationServiceClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteEndpointAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void DatabaseMigrationServiceClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteEventSubscriptionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventSubscription(request), context);
}

void DatabaseMigrationServiceClient::DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequest& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector(const DeleteFleetAdvisorCollectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFleetAdvisorCollectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorCollectorOutcomeCallable DatabaseMigrationServiceClient::DeleteFleetAdvisorCollectorCallable(const DeleteFleetAdvisorCollectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetAdvisorCollectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetAdvisorCollector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteFleetAdvisorCollectorAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteFleetAdvisorCollectorRequest& request, const DeleteFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFleetAdvisorCollector(request), context);
}

void DatabaseMigrationServiceClient::DeleteFleetAdvisorCollectorAsync(const DeleteFleetAdvisorCollectorRequest& request, const DeleteFleetAdvisorCollectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteFleetAdvisorCollectorAsyncHelper( this, request, handler, context ); } );
}

DeleteFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases(const DeleteFleetAdvisorDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFleetAdvisorDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetAdvisorDatabasesOutcomeCallable DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabasesCallable(const DeleteFleetAdvisorDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetAdvisorDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetAdvisorDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteFleetAdvisorDatabasesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteFleetAdvisorDatabasesRequest& request, const DeleteFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFleetAdvisorDatabases(request), context);
}

void DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabasesAsync(const DeleteFleetAdvisorDatabasesRequest& request, const DeleteFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteFleetAdvisorDatabasesAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteReplicationInstanceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationInstance(request), context);
}

void DatabaseMigrationServiceClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteReplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReplicationSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupCallable(const DeleteReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteReplicationSubnetGroupAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationSubnetGroup(request), context);
}

void DatabaseMigrationServiceClient::DeleteReplicationSubnetGroupAsync(const DeleteReplicationSubnetGroupRequest& request, const DeleteReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteReplicationSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationTaskCallable(const DeleteReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAsync(const DeleteReplicationTaskRequest& request, const DeleteReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun(const DeleteReplicationTaskAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReplicationTaskAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRunCallable(const DeleteReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDeleteReplicationTaskAssessmentRunAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DeleteReplicationTaskAssessmentRunRequest& request, const DeleteReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationTaskAssessmentRun(request), context);
}

void DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRunAsync(const DeleteReplicationTaskAssessmentRunRequest& request, const DeleteReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDeleteReplicationTaskAssessmentRunAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAttributesOutcomeCallable DatabaseMigrationServiceClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeAccountAttributesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAttributes(request), context);
}

void DatabaseMigrationServiceClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeAccountAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicableIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments(const DescribeApplicableIndividualAssessmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicableIndividualAssessmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicableIndividualAssessmentsOutcomeCallable DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessmentsCallable(const DescribeApplicableIndividualAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicableIndividualAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplicableIndividualAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeApplicableIndividualAssessmentsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeApplicableIndividualAssessmentsRequest& request, const DescribeApplicableIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplicableIndividualAssessments(request), context);
}

void DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessmentsAsync(const DescribeApplicableIndividualAssessmentsRequest& request, const DescribeApplicableIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeApplicableIndividualAssessmentsAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificatesOutcomeCallable DatabaseMigrationServiceClient::DescribeCertificatesCallable(const DescribeCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeCertificatesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificates(request), context);
}

void DatabaseMigrationServiceClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeCertificatesAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionsOutcomeCallable DatabaseMigrationServiceClient::DescribeConnectionsCallable(const DescribeConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeConnectionsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnections(request), context);
}

void DatabaseMigrationServiceClient::DescribeConnectionsAsync(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeConnectionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointSettingsOutcome DatabaseMigrationServiceClient::DescribeEndpointSettings(const DescribeEndpointSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointSettingsOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointSettingsCallable(const DescribeEndpointSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEndpointSettingsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEndpointSettingsRequest& request, const DescribeEndpointSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpointSettings(request), context);
}

void DatabaseMigrationServiceClient::DescribeEndpointSettingsAsync(const DescribeEndpointSettingsRequest& request, const DescribeEndpointSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEndpointSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointTypesOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointTypesCallable(const DescribeEndpointTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEndpointTypesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpointTypes(request), context);
}

void DatabaseMigrationServiceClient::DescribeEndpointTypesAsync(const DescribeEndpointTypesRequest& request, const DescribeEndpointTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEndpointTypesAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable DatabaseMigrationServiceClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEndpointsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoints(request), context);
}

void DatabaseMigrationServiceClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEndpointsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventCategoriesOutcomeCallable DatabaseMigrationServiceClient::DescribeEventCategoriesCallable(const DescribeEventCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEventCategoriesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventCategories(request), context);
}

void DatabaseMigrationServiceClient::DescribeEventCategoriesAsync(const DescribeEventCategoriesRequest& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEventCategoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSubscriptionsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEventSubscriptionsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSubscriptions(request), context);
}

void DatabaseMigrationServiceClient::DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequest& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEventSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcomeCallable DatabaseMigrationServiceClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeEventsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void DatabaseMigrationServiceClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAdvisorCollectorsOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors(const DescribeFleetAdvisorCollectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAdvisorCollectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorCollectorsOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectorsCallable(const DescribeFleetAdvisorCollectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorCollectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorCollectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeFleetAdvisorCollectorsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeFleetAdvisorCollectorsRequest& request, const DescribeFleetAdvisorCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAdvisorCollectors(request), context);
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectorsAsync(const DescribeFleetAdvisorCollectorsRequest& request, const DescribeFleetAdvisorCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeFleetAdvisorCollectorsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases(const DescribeFleetAdvisorDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAdvisorDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorDatabasesOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabasesCallable(const DescribeFleetAdvisorDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeFleetAdvisorDatabasesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeFleetAdvisorDatabasesRequest& request, const DescribeFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAdvisorDatabases(request), context);
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabasesAsync(const DescribeFleetAdvisorDatabasesRequest& request, const DescribeFleetAdvisorDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeFleetAdvisorDatabasesAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis(const DescribeFleetAdvisorLsaAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAdvisorLsaAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorLsaAnalysisOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysisCallable(const DescribeFleetAdvisorLsaAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorLsaAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorLsaAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeFleetAdvisorLsaAnalysisAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeFleetAdvisorLsaAnalysisRequest& request, const DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAdvisorLsaAnalysis(request), context);
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysisAsync(const DescribeFleetAdvisorLsaAnalysisRequest& request, const DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeFleetAdvisorLsaAnalysisAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAdvisorSchemaObjectSummaryOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAdvisorSchemaObjectSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemaObjectSummaryOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummaryCallable(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorSchemaObjectSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorSchemaObjectSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeFleetAdvisorSchemaObjectSummaryAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeFleetAdvisorSchemaObjectSummaryRequest& request, const DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAdvisorSchemaObjectSummary(request), context);
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummaryAsync(const DescribeFleetAdvisorSchemaObjectSummaryRequest& request, const DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeFleetAdvisorSchemaObjectSummaryAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAdvisorSchemasOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas(const DescribeFleetAdvisorSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAdvisorSchemasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAdvisorSchemasOutcomeCallable DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemasCallable(const DescribeFleetAdvisorSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAdvisorSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAdvisorSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeFleetAdvisorSchemasAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeFleetAdvisorSchemasRequest& request, const DescribeFleetAdvisorSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAdvisorSchemas(request), context);
}

void DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemasAsync(const DescribeFleetAdvisorSchemasRequest& request, const DescribeFleetAdvisorSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeFleetAdvisorSchemasAsyncHelper( this, request, handler, context ); } );
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrderableReplicationInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrderableReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesCallable(const DescribeOrderableReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrderableReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrderableReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeOrderableReplicationInstancesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrderableReplicationInstances(request), context);
}

void DatabaseMigrationServiceClient::DescribeOrderableReplicationInstancesAsync(const DescribeOrderableReplicationInstancesRequest& request, const DescribeOrderableReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeOrderableReplicationInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePendingMaintenanceActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePendingMaintenanceActionsOutcomeCallable DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePendingMaintenanceActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePendingMaintenanceActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribePendingMaintenanceActionsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePendingMaintenanceActions(request), context);
}

void DatabaseMigrationServiceClient::DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribePendingMaintenanceActionsAsyncHelper( this, request, handler, context ); } );
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRefreshSchemasStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRefreshSchemasStatusOutcomeCallable DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusCallable(const DescribeRefreshSchemasStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRefreshSchemasStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRefreshSchemasStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeRefreshSchemasStatusAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRefreshSchemasStatus(request), context);
}

void DatabaseMigrationServiceClient::DescribeRefreshSchemasStatusAsync(const DescribeRefreshSchemasStatusRequest& request, const DescribeRefreshSchemasStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeRefreshSchemasStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationInstanceTaskLogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstanceTaskLogsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsCallable(const DescribeReplicationInstanceTaskLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstanceTaskLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstanceTaskLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationInstanceTaskLogsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationInstanceTaskLogs(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogsAsync(const DescribeReplicationInstanceTaskLogsRequest& request, const DescribeReplicationInstanceTaskLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationInstanceTaskLogsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationInstancesOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationInstancesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationInstances(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationSubnetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationSubnetGroupsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsCallable(const DescribeReplicationSubnetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationSubnetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationSubnetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationSubnetGroupsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationSubnetGroups(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationSubnetGroupsAsync(const DescribeReplicationSubnetGroupsRequest& request, const DescribeReplicationSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationSubnetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationTaskAssessmentResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentResultsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsCallable(const DescribeReplicationTaskAssessmentResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskAssessmentResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskAssessmentResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationTaskAssessmentResultsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationTaskAssessmentResults(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResultsAsync(const DescribeReplicationTaskAssessmentResultsRequest& request, const DescribeReplicationTaskAssessmentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationTaskAssessmentResultsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationTaskAssessmentRunsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns(const DescribeReplicationTaskAssessmentRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationTaskAssessmentRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskAssessmentRunsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRunsCallable(const DescribeReplicationTaskAssessmentRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskAssessmentRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskAssessmentRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationTaskAssessmentRunsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationTaskAssessmentRunsRequest& request, const DescribeReplicationTaskAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationTaskAssessmentRuns(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRunsAsync(const DescribeReplicationTaskAssessmentRunsRequest& request, const DescribeReplicationTaskAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationTaskAssessmentRunsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationTaskIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments(const DescribeReplicationTaskIndividualAssessmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationTaskIndividualAssessmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTaskIndividualAssessmentsOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessmentsCallable(const DescribeReplicationTaskIndividualAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTaskIndividualAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTaskIndividualAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationTaskIndividualAssessmentsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationTaskIndividualAssessmentsRequest& request, const DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationTaskIndividualAssessments(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessmentsAsync(const DescribeReplicationTaskIndividualAssessmentsRequest& request, const DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationTaskIndividualAssessmentsAsyncHelper( this, request, handler, context ); } );
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(const DescribeReplicationTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplicationTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationTasksOutcomeCallable DatabaseMigrationServiceClient::DescribeReplicationTasksCallable(const DescribeReplicationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeReplicationTasksAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplicationTasks(request), context);
}

void DatabaseMigrationServiceClient::DescribeReplicationTasksAsync(const DescribeReplicationTasksRequest& request, const DescribeReplicationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeReplicationTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSchemasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSchemasOutcomeCallable DatabaseMigrationServiceClient::DescribeSchemasCallable(const DescribeSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeSchemasAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSchemas(request), context);
}

void DatabaseMigrationServiceClient::DescribeSchemasAsync(const DescribeSchemasRequest& request, const DescribeSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeSchemasAsyncHelper( this, request, handler, context ); } );
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(const DescribeTableStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTableStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableStatisticsOutcomeCallable DatabaseMigrationServiceClient::DescribeTableStatisticsCallable(const DescribeTableStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientDescribeTableStatisticsAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTableStatistics(request), context);
}

void DatabaseMigrationServiceClient::DescribeTableStatisticsAsync(const DescribeTableStatisticsRequest& request, const DescribeTableStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientDescribeTableStatisticsAsyncHelper( this, request, handler, context ); } );
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateOutcomeCallable DatabaseMigrationServiceClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientImportCertificateAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportCertificate(request), context);
}

void DatabaseMigrationServiceClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientImportCertificateAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DatabaseMigrationServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientListTagsForResourceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void DatabaseMigrationServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEndpointOutcomeCallable DatabaseMigrationServiceClient::ModifyEndpointCallable(const ModifyEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientModifyEndpointAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyEndpoint(request), context);
}

void DatabaseMigrationServiceClient::ModifyEndpointAsync(const ModifyEndpointRequest& request, const ModifyEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientModifyEndpointAsyncHelper( this, request, handler, context ); } );
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyEventSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyEventSubscriptionOutcomeCallable DatabaseMigrationServiceClient::ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyEventSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyEventSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientModifyEventSubscriptionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyEventSubscription(request), context);
}

void DatabaseMigrationServiceClient::ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequest& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientModifyEventSubscriptionAsyncHelper( this, request, handler, context ); } );
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(const ModifyReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyReplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationInstanceCallable(const ModifyReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientModifyReplicationInstanceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyReplicationInstance(request), context);
}

void DatabaseMigrationServiceClient::ModifyReplicationInstanceAsync(const ModifyReplicationInstanceRequest& request, const ModifyReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientModifyReplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyReplicationSubnetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationSubnetGroupOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupCallable(const ModifyReplicationSubnetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationSubnetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationSubnetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientModifyReplicationSubnetGroupAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyReplicationSubnetGroup(request), context);
}

void DatabaseMigrationServiceClient::ModifyReplicationSubnetGroupAsync(const ModifyReplicationSubnetGroupRequest& request, const ModifyReplicationSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientModifyReplicationSubnetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::ModifyReplicationTaskCallable(const ModifyReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientModifyReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::ModifyReplicationTaskAsync(const ModifyReplicationTaskRequest& request, const ModifyReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientModifyReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

MoveReplicationTaskOutcome DatabaseMigrationServiceClient::MoveReplicationTask(const MoveReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MoveReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MoveReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::MoveReplicationTaskCallable(const MoveReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MoveReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MoveReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientMoveReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const MoveReplicationTaskRequest& request, const MoveReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MoveReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::MoveReplicationTaskAsync(const MoveReplicationTaskRequest& request, const MoveReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientMoveReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(const RebootReplicationInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootReplicationInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootReplicationInstanceOutcomeCallable DatabaseMigrationServiceClient::RebootReplicationInstanceCallable(const RebootReplicationInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootReplicationInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootReplicationInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientRebootReplicationInstanceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootReplicationInstance(request), context);
}

void DatabaseMigrationServiceClient::RebootReplicationInstanceAsync(const RebootReplicationInstanceRequest& request, const RebootReplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientRebootReplicationInstanceAsyncHelper( this, request, handler, context ); } );
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RefreshSchemasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshSchemasOutcomeCallable DatabaseMigrationServiceClient::RefreshSchemasCallable(const RefreshSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientRefreshSchemasAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RefreshSchemas(request), context);
}

void DatabaseMigrationServiceClient::RefreshSchemasAsync(const RefreshSchemasRequest& request, const RefreshSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientRefreshSchemasAsyncHelper( this, request, handler, context ); } );
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReloadTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReloadTablesOutcomeCallable DatabaseMigrationServiceClient::ReloadTablesCallable(const ReloadTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReloadTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReloadTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientReloadTablesAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReloadTables(request), context);
}

void DatabaseMigrationServiceClient::ReloadTablesAsync(const ReloadTablesRequest& request, const ReloadTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientReloadTablesAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable DatabaseMigrationServiceClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientRemoveTagsFromResourceAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void DatabaseMigrationServiceClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

RunFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return RunFleetAdvisorLsaAnalysisOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "RunFleetAdvisorLsaAnalysis"));
}

RunFleetAdvisorLsaAnalysisOutcomeCallable DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysisCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< RunFleetAdvisorLsaAnalysisOutcome() > >(ALLOCATION_TAG, [this](){ return this->RunFleetAdvisorLsaAnalysis(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientRunFleetAdvisorLsaAnalysisAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const RunFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->RunFleetAdvisorLsaAnalysis(), context);
}

void DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysisAsync(const RunFleetAdvisorLsaAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ DatabaseMigrationServiceClientRunFleetAdvisorLsaAnalysisAsyncHelper( this, handler, context ); } );
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskCallable(const StartReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientStartReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::StartReplicationTaskAsync(const StartReplicationTaskRequest& request, const StartReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientStartReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReplicationTaskAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskAssessmentCallable(const StartReplicationTaskAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTaskAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientStartReplicationTaskAssessmentAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReplicationTaskAssessment(request), context);
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentAsync(const StartReplicationTaskAssessmentRequest& request, const StartReplicationTaskAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientStartReplicationTaskAssessmentAsyncHelper( this, request, handler, context ); } );
}

StartReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun(const StartReplicationTaskAssessmentRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReplicationTaskAssessmentRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationTaskAssessmentRunOutcomeCallable DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRunCallable(const StartReplicationTaskAssessmentRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationTaskAssessmentRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplicationTaskAssessmentRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientStartReplicationTaskAssessmentRunAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const StartReplicationTaskAssessmentRunRequest& request, const StartReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReplicationTaskAssessmentRun(request), context);
}

void DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRunAsync(const StartReplicationTaskAssessmentRunRequest& request, const StartReplicationTaskAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientStartReplicationTaskAssessmentRunAsyncHelper( this, request, handler, context ); } );
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopReplicationTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopReplicationTaskOutcomeCallable DatabaseMigrationServiceClient::StopReplicationTaskCallable(const StopReplicationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopReplicationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopReplicationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientStopReplicationTaskAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopReplicationTask(request), context);
}

void DatabaseMigrationServiceClient::StopReplicationTaskAsync(const StopReplicationTaskRequest& request, const StopReplicationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientStopReplicationTaskAsyncHelper( this, request, handler, context ); } );
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestConnectionOutcomeCallable DatabaseMigrationServiceClient::TestConnectionCallable(const TestConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientTestConnectionAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestConnection(request), context);
}

void DatabaseMigrationServiceClient::TestConnectionAsync(const TestConnectionRequest& request, const TestConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientTestConnectionAsyncHelper( this, request, handler, context ); } );
}

UpdateSubscriptionsToEventBridgeOutcome DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge(const UpdateSubscriptionsToEventBridgeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSubscriptionsToEventBridgeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionsToEventBridgeOutcomeCallable DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridgeCallable(const UpdateSubscriptionsToEventBridgeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionsToEventBridgeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriptionsToEventBridge(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DatabaseMigrationServiceClientUpdateSubscriptionsToEventBridgeAsyncHelper(DatabaseMigrationServiceClient const * const clientThis, const UpdateSubscriptionsToEventBridgeRequest& request, const UpdateSubscriptionsToEventBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSubscriptionsToEventBridge(request), context);
}

void DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridgeAsync(const UpdateSubscriptionsToEventBridgeRequest& request, const UpdateSubscriptionsToEventBridgeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DatabaseMigrationServiceClientUpdateSubscriptionsToEventBridgeAsyncHelper( this, request, handler, context ); } );
}

