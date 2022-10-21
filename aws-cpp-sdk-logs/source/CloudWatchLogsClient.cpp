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

#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/CloudWatchLogsEndpoint.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/logs/model/AssociateKmsKeyRequest.h>
#include <aws/logs/model/CancelExportTaskRequest.h>
#include <aws/logs/model/CreateExportTaskRequest.h>
#include <aws/logs/model/CreateLogGroupRequest.h>
#include <aws/logs/model/CreateLogStreamRequest.h>
#include <aws/logs/model/DeleteDestinationRequest.h>
#include <aws/logs/model/DeleteLogGroupRequest.h>
#include <aws/logs/model/DeleteLogStreamRequest.h>
#include <aws/logs/model/DeleteMetricFilterRequest.h>
#include <aws/logs/model/DeleteQueryDefinitionRequest.h>
#include <aws/logs/model/DeleteResourcePolicyRequest.h>
#include <aws/logs/model/DeleteRetentionPolicyRequest.h>
#include <aws/logs/model/DeleteSubscriptionFilterRequest.h>
#include <aws/logs/model/DescribeDestinationsRequest.h>
#include <aws/logs/model/DescribeExportTasksRequest.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/logs/model/DescribeMetricFiltersRequest.h>
#include <aws/logs/model/DescribeQueriesRequest.h>
#include <aws/logs/model/DescribeQueryDefinitionsRequest.h>
#include <aws/logs/model/DescribeResourcePoliciesRequest.h>
#include <aws/logs/model/DescribeSubscriptionFiltersRequest.h>
#include <aws/logs/model/DisassociateKmsKeyRequest.h>
#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/GetLogGroupFieldsRequest.h>
#include <aws/logs/model/GetLogRecordRequest.h>
#include <aws/logs/model/GetQueryResultsRequest.h>
#include <aws/logs/model/ListTagsLogGroupRequest.h>
#include <aws/logs/model/PutDestinationRequest.h>
#include <aws/logs/model/PutDestinationPolicyRequest.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/logs/model/PutMetricFilterRequest.h>
#include <aws/logs/model/PutQueryDefinitionRequest.h>
#include <aws/logs/model/PutResourcePolicyRequest.h>
#include <aws/logs/model/PutRetentionPolicyRequest.h>
#include <aws/logs/model/PutSubscriptionFilterRequest.h>
#include <aws/logs/model/StartQueryRequest.h>
#include <aws/logs/model/StopQueryRequest.h>
#include <aws/logs/model/TagLogGroupRequest.h>
#include <aws/logs/model/TestMetricFilterRequest.h>
#include <aws/logs/model/UntagLogGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* CloudWatchLogsClient::SERVICE_NAME = "logs";
const char* CloudWatchLogsClient::ALLOCATION_TAG = "CloudWatchLogsClient";

CloudWatchLogsClient::CloudWatchLogsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::~CloudWatchLogsClient()
{
}

void CloudWatchLogsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudWatch Logs");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudWatchLogsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudWatchLogsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateKmsKeyOutcome CloudWatchLogsClient::AssociateKmsKey(const AssociateKmsKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateKmsKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateKmsKeyOutcomeCallable CloudWatchLogsClient::AssociateKmsKeyCallable(const AssociateKmsKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateKmsKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateKmsKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::AssociateKmsKeyAsync(const AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateKmsKey(request), context);
    } );
}

CancelExportTaskOutcome CloudWatchLogsClient::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelExportTaskOutcomeCallable CloudWatchLogsClient::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelExportTask(request), context);
    } );
}

CreateExportTaskOutcome CloudWatchLogsClient::CreateExportTask(const CreateExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExportTaskOutcomeCallable CloudWatchLogsClient::CreateExportTaskCallable(const CreateExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::CreateExportTaskAsync(const CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExportTask(request), context);
    } );
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogGroupOutcomeCallable CloudWatchLogsClient::CreateLogGroupCallable(const CreateLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::CreateLogGroupAsync(const CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLogGroup(request), context);
    } );
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogStreamOutcomeCallable CloudWatchLogsClient::CreateLogStreamCallable(const CreateLogStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::CreateLogStreamAsync(const CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLogStream(request), context);
    } );
}

DeleteDestinationOutcome CloudWatchLogsClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDestinationOutcomeCallable CloudWatchLogsClient::DeleteDestinationCallable(const DeleteDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteDestinationAsync(const DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDestination(request), context);
    } );
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogGroupOutcomeCallable CloudWatchLogsClient::DeleteLogGroupCallable(const DeleteLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteLogGroupAsync(const DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLogGroup(request), context);
    } );
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogStreamOutcomeCallable CloudWatchLogsClient::DeleteLogStreamCallable(const DeleteLogStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteLogStreamAsync(const DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLogStream(request), context);
    } );
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMetricFilterOutcomeCallable CloudWatchLogsClient::DeleteMetricFilterCallable(const DeleteMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteMetricFilterAsync(const DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMetricFilter(request), context);
    } );
}

