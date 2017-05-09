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
#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/AppStreamEndpoint.h>
#include <aws/appstream/AppStreamErrorMarshaller.h>
#include <aws/appstream/model/AssociateFleetRequest.h>
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/appstream/model/CreateStackRequest.h>
#include <aws/appstream/model/CreateStreamingURLRequest.h>
#include <aws/appstream/model/DeleteFleetRequest.h>
#include <aws/appstream/model/DeleteStackRequest.h>
#include <aws/appstream/model/DescribeFleetsRequest.h>
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/appstream/model/DescribeSessionsRequest.h>
#include <aws/appstream/model/DescribeStacksRequest.h>
#include <aws/appstream/model/DisassociateFleetRequest.h>
#include <aws/appstream/model/ExpireSessionRequest.h>
#include <aws/appstream/model/ListAssociatedFleetsRequest.h>
#include <aws/appstream/model/ListAssociatedStacksRequest.h>
#include <aws/appstream/model/StartFleetRequest.h>
#include <aws/appstream/model/StopFleetRequest.h>
#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/appstream/model/UpdateStackRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppStream;
using namespace Aws::AppStream::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appstream";
static const char* ALLOCATION_TAG = "AppStreamClient";


AppStreamClient::AppStreamClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::AppStreamClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppStreamErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppStreamClient::~AppStreamClient()
{
}

void AppStreamClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << AppStreamEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AssociateFleetOutcome AppStreamClient::AssociateFleet(const AssociateFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateFleetOutcome(AssociateFleetResult(outcome.GetResult()));
  }
  else
  {
    return AssociateFleetOutcome(outcome.GetError());
  }
}

AssociateFleetOutcomeCallable AppStreamClient::AssociateFleetCallable(const AssociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::AssociateFleetAsync(const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::AssociateFleetAsyncHelper(const AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateFleet(request), context);
}

CreateFleetOutcome AppStreamClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
}

CreateFleetOutcomeCallable AppStreamClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateStackOutcome AppStreamClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStackOutcome(CreateStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackOutcome(outcome.GetError());
  }
}

CreateStackOutcomeCallable AppStreamClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateStackAsyncHelper(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStack(request), context);
}

CreateStreamingURLOutcome AppStreamClient::CreateStreamingURL(const CreateStreamingURLRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingURLOutcome(CreateStreamingURLResult(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingURLOutcome(outcome.GetError());
  }
}

CreateStreamingURLOutcomeCallable AppStreamClient::CreateStreamingURLCallable(const CreateStreamingURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::CreateStreamingURLAsync(const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingURLAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::CreateStreamingURLAsyncHelper(const CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingURL(request), context);
}

DeleteFleetOutcome AppStreamClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteFleetOutcome(DeleteFleetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFleetOutcome(outcome.GetError());
  }
}

DeleteFleetOutcomeCallable AppStreamClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DeleteStackOutcome AppStreamClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteStackOutcome(DeleteStackResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStackOutcome(outcome.GetError());
  }
}

DeleteStackOutcomeCallable AppStreamClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DeleteStackAsyncHelper(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStack(request), context);
}

DescribeFleetsOutcome AppStreamClient::DescribeFleets(const DescribeFleetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFleetsOutcome(DescribeFleetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetsOutcome(outcome.GetError());
  }
}

DescribeFleetsOutcomeCallable AppStreamClient::DescribeFleetsCallable(const DescribeFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeFleetsAsync(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeFleetsAsyncHelper(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleets(request), context);
}

DescribeImagesOutcome AppStreamClient::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeImagesOutcome(DescribeImagesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeImagesOutcome(outcome.GetError());
  }
}

DescribeImagesOutcomeCallable AppStreamClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImagesAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeImagesAsyncHelper(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImages(request), context);
}

DescribeSessionsOutcome AppStreamClient::DescribeSessions(const DescribeSessionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSessionsOutcome(DescribeSessionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSessionsOutcome(outcome.GetError());
  }
}

