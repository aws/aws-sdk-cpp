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

#include <aws/glue/GlueClient.h>
#include <aws/glue/GlueEndpoint.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/model/BatchCreatePartitionRequest.h>
#include <aws/glue/model/BatchDeleteConnectionRequest.h>
#include <aws/glue/model/BatchDeletePartitionRequest.h>
#include <aws/glue/model/BatchDeleteTableRequest.h>
#include <aws/glue/model/BatchDeleteTableVersionRequest.h>
#include <aws/glue/model/BatchGetBlueprintsRequest.h>
#include <aws/glue/model/BatchGetCrawlersRequest.h>
#include <aws/glue/model/BatchGetCustomEntityTypesRequest.h>
#include <aws/glue/model/BatchGetDevEndpointsRequest.h>
#include <aws/glue/model/BatchGetJobsRequest.h>
#include <aws/glue/model/BatchGetPartitionRequest.h>
#include <aws/glue/model/BatchGetTriggersRequest.h>
#include <aws/glue/model/BatchGetWorkflowsRequest.h>
#include <aws/glue/model/BatchStopJobRunRequest.h>
#include <aws/glue/model/BatchUpdatePartitionRequest.h>
#include <aws/glue/model/CancelMLTaskRunRequest.h>
#include <aws/glue/model/CancelStatementRequest.h>
#include <aws/glue/model/CheckSchemaVersionValidityRequest.h>
#include <aws/glue/model/CreateBlueprintRequest.h>
#include <aws/glue/model/CreateClassifierRequest.h>
#include <aws/glue/model/CreateConnectionRequest.h>
#include <aws/glue/model/CreateCrawlerRequest.h>
#include <aws/glue/model/CreateCustomEntityTypeRequest.h>
#include <aws/glue/model/CreateDatabaseRequest.h>
#include <aws/glue/model/CreateDevEndpointRequest.h>
#include <aws/glue/model/CreateJobRequest.h>
#include <aws/glue/model/CreateMLTransformRequest.h>
#include <aws/glue/model/CreatePartitionRequest.h>
#include <aws/glue/model/CreatePartitionIndexRequest.h>
#include <aws/glue/model/CreateRegistryRequest.h>
#include <aws/glue/model/CreateSchemaRequest.h>
#include <aws/glue/model/CreateScriptRequest.h>
#include <aws/glue/model/CreateSecurityConfigurationRequest.h>
#include <aws/glue/model/CreateSessionRequest.h>
#include <aws/glue/model/CreateTableRequest.h>
#include <aws/glue/model/CreateTriggerRequest.h>
#include <aws/glue/model/CreateUserDefinedFunctionRequest.h>
#include <aws/glue/model/CreateWorkflowRequest.h>
#include <aws/glue/model/DeleteBlueprintRequest.h>
#include <aws/glue/model/DeleteClassifierRequest.h>
#include <aws/glue/model/DeleteColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/DeleteColumnStatisticsForTableRequest.h>
#include <aws/glue/model/DeleteConnectionRequest.h>
#include <aws/glue/model/DeleteCrawlerRequest.h>
#include <aws/glue/model/DeleteCustomEntityTypeRequest.h>
#include <aws/glue/model/DeleteDatabaseRequest.h>
#include <aws/glue/model/DeleteDevEndpointRequest.h>
#include <aws/glue/model/DeleteJobRequest.h>
#include <aws/glue/model/DeleteMLTransformRequest.h>
#include <aws/glue/model/DeletePartitionRequest.h>
#include <aws/glue/model/DeletePartitionIndexRequest.h>
#include <aws/glue/model/DeleteRegistryRequest.h>
#include <aws/glue/model/DeleteResourcePolicyRequest.h>
#include <aws/glue/model/DeleteSchemaRequest.h>
#include <aws/glue/model/DeleteSchemaVersionsRequest.h>
#include <aws/glue/model/DeleteSecurityConfigurationRequest.h>
#include <aws/glue/model/DeleteSessionRequest.h>
#include <aws/glue/model/DeleteTableRequest.h>
#include <aws/glue/model/DeleteTableVersionRequest.h>
#include <aws/glue/model/DeleteTriggerRequest.h>
#include <aws/glue/model/DeleteUserDefinedFunctionRequest.h>
#include <aws/glue/model/DeleteWorkflowRequest.h>
#include <aws/glue/model/GetBlueprintRequest.h>
#include <aws/glue/model/GetBlueprintRunRequest.h>
#include <aws/glue/model/GetBlueprintRunsRequest.h>
#include <aws/glue/model/GetCatalogImportStatusRequest.h>
#include <aws/glue/model/GetClassifierRequest.h>
#include <aws/glue/model/GetClassifiersRequest.h>
#include <aws/glue/model/GetColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/GetColumnStatisticsForTableRequest.h>
#include <aws/glue/model/GetConnectionRequest.h>
#include <aws/glue/model/GetConnectionsRequest.h>
#include <aws/glue/model/GetCrawlerRequest.h>
#include <aws/glue/model/GetCrawlerMetricsRequest.h>
#include <aws/glue/model/GetCrawlersRequest.h>
#include <aws/glue/model/GetCustomEntityTypeRequest.h>
#include <aws/glue/model/GetDataCatalogEncryptionSettingsRequest.h>
#include <aws/glue/model/GetDatabaseRequest.h>
#include <aws/glue/model/GetDatabasesRequest.h>
#include <aws/glue/model/GetDataflowGraphRequest.h>
#include <aws/glue/model/GetDevEndpointRequest.h>
#include <aws/glue/model/GetDevEndpointsRequest.h>
#include <aws/glue/model/GetJobRequest.h>
#include <aws/glue/model/GetJobBookmarkRequest.h>
#include <aws/glue/model/GetJobRunRequest.h>
#include <aws/glue/model/GetJobRunsRequest.h>
#include <aws/glue/model/GetJobsRequest.h>
#include <aws/glue/model/GetMLTaskRunRequest.h>
#include <aws/glue/model/GetMLTaskRunsRequest.h>
#include <aws/glue/model/GetMLTransformRequest.h>
#include <aws/glue/model/GetMLTransformsRequest.h>
#include <aws/glue/model/GetMappingRequest.h>
#include <aws/glue/model/GetPartitionRequest.h>
#include <aws/glue/model/GetPartitionIndexesRequest.h>
#include <aws/glue/model/GetPartitionsRequest.h>
#include <aws/glue/model/GetPlanRequest.h>
#include <aws/glue/model/GetRegistryRequest.h>
#include <aws/glue/model/GetResourcePoliciesRequest.h>
#include <aws/glue/model/GetResourcePolicyRequest.h>
#include <aws/glue/model/GetSchemaRequest.h>
#include <aws/glue/model/GetSchemaByDefinitionRequest.h>
#include <aws/glue/model/GetSchemaVersionRequest.h>
#include <aws/glue/model/GetSchemaVersionsDiffRequest.h>
#include <aws/glue/model/GetSecurityConfigurationRequest.h>
#include <aws/glue/model/GetSecurityConfigurationsRequest.h>
#include <aws/glue/model/GetSessionRequest.h>
#include <aws/glue/model/GetStatementRequest.h>
#include <aws/glue/model/GetTableRequest.h>
#include <aws/glue/model/GetTableVersionRequest.h>
#include <aws/glue/model/GetTableVersionsRequest.h>
#include <aws/glue/model/GetTablesRequest.h>
#include <aws/glue/model/GetTagsRequest.h>
#include <aws/glue/model/GetTriggerRequest.h>
#include <aws/glue/model/GetTriggersRequest.h>
#include <aws/glue/model/GetUnfilteredPartitionMetadataRequest.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataRequest.h>
#include <aws/glue/model/GetUnfilteredTableMetadataRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionsRequest.h>
#include <aws/glue/model/GetWorkflowRequest.h>
#include <aws/glue/model/GetWorkflowRunRequest.h>
#include <aws/glue/model/GetWorkflowRunPropertiesRequest.h>
#include <aws/glue/model/GetWorkflowRunsRequest.h>
#include <aws/glue/model/ImportCatalogToGlueRequest.h>
#include <aws/glue/model/ListBlueprintsRequest.h>
#include <aws/glue/model/ListCrawlersRequest.h>
#include <aws/glue/model/ListCrawlsRequest.h>
#include <aws/glue/model/ListCustomEntityTypesRequest.h>
#include <aws/glue/model/ListDevEndpointsRequest.h>
#include <aws/glue/model/ListJobsRequest.h>
#include <aws/glue/model/ListMLTransformsRequest.h>
#include <aws/glue/model/ListRegistriesRequest.h>
#include <aws/glue/model/ListSchemaVersionsRequest.h>
#include <aws/glue/model/ListSchemasRequest.h>
#include <aws/glue/model/ListSessionsRequest.h>
#include <aws/glue/model/ListStatementsRequest.h>
#include <aws/glue/model/ListTriggersRequest.h>
#include <aws/glue/model/ListWorkflowsRequest.h>
#include <aws/glue/model/PutDataCatalogEncryptionSettingsRequest.h>
#include <aws/glue/model/PutResourcePolicyRequest.h>
#include <aws/glue/model/PutSchemaVersionMetadataRequest.h>
#include <aws/glue/model/PutWorkflowRunPropertiesRequest.h>
#include <aws/glue/model/QuerySchemaVersionMetadataRequest.h>
#include <aws/glue/model/RegisterSchemaVersionRequest.h>
#include <aws/glue/model/RemoveSchemaVersionMetadataRequest.h>
#include <aws/glue/model/ResetJobBookmarkRequest.h>
#include <aws/glue/model/ResumeWorkflowRunRequest.h>
#include <aws/glue/model/RunStatementRequest.h>
#include <aws/glue/model/SearchTablesRequest.h>
#include <aws/glue/model/StartBlueprintRunRequest.h>
#include <aws/glue/model/StartCrawlerRequest.h>
#include <aws/glue/model/StartCrawlerScheduleRequest.h>
#include <aws/glue/model/StartExportLabelsTaskRunRequest.h>
#include <aws/glue/model/StartImportLabelsTaskRunRequest.h>
#include <aws/glue/model/StartJobRunRequest.h>
#include <aws/glue/model/StartMLEvaluationTaskRunRequest.h>
#include <aws/glue/model/StartMLLabelingSetGenerationTaskRunRequest.h>
#include <aws/glue/model/StartTriggerRequest.h>
#include <aws/glue/model/StartWorkflowRunRequest.h>
#include <aws/glue/model/StopCrawlerRequest.h>
#include <aws/glue/model/StopCrawlerScheduleRequest.h>
#include <aws/glue/model/StopSessionRequest.h>
#include <aws/glue/model/StopTriggerRequest.h>
#include <aws/glue/model/StopWorkflowRunRequest.h>
#include <aws/glue/model/TagResourceRequest.h>
#include <aws/glue/model/UntagResourceRequest.h>
#include <aws/glue/model/UpdateBlueprintRequest.h>
#include <aws/glue/model/UpdateClassifierRequest.h>
#include <aws/glue/model/UpdateColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/UpdateColumnStatisticsForTableRequest.h>
#include <aws/glue/model/UpdateConnectionRequest.h>
#include <aws/glue/model/UpdateCrawlerRequest.h>
#include <aws/glue/model/UpdateCrawlerScheduleRequest.h>
#include <aws/glue/model/UpdateDatabaseRequest.h>
#include <aws/glue/model/UpdateDevEndpointRequest.h>
#include <aws/glue/model/UpdateJobRequest.h>
#include <aws/glue/model/UpdateMLTransformRequest.h>
#include <aws/glue/model/UpdatePartitionRequest.h>
#include <aws/glue/model/UpdateRegistryRequest.h>
#include <aws/glue/model/UpdateSchemaRequest.h>
#include <aws/glue/model/UpdateTableRequest.h>
#include <aws/glue/model/UpdateTriggerRequest.h>
#include <aws/glue/model/UpdateUserDefinedFunctionRequest.h>
#include <aws/glue/model/UpdateWorkflowRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "glue";
static const char* ALLOCATION_TAG = "GlueClient";

GlueClient::GlueClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::GlueClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::GlueClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueClient::~GlueClient()
{
}

void GlueClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Glue");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GlueEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GlueClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchCreatePartitionOutcome GlueClient::BatchCreatePartition(const BatchCreatePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchCreatePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreatePartitionOutcomeCallable GlueClient::BatchCreatePartitionCallable(const BatchCreatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchCreatePartitionAsyncHelper(GlueClient const * const clientThis, const BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchCreatePartition(request), context);
}

void GlueClient::BatchCreatePartitionAsync(const BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchCreatePartitionAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteConnectionOutcome GlueClient::BatchDeleteConnection(const BatchDeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteConnectionOutcomeCallable GlueClient::BatchDeleteConnectionCallable(const BatchDeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchDeleteConnectionAsyncHelper(GlueClient const * const clientThis, const BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteConnection(request), context);
}

void GlueClient::BatchDeleteConnectionAsync(const BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

BatchDeletePartitionOutcome GlueClient::BatchDeletePartition(const BatchDeletePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeletePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeletePartitionOutcomeCallable GlueClient::BatchDeletePartitionCallable(const BatchDeletePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeletePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeletePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchDeletePartitionAsyncHelper(GlueClient const * const clientThis, const BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeletePartition(request), context);
}

void GlueClient::BatchDeletePartitionAsync(const BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchDeletePartitionAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteTableOutcome GlueClient::BatchDeleteTable(const BatchDeleteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteTableOutcomeCallable GlueClient::BatchDeleteTableCallable(const BatchDeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchDeleteTableAsyncHelper(GlueClient const * const clientThis, const BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteTable(request), context);
}

void GlueClient::BatchDeleteTableAsync(const BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchDeleteTableAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteTableVersionOutcome GlueClient::BatchDeleteTableVersion(const BatchDeleteTableVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteTableVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteTableVersionOutcomeCallable GlueClient::BatchDeleteTableVersionCallable(const BatchDeleteTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchDeleteTableVersionAsyncHelper(GlueClient const * const clientThis, const BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteTableVersion(request), context);
}

void GlueClient::BatchDeleteTableVersionAsync(const BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchDeleteTableVersionAsyncHelper( this, request, handler, context ); } );
}

BatchGetBlueprintsOutcome GlueClient::BatchGetBlueprints(const BatchGetBlueprintsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetBlueprintsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetBlueprintsOutcomeCallable GlueClient::BatchGetBlueprintsCallable(const BatchGetBlueprintsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetBlueprintsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetBlueprints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetBlueprintsAsyncHelper(GlueClient const * const clientThis, const BatchGetBlueprintsRequest& request, const BatchGetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetBlueprints(request), context);
}

void GlueClient::BatchGetBlueprintsAsync(const BatchGetBlueprintsRequest& request, const BatchGetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetBlueprintsAsyncHelper( this, request, handler, context ); } );
}

BatchGetCrawlersOutcome GlueClient::BatchGetCrawlers(const BatchGetCrawlersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetCrawlersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCrawlersOutcomeCallable GlueClient::BatchGetCrawlersCallable(const BatchGetCrawlersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCrawlersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetCrawlers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetCrawlersAsyncHelper(GlueClient const * const clientThis, const BatchGetCrawlersRequest& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetCrawlers(request), context);
}

void GlueClient::BatchGetCrawlersAsync(const BatchGetCrawlersRequest& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetCrawlersAsyncHelper( this, request, handler, context ); } );
}

BatchGetCustomEntityTypesOutcome GlueClient::BatchGetCustomEntityTypes(const BatchGetCustomEntityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetCustomEntityTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCustomEntityTypesOutcomeCallable GlueClient::BatchGetCustomEntityTypesCallable(const BatchGetCustomEntityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCustomEntityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetCustomEntityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetCustomEntityTypesAsyncHelper(GlueClient const * const clientThis, const BatchGetCustomEntityTypesRequest& request, const BatchGetCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetCustomEntityTypes(request), context);
}

void GlueClient::BatchGetCustomEntityTypesAsync(const BatchGetCustomEntityTypesRequest& request, const BatchGetCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetCustomEntityTypesAsyncHelper( this, request, handler, context ); } );
}

BatchGetDevEndpointsOutcome GlueClient::BatchGetDevEndpoints(const BatchGetDevEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetDevEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDevEndpointsOutcomeCallable GlueClient::BatchGetDevEndpointsCallable(const BatchGetDevEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDevEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDevEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetDevEndpointsAsyncHelper(GlueClient const * const clientThis, const BatchGetDevEndpointsRequest& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDevEndpoints(request), context);
}

void GlueClient::BatchGetDevEndpointsAsync(const BatchGetDevEndpointsRequest& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetDevEndpointsAsyncHelper( this, request, handler, context ); } );
}

BatchGetJobsOutcome GlueClient::BatchGetJobs(const BatchGetJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetJobsOutcomeCallable GlueClient::BatchGetJobsCallable(const BatchGetJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetJobsAsyncHelper(GlueClient const * const clientThis, const BatchGetJobsRequest& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetJobs(request), context);
}

void GlueClient::BatchGetJobsAsync(const BatchGetJobsRequest& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetJobsAsyncHelper( this, request, handler, context ); } );
}

BatchGetPartitionOutcome GlueClient::BatchGetPartition(const BatchGetPartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetPartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetPartitionOutcomeCallable GlueClient::BatchGetPartitionCallable(const BatchGetPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetPartitionAsyncHelper(GlueClient const * const clientThis, const BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetPartition(request), context);
}

void GlueClient::BatchGetPartitionAsync(const BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetPartitionAsyncHelper( this, request, handler, context ); } );
}

BatchGetTriggersOutcome GlueClient::BatchGetTriggers(const BatchGetTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetTriggersOutcomeCallable GlueClient::BatchGetTriggersCallable(const BatchGetTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetTriggersAsyncHelper(GlueClient const * const clientThis, const BatchGetTriggersRequest& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetTriggers(request), context);
}

void GlueClient::BatchGetTriggersAsync(const BatchGetTriggersRequest& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetTriggersAsyncHelper( this, request, handler, context ); } );
}

BatchGetWorkflowsOutcome GlueClient::BatchGetWorkflows(const BatchGetWorkflowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetWorkflowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetWorkflowsOutcomeCallable GlueClient::BatchGetWorkflowsCallable(const BatchGetWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchGetWorkflowsAsyncHelper(GlueClient const * const clientThis, const BatchGetWorkflowsRequest& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetWorkflows(request), context);
}

void GlueClient::BatchGetWorkflowsAsync(const BatchGetWorkflowsRequest& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchGetWorkflowsAsyncHelper( this, request, handler, context ); } );
}

BatchStopJobRunOutcome GlueClient::BatchStopJobRun(const BatchStopJobRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchStopJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchStopJobRunOutcomeCallable GlueClient::BatchStopJobRunCallable(const BatchStopJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStopJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStopJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchStopJobRunAsyncHelper(GlueClient const * const clientThis, const BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchStopJobRun(request), context);
}

void GlueClient::BatchStopJobRunAsync(const BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchStopJobRunAsyncHelper( this, request, handler, context ); } );
}

BatchUpdatePartitionOutcome GlueClient::BatchUpdatePartition(const BatchUpdatePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchUpdatePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdatePartitionOutcomeCallable GlueClient::BatchUpdatePartitionCallable(const BatchUpdatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientBatchUpdatePartitionAsyncHelper(GlueClient const * const clientThis, const BatchUpdatePartitionRequest& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchUpdatePartition(request), context);
}

void GlueClient::BatchUpdatePartitionAsync(const BatchUpdatePartitionRequest& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientBatchUpdatePartitionAsyncHelper( this, request, handler, context ); } );
}

CancelMLTaskRunOutcome GlueClient::CancelMLTaskRun(const CancelMLTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelMLTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelMLTaskRunOutcomeCallable GlueClient::CancelMLTaskRunCallable(const CancelMLTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMLTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMLTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCancelMLTaskRunAsyncHelper(GlueClient const * const clientThis, const CancelMLTaskRunRequest& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelMLTaskRun(request), context);
}

void GlueClient::CancelMLTaskRunAsync(const CancelMLTaskRunRequest& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCancelMLTaskRunAsyncHelper( this, request, handler, context ); } );
}

CancelStatementOutcome GlueClient::CancelStatement(const CancelStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStatementOutcomeCallable GlueClient::CancelStatementCallable(const CancelStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCancelStatementAsyncHelper(GlueClient const * const clientThis, const CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelStatement(request), context);
}

void GlueClient::CancelStatementAsync(const CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCancelStatementAsyncHelper( this, request, handler, context ); } );
}

CheckSchemaVersionValidityOutcome GlueClient::CheckSchemaVersionValidity(const CheckSchemaVersionValidityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckSchemaVersionValidityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckSchemaVersionValidityOutcomeCallable GlueClient::CheckSchemaVersionValidityCallable(const CheckSchemaVersionValidityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckSchemaVersionValidityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckSchemaVersionValidity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCheckSchemaVersionValidityAsyncHelper(GlueClient const * const clientThis, const CheckSchemaVersionValidityRequest& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckSchemaVersionValidity(request), context);
}

void GlueClient::CheckSchemaVersionValidityAsync(const CheckSchemaVersionValidityRequest& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCheckSchemaVersionValidityAsyncHelper( this, request, handler, context ); } );
}

CreateBlueprintOutcome GlueClient::CreateBlueprint(const CreateBlueprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBlueprintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBlueprintOutcomeCallable GlueClient::CreateBlueprintCallable(const CreateBlueprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBlueprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBlueprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateBlueprintAsyncHelper(GlueClient const * const clientThis, const CreateBlueprintRequest& request, const CreateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBlueprint(request), context);
}

void GlueClient::CreateBlueprintAsync(const CreateBlueprintRequest& request, const CreateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateBlueprintAsyncHelper( this, request, handler, context ); } );
}

CreateClassifierOutcome GlueClient::CreateClassifier(const CreateClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClassifierOutcomeCallable GlueClient::CreateClassifierCallable(const CreateClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateClassifierAsyncHelper(GlueClient const * const clientThis, const CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateClassifier(request), context);
}

void GlueClient::CreateClassifierAsync(const CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateClassifierAsyncHelper( this, request, handler, context ); } );
}

CreateConnectionOutcome GlueClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable GlueClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateConnectionAsyncHelper(GlueClient const * const clientThis, const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnection(request), context);
}

void GlueClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateConnectionAsyncHelper( this, request, handler, context ); } );
}

CreateCrawlerOutcome GlueClient::CreateCrawler(const CreateCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCrawlerOutcomeCallable GlueClient::CreateCrawlerCallable(const CreateCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateCrawlerAsyncHelper(GlueClient const * const clientThis, const CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCrawler(request), context);
}

void GlueClient::CreateCrawlerAsync(const CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateCrawlerAsyncHelper( this, request, handler, context ); } );
}

CreateCustomEntityTypeOutcome GlueClient::CreateCustomEntityType(const CreateCustomEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomEntityTypeOutcomeCallable GlueClient::CreateCustomEntityTypeCallable(const CreateCustomEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateCustomEntityTypeAsyncHelper(GlueClient const * const clientThis, const CreateCustomEntityTypeRequest& request, const CreateCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomEntityType(request), context);
}

void GlueClient::CreateCustomEntityTypeAsync(const CreateCustomEntityTypeRequest& request, const CreateCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateCustomEntityTypeAsyncHelper( this, request, handler, context ); } );
}

CreateDatabaseOutcome GlueClient::CreateDatabase(const CreateDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatabaseOutcomeCallable GlueClient::CreateDatabaseCallable(const CreateDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateDatabaseAsyncHelper(GlueClient const * const clientThis, const CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDatabase(request), context);
}

void GlueClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateDatabaseAsyncHelper( this, request, handler, context ); } );
}

CreateDevEndpointOutcome GlueClient::CreateDevEndpoint(const CreateDevEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDevEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDevEndpointOutcomeCallable GlueClient::CreateDevEndpointCallable(const CreateDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateDevEndpointAsyncHelper(GlueClient const * const clientThis, const CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDevEndpoint(request), context);
}

void GlueClient::CreateDevEndpointAsync(const CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateDevEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateJobOutcome GlueClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable GlueClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateJobAsyncHelper(GlueClient const * const clientThis, const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJob(request), context);
}

void GlueClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateJobAsyncHelper( this, request, handler, context ); } );
}

