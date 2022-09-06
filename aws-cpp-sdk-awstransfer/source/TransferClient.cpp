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

#include <aws/awstransfer/TransferClient.h>
#include <aws/awstransfer/TransferEndpoint.h>
#include <aws/awstransfer/TransferErrorMarshaller.h>
#include <aws/awstransfer/model/CreateAccessRequest.h>
#include <aws/awstransfer/model/CreateAgreementRequest.h>
#include <aws/awstransfer/model/CreateConnectorRequest.h>
#include <aws/awstransfer/model/CreateProfileRequest.h>
#include <aws/awstransfer/model/CreateServerRequest.h>
#include <aws/awstransfer/model/CreateUserRequest.h>
#include <aws/awstransfer/model/CreateWorkflowRequest.h>
#include <aws/awstransfer/model/DeleteAccessRequest.h>
#include <aws/awstransfer/model/DeleteAgreementRequest.h>
#include <aws/awstransfer/model/DeleteCertificateRequest.h>
#include <aws/awstransfer/model/DeleteConnectorRequest.h>
#include <aws/awstransfer/model/DeleteProfileRequest.h>
#include <aws/awstransfer/model/DeleteServerRequest.h>
#include <aws/awstransfer/model/DeleteSshPublicKeyRequest.h>
#include <aws/awstransfer/model/DeleteUserRequest.h>
#include <aws/awstransfer/model/DeleteWorkflowRequest.h>
#include <aws/awstransfer/model/DescribeAccessRequest.h>
#include <aws/awstransfer/model/DescribeAgreementRequest.h>
#include <aws/awstransfer/model/DescribeCertificateRequest.h>
#include <aws/awstransfer/model/DescribeConnectorRequest.h>
#include <aws/awstransfer/model/DescribeExecutionRequest.h>
#include <aws/awstransfer/model/DescribeProfileRequest.h>
#include <aws/awstransfer/model/DescribeSecurityPolicyRequest.h>
#include <aws/awstransfer/model/DescribeServerRequest.h>
#include <aws/awstransfer/model/DescribeUserRequest.h>
#include <aws/awstransfer/model/DescribeWorkflowRequest.h>
#include <aws/awstransfer/model/ImportCertificateRequest.h>
#include <aws/awstransfer/model/ImportSshPublicKeyRequest.h>
#include <aws/awstransfer/model/ListAccessesRequest.h>
#include <aws/awstransfer/model/ListAgreementsRequest.h>
#include <aws/awstransfer/model/ListCertificatesRequest.h>
#include <aws/awstransfer/model/ListConnectorsRequest.h>
#include <aws/awstransfer/model/ListExecutionsRequest.h>
#include <aws/awstransfer/model/ListProfilesRequest.h>
#include <aws/awstransfer/model/ListSecurityPoliciesRequest.h>
#include <aws/awstransfer/model/ListServersRequest.h>
#include <aws/awstransfer/model/ListTagsForResourceRequest.h>
#include <aws/awstransfer/model/ListUsersRequest.h>
#include <aws/awstransfer/model/ListWorkflowsRequest.h>
#include <aws/awstransfer/model/SendWorkflowStepStateRequest.h>
#include <aws/awstransfer/model/StartFileTransferRequest.h>
#include <aws/awstransfer/model/StartServerRequest.h>
#include <aws/awstransfer/model/StopServerRequest.h>
#include <aws/awstransfer/model/TagResourceRequest.h>
#include <aws/awstransfer/model/TestIdentityProviderRequest.h>
#include <aws/awstransfer/model/UntagResourceRequest.h>
#include <aws/awstransfer/model/UpdateAccessRequest.h>
#include <aws/awstransfer/model/UpdateAgreementRequest.h>
#include <aws/awstransfer/model/UpdateCertificateRequest.h>
#include <aws/awstransfer/model/UpdateConnectorRequest.h>
#include <aws/awstransfer/model/UpdateProfileRequest.h>
#include <aws/awstransfer/model/UpdateServerRequest.h>
#include <aws/awstransfer/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Transfer;
using namespace Aws::Transfer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "transfer";
static const char* ALLOCATION_TAG = "TransferClient";