DescribeSessionsOutcomeCallable AppStreamClient::DescribeSessionsCallable(const DescribeSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeSessionsAsync(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSessionsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeSessionsAsyncHelper(const DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSessions(request), context);
}

DescribeStacksOutcome AppStreamClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStacksOutcome(DescribeStacksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStacksOutcome(outcome.GetError());
  }
}

DescribeStacksOutcomeCallable AppStreamClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStacksAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStacks(request), context);
}

DisassociateFleetOutcome AppStreamClient::DisassociateFleet(const DisassociateFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateFleetOutcome(DisassociateFleetResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateFleetOutcome(outcome.GetError());
  }
}

DisassociateFleetOutcomeCallable AppStreamClient::DisassociateFleetCallable(const DisassociateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::DisassociateFleetAsync(const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::DisassociateFleetAsyncHelper(const DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFleet(request), context);
}

ExpireSessionOutcome AppStreamClient::ExpireSession(const ExpireSessionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ExpireSessionOutcome(ExpireSessionResult(outcome.GetResult()));
  }
  else
  {
    return ExpireSessionOutcome(outcome.GetError());
  }
}

ExpireSessionOutcomeCallable AppStreamClient::ExpireSessionCallable(const ExpireSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExpireSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExpireSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ExpireSessionAsync(const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExpireSessionAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ExpireSessionAsyncHelper(const ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExpireSession(request), context);
}

ListAssociatedFleetsOutcome AppStreamClient::ListAssociatedFleets(const ListAssociatedFleetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssociatedFleetsOutcome(ListAssociatedFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociatedFleetsOutcome(outcome.GetError());
  }
}

ListAssociatedFleetsOutcomeCallable AppStreamClient::ListAssociatedFleetsCallable(const ListAssociatedFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListAssociatedFleetsAsync(const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedFleetsAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ListAssociatedFleetsAsyncHelper(const ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedFleets(request), context);
}

ListAssociatedStacksOutcome AppStreamClient::ListAssociatedStacks(const ListAssociatedStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssociatedStacksOutcome(ListAssociatedStacksResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociatedStacksOutcome(outcome.GetError());
  }
}

ListAssociatedStacksOutcomeCallable AppStreamClient::ListAssociatedStacksCallable(const ListAssociatedStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::ListAssociatedStacksAsync(const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociatedStacksAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::ListAssociatedStacksAsyncHelper(const ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociatedStacks(request), context);
}

StartFleetOutcome AppStreamClient::StartFleet(const StartFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartFleetOutcome(StartFleetResult(outcome.GetResult()));
  }
  else
  {
    return StartFleetOutcome(outcome.GetError());
  }
}

StartFleetOutcomeCallable AppStreamClient::StartFleetCallable(const StartFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StartFleetAsync(const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StartFleetAsyncHelper(const StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFleet(request), context);
}

StopFleetOutcome AppStreamClient::StopFleet(const StopFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopFleetOutcome(StopFleetResult(outcome.GetResult()));
  }
  else
  {
    return StopFleetOutcome(outcome.GetError());
  }
}

StopFleetOutcomeCallable AppStreamClient::StopFleetCallable(const StopFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::StopFleetAsync(const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::StopFleetAsyncHelper(const StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopFleet(request), context);
}

UpdateFleetOutcome AppStreamClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateFleetOutcome(UpdateFleetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetOutcome(outcome.GetError());
  }
}

UpdateFleetOutcomeCallable AppStreamClient::UpdateFleetCallable(const UpdateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateFleetAsync(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateFleetAsyncHelper(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleet(request), context);
}

UpdateStackOutcome AppStreamClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateStackOutcome(UpdateStackResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStackOutcome(outcome.GetError());
  }
}

UpdateStackOutcomeCallable AppStreamClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppStreamClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackAsyncHelper( request, handler, context ); } );
}

void AppStreamClient::UpdateStackAsyncHelper(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStack(request), context);
}

