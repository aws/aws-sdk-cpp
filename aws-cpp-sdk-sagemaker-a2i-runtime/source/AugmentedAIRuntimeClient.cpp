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

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpoint.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrorMarshaller.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AugmentedAIRuntime;
using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sagemaker";
static const char* ALLOCATION_TAG = "AugmentedAIRuntimeClient";


AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AugmentedAIRuntimeClient::~AugmentedAIRuntimeClient()
{
}

void AugmentedAIRuntimeClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AugmentedAIRuntimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AugmentedAIRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteHumanLoopOutcome AugmentedAIRuntimeClient::DeleteHumanLoop(const DeleteHumanLoopRequest& request) const
{
  if (!request.HumanLoopNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHumanLoop", "Required field: HumanLoopName, is not set");
    return DeleteHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/human-loops/";
  ss << request.GetHumanLoopName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteHumanLoopOutcome(DeleteHumanLoopResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHumanLoopOutcome(outcome.GetError());
  }
}

DeleteHumanLoopOutcomeCallable AugmentedAIRuntimeClient::DeleteHumanLoopCallable(const DeleteHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::DeleteHumanLoopAsync(const DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHumanLoopAsyncHelper( request, handler, context ); } );
}

void AugmentedAIRuntimeClient::DeleteHumanLoopAsyncHelper(const DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHumanLoop(request), context);
}

DescribeHumanLoopOutcome AugmentedAIRuntimeClient::DescribeHumanLoop(const DescribeHumanLoopRequest& request) const
{
  if (!request.HumanLoopNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeHumanLoop", "Required field: HumanLoopName, is not set");
    return DescribeHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/human-loops/";
  ss << request.GetHumanLoopName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHumanLoopOutcome(DescribeHumanLoopResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHumanLoopOutcome(outcome.GetError());
  }
}

DescribeHumanLoopOutcomeCallable AugmentedAIRuntimeClient::DescribeHumanLoopCallable(const DescribeHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::DescribeHumanLoopAsync(const DescribeHumanLoopRequest& request, const DescribeHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHumanLoopAsyncHelper( request, handler, context ); } );
}

void AugmentedAIRuntimeClient::DescribeHumanLoopAsyncHelper(const DescribeHumanLoopRequest& request, const DescribeHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHumanLoop(request), context);
}

ListHumanLoopsOutcome AugmentedAIRuntimeClient::ListHumanLoops(const ListHumanLoopsRequest& request) const
{
  if (!request.FlowDefinitionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHumanLoops", "Required field: FlowDefinitionArn, is not set");
    return ListHumanLoopsOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowDefinitionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/human-loops";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHumanLoopsOutcome(ListHumanLoopsResult(outcome.GetResult()));
  }
  else
  {
    return ListHumanLoopsOutcome(outcome.GetError());
  }
}

ListHumanLoopsOutcomeCallable AugmentedAIRuntimeClient::ListHumanLoopsCallable(const ListHumanLoopsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHumanLoopsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHumanLoops(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::ListHumanLoopsAsync(const ListHumanLoopsRequest& request, const ListHumanLoopsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHumanLoopsAsyncHelper( request, handler, context ); } );
}

void AugmentedAIRuntimeClient::ListHumanLoopsAsyncHelper(const ListHumanLoopsRequest& request, const ListHumanLoopsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHumanLoops(request), context);
}

StartHumanLoopOutcome AugmentedAIRuntimeClient::StartHumanLoop(const StartHumanLoopRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/human-loops";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartHumanLoopOutcome(StartHumanLoopResult(outcome.GetResult()));
  }
  else
  {
    return StartHumanLoopOutcome(outcome.GetError());
  }
}

StartHumanLoopOutcomeCallable AugmentedAIRuntimeClient::StartHumanLoopCallable(const StartHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::StartHumanLoopAsync(const StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartHumanLoopAsyncHelper( request, handler, context ); } );
}

void AugmentedAIRuntimeClient::StartHumanLoopAsyncHelper(const StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartHumanLoop(request), context);
}

StopHumanLoopOutcome AugmentedAIRuntimeClient::StopHumanLoop(const StopHumanLoopRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/human-loops/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopHumanLoopOutcome(StopHumanLoopResult(outcome.GetResult()));
  }
  else
  {
    return StopHumanLoopOutcome(outcome.GetError());
  }
}

StopHumanLoopOutcomeCallable AugmentedAIRuntimeClient::StopHumanLoopCallable(const StopHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::StopHumanLoopAsync(const StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopHumanLoopAsyncHelper( request, handler, context ); } );
}

void AugmentedAIRuntimeClient::StopHumanLoopAsyncHelper(const StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopHumanLoop(request), context);
}

