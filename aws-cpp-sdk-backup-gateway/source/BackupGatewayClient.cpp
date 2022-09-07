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

#include <aws/backup-gateway/BackupGatewayClient.h>
#include <aws/backup-gateway/BackupGatewayEndpoint.h>
#include <aws/backup-gateway/BackupGatewayErrorMarshaller.h>
#include <aws/backup-gateway/model/AssociateGatewayToServerRequest.h>
#include <aws/backup-gateway/model/CreateGatewayRequest.h>
#include <aws/backup-gateway/model/DeleteGatewayRequest.h>
#include <aws/backup-gateway/model/DeleteHypervisorRequest.h>
#include <aws/backup-gateway/model/DisassociateGatewayFromServerRequest.h>
#include <aws/backup-gateway/model/GetGatewayRequest.h>
#include <aws/backup-gateway/model/ImportHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/ListGatewaysRequest.h>
#include <aws/backup-gateway/model/ListHypervisorsRequest.h>
#include <aws/backup-gateway/model/ListTagsForResourceRequest.h>
#include <aws/backup-gateway/model/ListVirtualMachinesRequest.h>
#include <aws/backup-gateway/model/PutMaintenanceStartTimeRequest.h>
#include <aws/backup-gateway/model/TagResourceRequest.h>
#include <aws/backup-gateway/model/TestHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/UntagResourceRequest.h>
#include <aws/backup-gateway/model/UpdateGatewayInformationRequest.h>
#include <aws/backup-gateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/backup-gateway/model/UpdateHypervisorRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BackupGateway;
using namespace Aws::BackupGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "backup-gateway";
static const char* ALLOCATION_TAG = "BackupGatewayClient";

BackupGatewayClient::BackupGatewayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupGatewayClient::~BackupGatewayClient()
{
}

void BackupGatewayClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Backup Gateway");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BackupGatewayEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BackupGatewayClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateGatewayToServerOutcome BackupGatewayClient::AssociateGatewayToServer(const AssociateGatewayToServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateGatewayToServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateGatewayToServerOutcomeCallable BackupGatewayClient::AssociateGatewayToServerCallable(const AssociateGatewayToServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateGatewayToServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateGatewayToServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientAssociateGatewayToServerAsyncHelper(BackupGatewayClient const * const clientThis, const AssociateGatewayToServerRequest& request, const AssociateGatewayToServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateGatewayToServer(request), context);
}

void BackupGatewayClient::AssociateGatewayToServerAsync(const AssociateGatewayToServerRequest& request, const AssociateGatewayToServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientAssociateGatewayToServerAsyncHelper( this, request, handler, context ); } );
}

CreateGatewayOutcome BackupGatewayClient::CreateGateway(const CreateGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGatewayOutcomeCallable BackupGatewayClient::CreateGatewayCallable(const CreateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientCreateGatewayAsyncHelper(BackupGatewayClient const * const clientThis, const CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGateway(request), context);
}

void BackupGatewayClient::CreateGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientCreateGatewayAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayOutcome BackupGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayOutcomeCallable BackupGatewayClient::DeleteGatewayCallable(const DeleteGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientDeleteGatewayAsyncHelper(BackupGatewayClient const * const clientThis, const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGateway(request), context);
}

void BackupGatewayClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientDeleteGatewayAsyncHelper( this, request, handler, context ); } );
}

DeleteHypervisorOutcome BackupGatewayClient::DeleteHypervisor(const DeleteHypervisorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHypervisorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHypervisorOutcomeCallable BackupGatewayClient::DeleteHypervisorCallable(const DeleteHypervisorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHypervisorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHypervisor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientDeleteHypervisorAsyncHelper(BackupGatewayClient const * const clientThis, const DeleteHypervisorRequest& request, const DeleteHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHypervisor(request), context);
}

void BackupGatewayClient::DeleteHypervisorAsync(const DeleteHypervisorRequest& request, const DeleteHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientDeleteHypervisorAsyncHelper( this, request, handler, context ); } );
}

DisassociateGatewayFromServerOutcome BackupGatewayClient::DisassociateGatewayFromServer(const DisassociateGatewayFromServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateGatewayFromServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateGatewayFromServerOutcomeCallable BackupGatewayClient::DisassociateGatewayFromServerCallable(const DisassociateGatewayFromServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateGatewayFromServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateGatewayFromServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientDisassociateGatewayFromServerAsyncHelper(BackupGatewayClient const * const clientThis, const DisassociateGatewayFromServerRequest& request, const DisassociateGatewayFromServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateGatewayFromServer(request), context);
}

void BackupGatewayClient::DisassociateGatewayFromServerAsync(const DisassociateGatewayFromServerRequest& request, const DisassociateGatewayFromServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientDisassociateGatewayFromServerAsyncHelper( this, request, handler, context ); } );
}

GetGatewayOutcome BackupGatewayClient::GetGateway(const GetGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGatewayOutcomeCallable BackupGatewayClient::GetGatewayCallable(const GetGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientGetGatewayAsyncHelper(BackupGatewayClient const * const clientThis, const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGateway(request), context);
}

void BackupGatewayClient::GetGatewayAsync(const GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientGetGatewayAsyncHelper( this, request, handler, context ); } );
}

