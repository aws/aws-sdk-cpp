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

#include <aws/cloudhsm/CloudHSMClient.h>
#include <aws/cloudhsm/CloudHSMEndpoint.h>
#include <aws/cloudhsm/CloudHSMErrorMarshaller.h>
#include <aws/cloudhsm/model/AddTagsToResourceRequest.h>
#include <aws/cloudhsm/model/CreateHapgRequest.h>
#include <aws/cloudhsm/model/CreateHsmRequest.h>
#include <aws/cloudhsm/model/CreateLunaClientRequest.h>
#include <aws/cloudhsm/model/DeleteHapgRequest.h>
#include <aws/cloudhsm/model/DeleteHsmRequest.h>
#include <aws/cloudhsm/model/DeleteLunaClientRequest.h>
#include <aws/cloudhsm/model/DescribeHapgRequest.h>
#include <aws/cloudhsm/model/DescribeHsmRequest.h>
#include <aws/cloudhsm/model/DescribeLunaClientRequest.h>
#include <aws/cloudhsm/model/GetConfigRequest.h>
#include <aws/cloudhsm/model/ListAvailableZonesRequest.h>
#include <aws/cloudhsm/model/ListHapgsRequest.h>
#include <aws/cloudhsm/model/ListHsmsRequest.h>
#include <aws/cloudhsm/model/ListLunaClientsRequest.h>
#include <aws/cloudhsm/model/ListTagsForResourceRequest.h>
#include <aws/cloudhsm/model/ModifyHapgRequest.h>
#include <aws/cloudhsm/model/ModifyHsmRequest.h>
#include <aws/cloudhsm/model/ModifyLunaClientRequest.h>
#include <aws/cloudhsm/model/RemoveTagsFromResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudHSM;
using namespace Aws::CloudHSM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cloudhsm";
static const char* ALLOCATION_TAG = "CloudHSMClient";


CloudHSMClient::CloudHSMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::CloudHSMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::CloudHSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::~CloudHSMClient()
{
}

void CloudHSMClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudHSMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudHSMClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsToResourceOutcome CloudHSMClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable CloudHSMClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

CreateHapgOutcome CloudHSMClient::CreateHapg(const CreateHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHapgOutcome(CreateHapgResult(outcome.GetResult()));
  }
  else
  {
    return CreateHapgOutcome(outcome.GetError());
  }
}

CreateHapgOutcomeCallable CloudHSMClient::CreateHapgCallable(const CreateHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::CreateHapgAsync(const CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHapgAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::CreateHapgAsyncHelper(const CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHapg(request), context);
}

CreateHsmOutcome CloudHSMClient::CreateHsm(const CreateHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHsmOutcome(CreateHsmResult(outcome.GetResult()));
  }
  else
  {
    return CreateHsmOutcome(outcome.GetError());
  }
}

CreateHsmOutcomeCallable CloudHSMClient::CreateHsmCallable(const CreateHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::CreateHsmAsync(const CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHsmAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::CreateHsmAsyncHelper(const CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHsm(request), context);
}

CreateLunaClientOutcome CloudHSMClient::CreateLunaClient(const CreateLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLunaClientOutcome(CreateLunaClientResult(outcome.GetResult()));
  }
  else
  {
    return CreateLunaClientOutcome(outcome.GetError());
  }
}