CreateMLTransformOutcome GlueClient::CreateMLTransform(const CreateMLTransformRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMLTransformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMLTransformOutcomeCallable GlueClient::CreateMLTransformCallable(const CreateMLTransformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMLTransformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMLTransform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateMLTransformAsyncHelper(GlueClient const * const clientThis, const CreateMLTransformRequest& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMLTransform(request), context);
}

void GlueClient::CreateMLTransformAsync(const CreateMLTransformRequest& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateMLTransformAsyncHelper( this, request, handler, context ); } );
}

CreatePartitionOutcome GlueClient::CreatePartition(const CreatePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartitionOutcomeCallable GlueClient::CreatePartitionCallable(const CreatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreatePartitionAsyncHelper(GlueClient const * const clientThis, const CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePartition(request), context);
}

void GlueClient::CreatePartitionAsync(const CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreatePartitionAsyncHelper( this, request, handler, context ); } );
}

CreatePartitionIndexOutcome GlueClient::CreatePartitionIndex(const CreatePartitionIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePartitionIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartitionIndexOutcomeCallable GlueClient::CreatePartitionIndexCallable(const CreatePartitionIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartitionIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartitionIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreatePartitionIndexAsyncHelper(GlueClient const * const clientThis, const CreatePartitionIndexRequest& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePartitionIndex(request), context);
}

void GlueClient::CreatePartitionIndexAsync(const CreatePartitionIndexRequest& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreatePartitionIndexAsyncHelper( this, request, handler, context ); } );
}

CreateRegistryOutcome GlueClient::CreateRegistry(const CreateRegistryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegistryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegistryOutcomeCallable GlueClient::CreateRegistryCallable(const CreateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateRegistryAsyncHelper(GlueClient const * const clientThis, const CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegistry(request), context);
}

void GlueClient::CreateRegistryAsync(const CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateRegistryAsyncHelper( this, request, handler, context ); } );
}

CreateSchemaOutcome GlueClient::CreateSchema(const CreateSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSchemaOutcomeCallable GlueClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateSchemaAsyncHelper(GlueClient const * const clientThis, const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSchema(request), context);
}

void GlueClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateSchemaAsyncHelper( this, request, handler, context ); } );
}

CreateScriptOutcome GlueClient::CreateScript(const CreateScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateScriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScriptOutcomeCallable GlueClient::CreateScriptCallable(const CreateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateScriptAsyncHelper(GlueClient const * const clientThis, const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateScript(request), context);
}

void GlueClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateScriptAsyncHelper( this, request, handler, context ); } );
}

CreateSecurityConfigurationOutcome GlueClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityConfigurationOutcomeCallable GlueClient::CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateSecurityConfigurationAsyncHelper(GlueClient const * const clientThis, const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSecurityConfiguration(request), context);
}

void GlueClient::CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateSessionOutcome GlueClient::CreateSession(const CreateSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSessionOutcomeCallable GlueClient::CreateSessionCallable(const CreateSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateSessionAsyncHelper(GlueClient const * const clientThis, const CreateSessionRequest& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSession(request), context);
}

void GlueClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateSessionAsyncHelper( this, request, handler, context ); } );
}

CreateTableOutcome GlueClient::CreateTable(const CreateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTableOutcomeCallable GlueClient::CreateTableCallable(const CreateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateTableAsyncHelper(GlueClient const * const clientThis, const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTable(request), context);
}

void GlueClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateTableAsyncHelper( this, request, handler, context ); } );
}

CreateTriggerOutcome GlueClient::CreateTrigger(const CreateTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTriggerOutcomeCallable GlueClient::CreateTriggerCallable(const CreateTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateTriggerAsyncHelper(GlueClient const * const clientThis, const CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrigger(request), context);
}

void GlueClient::CreateTriggerAsync(const CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateTriggerAsyncHelper( this, request, handler, context ); } );
}

CreateUserDefinedFunctionOutcome GlueClient::CreateUserDefinedFunction(const CreateUserDefinedFunctionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserDefinedFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserDefinedFunctionOutcomeCallable GlueClient::CreateUserDefinedFunctionCallable(const CreateUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateUserDefinedFunctionAsyncHelper(GlueClient const * const clientThis, const CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserDefinedFunction(request), context);
}

void GlueClient::CreateUserDefinedFunctionAsync(const CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateUserDefinedFunctionAsyncHelper( this, request, handler, context ); } );
}

CreateWorkflowOutcome GlueClient::CreateWorkflow(const CreateWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowOutcomeCallable GlueClient::CreateWorkflowCallable(const CreateWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientCreateWorkflowAsyncHelper(GlueClient const * const clientThis, const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkflow(request), context);
}

void GlueClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientCreateWorkflowAsyncHelper( this, request, handler, context ); } );
}

DeleteBlueprintOutcome GlueClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBlueprintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBlueprintOutcomeCallable GlueClient::DeleteBlueprintCallable(const DeleteBlueprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBlueprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBlueprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteBlueprintAsyncHelper(GlueClient const * const clientThis, const DeleteBlueprintRequest& request, const DeleteBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBlueprint(request), context);
}

void GlueClient::DeleteBlueprintAsync(const DeleteBlueprintRequest& request, const DeleteBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteBlueprintAsyncHelper( this, request, handler, context ); } );
}

DeleteClassifierOutcome GlueClient::DeleteClassifier(const DeleteClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClassifierOutcomeCallable GlueClient::DeleteClassifierCallable(const DeleteClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteClassifierAsyncHelper(GlueClient const * const clientThis, const DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteClassifier(request), context);
}

void GlueClient::DeleteClassifierAsync(const DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteClassifierAsyncHelper( this, request, handler, context ); } );
}

DeleteColumnStatisticsForPartitionOutcome GlueClient::DeleteColumnStatisticsForPartition(const DeleteColumnStatisticsForPartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteColumnStatisticsForPartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteColumnStatisticsForPartitionOutcomeCallable GlueClient::DeleteColumnStatisticsForPartitionCallable(const DeleteColumnStatisticsForPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteColumnStatisticsForPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteColumnStatisticsForPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteColumnStatisticsForPartitionAsyncHelper(GlueClient const * const clientThis, const DeleteColumnStatisticsForPartitionRequest& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteColumnStatisticsForPartition(request), context);
}

void GlueClient::DeleteColumnStatisticsForPartitionAsync(const DeleteColumnStatisticsForPartitionRequest& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteColumnStatisticsForPartitionAsyncHelper( this, request, handler, context ); } );
}

DeleteColumnStatisticsForTableOutcome GlueClient::DeleteColumnStatisticsForTable(const DeleteColumnStatisticsForTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteColumnStatisticsForTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteColumnStatisticsForTableOutcomeCallable GlueClient::DeleteColumnStatisticsForTableCallable(const DeleteColumnStatisticsForTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteColumnStatisticsForTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteColumnStatisticsForTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteColumnStatisticsForTableAsyncHelper(GlueClient const * const clientThis, const DeleteColumnStatisticsForTableRequest& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteColumnStatisticsForTable(request), context);
}

void GlueClient::DeleteColumnStatisticsForTableAsync(const DeleteColumnStatisticsForTableRequest& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteColumnStatisticsForTableAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionOutcome GlueClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable GlueClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteConnectionAsyncHelper(GlueClient const * const clientThis, const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnection(request), context);
}

void GlueClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteCrawlerOutcome GlueClient::DeleteCrawler(const DeleteCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCrawlerOutcomeCallable GlueClient::DeleteCrawlerCallable(const DeleteCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteCrawlerAsyncHelper(GlueClient const * const clientThis, const DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCrawler(request), context);
}

void GlueClient::DeleteCrawlerAsync(const DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteCrawlerAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomEntityTypeOutcome GlueClient::DeleteCustomEntityType(const DeleteCustomEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomEntityTypeOutcomeCallable GlueClient::DeleteCustomEntityTypeCallable(const DeleteCustomEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteCustomEntityTypeAsyncHelper(GlueClient const * const clientThis, const DeleteCustomEntityTypeRequest& request, const DeleteCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomEntityType(request), context);
}

void GlueClient::DeleteCustomEntityTypeAsync(const DeleteCustomEntityTypeRequest& request, const DeleteCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteCustomEntityTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteDatabaseOutcome GlueClient::DeleteDatabase(const DeleteDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatabaseOutcomeCallable GlueClient::DeleteDatabaseCallable(const DeleteDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteDatabaseAsyncHelper(GlueClient const * const clientThis, const DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDatabase(request), context);
}

void GlueClient::DeleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteDatabaseAsyncHelper( this, request, handler, context ); } );
}

DeleteDevEndpointOutcome GlueClient::DeleteDevEndpoint(const DeleteDevEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDevEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDevEndpointOutcomeCallable GlueClient::DeleteDevEndpointCallable(const DeleteDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteDevEndpointAsyncHelper(GlueClient const * const clientThis, const DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDevEndpoint(request), context);
}

void GlueClient::DeleteDevEndpointAsync(const DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteDevEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteJobOutcome GlueClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable GlueClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteJobAsyncHelper(GlueClient const * const clientThis, const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteJob(request), context);
}

void GlueClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteJobAsyncHelper( this, request, handler, context ); } );
}

DeleteMLTransformOutcome GlueClient::DeleteMLTransform(const DeleteMLTransformRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMLTransformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMLTransformOutcomeCallable GlueClient::DeleteMLTransformCallable(const DeleteMLTransformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMLTransformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMLTransform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteMLTransformAsyncHelper(GlueClient const * const clientThis, const DeleteMLTransformRequest& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMLTransform(request), context);
}

void GlueClient::DeleteMLTransformAsync(const DeleteMLTransformRequest& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteMLTransformAsyncHelper( this, request, handler, context ); } );
}

DeletePartitionOutcome GlueClient::DeletePartition(const DeletePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePartitionOutcomeCallable GlueClient::DeletePartitionCallable(const DeletePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeletePartitionAsyncHelper(GlueClient const * const clientThis, const DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePartition(request), context);
}

void GlueClient::DeletePartitionAsync(const DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeletePartitionAsyncHelper( this, request, handler, context ); } );
}

DeletePartitionIndexOutcome GlueClient::DeletePartitionIndex(const DeletePartitionIndexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePartitionIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePartitionIndexOutcomeCallable GlueClient::DeletePartitionIndexCallable(const DeletePartitionIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartitionIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartitionIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeletePartitionIndexAsyncHelper(GlueClient const * const clientThis, const DeletePartitionIndexRequest& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePartitionIndex(request), context);
}

void GlueClient::DeletePartitionIndexAsync(const DeletePartitionIndexRequest& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeletePartitionIndexAsyncHelper( this, request, handler, context ); } );
}

DeleteRegistryOutcome GlueClient::DeleteRegistry(const DeleteRegistryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegistryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegistryOutcomeCallable GlueClient::DeleteRegistryCallable(const DeleteRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteRegistryAsyncHelper(GlueClient const * const clientThis, const DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegistry(request), context);
}

void GlueClient::DeleteRegistryAsync(const DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteRegistryAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome GlueClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable GlueClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteResourcePolicyAsyncHelper(GlueClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void GlueClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSchemaOutcome GlueClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaOutcomeCallable GlueClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteSchemaAsyncHelper(GlueClient const * const clientThis, const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSchema(request), context);
}

void GlueClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteSchemaAsyncHelper( this, request, handler, context ); } );
}

DeleteSchemaVersionsOutcome GlueClient::DeleteSchemaVersions(const DeleteSchemaVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSchemaVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaVersionsOutcomeCallable GlueClient::DeleteSchemaVersionsCallable(const DeleteSchemaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchemaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteSchemaVersionsAsyncHelper(GlueClient const * const clientThis, const DeleteSchemaVersionsRequest& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSchemaVersions(request), context);
}

void GlueClient::DeleteSchemaVersionsAsync(const DeleteSchemaVersionsRequest& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteSchemaVersionsAsyncHelper( this, request, handler, context ); } );
}

