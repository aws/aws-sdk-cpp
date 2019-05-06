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

#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/TranscribeServiceEndpoint.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/model/CreateVocabularyRequest.h>
#include <aws/transcribe/model/DeleteTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteVocabularyRequest.h>
#include <aws/transcribe/model/GetTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/transcribe/model/ListTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/transcribe/model/StartTranscriptionJobRequest.h>
#include <aws/transcribe/model/UpdateVocabularyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeService;
using namespace Aws::TranscribeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "transcribe";
static const char* ALLOCATION_TAG = "TranscribeServiceClient";


TranscribeServiceClient::TranscribeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::~TranscribeServiceClient()
{
}

void TranscribeServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranscribeServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranscribeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateVocabularyOutcome TranscribeServiceClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVocabularyOutcome(CreateVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return CreateVocabularyOutcome(outcome.GetError());
  }
}

CreateVocabularyOutcomeCallable TranscribeServiceClient::CreateVocabularyCallable(const CreateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::CreateVocabularyAsyncHelper(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVocabulary(request), context);
}

DeleteTranscriptionJobOutcome TranscribeServiceClient::DeleteTranscriptionJob(const DeleteTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTranscriptionJobOutcome(NoResult());
  }
  else
  {
    return DeleteTranscriptionJobOutcome(outcome.GetError());
  }
}

DeleteTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteTranscriptionJobCallable(const DeleteTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteTranscriptionJobAsync(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteTranscriptionJobAsyncHelper(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTranscriptionJob(request), context);
}

DeleteVocabularyOutcome TranscribeServiceClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVocabularyOutcome(NoResult());
  }
  else
  {
    return DeleteVocabularyOutcome(outcome.GetError());
  }
}

DeleteVocabularyOutcomeCallable TranscribeServiceClient::DeleteVocabularyCallable(const DeleteVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteVocabularyAsyncHelper(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVocabulary(request), context);
}

GetTranscriptionJobOutcome TranscribeServiceClient::GetTranscriptionJob(const GetTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTranscriptionJobOutcome(GetTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return GetTranscriptionJobOutcome(outcome.GetError());
  }
}

GetTranscriptionJobOutcomeCallable TranscribeServiceClient::GetTranscriptionJobCallable(const GetTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetTranscriptionJobAsync(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetTranscriptionJobAsyncHelper(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTranscriptionJob(request), context);
}

GetVocabularyOutcome TranscribeServiceClient::GetVocabulary(const GetVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVocabularyOutcome(GetVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return GetVocabularyOutcome(outcome.GetError());
  }
}

GetVocabularyOutcomeCallable TranscribeServiceClient::GetVocabularyCallable(const GetVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetVocabularyAsync(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetVocabularyAsyncHelper(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVocabulary(request), context);
}

ListTranscriptionJobsOutcome TranscribeServiceClient::ListTranscriptionJobs(const ListTranscriptionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTranscriptionJobsOutcome(ListTranscriptionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListTranscriptionJobsOutcome(outcome.GetError());
  }
}

ListTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListTranscriptionJobsCallable(const ListTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListTranscriptionJobsAsync(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTranscriptionJobsAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListTranscriptionJobsAsyncHelper(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTranscriptionJobs(request), context);
}

ListVocabulariesOutcome TranscribeServiceClient::ListVocabularies(const ListVocabulariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVocabulariesOutcome(ListVocabulariesResult(outcome.GetResult()));
  }
  else
  {
    return ListVocabulariesOutcome(outcome.GetError());
  }
}

ListVocabulariesOutcomeCallable TranscribeServiceClient::ListVocabulariesCallable(const ListVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListVocabulariesAsync(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVocabulariesAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListVocabulariesAsyncHelper(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVocabularies(request), context);
}

StartTranscriptionJobOutcome TranscribeServiceClient::StartTranscriptionJob(const StartTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartTranscriptionJobOutcome(StartTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartTranscriptionJobOutcome(outcome.GetError());
  }
}

StartTranscriptionJobOutcomeCallable TranscribeServiceClient::StartTranscriptionJobCallable(const StartTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartTranscriptionJobAsync(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::StartTranscriptionJobAsyncHelper(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTranscriptionJob(request), context);
}

UpdateVocabularyOutcome TranscribeServiceClient::UpdateVocabulary(const UpdateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVocabularyOutcome(UpdateVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVocabularyOutcome(outcome.GetError());
  }
}

UpdateVocabularyOutcomeCallable TranscribeServiceClient::UpdateVocabularyCallable(const UpdateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateVocabularyAsync(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::UpdateVocabularyAsyncHelper(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVocabulary(request), context);
}

