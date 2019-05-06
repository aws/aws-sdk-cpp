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

#include <aws/translate/TranslateClient.h>
#include <aws/translate/TranslateEndpoint.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/model/DeleteTerminologyRequest.h>
#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/TranslateTextRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Translate;
using namespace Aws::Translate::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "translate";
static const char* ALLOCATION_TAG = "TranslateClient";


TranslateClient::TranslateClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::~TranslateClient()
{
}

void TranslateClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranslateEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranslateClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteTerminologyOutcome TranslateClient::DeleteTerminology(const DeleteTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTerminologyOutcome(NoResult());
  }
  else
  {
    return DeleteTerminologyOutcome(outcome.GetError());
  }
}

DeleteTerminologyOutcomeCallable TranslateClient::DeleteTerminologyCallable(const DeleteTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::DeleteTerminologyAsync(const DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTerminologyAsyncHelper( request, handler, context ); } );
}

void TranslateClient::DeleteTerminologyAsyncHelper(const DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTerminology(request), context);
}

GetTerminologyOutcome TranslateClient::GetTerminology(const GetTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTerminologyOutcome(GetTerminologyResult(outcome.GetResult()));
  }
  else
  {
    return GetTerminologyOutcome(outcome.GetError());
  }
}

GetTerminologyOutcomeCallable TranslateClient::GetTerminologyCallable(const GetTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::GetTerminologyAsync(const GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTerminologyAsyncHelper( request, handler, context ); } );
}

void TranslateClient::GetTerminologyAsyncHelper(const GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTerminology(request), context);
}

ImportTerminologyOutcome TranslateClient::ImportTerminology(const ImportTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportTerminologyOutcome(ImportTerminologyResult(outcome.GetResult()));
  }
  else
  {
    return ImportTerminologyOutcome(outcome.GetError());
  }
}

ImportTerminologyOutcomeCallable TranslateClient::ImportTerminologyCallable(const ImportTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ImportTerminologyAsync(const ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportTerminologyAsyncHelper( request, handler, context ); } );
}

void TranslateClient::ImportTerminologyAsyncHelper(const ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportTerminology(request), context);
}

ListTerminologiesOutcome TranslateClient::ListTerminologies(const ListTerminologiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTerminologiesOutcome(ListTerminologiesResult(outcome.GetResult()));
  }
  else
  {
    return ListTerminologiesOutcome(outcome.GetError());
  }
}

ListTerminologiesOutcomeCallable TranslateClient::ListTerminologiesCallable(const ListTerminologiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTerminologiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTerminologies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListTerminologiesAsync(const ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTerminologiesAsyncHelper( request, handler, context ); } );
}

void TranslateClient::ListTerminologiesAsyncHelper(const ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTerminologies(request), context);
}

TranslateTextOutcome TranslateClient::TranslateText(const TranslateTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TranslateTextOutcome(TranslateTextResult(outcome.GetResult()));
  }
  else
  {
    return TranslateTextOutcome(outcome.GetError());
  }
}

TranslateTextOutcomeCallable TranslateClient::TranslateTextCallable(const TranslateTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TranslateTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TranslateText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::TranslateTextAsync(const TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TranslateTextAsyncHelper( request, handler, context ); } );
}

void TranslateClient::TranslateTextAsyncHelper(const TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TranslateText(request), context);
}

