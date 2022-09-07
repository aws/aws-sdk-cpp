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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::CloudHSMClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::CloudHSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudHSMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudHSMClient::~CloudHSMClient()
{
}

void CloudHSMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudHSM");
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
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable CloudHSMClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientAddTagsToResourceAsyncHelper(CloudHSMClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void CloudHSMClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

CreateHapgOutcome CloudHSMClient::CreateHapg(const CreateHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHapgOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHapgOutcomeCallable CloudHSMClient::CreateHapgCallable(const CreateHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientCreateHapgAsyncHelper(CloudHSMClient const * const clientThis, const CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHapg(request), context);
}

void CloudHSMClient::CreateHapgAsync(const CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientCreateHapgAsyncHelper( this, request, handler, context ); } );
}

CreateHsmOutcome CloudHSMClient::CreateHsm(const CreateHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHsmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHsmOutcomeCallable CloudHSMClient::CreateHsmCallable(const CreateHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientCreateHsmAsyncHelper(CloudHSMClient const * const clientThis, const CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHsm(request), context);
}

void CloudHSMClient::CreateHsmAsync(const CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientCreateHsmAsyncHelper( this, request, handler, context ); } );
}

CreateLunaClientOutcome CloudHSMClient::CreateLunaClient(const CreateLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLunaClientOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLunaClientOutcomeCallable CloudHSMClient::CreateLunaClientCallable(const CreateLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientCreateLunaClientAsyncHelper(CloudHSMClient const * const clientThis, const CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLunaClient(request), context);
}

void CloudHSMClient::CreateLunaClientAsync(const CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientCreateLunaClientAsyncHelper( this, request, handler, context ); } );
}

DeleteHapgOutcome CloudHSMClient::DeleteHapg(const DeleteHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHapgOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHapgOutcomeCallable CloudHSMClient::DeleteHapgCallable(const DeleteHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDeleteHapgAsyncHelper(CloudHSMClient const * const clientThis, const DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHapg(request), context);
}

void CloudHSMClient::DeleteHapgAsync(const DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDeleteHapgAsyncHelper( this, request, handler, context ); } );
}

DeleteHsmOutcome CloudHSMClient::DeleteHsm(const DeleteHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHsmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHsmOutcomeCallable CloudHSMClient::DeleteHsmCallable(const DeleteHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDeleteHsmAsyncHelper(CloudHSMClient const * const clientThis, const DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHsm(request), context);
}

void CloudHSMClient::DeleteHsmAsync(const DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDeleteHsmAsyncHelper( this, request, handler, context ); } );
}

DeleteLunaClientOutcome CloudHSMClient::DeleteLunaClient(const DeleteLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLunaClientOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLunaClientOutcomeCallable CloudHSMClient::DeleteLunaClientCallable(const DeleteLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDeleteLunaClientAsyncHelper(CloudHSMClient const * const clientThis, const DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLunaClient(request), context);
}

void CloudHSMClient::DeleteLunaClientAsync(const DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDeleteLunaClientAsyncHelper( this, request, handler, context ); } );
}

DescribeHapgOutcome CloudHSMClient::DescribeHapg(const DescribeHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHapgOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHapgOutcomeCallable CloudHSMClient::DescribeHapgCallable(const DescribeHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDescribeHapgAsyncHelper(CloudHSMClient const * const clientThis, const DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHapg(request), context);
}

void CloudHSMClient::DescribeHapgAsync(const DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDescribeHapgAsyncHelper( this, request, handler, context ); } );
}

DescribeHsmOutcome CloudHSMClient::DescribeHsm(const DescribeHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHsmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHsmOutcomeCallable CloudHSMClient::DescribeHsmCallable(const DescribeHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDescribeHsmAsyncHelper(CloudHSMClient const * const clientThis, const DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHsm(request), context);
}

void CloudHSMClient::DescribeHsmAsync(const DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDescribeHsmAsyncHelper( this, request, handler, context ); } );
}

DescribeLunaClientOutcome CloudHSMClient::DescribeLunaClient(const DescribeLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLunaClientOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLunaClientOutcomeCallable CloudHSMClient::DescribeLunaClientCallable(const DescribeLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientDescribeLunaClientAsyncHelper(CloudHSMClient const * const clientThis, const DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLunaClient(request), context);
}

void CloudHSMClient::DescribeLunaClientAsync(const DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientDescribeLunaClientAsyncHelper( this, request, handler, context ); } );
}

