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

#include <aws/opsworkscm/OpsWorksCMClient.h>
#include <aws/opsworkscm/OpsWorksCMEndpoint.h>
#include <aws/opsworkscm/OpsWorksCMErrorMarshaller.h>
#include <aws/opsworkscm/model/AssociateNodeRequest.h>
#include <aws/opsworkscm/model/CreateBackupRequest.h>
#include <aws/opsworkscm/model/CreateServerRequest.h>
#include <aws/opsworkscm/model/DeleteBackupRequest.h>
#include <aws/opsworkscm/model/DeleteServerRequest.h>
#include <aws/opsworkscm/model/DescribeAccountAttributesRequest.h>
#include <aws/opsworkscm/model/DescribeBackupsRequest.h>
#include <aws/opsworkscm/model/DescribeEventsRequest.h>
#include <aws/opsworkscm/model/DescribeNodeAssociationStatusRequest.h>
#include <aws/opsworkscm/model/DescribeServersRequest.h>
#include <aws/opsworkscm/model/DisassociateNodeRequest.h>
#include <aws/opsworkscm/model/ExportServerEngineAttributeRequest.h>
#include <aws/opsworkscm/model/ListTagsForResourceRequest.h>
#include <aws/opsworkscm/model/RestoreServerRequest.h>
#include <aws/opsworkscm/model/StartMaintenanceRequest.h>
#include <aws/opsworkscm/model/TagResourceRequest.h>
#include <aws/opsworkscm/model/UntagResourceRequest.h>
#include <aws/opsworkscm/model/UpdateServerRequest.h>
#include <aws/opsworkscm/model/UpdateServerEngineAttributesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpsWorksCM;
using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "opsworks-cm";
static const char* ALLOCATION_TAG = "OpsWorksCMClient";

OpsWorksCMClient::OpsWorksCMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksCMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksCMClient::OpsWorksCMClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksCMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksCMClient::OpsWorksCMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksCMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksCMClient::~OpsWorksCMClient()
{
}

void OpsWorksCMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpsWorksCM");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OpsWorksCMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OpsWorksCMClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateNodeOutcome OpsWorksCMClient::AssociateNode(const AssociateNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateNodeOutcomeCallable OpsWorksCMClient::AssociateNodeCallable(const AssociateNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientAssociateNodeAsyncHelper(OpsWorksCMClient const * const clientThis, const AssociateNodeRequest& request, const AssociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateNode(request), context);
}

void OpsWorksCMClient::AssociateNodeAsync(const AssociateNodeRequest& request, const AssociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientAssociateNodeAsyncHelper( this, request, handler, context ); } );
}

CreateBackupOutcome OpsWorksCMClient::CreateBackup(const CreateBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupOutcomeCallable OpsWorksCMClient::CreateBackupCallable(const CreateBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientCreateBackupAsyncHelper(OpsWorksCMClient const * const clientThis, const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBackup(request), context);
}

void OpsWorksCMClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientCreateBackupAsyncHelper( this, request, handler, context ); } );
}

CreateServerOutcome OpsWorksCMClient::CreateServer(const CreateServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServerOutcomeCallable OpsWorksCMClient::CreateServerCallable(const CreateServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientCreateServerAsyncHelper(OpsWorksCMClient const * const clientThis, const CreateServerRequest& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateServer(request), context);
}

void OpsWorksCMClient::CreateServerAsync(const CreateServerRequest& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientCreateServerAsyncHelper( this, request, handler, context ); } );
}

DeleteBackupOutcome OpsWorksCMClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupOutcomeCallable OpsWorksCMClient::DeleteBackupCallable(const DeleteBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDeleteBackupAsyncHelper(OpsWorksCMClient const * const clientThis, const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBackup(request), context);
}

void OpsWorksCMClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDeleteBackupAsyncHelper( this, request, handler, context ); } );
}

