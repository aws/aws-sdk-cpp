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

#include <aws/polly/PollyClient.h>
#include <aws/polly/PollyEndpoint.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/model/DeleteLexiconRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/polly/model/GetSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/ListLexiconsRequest.h>
#include <aws/polly/model/ListSpeechSynthesisTasksRequest.h>
#include <aws/polly/model/PutLexiconRequest.h>
#include <aws/polly/model/StartSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "polly";
static const char* ALLOCATION_TAG = "PollyClient";


PollyClient::PollyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PollyClient::PollyClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PollyClient::PollyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PollyClient::~PollyClient()
{
}

void PollyClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PollyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PollyClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteLexiconOutcome PollyClient::DeleteLexicon(const DeleteLexiconRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLexicon", "Required field: Name, is not set");
    return DeleteLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/lexicons/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLexiconOutcome(DeleteLexiconResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLexiconOutcome(outcome.GetError());
  }
}

DeleteLexiconOutcomeCallable PollyClient::DeleteLexiconCallable(const DeleteLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::DeleteLexiconAsync(const DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLexiconAsyncHelper( request, handler, context ); } );
}

void PollyClient::DeleteLexiconAsyncHelper(const DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLexicon(request), context);
}

DescribeVoicesOutcome PollyClient::DescribeVoices(const DescribeVoicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/voices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVoicesOutcome(DescribeVoicesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVoicesOutcome(outcome.GetError());
  }
}

DescribeVoicesOutcomeCallable PollyClient::DescribeVoicesCallable(const DescribeVoicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVoicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVoices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::DescribeVoicesAsync(const DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVoicesAsyncHelper( request, handler, context ); } );
}

void PollyClient::DescribeVoicesAsyncHelper(const DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVoices(request), context);
}

GetLexiconOutcome PollyClient::GetLexicon(const GetLexiconRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLexicon", "Required field: Name, is not set");
    return GetLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/lexicons/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLexiconOutcome(GetLexiconResult(outcome.GetResult()));
  }
  else
  {
    return GetLexiconOutcome(outcome.GetError());
  }
}

GetLexiconOutcomeCallable PollyClient::GetLexiconCallable(const GetLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::GetLexiconAsync(const GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLexiconAsyncHelper( request, handler, context ); } );
}

void PollyClient::GetLexiconAsyncHelper(const GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLexicon(request), context);
}

GetSpeechSynthesisTaskOutcome PollyClient::GetSpeechSynthesisTask(const GetSpeechSynthesisTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeechSynthesisTask", "Required field: TaskId, is not set");
    return GetSpeechSynthesisTaskOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/synthesisTasks/";
  ss << request.GetTaskId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSpeechSynthesisTaskOutcome(GetSpeechSynthesisTaskResult(outcome.GetResult()));
  }
  else
  {
    return GetSpeechSynthesisTaskOutcome(outcome.GetError());
  }
}

GetSpeechSynthesisTaskOutcomeCallable PollyClient::GetSpeechSynthesisTaskCallable(const GetSpeechSynthesisTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSpeechSynthesisTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSpeechSynthesisTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::GetSpeechSynthesisTaskAsync(const GetSpeechSynthesisTaskRequest& request, const GetSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSpeechSynthesisTaskAsyncHelper( request, handler, context ); } );
}

void PollyClient::GetSpeechSynthesisTaskAsyncHelper(const GetSpeechSynthesisTaskRequest& request, const GetSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSpeechSynthesisTask(request), context);
}

ListLexiconsOutcome PollyClient::ListLexicons(const ListLexiconsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/lexicons";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLexiconsOutcome(ListLexiconsResult(outcome.GetResult()));
  }
  else
  {
    return ListLexiconsOutcome(outcome.GetError());
  }
}

ListLexiconsOutcomeCallable PollyClient::ListLexiconsCallable(const ListLexiconsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLexiconsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLexicons(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::ListLexiconsAsync(const ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLexiconsAsyncHelper( request, handler, context ); } );
}

void PollyClient::ListLexiconsAsyncHelper(const ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLexicons(request), context);
}

ListSpeechSynthesisTasksOutcome PollyClient::ListSpeechSynthesisTasks(const ListSpeechSynthesisTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/synthesisTasks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSpeechSynthesisTasksOutcome(ListSpeechSynthesisTasksResult(outcome.GetResult()));
  }
  else
  {
    return ListSpeechSynthesisTasksOutcome(outcome.GetError());
  }
}

ListSpeechSynthesisTasksOutcomeCallable PollyClient::ListSpeechSynthesisTasksCallable(const ListSpeechSynthesisTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSpeechSynthesisTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSpeechSynthesisTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::ListSpeechSynthesisTasksAsync(const ListSpeechSynthesisTasksRequest& request, const ListSpeechSynthesisTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSpeechSynthesisTasksAsyncHelper( request, handler, context ); } );
}

void PollyClient::ListSpeechSynthesisTasksAsyncHelper(const ListSpeechSynthesisTasksRequest& request, const ListSpeechSynthesisTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSpeechSynthesisTasks(request), context);
}

PutLexiconOutcome PollyClient::PutLexicon(const PutLexiconRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLexicon", "Required field: Name, is not set");
    return PutLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/lexicons/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLexiconOutcome(PutLexiconResult(outcome.GetResult()));
  }
  else
  {
    return PutLexiconOutcome(outcome.GetError());
  }
}

PutLexiconOutcomeCallable PollyClient::PutLexiconCallable(const PutLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::PutLexiconAsync(const PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLexiconAsyncHelper( request, handler, context ); } );
}

void PollyClient::PutLexiconAsyncHelper(const PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLexicon(request), context);
}

StartSpeechSynthesisTaskOutcome PollyClient::StartSpeechSynthesisTask(const StartSpeechSynthesisTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/synthesisTasks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSpeechSynthesisTaskOutcome(StartSpeechSynthesisTaskResult(outcome.GetResult()));
  }
  else
  {
    return StartSpeechSynthesisTaskOutcome(outcome.GetError());
  }
}

StartSpeechSynthesisTaskOutcomeCallable PollyClient::StartSpeechSynthesisTaskCallable(const StartSpeechSynthesisTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSpeechSynthesisTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSpeechSynthesisTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::StartSpeechSynthesisTaskAsync(const StartSpeechSynthesisTaskRequest& request, const StartSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSpeechSynthesisTaskAsyncHelper( request, handler, context ); } );
}

void PollyClient::StartSpeechSynthesisTaskAsyncHelper(const StartSpeechSynthesisTaskRequest& request, const StartSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSpeechSynthesisTask(request), context);
}

SynthesizeSpeechOutcome PollyClient::SynthesizeSpeech(const SynthesizeSpeechRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/speech";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SynthesizeSpeechOutcome(SynthesizeSpeechResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return SynthesizeSpeechOutcome(outcome.GetError());
  }
}

SynthesizeSpeechOutcomeCallable PollyClient::SynthesizeSpeechCallable(const SynthesizeSpeechRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SynthesizeSpeechOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SynthesizeSpeech(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::SynthesizeSpeechAsync(const SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SynthesizeSpeechAsyncHelper( request, handler, context ); } );
}

void PollyClient::SynthesizeSpeechAsyncHelper(const SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SynthesizeSpeech(request), context);
}