TransferClient::TransferClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TransferClient::TransferClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TransferClient::TransferClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TransferErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TransferClient::~TransferClient()
{
}

void TransferClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Transfer");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TransferEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TransferClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAccessOutcome TransferClient::CreateAccess(const CreateAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessOutcomeCallable TransferClient::CreateAccessCallable(const CreateAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateAccessAsync(const CreateAccessRequest& request, const CreateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccessAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateAccessAsyncHelper(const CreateAccessRequest& request, const CreateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccess(request), context);
}

CreateAgreementOutcome TransferClient::CreateAgreement(const CreateAgreementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAgreementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAgreementOutcomeCallable TransferClient::CreateAgreementCallable(const CreateAgreementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAgreementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAgreement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateAgreementAsync(const CreateAgreementRequest& request, const CreateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAgreementAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateAgreementAsyncHelper(const CreateAgreementRequest& request, const CreateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAgreement(request), context);
}

CreateConnectorOutcome TransferClient::CreateConnector(const CreateConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorOutcomeCallable TransferClient::CreateConnectorCallable(const CreateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateConnectorAsync(const CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectorAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateConnectorAsyncHelper(const CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnector(request), context);
}

CreateProfileOutcome TransferClient::CreateProfile(const CreateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable TransferClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfileAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateProfileAsyncHelper(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfile(request), context);
}

CreateServerOutcome TransferClient::CreateServer(const CreateServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServerOutcomeCallable TransferClient::CreateServerCallable(const CreateServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateServerAsync(const CreateServerRequest& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateServerAsyncHelper(const CreateServerRequest& request, const CreateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateServer(request), context);
}

CreateUserOutcome TransferClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable TransferClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

CreateWorkflowOutcome TransferClient::CreateWorkflow(const CreateWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowOutcomeCallable TransferClient::CreateWorkflowCallable(const CreateWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkflowAsyncHelper( request, handler, context ); } );
}

void TransferClient::CreateWorkflowAsyncHelper(const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkflow(request), context);
}

DeleteAccessOutcome TransferClient::DeleteAccess(const DeleteAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessOutcomeCallable TransferClient::DeleteAccessCallable(const DeleteAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteAccessAsync(const DeleteAccessRequest& request, const DeleteAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteAccessAsyncHelper(const DeleteAccessRequest& request, const DeleteAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccess(request), context);
}

DeleteAgreementOutcome TransferClient::DeleteAgreement(const DeleteAgreementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAgreementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAgreementOutcomeCallable TransferClient::DeleteAgreementCallable(const DeleteAgreementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAgreementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAgreement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteAgreementAsync(const DeleteAgreementRequest& request, const DeleteAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAgreementAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteAgreementAsyncHelper(const DeleteAgreementRequest& request, const DeleteAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAgreement(request), context);
}

DeleteCertificateOutcome TransferClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable TransferClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCertificateAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DeleteConnectorOutcome TransferClient::DeleteConnector(const DeleteConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectorOutcomeCallable TransferClient::DeleteConnectorCallable(const DeleteConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteConnectorAsync(const DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectorAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteConnectorAsyncHelper(const DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnector(request), context);
}

DeleteProfileOutcome TransferClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable TransferClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteProfileAsyncHelper(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfile(request), context);
}

DeleteServerOutcome TransferClient::DeleteServer(const DeleteServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServerOutcomeCallable TransferClient::DeleteServerCallable(const DeleteServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteServerAsync(const DeleteServerRequest& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteServerAsyncHelper(const DeleteServerRequest& request, const DeleteServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServer(request), context);
}

DeleteSshPublicKeyOutcome TransferClient::DeleteSshPublicKey(const DeleteSshPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSshPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSshPublicKeyOutcomeCallable TransferClient::DeleteSshPublicKeyCallable(const DeleteSshPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSshPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSshPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteSshPublicKeyAsync(const DeleteSshPublicKeyRequest& request, const DeleteSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSshPublicKeyAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteSshPublicKeyAsyncHelper(const DeleteSshPublicKeyRequest& request, const DeleteSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSshPublicKey(request), context);
}

DeleteUserOutcome TransferClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable TransferClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeleteWorkflowOutcome TransferClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable TransferClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkflowAsyncHelper( request, handler, context ); } );
}

void TransferClient::DeleteWorkflowAsyncHelper(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkflow(request), context);
}

DescribeAccessOutcome TransferClient::DescribeAccess(const DescribeAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccessOutcomeCallable TransferClient::DescribeAccessCallable(const DescribeAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeAccessAsync(const DescribeAccessRequest& request, const DescribeAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccessAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeAccessAsyncHelper(const DescribeAccessRequest& request, const DescribeAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccess(request), context);
}

DescribeAgreementOutcome TransferClient::DescribeAgreement(const DescribeAgreementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAgreementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgreementOutcomeCallable TransferClient::DescribeAgreementCallable(const DescribeAgreementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgreementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgreement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeAgreementAsync(const DescribeAgreementRequest& request, const DescribeAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAgreementAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeAgreementAsyncHelper(const DescribeAgreementRequest& request, const DescribeAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgreement(request), context);
}

DescribeCertificateOutcome TransferClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateOutcomeCallable TransferClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificateAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeCertificateAsyncHelper(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificate(request), context);
}

DescribeConnectorOutcome TransferClient::DescribeConnector(const DescribeConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorOutcomeCallable TransferClient::DescribeConnectorCallable(const DescribeConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeConnectorAsync(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConnectorAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeConnectorAsyncHelper(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnector(request), context);
}

DescribeExecutionOutcome TransferClient::DescribeExecution(const DescribeExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExecutionOutcomeCallable TransferClient::DescribeExecutionCallable(const DescribeExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExecutionAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeExecutionAsyncHelper(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExecution(request), context);
}

DescribeProfileOutcome TransferClient::DescribeProfile(const DescribeProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProfileOutcomeCallable TransferClient::DescribeProfileCallable(const DescribeProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeProfileAsync(const DescribeProfileRequest& request, const DescribeProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProfileAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeProfileAsyncHelper(const DescribeProfileRequest& request, const DescribeProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProfile(request), context);
}

DescribeSecurityPolicyOutcome TransferClient::DescribeSecurityPolicy(const DescribeSecurityPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSecurityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityPolicyOutcomeCallable TransferClient::DescribeSecurityPolicyCallable(const DescribeSecurityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeSecurityPolicyAsync(const DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityPolicyAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeSecurityPolicyAsyncHelper(const DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityPolicy(request), context);
}

DescribeServerOutcome TransferClient::DescribeServer(const DescribeServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServerOutcomeCallable TransferClient::DescribeServerCallable(const DescribeServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeServerAsync(const DescribeServerRequest& request, const DescribeServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeServerAsyncHelper(const DescribeServerRequest& request, const DescribeServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServer(request), context);
}

DescribeUserOutcome TransferClient::DescribeUser(const DescribeUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable TransferClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeUserAsyncHelper(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUser(request), context);
}

DescribeWorkflowOutcome TransferClient::DescribeWorkflow(const DescribeWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkflowOutcomeCallable TransferClient::DescribeWorkflowCallable(const DescribeWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::DescribeWorkflowAsync(const DescribeWorkflowRequest& request, const DescribeWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkflowAsyncHelper( request, handler, context ); } );
}

void TransferClient::DescribeWorkflowAsyncHelper(const DescribeWorkflowRequest& request, const DescribeWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkflow(request), context);
}

ImportCertificateOutcome TransferClient::ImportCertificate(const ImportCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCertificateOutcomeCallable TransferClient::ImportCertificateCallable(const ImportCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ImportCertificateAsync(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCertificateAsyncHelper( request, handler, context ); } );
}

void TransferClient::ImportCertificateAsyncHelper(const ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCertificate(request), context);
}

ImportSshPublicKeyOutcome TransferClient::ImportSshPublicKey(const ImportSshPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportSshPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportSshPublicKeyOutcomeCallable TransferClient::ImportSshPublicKeyCallable(const ImportSshPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSshPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSshPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ImportSshPublicKeyAsync(const ImportSshPublicKeyRequest& request, const ImportSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportSshPublicKeyAsyncHelper( request, handler, context ); } );
}

void TransferClient::ImportSshPublicKeyAsyncHelper(const ImportSshPublicKeyRequest& request, const ImportSshPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportSshPublicKey(request), context);
}

ListAccessesOutcome TransferClient::ListAccesses(const ListAccessesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccessesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessesOutcomeCallable TransferClient::ListAccessesCallable(const ListAccessesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccesses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListAccessesAsync(const ListAccessesRequest& request, const ListAccessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessesAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListAccessesAsyncHelper(const ListAccessesRequest& request, const ListAccessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccesses(request), context);
}

ListAgreementsOutcome TransferClient::ListAgreements(const ListAgreementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAgreementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAgreementsOutcomeCallable TransferClient::ListAgreementsCallable(const ListAgreementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAgreementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAgreements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListAgreementsAsync(const ListAgreementsRequest& request, const ListAgreementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAgreementsAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListAgreementsAsyncHelper(const ListAgreementsRequest& request, const ListAgreementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAgreements(request), context);
}

ListCertificatesOutcome TransferClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCertificatesOutcomeCallable TransferClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCertificatesAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListCertificatesAsyncHelper(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificates(request), context);
}

ListConnectorsOutcome TransferClient::ListConnectors(const ListConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorsOutcomeCallable TransferClient::ListConnectorsCallable(const ListConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConnectorsAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListConnectorsAsyncHelper(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConnectors(request), context);
}

ListExecutionsOutcome TransferClient::ListExecutions(const ListExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExecutionsOutcomeCallable TransferClient::ListExecutionsCallable(const ListExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListExecutionsAsync(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExecutionsAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListExecutionsAsyncHelper(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExecutions(request), context);
}

ListProfilesOutcome TransferClient::ListProfiles(const ListProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProfilesOutcomeCallable TransferClient::ListProfilesCallable(const ListProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListProfilesAsync(const ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfilesAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListProfilesAsyncHelper(const ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfiles(request), context);
}

ListSecurityPoliciesOutcome TransferClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSecurityPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityPoliciesOutcomeCallable TransferClient::ListSecurityPoliciesCallable(const ListSecurityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListSecurityPoliciesAsync(const ListSecurityPoliciesRequest& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityPoliciesAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListSecurityPoliciesAsyncHelper(const ListSecurityPoliciesRequest& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityPolicies(request), context);
}

ListServersOutcome TransferClient::ListServers(const ListServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServersOutcomeCallable TransferClient::ListServersCallable(const ListServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListServersAsync(const ListServersRequest& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServersAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListServersAsyncHelper(const ListServersRequest& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServers(request), context);
}

ListTagsForResourceOutcome TransferClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable TransferClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUsersOutcome TransferClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable TransferClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ListWorkflowsOutcome TransferClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkflowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable TransferClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkflowsAsyncHelper( request, handler, context ); } );
}

void TransferClient::ListWorkflowsAsyncHelper(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkflows(request), context);
}

SendWorkflowStepStateOutcome TransferClient::SendWorkflowStepState(const SendWorkflowStepStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendWorkflowStepStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendWorkflowStepStateOutcomeCallable TransferClient::SendWorkflowStepStateCallable(const SendWorkflowStepStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendWorkflowStepStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendWorkflowStepState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::SendWorkflowStepStateAsync(const SendWorkflowStepStateRequest& request, const SendWorkflowStepStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendWorkflowStepStateAsyncHelper( request, handler, context ); } );
}

void TransferClient::SendWorkflowStepStateAsyncHelper(const SendWorkflowStepStateRequest& request, const SendWorkflowStepStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendWorkflowStepState(request), context);
}

StartFileTransferOutcome TransferClient::StartFileTransfer(const StartFileTransferRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFileTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFileTransferOutcomeCallable TransferClient::StartFileTransferCallable(const StartFileTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFileTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFileTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::StartFileTransferAsync(const StartFileTransferRequest& request, const StartFileTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFileTransferAsyncHelper( request, handler, context ); } );
}

void TransferClient::StartFileTransferAsyncHelper(const StartFileTransferRequest& request, const StartFileTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFileTransfer(request), context);
}

StartServerOutcome TransferClient::StartServer(const StartServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartServerOutcomeCallable TransferClient::StartServerCallable(const StartServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::StartServerAsync(const StartServerRequest& request, const StartServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::StartServerAsyncHelper(const StartServerRequest& request, const StartServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartServer(request), context);
}

StopServerOutcome TransferClient::StopServer(const StopServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopServerOutcomeCallable TransferClient::StopServerCallable(const StopServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::StopServerAsync(const StopServerRequest& request, const StopServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::StopServerAsyncHelper(const StopServerRequest& request, const StopServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopServer(request), context);
}

TagResourceOutcome TransferClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable TransferClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void TransferClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TestIdentityProviderOutcome TransferClient::TestIdentityProvider(const TestIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestIdentityProviderOutcomeCallable TransferClient::TestIdentityProviderCallable(const TestIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::TestIdentityProviderAsync(const TestIdentityProviderRequest& request, const TestIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestIdentityProviderAsyncHelper( request, handler, context ); } );
}

void TransferClient::TestIdentityProviderAsyncHelper(const TestIdentityProviderRequest& request, const TestIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestIdentityProvider(request), context);
}

UntagResourceOutcome TransferClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable TransferClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void TransferClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAccessOutcome TransferClient::UpdateAccess(const UpdateAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccessOutcomeCallable TransferClient::UpdateAccessCallable(const UpdateAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateAccessAsync(const UpdateAccessRequest& request, const UpdateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccessAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateAccessAsyncHelper(const UpdateAccessRequest& request, const UpdateAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccess(request), context);
}

UpdateAgreementOutcome TransferClient::UpdateAgreement(const UpdateAgreementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAgreementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAgreementOutcomeCallable TransferClient::UpdateAgreementCallable(const UpdateAgreementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAgreementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAgreement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateAgreementAsync(const UpdateAgreementRequest& request, const UpdateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAgreementAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateAgreementAsyncHelper(const UpdateAgreementRequest& request, const UpdateAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAgreement(request), context);
}

UpdateCertificateOutcome TransferClient::UpdateCertificate(const UpdateCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCertificateOutcomeCallable TransferClient::UpdateCertificateCallable(const UpdateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateCertificateAsync(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCertificateAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateCertificateAsyncHelper(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCertificate(request), context);
}

UpdateConnectorOutcome TransferClient::UpdateConnector(const UpdateConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorOutcomeCallable TransferClient::UpdateConnectorCallable(const UpdateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateConnectorAsync(const UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectorAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateConnectorAsyncHelper(const UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnector(request), context);
}

UpdateProfileOutcome TransferClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable TransferClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfileAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateProfileAsyncHelper(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfile(request), context);
}

UpdateServerOutcome TransferClient::UpdateServer(const UpdateServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServerOutcomeCallable TransferClient::UpdateServerCallable(const UpdateServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateServerAsync(const UpdateServerRequest& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServerAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateServerAsyncHelper(const UpdateServerRequest& request, const UpdateServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServer(request), context);
}

UpdateUserOutcome TransferClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable TransferClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TransferClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void TransferClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