DeleteQueryDefinitionOutcome CloudWatchLogsClient::DeleteQueryDefinition(const DeleteQueryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteQueryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueryDefinitionOutcomeCallable CloudWatchLogsClient::DeleteQueryDefinitionCallable(const DeleteQueryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteQueryDefinitionAsync(const DeleteQueryDefinitionRequest& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteQueryDefinition(request), context);
    } );
}

DeleteResourcePolicyOutcome CloudWatchLogsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable CloudWatchLogsClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRetentionPolicyOutcomeCallable CloudWatchLogsClient::DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRetentionPolicy(request), context);
    } );
}

DeleteSubscriptionFilterOutcome CloudWatchLogsClient::DeleteSubscriptionFilter(const DeleteSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSubscriptionFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriptionFilterOutcomeCallable CloudWatchLogsClient::DeleteSubscriptionFilterCallable(const DeleteSubscriptionFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriptionFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriptionFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DeleteSubscriptionFilterAsync(const DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSubscriptionFilter(request), context);
    } );
}

DescribeDestinationsOutcome CloudWatchLogsClient::DescribeDestinations(const DescribeDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDestinationsOutcomeCallable CloudWatchLogsClient::DescribeDestinationsCallable(const DescribeDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeDestinationsAsync(const DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDestinations(request), context);
    } );
}

DescribeExportTasksOutcome CloudWatchLogsClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportTasksOutcomeCallable CloudWatchLogsClient::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExportTasks(request), context);
    } );
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLogGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLogGroupsOutcomeCallable CloudWatchLogsClient::DescribeLogGroupsCallable(const DescribeLogGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLogGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLogGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeLogGroupsAsync(const DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLogGroups(request), context);
    } );
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLogStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLogStreamsOutcomeCallable CloudWatchLogsClient::DescribeLogStreamsCallable(const DescribeLogStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLogStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLogStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeLogStreamsAsync(const DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLogStreams(request), context);
    } );
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMetricFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricFiltersOutcomeCallable CloudWatchLogsClient::DescribeMetricFiltersCallable(const DescribeMetricFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeMetricFiltersAsync(const DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMetricFilters(request), context);
    } );
}

DescribeQueriesOutcome CloudWatchLogsClient::DescribeQueries(const DescribeQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueriesOutcomeCallable CloudWatchLogsClient::DescribeQueriesCallable(const DescribeQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeQueriesAsync(const DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeQueries(request), context);
    } );
}

DescribeQueryDefinitionsOutcome CloudWatchLogsClient::DescribeQueryDefinitions(const DescribeQueryDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQueryDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueryDefinitionsOutcomeCallable CloudWatchLogsClient::DescribeQueryDefinitionsCallable(const DescribeQueryDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueryDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQueryDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeQueryDefinitionsAsync(const DescribeQueryDefinitionsRequest& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeQueryDefinitions(request), context);
    } );
}

DescribeResourcePoliciesOutcome CloudWatchLogsClient::DescribeResourcePolicies(const DescribeResourcePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourcePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePoliciesOutcomeCallable CloudWatchLogsClient::DescribeResourcePoliciesCallable(const DescribeResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeResourcePoliciesAsync(const DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResourcePolicies(request), context);
    } );
}

DescribeSubscriptionFiltersOutcome CloudWatchLogsClient::DescribeSubscriptionFilters(const DescribeSubscriptionFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubscriptionFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscriptionFiltersOutcomeCallable CloudWatchLogsClient::DescribeSubscriptionFiltersCallable(const DescribeSubscriptionFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscriptionFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscriptionFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DescribeSubscriptionFiltersAsync(const DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSubscriptionFilters(request), context);
    } );
}

DisassociateKmsKeyOutcome CloudWatchLogsClient::DisassociateKmsKey(const DisassociateKmsKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateKmsKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateKmsKeyOutcomeCallable CloudWatchLogsClient::DisassociateKmsKeyCallable(const DisassociateKmsKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateKmsKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateKmsKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::DisassociateKmsKeyAsync(const DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateKmsKey(request), context);
    } );
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FilterLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

FilterLogEventsOutcomeCallable CloudWatchLogsClient::FilterLogEventsCallable(const FilterLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FilterLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FilterLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::FilterLogEventsAsync(const FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, FilterLogEvents(request), context);
    } );
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogEventsOutcomeCallable CloudWatchLogsClient::GetLogEventsCallable(const GetLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::GetLogEventsAsync(const GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLogEvents(request), context);
    } );
}