DeleteServerOutcome OpsWorksCMClient::DeleteServer(const DeleteServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServerOutcomeCallable OpsWorksCMClient::DeleteServerCallable(const DeleteServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDeleteServerAsyncHelper(OpsWorksCMClient const * const clientThis, const DeleteServerRequest& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteServer(request), context);
}

void OpsWorksCMClient::DeleteServerAsync(const DeleteServerRequest& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDeleteServerAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAttributesOutcome OpsWorksCMClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAttributesOutcomeCallable OpsWorksCMClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDescribeAccountAttributesAsyncHelper(OpsWorksCMClient const * const clientThis, const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAttributes(request), context);
}

void OpsWorksCMClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDescribeAccountAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeBackupsOutcome OpsWorksCMClient::DescribeBackups(const DescribeBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupsOutcomeCallable OpsWorksCMClient::DescribeBackupsCallable(const DescribeBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDescribeBackupsAsyncHelper(OpsWorksCMClient const * const clientThis, const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBackups(request), context);
}

void OpsWorksCMClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDescribeBackupsAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsOutcome OpsWorksCMClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcomeCallable OpsWorksCMClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDescribeEventsAsyncHelper(OpsWorksCMClient const * const clientThis, const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEvents(request), context);
}

void OpsWorksCMClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDescribeEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeNodeAssociationStatusOutcome OpsWorksCMClient::DescribeNodeAssociationStatus(const DescribeNodeAssociationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNodeAssociationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodeAssociationStatusOutcomeCallable OpsWorksCMClient::DescribeNodeAssociationStatusCallable(const DescribeNodeAssociationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodeAssociationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNodeAssociationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDescribeNodeAssociationStatusAsyncHelper(OpsWorksCMClient const * const clientThis, const DescribeNodeAssociationStatusRequest& request, const DescribeNodeAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNodeAssociationStatus(request), context);
}

void OpsWorksCMClient::DescribeNodeAssociationStatusAsync(const DescribeNodeAssociationStatusRequest& request, const DescribeNodeAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDescribeNodeAssociationStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeServersOutcome OpsWorksCMClient::DescribeServers(const DescribeServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServersOutcomeCallable OpsWorksCMClient::DescribeServersCallable(const DescribeServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDescribeServersAsyncHelper(OpsWorksCMClient const * const clientThis, const DescribeServersRequest& request, const DescribeServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServers(request), context);
}

void OpsWorksCMClient::DescribeServersAsync(const DescribeServersRequest& request, const DescribeServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDescribeServersAsyncHelper( this, request, handler, context ); } );
}

DisassociateNodeOutcome OpsWorksCMClient::DisassociateNode(const DisassociateNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateNodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateNodeOutcomeCallable OpsWorksCMClient::DisassociateNodeCallable(const DisassociateNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientDisassociateNodeAsyncHelper(OpsWorksCMClient const * const clientThis, const DisassociateNodeRequest& request, const DisassociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateNode(request), context);
}

void OpsWorksCMClient::DisassociateNodeAsync(const DisassociateNodeRequest& request, const DisassociateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientDisassociateNodeAsyncHelper( this, request, handler, context ); } );
}

ExportServerEngineAttributeOutcome OpsWorksCMClient::ExportServerEngineAttribute(const ExportServerEngineAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportServerEngineAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportServerEngineAttributeOutcomeCallable OpsWorksCMClient::ExportServerEngineAttributeCallable(const ExportServerEngineAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportServerEngineAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportServerEngineAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientExportServerEngineAttributeAsyncHelper(OpsWorksCMClient const * const clientThis, const ExportServerEngineAttributeRequest& request, const ExportServerEngineAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExportServerEngineAttribute(request), context);
}

void OpsWorksCMClient::ExportServerEngineAttributeAsync(const ExportServerEngineAttributeRequest& request, const ExportServerEngineAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientExportServerEngineAttributeAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome OpsWorksCMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable OpsWorksCMClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientListTagsForResourceAsyncHelper(OpsWorksCMClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void OpsWorksCMClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RestoreServerOutcome OpsWorksCMClient::RestoreServer(const RestoreServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreServerOutcomeCallable OpsWorksCMClient::RestoreServerCallable(const RestoreServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientRestoreServerAsyncHelper(OpsWorksCMClient const * const clientThis, const RestoreServerRequest& request, const RestoreServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreServer(request), context);
}

void OpsWorksCMClient::RestoreServerAsync(const RestoreServerRequest& request, const RestoreServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientRestoreServerAsyncHelper( this, request, handler, context ); } );
}

StartMaintenanceOutcome OpsWorksCMClient::StartMaintenance(const StartMaintenanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMaintenanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMaintenanceOutcomeCallable OpsWorksCMClient::StartMaintenanceCallable(const StartMaintenanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMaintenanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMaintenance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientStartMaintenanceAsyncHelper(OpsWorksCMClient const * const clientThis, const StartMaintenanceRequest& request, const StartMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMaintenance(request), context);
}

void OpsWorksCMClient::StartMaintenanceAsync(const StartMaintenanceRequest& request, const StartMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientStartMaintenanceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome OpsWorksCMClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable OpsWorksCMClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientTagResourceAsyncHelper(OpsWorksCMClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void OpsWorksCMClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome OpsWorksCMClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable OpsWorksCMClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientUntagResourceAsyncHelper(OpsWorksCMClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void OpsWorksCMClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateServerOutcome OpsWorksCMClient::UpdateServer(const UpdateServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServerOutcomeCallable OpsWorksCMClient::UpdateServerCallable(const UpdateServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientUpdateServerAsyncHelper(OpsWorksCMClient const * const clientThis, const UpdateServerRequest& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServer(request), context);
}

void OpsWorksCMClient::UpdateServerAsync(const UpdateServerRequest& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientUpdateServerAsyncHelper( this, request, handler, context ); } );
}

UpdateServerEngineAttributesOutcome OpsWorksCMClient::UpdateServerEngineAttributes(const UpdateServerEngineAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServerEngineAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServerEngineAttributesOutcomeCallable OpsWorksCMClient::UpdateServerEngineAttributesCallable(const UpdateServerEngineAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerEngineAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServerEngineAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksCMClientUpdateServerEngineAttributesAsyncHelper(OpsWorksCMClient const * const clientThis, const UpdateServerEngineAttributesRequest& request, const UpdateServerEngineAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServerEngineAttributes(request), context);
}

void OpsWorksCMClient::UpdateServerEngineAttributesAsync(const UpdateServerEngineAttributesRequest& request, const UpdateServerEngineAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksCMClientUpdateServerEngineAttributesAsyncHelper( this, request, handler, context ); } );
}