ImportHypervisorConfigurationOutcome BackupGatewayClient::ImportHypervisorConfiguration(const ImportHypervisorConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportHypervisorConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportHypervisorConfigurationOutcomeCallable BackupGatewayClient::ImportHypervisorConfigurationCallable(const ImportHypervisorConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportHypervisorConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportHypervisorConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientImportHypervisorConfigurationAsyncHelper(BackupGatewayClient const * const clientThis, const ImportHypervisorConfigurationRequest& request, const ImportHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportHypervisorConfiguration(request), context);
}

void BackupGatewayClient::ImportHypervisorConfigurationAsync(const ImportHypervisorConfigurationRequest& request, const ImportHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientImportHypervisorConfigurationAsyncHelper( this, request, handler, context ); } );
}

ListGatewaysOutcome BackupGatewayClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGatewaysOutcomeCallable BackupGatewayClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientListGatewaysAsyncHelper(BackupGatewayClient const * const clientThis, const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGateways(request), context);
}

void BackupGatewayClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientListGatewaysAsyncHelper( this, request, handler, context ); } );
}

ListHypervisorsOutcome BackupGatewayClient::ListHypervisors(const ListHypervisorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHypervisorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHypervisorsOutcomeCallable BackupGatewayClient::ListHypervisorsCallable(const ListHypervisorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHypervisorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHypervisors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientListHypervisorsAsyncHelper(BackupGatewayClient const * const clientThis, const ListHypervisorsRequest& request, const ListHypervisorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHypervisors(request), context);
}

void BackupGatewayClient::ListHypervisorsAsync(const ListHypervisorsRequest& request, const ListHypervisorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientListHypervisorsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome BackupGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable BackupGatewayClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientListTagsForResourceAsyncHelper(BackupGatewayClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void BackupGatewayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListVirtualMachinesOutcome BackupGatewayClient::ListVirtualMachines(const ListVirtualMachinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVirtualMachinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVirtualMachinesOutcomeCallable BackupGatewayClient::ListVirtualMachinesCallable(const ListVirtualMachinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualMachinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualMachines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientListVirtualMachinesAsyncHelper(BackupGatewayClient const * const clientThis, const ListVirtualMachinesRequest& request, const ListVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVirtualMachines(request), context);
}

void BackupGatewayClient::ListVirtualMachinesAsync(const ListVirtualMachinesRequest& request, const ListVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientListVirtualMachinesAsyncHelper( this, request, handler, context ); } );
}

PutMaintenanceStartTimeOutcome BackupGatewayClient::PutMaintenanceStartTime(const PutMaintenanceStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMaintenanceStartTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMaintenanceStartTimeOutcomeCallable BackupGatewayClient::PutMaintenanceStartTimeCallable(const PutMaintenanceStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMaintenanceStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMaintenanceStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientPutMaintenanceStartTimeAsyncHelper(BackupGatewayClient const * const clientThis, const PutMaintenanceStartTimeRequest& request, const PutMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMaintenanceStartTime(request), context);
}

void BackupGatewayClient::PutMaintenanceStartTimeAsync(const PutMaintenanceStartTimeRequest& request, const PutMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientPutMaintenanceStartTimeAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome BackupGatewayClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable BackupGatewayClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientTagResourceAsyncHelper(BackupGatewayClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void BackupGatewayClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestHypervisorConfigurationOutcome BackupGatewayClient::TestHypervisorConfiguration(const TestHypervisorConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestHypervisorConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestHypervisorConfigurationOutcomeCallable BackupGatewayClient::TestHypervisorConfigurationCallable(const TestHypervisorConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestHypervisorConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestHypervisorConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientTestHypervisorConfigurationAsyncHelper(BackupGatewayClient const * const clientThis, const TestHypervisorConfigurationRequest& request, const TestHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestHypervisorConfiguration(request), context);
}

void BackupGatewayClient::TestHypervisorConfigurationAsync(const TestHypervisorConfigurationRequest& request, const TestHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientTestHypervisorConfigurationAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome BackupGatewayClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable BackupGatewayClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientUntagResourceAsyncHelper(BackupGatewayClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void BackupGatewayClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayInformationOutcome BackupGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewayInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayInformationOutcomeCallable BackupGatewayClient::UpdateGatewayInformationCallable(const UpdateGatewayInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientUpdateGatewayInformationAsyncHelper(BackupGatewayClient const * const clientThis, const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayInformation(request), context);
}

void BackupGatewayClient::UpdateGatewayInformationAsync(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientUpdateGatewayInformationAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewaySoftwareNowOutcome BackupGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewaySoftwareNowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewaySoftwareNowOutcomeCallable BackupGatewayClient::UpdateGatewaySoftwareNowCallable(const UpdateGatewaySoftwareNowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewaySoftwareNowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewaySoftwareNow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientUpdateGatewaySoftwareNowAsyncHelper(BackupGatewayClient const * const clientThis, const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewaySoftwareNow(request), context);
}

void BackupGatewayClient::UpdateGatewaySoftwareNowAsync(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientUpdateGatewaySoftwareNowAsyncHelper( this, request, handler, context ); } );
}

UpdateHypervisorOutcome BackupGatewayClient::UpdateHypervisor(const UpdateHypervisorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateHypervisorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHypervisorOutcomeCallable BackupGatewayClient::UpdateHypervisorCallable(const UpdateHypervisorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHypervisorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHypervisor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupGatewayClientUpdateHypervisorAsyncHelper(BackupGatewayClient const * const clientThis, const UpdateHypervisorRequest& request, const UpdateHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHypervisor(request), context);
}

void BackupGatewayClient::UpdateHypervisorAsync(const UpdateHypervisorRequest& request, const UpdateHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BackupGatewayClientUpdateHypervisorAsyncHelper( this, request, handler, context ); } );
}

