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

#include <aws/cloudtrail/CloudTrailClient.h>
#include <aws/cloudtrail/CloudTrailEndpoint.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/cloudtrail/model/DeleteTrailRequest.h>
#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/cloudtrail/model/GetEventSelectorsRequest.h>
#include <aws/cloudtrail/model/GetTrailStatusRequest.h>
#include <aws/cloudtrail/model/ListPublicKeysRequest.h>
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/PutEventSelectorsRequest.h>
#include <aws/cloudtrail/model/RemoveTagsRequest.h>
#include <aws/cloudtrail/model/StartLoggingRequest.h>
#include <aws/cloudtrail/model/StopLoggingRequest.h>
#include <aws/cloudtrail/model/UpdateTrailRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudTrail;
using namespace Aws::CloudTrail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cloudtrail";
static const char* ALLOCATION_TAG = "CloudTrailClient";


CloudTrailClient::CloudTrailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::~CloudTrailClient()
{
}

void CloudTrailClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudTrailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudTrailClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsOutcome CloudTrailClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable CloudTrailClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTrailOutcome(CreateTrailResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrailOutcome(outcome.GetError());
  }
}

CreateTrailOutcomeCallable CloudTrailClient::CreateTrailCallable(const CreateTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::CreateTrailAsync(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::CreateTrailAsyncHelper(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrail(request), context);
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTrailOutcome(DeleteTrailResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrailOutcome(outcome.GetError());
  }
}

DeleteTrailOutcomeCallable CloudTrailClient::DeleteTrailCallable(const DeleteTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DeleteTrailAsync(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DeleteTrailAsyncHelper(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrail(request), context);
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTrailsOutcome(DescribeTrailsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrailsOutcome(outcome.GetError());
  }
}

DescribeTrailsOutcomeCallable CloudTrailClient::DescribeTrailsCallable(const DescribeTrailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::DescribeTrailsAsync(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrailsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::DescribeTrailsAsyncHelper(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrails(request), context);
}

GetEventSelectorsOutcome CloudTrailClient::GetEventSelectors(const GetEventSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEventSelectorsOutcome(GetEventSelectorsResult(outcome.GetResult()));
  }
  else
  {
    return GetEventSelectorsOutcome(outcome.GetError());
  }
}

GetEventSelectorsOutcomeCallable CloudTrailClient::GetEventSelectorsCallable(const GetEventSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetEventSelectorsAsync(const GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEventSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetEventSelectorsAsyncHelper(const GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventSelectors(request), context);
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTrailStatusOutcome(GetTrailStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetTrailStatusOutcome(outcome.GetError());
  }
}

GetTrailStatusOutcomeCallable CloudTrailClient::GetTrailStatusCallable(const GetTrailStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrailStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrailStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::GetTrailStatusAsync(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrailStatusAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::GetTrailStatusAsyncHelper(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrailStatus(request), context);
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPublicKeysOutcome(ListPublicKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeysOutcome(outcome.GetError());
  }
}

ListPublicKeysOutcomeCallable CloudTrailClient::ListPublicKeysCallable(const ListPublicKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListPublicKeysAsync(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeysAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListPublicKeysAsyncHelper(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys(request), context);
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable CloudTrailClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return LookupEventsOutcome(LookupEventsResult(outcome.GetResult()));
  }
  else
  {
    return LookupEventsOutcome(outcome.GetError());
  }
}

LookupEventsOutcomeCallable CloudTrailClient::LookupEventsCallable(const LookupEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LookupEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LookupEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::LookupEventsAsync(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LookupEventsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::LookupEventsAsyncHelper(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LookupEvents(request), context);
}

PutEventSelectorsOutcome CloudTrailClient::PutEventSelectors(const PutEventSelectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEventSelectorsOutcome(PutEventSelectorsResult(outcome.GetResult()));
  }
  else
  {
    return PutEventSelectorsOutcome(outcome.GetError());
  }
}

PutEventSelectorsOutcomeCallable CloudTrailClient::PutEventSelectorsCallable(const PutEventSelectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventSelectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventSelectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::PutEventSelectorsAsync(const PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEventSelectorsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::PutEventSelectorsAsyncHelper(const PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEventSelectors(request), context);
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable CloudTrailClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartLoggingOutcome(StartLoggingResult(outcome.GetResult()));
  }
  else
  {
    return StartLoggingOutcome(outcome.GetError());
  }
}

StartLoggingOutcomeCallable CloudTrailClient::StartLoggingCallable(const StartLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StartLoggingAsync(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartLoggingAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::StartLoggingAsyncHelper(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartLogging(request), context);
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopLoggingOutcome(StopLoggingResult(outcome.GetResult()));
  }
  else
  {
    return StopLoggingOutcome(outcome.GetError());
  }
}

StopLoggingOutcomeCallable CloudTrailClient::StopLoggingCallable(const StopLoggingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLoggingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLogging(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::StopLoggingAsync(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopLoggingAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::StopLoggingAsyncHelper(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopLogging(request), context);
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTrailOutcome(UpdateTrailResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrailOutcome(outcome.GetError());
  }
}

UpdateTrailOutcomeCallable CloudTrailClient::UpdateTrailCallable(const UpdateTrailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudTrailClient::UpdateTrailAsync(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrailAsyncHelper( request, handler, context ); } );
}

void CloudTrailClient::UpdateTrailAsyncHelper(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrail(request), context);
}