GetLogGroupFieldsOutcome CloudWatchLogsClient::GetLogGroupFields(const GetLogGroupFieldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogGroupFieldsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogGroupFieldsOutcomeCallable CloudWatchLogsClient::GetLogGroupFieldsCallable(const GetLogGroupFieldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogGroupFieldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogGroupFields(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::GetLogGroupFieldsAsync(const GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLogGroupFields(request), context);
    } );
}

GetLogRecordOutcome CloudWatchLogsClient::GetLogRecord(const GetLogRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogRecordOutcomeCallable CloudWatchLogsClient::GetLogRecordCallable(const GetLogRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::GetLogRecordAsync(const GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLogRecord(request), context);
    } );
}

GetQueryResultsOutcome CloudWatchLogsClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryResultsOutcomeCallable CloudWatchLogsClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetQueryResults(request), context);
    } );
}

ListTagsLogGroupOutcome CloudWatchLogsClient::ListTagsLogGroup(const ListTagsLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsLogGroupOutcomeCallable CloudWatchLogsClient::ListTagsLogGroupCallable(const ListTagsLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::ListTagsLogGroupAsync(const ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsLogGroup(request), context);
    } );
}

PutDestinationOutcome CloudWatchLogsClient::PutDestination(const PutDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDestinationOutcomeCallable CloudWatchLogsClient::PutDestinationCallable(const PutDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutDestinationAsync(const PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDestination(request), context);
    } );
}

PutDestinationPolicyOutcome CloudWatchLogsClient::PutDestinationPolicy(const PutDestinationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDestinationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDestinationPolicyOutcomeCallable CloudWatchLogsClient::PutDestinationPolicyCallable(const PutDestinationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDestinationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDestinationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutDestinationPolicyAsync(const PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDestinationPolicy(request), context);
    } );
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLogEventsOutcomeCallable CloudWatchLogsClient::PutLogEventsCallable(const PutLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutLogEventsAsync(const PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLogEvents(request), context);
    } );
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMetricFilterOutcomeCallable CloudWatchLogsClient::PutMetricFilterCallable(const PutMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutMetricFilterAsync(const PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetricFilter(request), context);
    } );
}

PutQueryDefinitionOutcome CloudWatchLogsClient::PutQueryDefinition(const PutQueryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutQueryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutQueryDefinitionOutcomeCallable CloudWatchLogsClient::PutQueryDefinitionCallable(const PutQueryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutQueryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutQueryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutQueryDefinitionAsync(const PutQueryDefinitionRequest& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutQueryDefinition(request), context);
    } );
}

PutResourcePolicyOutcome CloudWatchLogsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable CloudWatchLogsClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionPolicyOutcomeCallable CloudWatchLogsClient::PutRetentionPolicyCallable(const PutRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutRetentionPolicyAsync(const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRetentionPolicy(request), context);
    } );
}

PutSubscriptionFilterOutcome CloudWatchLogsClient::PutSubscriptionFilter(const PutSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutSubscriptionFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSubscriptionFilterOutcomeCallable CloudWatchLogsClient::PutSubscriptionFilterCallable(const PutSubscriptionFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSubscriptionFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSubscriptionFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::PutSubscriptionFilterAsync(const PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSubscriptionFilter(request), context);
    } );
}

StartQueryOutcome CloudWatchLogsClient::StartQuery(const StartQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryOutcomeCallable CloudWatchLogsClient::StartQueryCallable(const StartQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::StartQueryAsync(const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartQuery(request), context);
    } );
}

StopQueryOutcome CloudWatchLogsClient::StopQuery(const StopQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopQueryOutcomeCallable CloudWatchLogsClient::StopQueryCallable(const StopQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::StopQueryAsync(const StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopQuery(request), context);
    } );
}

TagLogGroupOutcome CloudWatchLogsClient::TagLogGroup(const TagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagLogGroupOutcomeCallable CloudWatchLogsClient::TagLogGroupCallable(const TagLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::TagLogGroupAsync(const TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagLogGroup(request), context);
    } );
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestMetricFilterOutcomeCallable CloudWatchLogsClient::TestMetricFilterCallable(const TestMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::TestMetricFilterAsync(const TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestMetricFilter(request), context);
    } );
}

UntagLogGroupOutcome CloudWatchLogsClient::UntagLogGroup(const UntagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagLogGroupOutcomeCallable CloudWatchLogsClient::UntagLogGroupCallable(const UntagLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClient::UntagLogGroupAsync(const UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagLogGroup(request), context);
    } );
}