DeleteSecurityConfigurationOutcome GlueClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityConfigurationOutcomeCallable GlueClient::DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteSecurityConfigurationAsyncHelper(GlueClient const * const clientThis, const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSecurityConfiguration(request), context);
}

void GlueClient::DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteSessionOutcome GlueClient::DeleteSession(const DeleteSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSessionOutcomeCallable GlueClient::DeleteSessionCallable(const DeleteSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteSessionAsyncHelper(GlueClient const * const clientThis, const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSession(request), context);
}

void GlueClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteSessionAsyncHelper( this, request, handler, context ); } );
}

DeleteTableOutcome GlueClient::DeleteTable(const DeleteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableOutcomeCallable GlueClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteTableAsyncHelper(GlueClient const * const clientThis, const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTable(request), context);
}

void GlueClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteTableAsyncHelper( this, request, handler, context ); } );
}

DeleteTableVersionOutcome GlueClient::DeleteTableVersion(const DeleteTableVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTableVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableVersionOutcomeCallable GlueClient::DeleteTableVersionCallable(const DeleteTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteTableVersionAsyncHelper(GlueClient const * const clientThis, const DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTableVersion(request), context);
}

void GlueClient::DeleteTableVersionAsync(const DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteTableVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteTriggerOutcome GlueClient::DeleteTrigger(const DeleteTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTriggerOutcomeCallable GlueClient::DeleteTriggerCallable(const DeleteTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteTriggerAsyncHelper(GlueClient const * const clientThis, const DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrigger(request), context);
}

void GlueClient::DeleteTriggerAsync(const DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteTriggerAsyncHelper( this, request, handler, context ); } );
}

DeleteUserDefinedFunctionOutcome GlueClient::DeleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserDefinedFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserDefinedFunctionOutcomeCallable GlueClient::DeleteUserDefinedFunctionCallable(const DeleteUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteUserDefinedFunctionAsyncHelper(GlueClient const * const clientThis, const DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserDefinedFunction(request), context);
}

void GlueClient::DeleteUserDefinedFunctionAsync(const DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteUserDefinedFunctionAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkflowOutcome GlueClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable GlueClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientDeleteWorkflowAsyncHelper(GlueClient const * const clientThis, const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkflow(request), context);
}

void GlueClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientDeleteWorkflowAsyncHelper( this, request, handler, context ); } );
}

GetBlueprintOutcome GlueClient::GetBlueprint(const GetBlueprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBlueprintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlueprintOutcomeCallable GlueClient::GetBlueprintCallable(const GetBlueprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlueprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlueprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetBlueprintAsyncHelper(GlueClient const * const clientThis, const GetBlueprintRequest& request, const GetBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlueprint(request), context);
}

void GlueClient::GetBlueprintAsync(const GetBlueprintRequest& request, const GetBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetBlueprintAsyncHelper( this, request, handler, context ); } );
}

GetBlueprintRunOutcome GlueClient::GetBlueprintRun(const GetBlueprintRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBlueprintRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlueprintRunOutcomeCallable GlueClient::GetBlueprintRunCallable(const GetBlueprintRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlueprintRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlueprintRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetBlueprintRunAsyncHelper(GlueClient const * const clientThis, const GetBlueprintRunRequest& request, const GetBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlueprintRun(request), context);
}

void GlueClient::GetBlueprintRunAsync(const GetBlueprintRunRequest& request, const GetBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetBlueprintRunAsyncHelper( this, request, handler, context ); } );
}

GetBlueprintRunsOutcome GlueClient::GetBlueprintRuns(const GetBlueprintRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBlueprintRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlueprintRunsOutcomeCallable GlueClient::GetBlueprintRunsCallable(const GetBlueprintRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlueprintRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlueprintRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetBlueprintRunsAsyncHelper(GlueClient const * const clientThis, const GetBlueprintRunsRequest& request, const GetBlueprintRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlueprintRuns(request), context);
}

void GlueClient::GetBlueprintRunsAsync(const GetBlueprintRunsRequest& request, const GetBlueprintRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetBlueprintRunsAsyncHelper( this, request, handler, context ); } );
}

GetCatalogImportStatusOutcome GlueClient::GetCatalogImportStatus(const GetCatalogImportStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCatalogImportStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCatalogImportStatusOutcomeCallable GlueClient::GetCatalogImportStatusCallable(const GetCatalogImportStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCatalogImportStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCatalogImportStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetCatalogImportStatusAsyncHelper(GlueClient const * const clientThis, const GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCatalogImportStatus(request), context);
}

void GlueClient::GetCatalogImportStatusAsync(const GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetCatalogImportStatusAsyncHelper( this, request, handler, context ); } );
}

GetClassifierOutcome GlueClient::GetClassifier(const GetClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetClassifierOutcomeCallable GlueClient::GetClassifierCallable(const GetClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetClassifierAsyncHelper(GlueClient const * const clientThis, const GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetClassifier(request), context);
}

void GlueClient::GetClassifierAsync(const GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetClassifierAsyncHelper( this, request, handler, context ); } );
}

GetClassifiersOutcome GlueClient::GetClassifiers(const GetClassifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetClassifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetClassifiersOutcomeCallable GlueClient::GetClassifiersCallable(const GetClassifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetClassifiersAsyncHelper(GlueClient const * const clientThis, const GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetClassifiers(request), context);
}

void GlueClient::GetClassifiersAsync(const GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetClassifiersAsyncHelper( this, request, handler, context ); } );
}

GetColumnStatisticsForPartitionOutcome GlueClient::GetColumnStatisticsForPartition(const GetColumnStatisticsForPartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetColumnStatisticsForPartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetColumnStatisticsForPartitionOutcomeCallable GlueClient::GetColumnStatisticsForPartitionCallable(const GetColumnStatisticsForPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetColumnStatisticsForPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetColumnStatisticsForPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetColumnStatisticsForPartitionAsyncHelper(GlueClient const * const clientThis, const GetColumnStatisticsForPartitionRequest& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetColumnStatisticsForPartition(request), context);
}

void GlueClient::GetColumnStatisticsForPartitionAsync(const GetColumnStatisticsForPartitionRequest& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetColumnStatisticsForPartitionAsyncHelper( this, request, handler, context ); } );
}

GetColumnStatisticsForTableOutcome GlueClient::GetColumnStatisticsForTable(const GetColumnStatisticsForTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetColumnStatisticsForTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetColumnStatisticsForTableOutcomeCallable GlueClient::GetColumnStatisticsForTableCallable(const GetColumnStatisticsForTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetColumnStatisticsForTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetColumnStatisticsForTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetColumnStatisticsForTableAsyncHelper(GlueClient const * const clientThis, const GetColumnStatisticsForTableRequest& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetColumnStatisticsForTable(request), context);
}

void GlueClient::GetColumnStatisticsForTableAsync(const GetColumnStatisticsForTableRequest& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetColumnStatisticsForTableAsyncHelper( this, request, handler, context ); } );
}

GetConnectionOutcome GlueClient::GetConnection(const GetConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionOutcomeCallable GlueClient::GetConnectionCallable(const GetConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetConnectionAsyncHelper(GlueClient const * const clientThis, const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnection(request), context);
}

void GlueClient::GetConnectionAsync(const GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetConnectionAsyncHelper( this, request, handler, context ); } );
}

GetConnectionsOutcome GlueClient::GetConnections(const GetConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionsOutcomeCallable GlueClient::GetConnectionsCallable(const GetConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetConnectionsAsyncHelper(GlueClient const * const clientThis, const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConnections(request), context);
}

void GlueClient::GetConnectionsAsync(const GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetConnectionsAsyncHelper( this, request, handler, context ); } );
}

GetCrawlerOutcome GlueClient::GetCrawler(const GetCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCrawlerOutcomeCallable GlueClient::GetCrawlerCallable(const GetCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetCrawlerAsyncHelper(GlueClient const * const clientThis, const GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCrawler(request), context);
}

void GlueClient::GetCrawlerAsync(const GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetCrawlerAsyncHelper( this, request, handler, context ); } );
}

GetCrawlerMetricsOutcome GlueClient::GetCrawlerMetrics(const GetCrawlerMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCrawlerMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCrawlerMetricsOutcomeCallable GlueClient::GetCrawlerMetricsCallable(const GetCrawlerMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlerMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawlerMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetCrawlerMetricsAsyncHelper(GlueClient const * const clientThis, const GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCrawlerMetrics(request), context);
}

void GlueClient::GetCrawlerMetricsAsync(const GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetCrawlerMetricsAsyncHelper( this, request, handler, context ); } );
}

GetCrawlersOutcome GlueClient::GetCrawlers(const GetCrawlersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCrawlersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCrawlersOutcomeCallable GlueClient::GetCrawlersCallable(const GetCrawlersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrawlersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrawlers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetCrawlersAsyncHelper(GlueClient const * const clientThis, const GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCrawlers(request), context);
}

void GlueClient::GetCrawlersAsync(const GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetCrawlersAsyncHelper( this, request, handler, context ); } );
}

GetCustomEntityTypeOutcome GlueClient::GetCustomEntityType(const GetCustomEntityTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCustomEntityTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCustomEntityTypeOutcomeCallable GlueClient::GetCustomEntityTypeCallable(const GetCustomEntityTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomEntityTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomEntityType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetCustomEntityTypeAsyncHelper(GlueClient const * const clientThis, const GetCustomEntityTypeRequest& request, const GetCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomEntityType(request), context);
}

void GlueClient::GetCustomEntityTypeAsync(const GetCustomEntityTypeRequest& request, const GetCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetCustomEntityTypeAsyncHelper( this, request, handler, context ); } );
}

GetDataCatalogEncryptionSettingsOutcome GlueClient::GetDataCatalogEncryptionSettings(const GetDataCatalogEncryptionSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDataCatalogEncryptionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataCatalogEncryptionSettingsOutcomeCallable GlueClient::GetDataCatalogEncryptionSettingsCallable(const GetDataCatalogEncryptionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataCatalogEncryptionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataCatalogEncryptionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDataCatalogEncryptionSettingsAsyncHelper(GlueClient const * const clientThis, const GetDataCatalogEncryptionSettingsRequest& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataCatalogEncryptionSettings(request), context);
}

void GlueClient::GetDataCatalogEncryptionSettingsAsync(const GetDataCatalogEncryptionSettingsRequest& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDataCatalogEncryptionSettingsAsyncHelper( this, request, handler, context ); } );
}

GetDatabaseOutcome GlueClient::GetDatabase(const GetDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDatabaseOutcomeCallable GlueClient::GetDatabaseCallable(const GetDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDatabaseAsyncHelper(GlueClient const * const clientThis, const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDatabase(request), context);
}

void GlueClient::GetDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDatabaseAsyncHelper( this, request, handler, context ); } );
}

GetDatabasesOutcome GlueClient::GetDatabases(const GetDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDatabasesOutcomeCallable GlueClient::GetDatabasesCallable(const GetDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDatabasesAsyncHelper(GlueClient const * const clientThis, const GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDatabases(request), context);
}

void GlueClient::GetDatabasesAsync(const GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDatabasesAsyncHelper( this, request, handler, context ); } );
}

GetDataflowGraphOutcome GlueClient::GetDataflowGraph(const GetDataflowGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDataflowGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataflowGraphOutcomeCallable GlueClient::GetDataflowGraphCallable(const GetDataflowGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataflowGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataflowGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDataflowGraphAsyncHelper(GlueClient const * const clientThis, const GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataflowGraph(request), context);
}

void GlueClient::GetDataflowGraphAsync(const GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDataflowGraphAsyncHelper( this, request, handler, context ); } );
}

GetDevEndpointOutcome GlueClient::GetDevEndpoint(const GetDevEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDevEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevEndpointOutcomeCallable GlueClient::GetDevEndpointCallable(const GetDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDevEndpointAsyncHelper(GlueClient const * const clientThis, const GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevEndpoint(request), context);
}

void GlueClient::GetDevEndpointAsync(const GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDevEndpointAsyncHelper( this, request, handler, context ); } );
}