CreateLunaClientOutcomeCallable CloudHSMClient::CreateLunaClientCallable(const CreateLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::CreateLunaClientAsync(const CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLunaClientAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::CreateLunaClientAsyncHelper(const CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLunaClient(request), context);
}

DeleteHapgOutcome CloudHSMClient::DeleteHapg(const DeleteHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteHapgOutcome(DeleteHapgResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHapgOutcome(outcome.GetError());
  }
}

DeleteHapgOutcomeCallable CloudHSMClient::DeleteHapgCallable(const DeleteHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DeleteHapgAsync(const DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHapgAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DeleteHapgAsyncHelper(const DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHapg(request), context);
}

DeleteHsmOutcome CloudHSMClient::DeleteHsm(const DeleteHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteHsmOutcome(DeleteHsmResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHsmOutcome(outcome.GetError());
  }
}

DeleteHsmOutcomeCallable CloudHSMClient::DeleteHsmCallable(const DeleteHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DeleteHsmAsync(const DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHsmAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DeleteHsmAsyncHelper(const DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHsm(request), context);
}

DeleteLunaClientOutcome CloudHSMClient::DeleteLunaClient(const DeleteLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLunaClientOutcome(DeleteLunaClientResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLunaClientOutcome(outcome.GetError());
  }
}

DeleteLunaClientOutcomeCallable CloudHSMClient::DeleteLunaClientCallable(const DeleteLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DeleteLunaClientAsync(const DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLunaClientAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DeleteLunaClientAsyncHelper(const DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLunaClient(request), context);
}

DescribeHapgOutcome CloudHSMClient::DescribeHapg(const DescribeHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHapgOutcome(DescribeHapgResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHapgOutcome(outcome.GetError());
  }
}

DescribeHapgOutcomeCallable CloudHSMClient::DescribeHapgCallable(const DescribeHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DescribeHapgAsync(const DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHapgAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DescribeHapgAsyncHelper(const DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHapg(request), context);
}

DescribeHsmOutcome CloudHSMClient::DescribeHsm(const DescribeHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHsmOutcome(DescribeHsmResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHsmOutcome(outcome.GetError());
  }
}

DescribeHsmOutcomeCallable CloudHSMClient::DescribeHsmCallable(const DescribeHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DescribeHsmAsync(const DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHsmAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DescribeHsmAsyncHelper(const DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHsm(request), context);
}

DescribeLunaClientOutcome CloudHSMClient::DescribeLunaClient(const DescribeLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLunaClientOutcome(DescribeLunaClientResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLunaClientOutcome(outcome.GetError());
  }
}

DescribeLunaClientOutcomeCallable CloudHSMClient::DescribeLunaClientCallable(const DescribeLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::DescribeLunaClientAsync(const DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLunaClientAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::DescribeLunaClientAsyncHelper(const DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLunaClient(request), context);
}

GetConfigOutcome CloudHSMClient::GetConfig(const GetConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConfigOutcome(GetConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetConfigOutcome(outcome.GetError());
  }
}

GetConfigOutcomeCallable CloudHSMClient::GetConfigCallable(const GetConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::GetConfigAsync(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::GetConfigAsyncHelper(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfig(request), context);
}

ListAvailableZonesOutcome CloudHSMClient::ListAvailableZones(const ListAvailableZonesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAvailableZonesOutcome(ListAvailableZonesResult(outcome.GetResult()));
  }
  else
  {
    return ListAvailableZonesOutcome(outcome.GetError());
  }
}

ListAvailableZonesOutcomeCallable CloudHSMClient::ListAvailableZonesCallable(const ListAvailableZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ListAvailableZonesAsync(const ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAvailableZonesAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ListAvailableZonesAsyncHelper(const ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAvailableZones(request), context);
}

ListHapgsOutcome CloudHSMClient::ListHapgs(const ListHapgsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHapgsOutcome(ListHapgsResult(outcome.GetResult()));
  }
  else
  {
    return ListHapgsOutcome(outcome.GetError());
  }
}

ListHapgsOutcomeCallable CloudHSMClient::ListHapgsCallable(const ListHapgsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHapgsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHapgs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ListHapgsAsync(const ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHapgsAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ListHapgsAsyncHelper(const ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHapgs(request), context);
}

ListHsmsOutcome CloudHSMClient::ListHsms(const ListHsmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHsmsOutcome(ListHsmsResult(outcome.GetResult()));
  }
  else
  {
    return ListHsmsOutcome(outcome.GetError());
  }
}

ListHsmsOutcomeCallable CloudHSMClient::ListHsmsCallable(const ListHsmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHsmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHsms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ListHsmsAsync(const ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHsmsAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ListHsmsAsyncHelper(const ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHsms(request), context);
}

ListLunaClientsOutcome CloudHSMClient::ListLunaClients(const ListLunaClientsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLunaClientsOutcome(ListLunaClientsResult(outcome.GetResult()));
  }
  else
  {
    return ListLunaClientsOutcome(outcome.GetError());
  }
}

ListLunaClientsOutcomeCallable CloudHSMClient::ListLunaClientsCallable(const ListLunaClientsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLunaClientsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLunaClients(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ListLunaClientsAsync(const ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLunaClientsAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ListLunaClientsAsyncHelper(const ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLunaClients(request), context);
}

ListTagsForResourceOutcome CloudHSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable CloudHSMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ModifyHapgOutcome CloudHSMClient::ModifyHapg(const ModifyHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyHapgOutcome(ModifyHapgResult(outcome.GetResult()));
  }
  else
  {
    return ModifyHapgOutcome(outcome.GetError());
  }
}

ModifyHapgOutcomeCallable CloudHSMClient::ModifyHapgCallable(const ModifyHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ModifyHapgAsync(const ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyHapgAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ModifyHapgAsyncHelper(const ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyHapg(request), context);
}

ModifyHsmOutcome CloudHSMClient::ModifyHsm(const ModifyHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyHsmOutcome(ModifyHsmResult(outcome.GetResult()));
  }
  else
  {
    return ModifyHsmOutcome(outcome.GetError());
  }
}

ModifyHsmOutcomeCallable CloudHSMClient::ModifyHsmCallable(const ModifyHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ModifyHsmAsync(const ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyHsmAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ModifyHsmAsyncHelper(const ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyHsm(request), context);
}

ModifyLunaClientOutcome CloudHSMClient::ModifyLunaClient(const ModifyLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyLunaClientOutcome(ModifyLunaClientResult(outcome.GetResult()));
  }
  else
  {
    return ModifyLunaClientOutcome(outcome.GetError());
  }
}

ModifyLunaClientOutcomeCallable CloudHSMClient::ModifyLunaClientCallable(const ModifyLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::ModifyLunaClientAsync(const ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyLunaClientAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::ModifyLunaClientAsyncHelper(const ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyLunaClient(request), context);
}

RemoveTagsFromResourceOutcome CloudHSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable CloudHSMClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void CloudHSMClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