GetConfigOutcome CloudHSMClient::GetConfig(const GetConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConfigOutcomeCallable CloudHSMClient::GetConfigCallable(const GetConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientGetConfigAsyncHelper(CloudHSMClient const * const clientThis, const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfig(request), context);
}

void CloudHSMClient::GetConfigAsync(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientGetConfigAsyncHelper( this, request, handler, context ); } );
}

ListAvailableZonesOutcome CloudHSMClient::ListAvailableZones(const ListAvailableZonesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableZonesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableZonesOutcomeCallable CloudHSMClient::ListAvailableZonesCallable(const ListAvailableZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientListAvailableZonesAsyncHelper(CloudHSMClient const * const clientThis, const ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailableZones(request), context);
}

void CloudHSMClient::ListAvailableZonesAsync(const ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientListAvailableZonesAsyncHelper( this, request, handler, context ); } );
}

ListHapgsOutcome CloudHSMClient::ListHapgs(const ListHapgsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHapgsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHapgsOutcomeCallable CloudHSMClient::ListHapgsCallable(const ListHapgsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHapgsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHapgs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientListHapgsAsyncHelper(CloudHSMClient const * const clientThis, const ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHapgs(request), context);
}

void CloudHSMClient::ListHapgsAsync(const ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientListHapgsAsyncHelper( this, request, handler, context ); } );
}

ListHsmsOutcome CloudHSMClient::ListHsms(const ListHsmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHsmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHsmsOutcomeCallable CloudHSMClient::ListHsmsCallable(const ListHsmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHsmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHsms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientListHsmsAsyncHelper(CloudHSMClient const * const clientThis, const ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHsms(request), context);
}

void CloudHSMClient::ListHsmsAsync(const ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientListHsmsAsyncHelper( this, request, handler, context ); } );
}

ListLunaClientsOutcome CloudHSMClient::ListLunaClients(const ListLunaClientsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLunaClientsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLunaClientsOutcomeCallable CloudHSMClient::ListLunaClientsCallable(const ListLunaClientsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLunaClientsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLunaClients(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientListLunaClientsAsyncHelper(CloudHSMClient const * const clientThis, const ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLunaClients(request), context);
}

void CloudHSMClient::ListLunaClientsAsync(const ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientListLunaClientsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CloudHSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CloudHSMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientListTagsForResourceAsyncHelper(CloudHSMClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudHSMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ModifyHapgOutcome CloudHSMClient::ModifyHapg(const ModifyHapgRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyHapgOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyHapgOutcomeCallable CloudHSMClient::ModifyHapgCallable(const ModifyHapgRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyHapgOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyHapg(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientModifyHapgAsyncHelper(CloudHSMClient const * const clientThis, const ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyHapg(request), context);
}

void CloudHSMClient::ModifyHapgAsync(const ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientModifyHapgAsyncHelper( this, request, handler, context ); } );
}

ModifyHsmOutcome CloudHSMClient::ModifyHsm(const ModifyHsmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyHsmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyHsmOutcomeCallable CloudHSMClient::ModifyHsmCallable(const ModifyHsmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyHsmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyHsm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientModifyHsmAsyncHelper(CloudHSMClient const * const clientThis, const ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyHsm(request), context);
}

void CloudHSMClient::ModifyHsmAsync(const ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientModifyHsmAsyncHelper( this, request, handler, context ); } );
}

ModifyLunaClientOutcome CloudHSMClient::ModifyLunaClient(const ModifyLunaClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyLunaClientOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyLunaClientOutcomeCallable CloudHSMClient::ModifyLunaClientCallable(const ModifyLunaClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLunaClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLunaClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientModifyLunaClientAsyncHelper(CloudHSMClient const * const clientThis, const ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyLunaClient(request), context);
}

void CloudHSMClient::ModifyLunaClientAsync(const ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientModifyLunaClientAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome CloudHSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable CloudHSMClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudHSMClientRemoveTagsFromResourceAsyncHelper(CloudHSMClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void CloudHSMClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudHSMClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