GetDevEndpointsOutcome GlueClient::GetDevEndpoints(const GetDevEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDevEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevEndpointsOutcomeCallable GlueClient::GetDevEndpointsCallable(const GetDevEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetDevEndpointsAsyncHelper(GlueClient const * const clientThis, const GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevEndpoints(request), context);
}

void GlueClient::GetDevEndpointsAsync(const GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetDevEndpointsAsyncHelper( this, request, handler, context ); } );
}

GetJobOutcome GlueClient::GetJob(const GetJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable GlueClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetJobAsyncHelper(GlueClient const * const clientThis, const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJob(request), context);
}

void GlueClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetJobAsyncHelper( this, request, handler, context ); } );
}

GetJobBookmarkOutcome GlueClient::GetJobBookmark(const GetJobBookmarkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobBookmarkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobBookmarkOutcomeCallable GlueClient::GetJobBookmarkCallable(const GetJobBookmarkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobBookmarkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobBookmark(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetJobBookmarkAsyncHelper(GlueClient const * const clientThis, const GetJobBookmarkRequest& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobBookmark(request), context);
}

void GlueClient::GetJobBookmarkAsync(const GetJobBookmarkRequest& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetJobBookmarkAsyncHelper( this, request, handler, context ); } );
}

GetJobRunOutcome GlueClient::GetJobRun(const GetJobRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobRunOutcomeCallable GlueClient::GetJobRunCallable(const GetJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetJobRunAsyncHelper(GlueClient const * const clientThis, const GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobRun(request), context);
}

void GlueClient::GetJobRunAsync(const GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetJobRunAsyncHelper( this, request, handler, context ); } );
}

GetJobRunsOutcome GlueClient::GetJobRuns(const GetJobRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobRunsOutcomeCallable GlueClient::GetJobRunsCallable(const GetJobRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetJobRunsAsyncHelper(GlueClient const * const clientThis, const GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobRuns(request), context);
}

void GlueClient::GetJobRunsAsync(const GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetJobRunsAsyncHelper( this, request, handler, context ); } );
}

GetJobsOutcome GlueClient::GetJobs(const GetJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobsOutcomeCallable GlueClient::GetJobsCallable(const GetJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetJobsAsyncHelper(GlueClient const * const clientThis, const GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobs(request), context);
}

void GlueClient::GetJobsAsync(const GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetJobsAsyncHelper( this, request, handler, context ); } );
}

GetMLTaskRunOutcome GlueClient::GetMLTaskRun(const GetMLTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMLTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMLTaskRunOutcomeCallable GlueClient::GetMLTaskRunCallable(const GetMLTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetMLTaskRunAsyncHelper(GlueClient const * const clientThis, const GetMLTaskRunRequest& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMLTaskRun(request), context);
}

void GlueClient::GetMLTaskRunAsync(const GetMLTaskRunRequest& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetMLTaskRunAsyncHelper( this, request, handler, context ); } );
}

GetMLTaskRunsOutcome GlueClient::GetMLTaskRuns(const GetMLTaskRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMLTaskRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMLTaskRunsOutcomeCallable GlueClient::GetMLTaskRunsCallable(const GetMLTaskRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLTaskRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLTaskRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetMLTaskRunsAsyncHelper(GlueClient const * const clientThis, const GetMLTaskRunsRequest& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMLTaskRuns(request), context);
}

void GlueClient::GetMLTaskRunsAsync(const GetMLTaskRunsRequest& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetMLTaskRunsAsyncHelper( this, request, handler, context ); } );
}

GetMLTransformOutcome GlueClient::GetMLTransform(const GetMLTransformRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMLTransformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMLTransformOutcomeCallable GlueClient::GetMLTransformCallable(const GetMLTransformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLTransformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLTransform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetMLTransformAsyncHelper(GlueClient const * const clientThis, const GetMLTransformRequest& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMLTransform(request), context);
}

void GlueClient::GetMLTransformAsync(const GetMLTransformRequest& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetMLTransformAsyncHelper( this, request, handler, context ); } );
}

GetMLTransformsOutcome GlueClient::GetMLTransforms(const GetMLTransformsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMLTransformsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMLTransformsOutcomeCallable GlueClient::GetMLTransformsCallable(const GetMLTransformsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMLTransformsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMLTransforms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetMLTransformsAsyncHelper(GlueClient const * const clientThis, const GetMLTransformsRequest& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMLTransforms(request), context);
}

void GlueClient::GetMLTransformsAsync(const GetMLTransformsRequest& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetMLTransformsAsyncHelper( this, request, handler, context ); } );
}

GetMappingOutcome GlueClient::GetMapping(const GetMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMappingOutcomeCallable GlueClient::GetMappingCallable(const GetMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetMappingAsyncHelper(GlueClient const * const clientThis, const GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMapping(request), context);
}

void GlueClient::GetMappingAsync(const GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetMappingAsyncHelper( this, request, handler, context ); } );
}

GetPartitionOutcome GlueClient::GetPartition(const GetPartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPartitionOutcomeCallable GlueClient::GetPartitionCallable(const GetPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetPartitionAsyncHelper(GlueClient const * const clientThis, const GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPartition(request), context);
}

void GlueClient::GetPartitionAsync(const GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetPartitionAsyncHelper( this, request, handler, context ); } );
}

GetPartitionIndexesOutcome GlueClient::GetPartitionIndexes(const GetPartitionIndexesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPartitionIndexesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPartitionIndexesOutcomeCallable GlueClient::GetPartitionIndexesCallable(const GetPartitionIndexesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartitionIndexesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartitionIndexes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetPartitionIndexesAsyncHelper(GlueClient const * const clientThis, const GetPartitionIndexesRequest& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPartitionIndexes(request), context);
}

void GlueClient::GetPartitionIndexesAsync(const GetPartitionIndexesRequest& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetPartitionIndexesAsyncHelper( this, request, handler, context ); } );
}

GetPartitionsOutcome GlueClient::GetPartitions(const GetPartitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPartitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPartitionsOutcomeCallable GlueClient::GetPartitionsCallable(const GetPartitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetPartitionsAsyncHelper(GlueClient const * const clientThis, const GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPartitions(request), context);
}

void GlueClient::GetPartitionsAsync(const GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetPartitionsAsyncHelper( this, request, handler, context ); } );
}

GetPlanOutcome GlueClient::GetPlan(const GetPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPlanOutcomeCallable GlueClient::GetPlanCallable(const GetPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetPlanAsyncHelper(GlueClient const * const clientThis, const GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPlan(request), context);
}

void GlueClient::GetPlanAsync(const GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetPlanAsyncHelper( this, request, handler, context ); } );
}

GetRegistryOutcome GlueClient::GetRegistry(const GetRegistryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegistryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegistryOutcomeCallable GlueClient::GetRegistryCallable(const GetRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetRegistryAsyncHelper(GlueClient const * const clientThis, const GetRegistryRequest& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegistry(request), context);
}

void GlueClient::GetRegistryAsync(const GetRegistryRequest& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetRegistryAsyncHelper( this, request, handler, context ); } );
}

GetResourcePoliciesOutcome GlueClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePoliciesOutcomeCallable GlueClient::GetResourcePoliciesCallable(const GetResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetResourcePoliciesAsyncHelper(GlueClient const * const clientThis, const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicies(request), context);
}

void GlueClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetResourcePoliciesAsyncHelper( this, request, handler, context ); } );
}

GetResourcePolicyOutcome GlueClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable GlueClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetResourcePolicyAsyncHelper(GlueClient const * const clientThis, const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicy(request), context);
}

void GlueClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

GetSchemaOutcome GlueClient::GetSchema(const GetSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaOutcomeCallable GlueClient::GetSchemaCallable(const GetSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSchemaAsyncHelper(GlueClient const * const clientThis, const GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchema(request), context);
}

void GlueClient::GetSchemaAsync(const GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSchemaAsyncHelper( this, request, handler, context ); } );
}

GetSchemaByDefinitionOutcome GlueClient::GetSchemaByDefinition(const GetSchemaByDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSchemaByDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaByDefinitionOutcomeCallable GlueClient::GetSchemaByDefinitionCallable(const GetSchemaByDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaByDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaByDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSchemaByDefinitionAsyncHelper(GlueClient const * const clientThis, const GetSchemaByDefinitionRequest& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchemaByDefinition(request), context);
}

void GlueClient::GetSchemaByDefinitionAsync(const GetSchemaByDefinitionRequest& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSchemaByDefinitionAsyncHelper( this, request, handler, context ); } );
}

GetSchemaVersionOutcome GlueClient::GetSchemaVersion(const GetSchemaVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSchemaVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaVersionOutcomeCallable GlueClient::GetSchemaVersionCallable(const GetSchemaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSchemaVersionAsyncHelper(GlueClient const * const clientThis, const GetSchemaVersionRequest& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchemaVersion(request), context);
}

void GlueClient::GetSchemaVersionAsync(const GetSchemaVersionRequest& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSchemaVersionAsyncHelper( this, request, handler, context ); } );
}

GetSchemaVersionsDiffOutcome GlueClient::GetSchemaVersionsDiff(const GetSchemaVersionsDiffRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSchemaVersionsDiffOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaVersionsDiffOutcomeCallable GlueClient::GetSchemaVersionsDiffCallable(const GetSchemaVersionsDiffRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaVersionsDiffOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaVersionsDiff(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSchemaVersionsDiffAsyncHelper(GlueClient const * const clientThis, const GetSchemaVersionsDiffRequest& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchemaVersionsDiff(request), context);
}

void GlueClient::GetSchemaVersionsDiffAsync(const GetSchemaVersionsDiffRequest& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSchemaVersionsDiffAsyncHelper( this, request, handler, context ); } );
}

GetSecurityConfigurationOutcome GlueClient::GetSecurityConfiguration(const GetSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecurityConfigurationOutcomeCallable GlueClient::GetSecurityConfigurationCallable(const GetSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSecurityConfigurationAsyncHelper(GlueClient const * const clientThis, const GetSecurityConfigurationRequest& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSecurityConfiguration(request), context);
}

void GlueClient::GetSecurityConfigurationAsync(const GetSecurityConfigurationRequest& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetSecurityConfigurationsOutcome GlueClient::GetSecurityConfigurations(const GetSecurityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSecurityConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecurityConfigurationsOutcomeCallable GlueClient::GetSecurityConfigurationsCallable(const GetSecurityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSecurityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSecurityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSecurityConfigurationsAsyncHelper(GlueClient const * const clientThis, const GetSecurityConfigurationsRequest& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSecurityConfigurations(request), context);
}

void GlueClient::GetSecurityConfigurationsAsync(const GetSecurityConfigurationsRequest& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSecurityConfigurationsAsyncHelper( this, request, handler, context ); } );
}

GetSessionOutcome GlueClient::GetSession(const GetSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSessionOutcomeCallable GlueClient::GetSessionCallable(const GetSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetSessionAsyncHelper(GlueClient const * const clientThis, const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSession(request), context);
}

void GlueClient::GetSessionAsync(const GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetSessionAsyncHelper( this, request, handler, context ); } );
}

GetStatementOutcome GlueClient::GetStatement(const GetStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStatementOutcomeCallable GlueClient::GetStatementCallable(const GetStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetStatementAsyncHelper(GlueClient const * const clientThis, const GetStatementRequest& request, const GetStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStatement(request), context);
}

void GlueClient::GetStatementAsync(const GetStatementRequest& request, const GetStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetStatementAsyncHelper( this, request, handler, context ); } );
}

GetTableOutcome GlueClient::GetTable(const GetTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableOutcomeCallable GlueClient::GetTableCallable(const GetTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTableAsyncHelper(GlueClient const * const clientThis, const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTable(request), context);
}

void GlueClient::GetTableAsync(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTableAsyncHelper( this, request, handler, context ); } );
}

GetTableVersionOutcome GlueClient::GetTableVersion(const GetTableVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTableVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableVersionOutcomeCallable GlueClient::GetTableVersionCallable(const GetTableVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTableVersionAsyncHelper(GlueClient const * const clientThis, const GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTableVersion(request), context);
}

void GlueClient::GetTableVersionAsync(const GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTableVersionAsyncHelper( this, request, handler, context ); } );
}

GetTableVersionsOutcome GlueClient::GetTableVersions(const GetTableVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTableVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableVersionsOutcomeCallable GlueClient::GetTableVersionsCallable(const GetTableVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTableVersionsAsyncHelper(GlueClient const * const clientThis, const GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTableVersions(request), context);
}

void GlueClient::GetTableVersionsAsync(const GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTableVersionsAsyncHelper( this, request, handler, context ); } );
}

