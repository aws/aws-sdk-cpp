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
#include <aws/polly/PollyClient.h>
#include <aws/polly/PollyEndpoint.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/model/DeleteLexiconRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/polly/model/ListLexiconsRequest.h>
#include <aws/polly/model/PutLexiconRequest.h>
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << PollyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteLexiconOutcome PollyClient::DeleteLexicon(const DeleteLexiconRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/v1/lexicons/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  Aws::StringStream ss;
  ss << m_uri << "/v1/voices";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  Aws::StringStream ss;
  ss << m_uri << "/v1/lexicons/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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

ListLexiconsOutcome PollyClient::ListLexicons(const ListLexiconsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/v1/lexicons";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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

PutLexiconOutcome PollyClient::PutLexicon(const PutLexiconRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/v1/lexicons/";
  ss << request.GetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
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

SynthesizeSpeechOutcome PollyClient::SynthesizeSpeech(const SynthesizeSpeechRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/v1/speech";

  StreamOutcome outcome = MakeRequestWithUnparsedResponse(ss.str(), request, HttpMethod::HTTP_POST);
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

