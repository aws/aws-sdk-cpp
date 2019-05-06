/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/logs/model/DeleteResourcePolicyRequest.h>
#include <aws/logs/model/DeleteRetentionPolicyRequest.h>
#include <aws/logs/model/DeleteSubscriptionFilterRequest.h>
#include <aws/logs/model/DescribeDestinationsRequest.h>
#include <aws/logs/model/DescribeExportTasksRequest.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/logs/model/DescribeMetricFiltersRequest.h>
#include <aws/logs/model/DescribeQueriesRequest.h>
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

static const char* SERVICE_NAME = "logs";
static const char* ALLOCATION_TAG = "CloudWatchLogsClient";


CloudWatchLogsClient::CloudWatchLogsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::~CloudWatchLogsClient()
{
}

void CloudWatchLogsClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateKmsKeyOutcome(NoResult());
  }
  else
  {
    return AssociateKmsKeyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateKmsKeyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::AssociateKmsKeyAsyncHelper(const AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateKmsKey(request), context);
}

CancelExportTaskOutcome CloudWatchLogsClient::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelExportTaskOutcome(NoResult());
  }
  else
  {
    return CancelExportTaskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelExportTaskAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::CancelExportTaskAsyncHelper(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelExportTask(request), context);
}

CreateExportTaskOutcome CloudWatchLogsClient::CreateExportTask(const CreateExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateExportTaskOutcome(CreateExportTaskResult(outcome.GetResult()));
  }
  else
  {
    return CreateExportTaskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateExportTaskAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::CreateExportTaskAsyncHelper(const CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExportTask(request), context);
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLogGroupOutcome(NoResult());
  }
  else
  {
    return CreateLogGroupOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateLogGroupAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::CreateLogGroupAsyncHelper(const CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLogGroup(request), context);
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLogStreamOutcome(NoResult());
  }
  else
  {
    return CreateLogStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateLogStreamAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::CreateLogStreamAsyncHelper(const CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLogStream(request), context);
}

DeleteDestinationOutcome CloudWatchLogsClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDestinationOutcome(NoResult());
  }
  else
  {
    return DeleteDestinationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDestinationAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteDestinationAsyncHelper(const DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDestination(request), context);
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLogGroupOutcome(NoResult());
  }
  else
  {
    return DeleteLogGroupOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLogGroupAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteLogGroupAsyncHelper(const DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLogGroup(request), context);
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLogStreamOutcome(NoResult());
  }
  else
  {
    return DeleteLogStreamOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLogStreamAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteLogStreamAsyncHelper(const DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLogStream(request), context);
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMetricFilterOutcome(NoResult());
  }
  else
  {
    return DeleteMetricFilterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMetricFilterAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteMetricFilterAsyncHelper(const DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMetricFilter(request), context);
}

DeleteResourcePolicyOutcome CloudWatchLogsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResourcePolicyOutcome(NoResult());
  }
  else
  {
    return DeleteResourcePolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRetentionPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteRetentionPolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRetentionPolicyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteRetentionPolicyAsyncHelper(const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRetentionPolicy(request), context);
}

DeleteSubscriptionFilterOutcome CloudWatchLogsClient::DeleteSubscriptionFilter(const DeleteSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSubscriptionFilterOutcome(NoResult());
  }
  else
  {
    return DeleteSubscriptionFilterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSubscriptionFilterAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DeleteSubscriptionFilterAsyncHelper(const DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubscriptionFilter(request), context);
}