GetTablesOutcome GlueClient::GetTables(const GetTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTablesOutcomeCallable GlueClient::GetTablesCallable(const GetTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTablesAsyncHelper(GlueClient const * const clientThis, const GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTables(request), context);
}

void GlueClient::GetTablesAsync(const GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTablesAsyncHelper( this, request, handler, context ); } );
}

GetTagsOutcome GlueClient::GetTags(const GetTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTagsOutcomeCallable GlueClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTagsAsyncHelper(GlueClient const * const clientThis, const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTags(request), context);
}

void GlueClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTagsAsyncHelper( this, request, handler, context ); } );
}

GetTriggerOutcome GlueClient::GetTrigger(const GetTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTriggerOutcomeCallable GlueClient::GetTriggerCallable(const GetTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTriggerAsyncHelper(GlueClient const * const clientThis, const GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrigger(request), context);
}

void GlueClient::GetTriggerAsync(const GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTriggerAsyncHelper( this, request, handler, context ); } );
}

GetTriggersOutcome GlueClient::GetTriggers(const GetTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTriggersOutcomeCallable GlueClient::GetTriggersCallable(const GetTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetTriggersAsyncHelper(GlueClient const * const clientThis, const GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTriggers(request), context);
}

void GlueClient::GetTriggersAsync(const GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetTriggersAsyncHelper( this, request, handler, context ); } );
}

GetUnfilteredPartitionMetadataOutcome GlueClient::GetUnfilteredPartitionMetadata(const GetUnfilteredPartitionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUnfilteredPartitionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUnfilteredPartitionMetadataOutcomeCallable GlueClient::GetUnfilteredPartitionMetadataCallable(const GetUnfilteredPartitionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUnfilteredPartitionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUnfilteredPartitionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetUnfilteredPartitionMetadataAsyncHelper(GlueClient const * const clientThis, const GetUnfilteredPartitionMetadataRequest& request, const GetUnfilteredPartitionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUnfilteredPartitionMetadata(request), context);
}

void GlueClient::GetUnfilteredPartitionMetadataAsync(const GetUnfilteredPartitionMetadataRequest& request, const GetUnfilteredPartitionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetUnfilteredPartitionMetadataAsyncHelper( this, request, handler, context ); } );
}

GetUnfilteredPartitionsMetadataOutcome GlueClient::GetUnfilteredPartitionsMetadata(const GetUnfilteredPartitionsMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUnfilteredPartitionsMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUnfilteredPartitionsMetadataOutcomeCallable GlueClient::GetUnfilteredPartitionsMetadataCallable(const GetUnfilteredPartitionsMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUnfilteredPartitionsMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUnfilteredPartitionsMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetUnfilteredPartitionsMetadataAsyncHelper(GlueClient const * const clientThis, const GetUnfilteredPartitionsMetadataRequest& request, const GetUnfilteredPartitionsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUnfilteredPartitionsMetadata(request), context);
}

void GlueClient::GetUnfilteredPartitionsMetadataAsync(const GetUnfilteredPartitionsMetadataRequest& request, const GetUnfilteredPartitionsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetUnfilteredPartitionsMetadataAsyncHelper( this, request, handler, context ); } );
}

GetUnfilteredTableMetadataOutcome GlueClient::GetUnfilteredTableMetadata(const GetUnfilteredTableMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUnfilteredTableMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUnfilteredTableMetadataOutcomeCallable GlueClient::GetUnfilteredTableMetadataCallable(const GetUnfilteredTableMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUnfilteredTableMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUnfilteredTableMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetUnfilteredTableMetadataAsyncHelper(GlueClient const * const clientThis, const GetUnfilteredTableMetadataRequest& request, const GetUnfilteredTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUnfilteredTableMetadata(request), context);
}

void GlueClient::GetUnfilteredTableMetadataAsync(const GetUnfilteredTableMetadataRequest& request, const GetUnfilteredTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetUnfilteredTableMetadataAsyncHelper( this, request, handler, context ); } );
}

GetUserDefinedFunctionOutcome GlueClient::GetUserDefinedFunction(const GetUserDefinedFunctionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUserDefinedFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUserDefinedFunctionOutcomeCallable GlueClient::GetUserDefinedFunctionCallable(const GetUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetUserDefinedFunctionAsyncHelper(GlueClient const * const clientThis, const GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserDefinedFunction(request), context);
}

void GlueClient::GetUserDefinedFunctionAsync(const GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetUserDefinedFunctionAsyncHelper( this, request, handler, context ); } );
}

GetUserDefinedFunctionsOutcome GlueClient::GetUserDefinedFunctions(const GetUserDefinedFunctionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUserDefinedFunctionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUserDefinedFunctionsOutcomeCallable GlueClient::GetUserDefinedFunctionsCallable(const GetUserDefinedFunctionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserDefinedFunctionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserDefinedFunctions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetUserDefinedFunctionsAsyncHelper(GlueClient const * const clientThis, const GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserDefinedFunctions(request), context);
}

void GlueClient::GetUserDefinedFunctionsAsync(const GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetUserDefinedFunctionsAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowOutcome GlueClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcomeCallable GlueClient::GetWorkflowCallable(const GetWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetWorkflowAsyncHelper(GlueClient const * const clientThis, const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflow(request), context);
}

void GlueClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetWorkflowAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowRunOutcome GlueClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkflowRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowRunOutcomeCallable GlueClient::GetWorkflowRunCallable(const GetWorkflowRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetWorkflowRunAsyncHelper(GlueClient const * const clientThis, const GetWorkflowRunRequest& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflowRun(request), context);
}

void GlueClient::GetWorkflowRunAsync(const GetWorkflowRunRequest& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetWorkflowRunAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowRunPropertiesOutcome GlueClient::GetWorkflowRunProperties(const GetWorkflowRunPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkflowRunPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowRunPropertiesOutcomeCallable GlueClient::GetWorkflowRunPropertiesCallable(const GetWorkflowRunPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowRunPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowRunProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetWorkflowRunPropertiesAsyncHelper(GlueClient const * const clientThis, const GetWorkflowRunPropertiesRequest& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflowRunProperties(request), context);
}

void GlueClient::GetWorkflowRunPropertiesAsync(const GetWorkflowRunPropertiesRequest& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetWorkflowRunPropertiesAsyncHelper( this, request, handler, context ); } );
}

GetWorkflowRunsOutcome GlueClient::GetWorkflowRuns(const GetWorkflowRunsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkflowRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowRunsOutcomeCallable GlueClient::GetWorkflowRunsCallable(const GetWorkflowRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientGetWorkflowRunsAsyncHelper(GlueClient const * const clientThis, const GetWorkflowRunsRequest& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkflowRuns(request), context);
}

void GlueClient::GetWorkflowRunsAsync(const GetWorkflowRunsRequest& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientGetWorkflowRunsAsyncHelper( this, request, handler, context ); } );
}

ImportCatalogToGlueOutcome GlueClient::ImportCatalogToGlue(const ImportCatalogToGlueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportCatalogToGlueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCatalogToGlueOutcomeCallable GlueClient::ImportCatalogToGlueCallable(const ImportCatalogToGlueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCatalogToGlueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCatalogToGlue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientImportCatalogToGlueAsyncHelper(GlueClient const * const clientThis, const ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportCatalogToGlue(request), context);
}

void GlueClient::ImportCatalogToGlueAsync(const ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientImportCatalogToGlueAsyncHelper( this, request, handler, context ); } );
}

ListBlueprintsOutcome GlueClient::ListBlueprints(const ListBlueprintsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBlueprintsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBlueprintsOutcomeCallable GlueClient::ListBlueprintsCallable(const ListBlueprintsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBlueprintsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBlueprints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListBlueprintsAsyncHelper(GlueClient const * const clientThis, const ListBlueprintsRequest& request, const ListBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBlueprints(request), context);
}

void GlueClient::ListBlueprintsAsync(const ListBlueprintsRequest& request, const ListBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListBlueprintsAsyncHelper( this, request, handler, context ); } );
}

ListCrawlersOutcome GlueClient::ListCrawlers(const ListCrawlersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCrawlersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCrawlersOutcomeCallable GlueClient::ListCrawlersCallable(const ListCrawlersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCrawlersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCrawlers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListCrawlersAsyncHelper(GlueClient const * const clientThis, const ListCrawlersRequest& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCrawlers(request), context);
}

void GlueClient::ListCrawlersAsync(const ListCrawlersRequest& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListCrawlersAsyncHelper( this, request, handler, context ); } );
}

ListCrawlsOutcome GlueClient::ListCrawls(const ListCrawlsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCrawlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCrawlsOutcomeCallable GlueClient::ListCrawlsCallable(const ListCrawlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCrawlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCrawls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListCrawlsAsyncHelper(GlueClient const * const clientThis, const ListCrawlsRequest& request, const ListCrawlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCrawls(request), context);
}

void GlueClient::ListCrawlsAsync(const ListCrawlsRequest& request, const ListCrawlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListCrawlsAsyncHelper( this, request, handler, context ); } );
}

ListCustomEntityTypesOutcome GlueClient::ListCustomEntityTypes(const ListCustomEntityTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomEntityTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomEntityTypesOutcomeCallable GlueClient::ListCustomEntityTypesCallable(const ListCustomEntityTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomEntityTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomEntityTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListCustomEntityTypesAsyncHelper(GlueClient const * const clientThis, const ListCustomEntityTypesRequest& request, const ListCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomEntityTypes(request), context);
}

void GlueClient::ListCustomEntityTypesAsync(const ListCustomEntityTypesRequest& request, const ListCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListCustomEntityTypesAsyncHelper( this, request, handler, context ); } );
}

ListDevEndpointsOutcome GlueClient::ListDevEndpoints(const ListDevEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDevEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevEndpointsOutcomeCallable GlueClient::ListDevEndpointsCallable(const ListDevEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListDevEndpointsAsyncHelper(GlueClient const * const clientThis, const ListDevEndpointsRequest& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevEndpoints(request), context);
}

void GlueClient::ListDevEndpointsAsync(const ListDevEndpointsRequest& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListDevEndpointsAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome GlueClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable GlueClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListJobsAsyncHelper(GlueClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void GlueClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListMLTransformsOutcome GlueClient::ListMLTransforms(const ListMLTransformsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMLTransformsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMLTransformsOutcomeCallable GlueClient::ListMLTransformsCallable(const ListMLTransformsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMLTransformsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMLTransforms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListMLTransformsAsyncHelper(GlueClient const * const clientThis, const ListMLTransformsRequest& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMLTransforms(request), context);
}

void GlueClient::ListMLTransformsAsync(const ListMLTransformsRequest& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListMLTransformsAsyncHelper( this, request, handler, context ); } );
}

ListRegistriesOutcome GlueClient::ListRegistries(const ListRegistriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegistriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegistriesOutcomeCallable GlueClient::ListRegistriesCallable(const ListRegistriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegistriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegistries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListRegistriesAsyncHelper(GlueClient const * const clientThis, const ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegistries(request), context);
}

void GlueClient::ListRegistriesAsync(const ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListRegistriesAsyncHelper( this, request, handler, context ); } );
}

ListSchemaVersionsOutcome GlueClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSchemaVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemaVersionsOutcomeCallable GlueClient::ListSchemaVersionsCallable(const ListSchemaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListSchemaVersionsAsyncHelper(GlueClient const * const clientThis, const ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSchemaVersions(request), context);
}

void GlueClient::ListSchemaVersionsAsync(const ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListSchemaVersionsAsyncHelper( this, request, handler, context ); } );
}

ListSchemasOutcome GlueClient::ListSchemas(const ListSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSchemasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcomeCallable GlueClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListSchemasAsyncHelper(GlueClient const * const clientThis, const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSchemas(request), context);
}

void GlueClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListSchemasAsyncHelper( this, request, handler, context ); } );
}

ListSessionsOutcome GlueClient::ListSessions(const ListSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSessionsOutcomeCallable GlueClient::ListSessionsCallable(const ListSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListSessionsAsyncHelper(GlueClient const * const clientThis, const ListSessionsRequest& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSessions(request), context);
}

void GlueClient::ListSessionsAsync(const ListSessionsRequest& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListSessionsAsyncHelper( this, request, handler, context ); } );
}

ListStatementsOutcome GlueClient::ListStatements(const ListStatementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStatementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStatementsOutcomeCallable GlueClient::ListStatementsCallable(const ListStatementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStatementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStatements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListStatementsAsyncHelper(GlueClient const * const clientThis, const ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStatements(request), context);
}

void GlueClient::ListStatementsAsync(const ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListStatementsAsyncHelper( this, request, handler, context ); } );
}

ListTriggersOutcome GlueClient::ListTriggers(const ListTriggersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTriggersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTriggersOutcomeCallable GlueClient::ListTriggersCallable(const ListTriggersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTriggersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTriggers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListTriggersAsyncHelper(GlueClient const * const clientThis, const ListTriggersRequest& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTriggers(request), context);
}

void GlueClient::ListTriggersAsync(const ListTriggersRequest& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListTriggersAsyncHelper( this, request, handler, context ); } );
}

ListWorkflowsOutcome GlueClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkflowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable GlueClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientListWorkflowsAsyncHelper(GlueClient const * const clientThis, const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkflows(request), context);
}

void GlueClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientListWorkflowsAsyncHelper( this, request, handler, context ); } );
}

PutDataCatalogEncryptionSettingsOutcome GlueClient::PutDataCatalogEncryptionSettings(const PutDataCatalogEncryptionSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDataCatalogEncryptionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDataCatalogEncryptionSettingsOutcomeCallable GlueClient::PutDataCatalogEncryptionSettingsCallable(const PutDataCatalogEncryptionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDataCatalogEncryptionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDataCatalogEncryptionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientPutDataCatalogEncryptionSettingsAsyncHelper(GlueClient const * const clientThis, const PutDataCatalogEncryptionSettingsRequest& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDataCatalogEncryptionSettings(request), context);
}

void GlueClient::PutDataCatalogEncryptionSettingsAsync(const PutDataCatalogEncryptionSettingsRequest& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientPutDataCatalogEncryptionSettingsAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome GlueClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable GlueClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientPutResourcePolicyAsyncHelper(GlueClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void GlueClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

PutSchemaVersionMetadataOutcome GlueClient::PutSchemaVersionMetadata(const PutSchemaVersionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutSchemaVersionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSchemaVersionMetadataOutcomeCallable GlueClient::PutSchemaVersionMetadataCallable(const PutSchemaVersionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSchemaVersionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSchemaVersionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientPutSchemaVersionMetadataAsyncHelper(GlueClient const * const clientThis, const PutSchemaVersionMetadataRequest& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSchemaVersionMetadata(request), context);
}

void GlueClient::PutSchemaVersionMetadataAsync(const PutSchemaVersionMetadataRequest& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientPutSchemaVersionMetadataAsyncHelper( this, request, handler, context ); } );
}

PutWorkflowRunPropertiesOutcome GlueClient::PutWorkflowRunProperties(const PutWorkflowRunPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutWorkflowRunPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutWorkflowRunPropertiesOutcomeCallable GlueClient::PutWorkflowRunPropertiesCallable(const PutWorkflowRunPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutWorkflowRunPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutWorkflowRunProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientPutWorkflowRunPropertiesAsyncHelper(GlueClient const * const clientThis, const PutWorkflowRunPropertiesRequest& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutWorkflowRunProperties(request), context);
}

void GlueClient::PutWorkflowRunPropertiesAsync(const PutWorkflowRunPropertiesRequest& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientPutWorkflowRunPropertiesAsyncHelper( this, request, handler, context ); } );
}

QuerySchemaVersionMetadataOutcome GlueClient::QuerySchemaVersionMetadata(const QuerySchemaVersionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return QuerySchemaVersionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QuerySchemaVersionMetadataOutcomeCallable GlueClient::QuerySchemaVersionMetadataCallable(const QuerySchemaVersionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QuerySchemaVersionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QuerySchemaVersionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientQuerySchemaVersionMetadataAsyncHelper(GlueClient const * const clientThis, const QuerySchemaVersionMetadataRequest& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->QuerySchemaVersionMetadata(request), context);
}

void GlueClient::QuerySchemaVersionMetadataAsync(const QuerySchemaVersionMetadataRequest& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientQuerySchemaVersionMetadataAsyncHelper( this, request, handler, context ); } );
}

RegisterSchemaVersionOutcome GlueClient::RegisterSchemaVersion(const RegisterSchemaVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterSchemaVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterSchemaVersionOutcomeCallable GlueClient::RegisterSchemaVersionCallable(const RegisterSchemaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterSchemaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterSchemaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientRegisterSchemaVersionAsyncHelper(GlueClient const * const clientThis, const RegisterSchemaVersionRequest& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterSchemaVersion(request), context);
}

void GlueClient::RegisterSchemaVersionAsync(const RegisterSchemaVersionRequest& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientRegisterSchemaVersionAsyncHelper( this, request, handler, context ); } );
}

RemoveSchemaVersionMetadataOutcome GlueClient::RemoveSchemaVersionMetadata(const RemoveSchemaVersionMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveSchemaVersionMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveSchemaVersionMetadataOutcomeCallable GlueClient::RemoveSchemaVersionMetadataCallable(const RemoveSchemaVersionMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveSchemaVersionMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveSchemaVersionMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientRemoveSchemaVersionMetadataAsyncHelper(GlueClient const * const clientThis, const RemoveSchemaVersionMetadataRequest& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveSchemaVersionMetadata(request), context);
}

void GlueClient::RemoveSchemaVersionMetadataAsync(const RemoveSchemaVersionMetadataRequest& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientRemoveSchemaVersionMetadataAsyncHelper( this, request, handler, context ); } );
}

ResetJobBookmarkOutcome GlueClient::ResetJobBookmark(const ResetJobBookmarkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetJobBookmarkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetJobBookmarkOutcomeCallable GlueClient::ResetJobBookmarkCallable(const ResetJobBookmarkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetJobBookmarkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetJobBookmark(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientResetJobBookmarkAsyncHelper(GlueClient const * const clientThis, const ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetJobBookmark(request), context);
}

void GlueClient::ResetJobBookmarkAsync(const ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientResetJobBookmarkAsyncHelper( this, request, handler, context ); } );
}

ResumeWorkflowRunOutcome GlueClient::ResumeWorkflowRun(const ResumeWorkflowRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeWorkflowRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeWorkflowRunOutcomeCallable GlueClient::ResumeWorkflowRunCallable(const ResumeWorkflowRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeWorkflowRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeWorkflowRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientResumeWorkflowRunAsyncHelper(GlueClient const * const clientThis, const ResumeWorkflowRunRequest& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeWorkflowRun(request), context);
}

void GlueClient::ResumeWorkflowRunAsync(const ResumeWorkflowRunRequest& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientResumeWorkflowRunAsyncHelper( this, request, handler, context ); } );
}

RunStatementOutcome GlueClient::RunStatement(const RunStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RunStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunStatementOutcomeCallable GlueClient::RunStatementCallable(const RunStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientRunStatementAsyncHelper(GlueClient const * const clientThis, const RunStatementRequest& request, const RunStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RunStatement(request), context);
}

void GlueClient::RunStatementAsync(const RunStatementRequest& request, const RunStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientRunStatementAsyncHelper( this, request, handler, context ); } );
}

SearchTablesOutcome GlueClient::SearchTables(const SearchTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchTablesOutcomeCallable GlueClient::SearchTablesCallable(const SearchTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientSearchTablesAsyncHelper(GlueClient const * const clientThis, const SearchTablesRequest& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchTables(request), context);
}

void GlueClient::SearchTablesAsync(const SearchTablesRequest& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientSearchTablesAsyncHelper( this, request, handler, context ); } );
}

StartBlueprintRunOutcome GlueClient::StartBlueprintRun(const StartBlueprintRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartBlueprintRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBlueprintRunOutcomeCallable GlueClient::StartBlueprintRunCallable(const StartBlueprintRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBlueprintRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBlueprintRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartBlueprintRunAsyncHelper(GlueClient const * const clientThis, const StartBlueprintRunRequest& request, const StartBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartBlueprintRun(request), context);
}

void GlueClient::StartBlueprintRunAsync(const StartBlueprintRunRequest& request, const StartBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartBlueprintRunAsyncHelper( this, request, handler, context ); } );
}

StartCrawlerOutcome GlueClient::StartCrawler(const StartCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCrawlerOutcomeCallable GlueClient::StartCrawlerCallable(const StartCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartCrawlerAsyncHelper(GlueClient const * const clientThis, const StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCrawler(request), context);
}

void GlueClient::StartCrawlerAsync(const StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartCrawlerAsyncHelper( this, request, handler, context ); } );
}

StartCrawlerScheduleOutcome GlueClient::StartCrawlerSchedule(const StartCrawlerScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartCrawlerScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCrawlerScheduleOutcomeCallable GlueClient::StartCrawlerScheduleCallable(const StartCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartCrawlerScheduleAsyncHelper(GlueClient const * const clientThis, const StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCrawlerSchedule(request), context);
}

void GlueClient::StartCrawlerScheduleAsync(const StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartCrawlerScheduleAsyncHelper( this, request, handler, context ); } );
}

StartExportLabelsTaskRunOutcome GlueClient::StartExportLabelsTaskRun(const StartExportLabelsTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartExportLabelsTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExportLabelsTaskRunOutcomeCallable GlueClient::StartExportLabelsTaskRunCallable(const StartExportLabelsTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExportLabelsTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExportLabelsTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartExportLabelsTaskRunAsyncHelper(GlueClient const * const clientThis, const StartExportLabelsTaskRunRequest& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartExportLabelsTaskRun(request), context);
}

void GlueClient::StartExportLabelsTaskRunAsync(const StartExportLabelsTaskRunRequest& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartExportLabelsTaskRunAsyncHelper( this, request, handler, context ); } );
}

StartImportLabelsTaskRunOutcome GlueClient::StartImportLabelsTaskRun(const StartImportLabelsTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartImportLabelsTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImportLabelsTaskRunOutcomeCallable GlueClient::StartImportLabelsTaskRunCallable(const StartImportLabelsTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportLabelsTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImportLabelsTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartImportLabelsTaskRunAsyncHelper(GlueClient const * const clientThis, const StartImportLabelsTaskRunRequest& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartImportLabelsTaskRun(request), context);
}

void GlueClient::StartImportLabelsTaskRunAsync(const StartImportLabelsTaskRunRequest& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartImportLabelsTaskRunAsyncHelper( this, request, handler, context ); } );
}

StartJobRunOutcome GlueClient::StartJobRun(const StartJobRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobRunOutcomeCallable GlueClient::StartJobRunCallable(const StartJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartJobRunAsyncHelper(GlueClient const * const clientThis, const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartJobRun(request), context);
}

void GlueClient::StartJobRunAsync(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartJobRunAsyncHelper( this, request, handler, context ); } );
}

StartMLEvaluationTaskRunOutcome GlueClient::StartMLEvaluationTaskRun(const StartMLEvaluationTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMLEvaluationTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMLEvaluationTaskRunOutcomeCallable GlueClient::StartMLEvaluationTaskRunCallable(const StartMLEvaluationTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMLEvaluationTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMLEvaluationTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartMLEvaluationTaskRunAsyncHelper(GlueClient const * const clientThis, const StartMLEvaluationTaskRunRequest& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMLEvaluationTaskRun(request), context);
}

void GlueClient::StartMLEvaluationTaskRunAsync(const StartMLEvaluationTaskRunRequest& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartMLEvaluationTaskRunAsyncHelper( this, request, handler, context ); } );
}