DescribeDestinationsOutcome CloudWatchLogsClient::DescribeDestinations(const DescribeDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDestinationsOutcome(DescribeDestinationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDestinationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDestinationsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeDestinationsAsyncHelper(const DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDestinations(request), context);
}

DescribeExportTasksOutcome CloudWatchLogsClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeExportTasksOutcome(DescribeExportTasksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeExportTasksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExportTasksAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeExportTasksAsyncHelper(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExportTasks(request), context);
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLogGroupsOutcome(DescribeLogGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLogGroupsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLogGroupsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeLogGroupsAsyncHelper(const DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLogGroups(request), context);
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLogStreamsOutcome(DescribeLogStreamsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLogStreamsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLogStreamsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeLogStreamsAsyncHelper(const DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLogStreams(request), context);
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMetricFiltersOutcome(DescribeMetricFiltersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMetricFiltersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMetricFiltersAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeMetricFiltersAsyncHelper(const DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMetricFilters(request), context);
}

DescribeQueriesOutcome CloudWatchLogsClient::DescribeQueries(const DescribeQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeQueriesOutcome(DescribeQueriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeQueriesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeQueriesAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeQueriesAsyncHelper(const DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeQueries(request), context);
}

DescribeResourcePoliciesOutcome CloudWatchLogsClient::DescribeResourcePolicies(const DescribeResourcePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeResourcePoliciesOutcome(DescribeResourcePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResourcePoliciesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourcePoliciesAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeResourcePoliciesAsyncHelper(const DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourcePolicies(request), context);
}

DescribeSubscriptionFiltersOutcome CloudWatchLogsClient::DescribeSubscriptionFilters(const DescribeSubscriptionFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSubscriptionFiltersOutcome(DescribeSubscriptionFiltersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSubscriptionFiltersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubscriptionFiltersAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DescribeSubscriptionFiltersAsyncHelper(const DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubscriptionFilters(request), context);
}

DisassociateKmsKeyOutcome CloudWatchLogsClient::DisassociateKmsKey(const DisassociateKmsKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateKmsKeyOutcome(NoResult());
  }
  else
  {
    return DisassociateKmsKeyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateKmsKeyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::DisassociateKmsKeyAsyncHelper(const DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateKmsKey(request), context);
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return FilterLogEventsOutcome(FilterLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return FilterLogEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->FilterLogEventsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::FilterLogEventsAsyncHelper(const FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FilterLogEvents(request), context);
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLogEventsOutcome(GetLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return GetLogEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLogEventsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::GetLogEventsAsyncHelper(const GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLogEvents(request), context);
}

GetLogGroupFieldsOutcome CloudWatchLogsClient::GetLogGroupFields(const GetLogGroupFieldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLogGroupFieldsOutcome(GetLogGroupFieldsResult(outcome.GetResult()));
  }
  else
  {
    return GetLogGroupFieldsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLogGroupFieldsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::GetLogGroupFieldsAsyncHelper(const GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLogGroupFields(request), context);
}

GetLogRecordOutcome CloudWatchLogsClient::GetLogRecord(const GetLogRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLogRecordOutcome(GetLogRecordResult(outcome.GetResult()));
  }
  else
  {
    return GetLogRecordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLogRecordAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::GetLogRecordAsyncHelper(const GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLogRecord(request), context);
}

GetQueryResultsOutcome CloudWatchLogsClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetQueryResultsOutcome(GetQueryResultsResult(outcome.GetResult()));
  }
  else
  {
    return GetQueryResultsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryResultsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::GetQueryResultsAsyncHelper(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryResults(request), context);
}

ListTagsLogGroupOutcome CloudWatchLogsClient::ListTagsLogGroup(const ListTagsLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsLogGroupOutcome(ListTagsLogGroupResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsLogGroupOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsLogGroupAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::ListTagsLogGroupAsyncHelper(const ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsLogGroup(request), context);
}

PutDestinationOutcome CloudWatchLogsClient::PutDestination(const PutDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDestinationOutcome(PutDestinationResult(outcome.GetResult()));
  }
  else
  {
    return PutDestinationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutDestinationAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutDestinationAsyncHelper(const PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDestination(request), context);
}

PutDestinationPolicyOutcome CloudWatchLogsClient::PutDestinationPolicy(const PutDestinationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDestinationPolicyOutcome(NoResult());
  }
  else
  {
    return PutDestinationPolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutDestinationPolicyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutDestinationPolicyAsyncHelper(const PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDestinationPolicy(request), context);
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLogEventsOutcome(PutLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return PutLogEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutLogEventsAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutLogEventsAsyncHelper(const PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLogEvents(request), context);
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutMetricFilterOutcome(NoResult());
  }
  else
  {
    return PutMetricFilterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutMetricFilterAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutMetricFilterAsyncHelper(const PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMetricFilter(request), context);
}

PutResourcePolicyOutcome CloudWatchLogsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutResourcePolicyOutcome(PutResourcePolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutResourcePolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRetentionPolicyOutcome(NoResult());
  }
  else
  {
    return PutRetentionPolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutRetentionPolicyAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutRetentionPolicyAsyncHelper(const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRetentionPolicy(request), context);
}

PutSubscriptionFilterOutcome CloudWatchLogsClient::PutSubscriptionFilter(const PutSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutSubscriptionFilterOutcome(NoResult());
  }
  else
  {
    return PutSubscriptionFilterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutSubscriptionFilterAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::PutSubscriptionFilterAsyncHelper(const PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSubscriptionFilter(request), context);
}

StartQueryOutcome CloudWatchLogsClient::StartQuery(const StartQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartQueryOutcome(StartQueryResult(outcome.GetResult()));
  }
  else
  {
    return StartQueryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartQueryAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::StartQueryAsyncHelper(const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartQuery(request), context);
}

StopQueryOutcome CloudWatchLogsClient::StopQuery(const StopQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopQueryOutcome(StopQueryResult(outcome.GetResult()));
  }
  else
  {
    return StopQueryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopQueryAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::StopQueryAsyncHelper(const StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopQuery(request), context);
}

TagLogGroupOutcome CloudWatchLogsClient::TagLogGroup(const TagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagLogGroupOutcome(NoResult());
  }
  else
  {
    return TagLogGroupOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagLogGroupAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::TagLogGroupAsyncHelper(const TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagLogGroup(request), context);
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestMetricFilterOutcome(TestMetricFilterResult(outcome.GetResult()));
  }
  else
  {
    return TestMetricFilterOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TestMetricFilterAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::TestMetricFilterAsyncHelper(const TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestMetricFilter(request), context);
}

UntagLogGroupOutcome CloudWatchLogsClient::UntagLogGroup(const UntagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagLogGroupOutcome(NoResult());
  }
  else
  {
    return UntagLogGroupOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagLogGroupAsyncHelper( request, handler, context ); } );
}

void CloudWatchLogsClient::UntagLogGroupAsyncHelper(const UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagLogGroup(request), context);
}