StartMLLabelingSetGenerationTaskRunOutcome GlueClient::StartMLLabelingSetGenerationTaskRun(const StartMLLabelingSetGenerationTaskRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMLLabelingSetGenerationTaskRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMLLabelingSetGenerationTaskRunOutcomeCallable GlueClient::StartMLLabelingSetGenerationTaskRunCallable(const StartMLLabelingSetGenerationTaskRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMLLabelingSetGenerationTaskRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMLLabelingSetGenerationTaskRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartMLLabelingSetGenerationTaskRunAsyncHelper(GlueClient const * const clientThis, const StartMLLabelingSetGenerationTaskRunRequest& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMLLabelingSetGenerationTaskRun(request), context);
}

void GlueClient::StartMLLabelingSetGenerationTaskRunAsync(const StartMLLabelingSetGenerationTaskRunRequest& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartMLLabelingSetGenerationTaskRunAsyncHelper( this, request, handler, context ); } );
}

StartTriggerOutcome GlueClient::StartTrigger(const StartTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTriggerOutcomeCallable GlueClient::StartTriggerCallable(const StartTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartTriggerAsyncHelper(GlueClient const * const clientThis, const StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTrigger(request), context);
}

void GlueClient::StartTriggerAsync(const StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartTriggerAsyncHelper( this, request, handler, context ); } );
}

StartWorkflowRunOutcome GlueClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartWorkflowRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkflowRunOutcomeCallable GlueClient::StartWorkflowRunCallable(const StartWorkflowRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkflowRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkflowRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStartWorkflowRunAsyncHelper(GlueClient const * const clientThis, const StartWorkflowRunRequest& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartWorkflowRun(request), context);
}

void GlueClient::StartWorkflowRunAsync(const StartWorkflowRunRequest& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStartWorkflowRunAsyncHelper( this, request, handler, context ); } );
}

StopCrawlerOutcome GlueClient::StopCrawler(const StopCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCrawlerOutcomeCallable GlueClient::StopCrawlerCallable(const StopCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStopCrawlerAsyncHelper(GlueClient const * const clientThis, const StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopCrawler(request), context);
}

void GlueClient::StopCrawlerAsync(const StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStopCrawlerAsyncHelper( this, request, handler, context ); } );
}

StopCrawlerScheduleOutcome GlueClient::StopCrawlerSchedule(const StopCrawlerScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopCrawlerScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCrawlerScheduleOutcomeCallable GlueClient::StopCrawlerScheduleCallable(const StopCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStopCrawlerScheduleAsyncHelper(GlueClient const * const clientThis, const StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopCrawlerSchedule(request), context);
}

void GlueClient::StopCrawlerScheduleAsync(const StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStopCrawlerScheduleAsyncHelper( this, request, handler, context ); } );
}

StopSessionOutcome GlueClient::StopSession(const StopSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSessionOutcomeCallable GlueClient::StopSessionCallable(const StopSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStopSessionAsyncHelper(GlueClient const * const clientThis, const StopSessionRequest& request, const StopSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopSession(request), context);
}

void GlueClient::StopSessionAsync(const StopSessionRequest& request, const StopSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStopSessionAsyncHelper( this, request, handler, context ); } );
}

StopTriggerOutcome GlueClient::StopTrigger(const StopTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTriggerOutcomeCallable GlueClient::StopTriggerCallable(const StopTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStopTriggerAsyncHelper(GlueClient const * const clientThis, const StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTrigger(request), context);
}

void GlueClient::StopTriggerAsync(const StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStopTriggerAsyncHelper( this, request, handler, context ); } );
}

StopWorkflowRunOutcome GlueClient::StopWorkflowRun(const StopWorkflowRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopWorkflowRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkflowRunOutcomeCallable GlueClient::StopWorkflowRunCallable(const StopWorkflowRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopWorkflowRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopWorkflowRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientStopWorkflowRunAsyncHelper(GlueClient const * const clientThis, const StopWorkflowRunRequest& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopWorkflowRun(request), context);
}

void GlueClient::StopWorkflowRunAsync(const StopWorkflowRunRequest& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientStopWorkflowRunAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GlueClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GlueClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientTagResourceAsyncHelper(GlueClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GlueClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GlueClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GlueClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUntagResourceAsyncHelper(GlueClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GlueClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateBlueprintOutcome GlueClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBlueprintOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBlueprintOutcomeCallable GlueClient::UpdateBlueprintCallable(const UpdateBlueprintRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBlueprintOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBlueprint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateBlueprintAsyncHelper(GlueClient const * const clientThis, const UpdateBlueprintRequest& request, const UpdateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBlueprint(request), context);
}

void GlueClient::UpdateBlueprintAsync(const UpdateBlueprintRequest& request, const UpdateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateBlueprintAsyncHelper( this, request, handler, context ); } );
}

UpdateClassifierOutcome GlueClient::UpdateClassifier(const UpdateClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClassifierOutcomeCallable GlueClient::UpdateClassifierCallable(const UpdateClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateClassifierAsyncHelper(GlueClient const * const clientThis, const UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClassifier(request), context);
}

void GlueClient::UpdateClassifierAsync(const UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateClassifierAsyncHelper( this, request, handler, context ); } );
}

UpdateColumnStatisticsForPartitionOutcome GlueClient::UpdateColumnStatisticsForPartition(const UpdateColumnStatisticsForPartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateColumnStatisticsForPartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateColumnStatisticsForPartitionOutcomeCallable GlueClient::UpdateColumnStatisticsForPartitionCallable(const UpdateColumnStatisticsForPartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateColumnStatisticsForPartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateColumnStatisticsForPartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateColumnStatisticsForPartitionAsyncHelper(GlueClient const * const clientThis, const UpdateColumnStatisticsForPartitionRequest& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateColumnStatisticsForPartition(request), context);
}

void GlueClient::UpdateColumnStatisticsForPartitionAsync(const UpdateColumnStatisticsForPartitionRequest& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateColumnStatisticsForPartitionAsyncHelper( this, request, handler, context ); } );
}

UpdateColumnStatisticsForTableOutcome GlueClient::UpdateColumnStatisticsForTable(const UpdateColumnStatisticsForTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateColumnStatisticsForTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateColumnStatisticsForTableOutcomeCallable GlueClient::UpdateColumnStatisticsForTableCallable(const UpdateColumnStatisticsForTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateColumnStatisticsForTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateColumnStatisticsForTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateColumnStatisticsForTableAsyncHelper(GlueClient const * const clientThis, const UpdateColumnStatisticsForTableRequest& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateColumnStatisticsForTable(request), context);
}

void GlueClient::UpdateColumnStatisticsForTableAsync(const UpdateColumnStatisticsForTableRequest& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateColumnStatisticsForTableAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectionOutcome GlueClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionOutcomeCallable GlueClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateConnectionAsyncHelper(GlueClient const * const clientThis, const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnection(request), context);
}

void GlueClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateConnectionAsyncHelper( this, request, handler, context ); } );
}

UpdateCrawlerOutcome GlueClient::UpdateCrawler(const UpdateCrawlerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCrawlerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCrawlerOutcomeCallable GlueClient::UpdateCrawlerCallable(const UpdateCrawlerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCrawlerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCrawler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateCrawlerAsyncHelper(GlueClient const * const clientThis, const UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCrawler(request), context);
}

void GlueClient::UpdateCrawlerAsync(const UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateCrawlerAsyncHelper( this, request, handler, context ); } );
}

UpdateCrawlerScheduleOutcome GlueClient::UpdateCrawlerSchedule(const UpdateCrawlerScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCrawlerScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCrawlerScheduleOutcomeCallable GlueClient::UpdateCrawlerScheduleCallable(const UpdateCrawlerScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCrawlerScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCrawlerSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateCrawlerScheduleAsyncHelper(GlueClient const * const clientThis, const UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCrawlerSchedule(request), context);
}

void GlueClient::UpdateCrawlerScheduleAsync(const UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateCrawlerScheduleAsyncHelper( this, request, handler, context ); } );
}

UpdateDatabaseOutcome GlueClient::UpdateDatabase(const UpdateDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatabaseOutcomeCallable GlueClient::UpdateDatabaseCallable(const UpdateDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateDatabaseAsyncHelper(GlueClient const * const clientThis, const UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDatabase(request), context);
}

void GlueClient::UpdateDatabaseAsync(const UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateDatabaseAsyncHelper( this, request, handler, context ); } );
}

UpdateDevEndpointOutcome GlueClient::UpdateDevEndpoint(const UpdateDevEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDevEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDevEndpointOutcomeCallable GlueClient::UpdateDevEndpointCallable(const UpdateDevEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateDevEndpointAsyncHelper(GlueClient const * const clientThis, const UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDevEndpoint(request), context);
}

void GlueClient::UpdateDevEndpointAsync(const UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateDevEndpointAsyncHelper( this, request, handler, context ); } );
}

UpdateJobOutcome GlueClient::UpdateJob(const UpdateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobOutcomeCallable GlueClient::UpdateJobCallable(const UpdateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateJobAsyncHelper(GlueClient const * const clientThis, const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJob(request), context);
}

void GlueClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateJobAsyncHelper( this, request, handler, context ); } );
}

UpdateMLTransformOutcome GlueClient::UpdateMLTransform(const UpdateMLTransformRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMLTransformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMLTransformOutcomeCallable GlueClient::UpdateMLTransformCallable(const UpdateMLTransformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMLTransformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMLTransform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateMLTransformAsyncHelper(GlueClient const * const clientThis, const UpdateMLTransformRequest& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMLTransform(request), context);
}

void GlueClient::UpdateMLTransformAsync(const UpdateMLTransformRequest& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateMLTransformAsyncHelper( this, request, handler, context ); } );
}

UpdatePartitionOutcome GlueClient::UpdatePartition(const UpdatePartitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePartitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePartitionOutcomeCallable GlueClient::UpdatePartitionCallable(const UpdatePartitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePartitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePartition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdatePartitionAsyncHelper(GlueClient const * const clientThis, const UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePartition(request), context);
}

void GlueClient::UpdatePartitionAsync(const UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdatePartitionAsyncHelper( this, request, handler, context ); } );
}

UpdateRegistryOutcome GlueClient::UpdateRegistry(const UpdateRegistryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegistryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegistryOutcomeCallable GlueClient::UpdateRegistryCallable(const UpdateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateRegistryAsyncHelper(GlueClient const * const clientThis, const UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegistry(request), context);
}

void GlueClient::UpdateRegistryAsync(const UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateRegistryAsyncHelper( this, request, handler, context ); } );
}

UpdateSchemaOutcome GlueClient::UpdateSchema(const UpdateSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSchemaOutcomeCallable GlueClient::UpdateSchemaCallable(const UpdateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateSchemaAsyncHelper(GlueClient const * const clientThis, const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSchema(request), context);
}

void GlueClient::UpdateSchemaAsync(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateSchemaAsyncHelper( this, request, handler, context ); } );
}

UpdateTableOutcome GlueClient::UpdateTable(const UpdateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableOutcomeCallable GlueClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateTableAsyncHelper(GlueClient const * const clientThis, const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTable(request), context);
}

void GlueClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateTableAsyncHelper( this, request, handler, context ); } );
}

UpdateTriggerOutcome GlueClient::UpdateTrigger(const UpdateTriggerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTriggerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTriggerOutcomeCallable GlueClient::UpdateTriggerCallable(const UpdateTriggerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTriggerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrigger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateTriggerAsyncHelper(GlueClient const * const clientThis, const UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrigger(request), context);
}

void GlueClient::UpdateTriggerAsync(const UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateTriggerAsyncHelper( this, request, handler, context ); } );
}

UpdateUserDefinedFunctionOutcome GlueClient::UpdateUserDefinedFunction(const UpdateUserDefinedFunctionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserDefinedFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserDefinedFunctionOutcomeCallable GlueClient::UpdateUserDefinedFunctionCallable(const UpdateUserDefinedFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserDefinedFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserDefinedFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateUserDefinedFunctionAsyncHelper(GlueClient const * const clientThis, const UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserDefinedFunction(request), context);
}

void GlueClient::UpdateUserDefinedFunctionAsync(const UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateUserDefinedFunctionAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkflowOutcome GlueClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowOutcomeCallable GlueClient::UpdateWorkflowCallable(const UpdateWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueClientUpdateWorkflowAsyncHelper(GlueClient const * const clientThis, const UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkflow(request), context);
}

void GlueClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueClientUpdateWorkflowAsyncHelper( this, request, handler, context ); } );
}

