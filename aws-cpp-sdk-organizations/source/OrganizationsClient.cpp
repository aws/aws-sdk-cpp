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

#include <aws/organizations/OrganizationsClient.h>
#include <aws/organizations/OrganizationsEndpoint.h>
#include <aws/organizations/OrganizationsErrorMarshaller.h>
#include <aws/organizations/model/AcceptHandshakeRequest.h>
#include <aws/organizations/model/AttachPolicyRequest.h>
#include <aws/organizations/model/CancelHandshakeRequest.h>
#include <aws/organizations/model/CloseAccountRequest.h>
#include <aws/organizations/model/CreateAccountRequest.h>
#include <aws/organizations/model/CreateGovCloudAccountRequest.h>
#include <aws/organizations/model/CreateOrganizationRequest.h>
#include <aws/organizations/model/CreateOrganizationalUnitRequest.h>
#include <aws/organizations/model/CreatePolicyRequest.h>
#include <aws/organizations/model/DeclineHandshakeRequest.h>
#include <aws/organizations/model/DeleteOrganizationalUnitRequest.h>
#include <aws/organizations/model/DeletePolicyRequest.h>
#include <aws/organizations/model/DeregisterDelegatedAdministratorRequest.h>
#include <aws/organizations/model/DescribeAccountRequest.h>
#include <aws/organizations/model/DescribeCreateAccountStatusRequest.h>
#include <aws/organizations/model/DescribeEffectivePolicyRequest.h>
#include <aws/organizations/model/DescribeHandshakeRequest.h>
#include <aws/organizations/model/DescribeOrganizationalUnitRequest.h>
#include <aws/organizations/model/DescribePolicyRequest.h>
#include <aws/organizations/model/DetachPolicyRequest.h>
#include <aws/organizations/model/DisableAWSServiceAccessRequest.h>
#include <aws/organizations/model/DisablePolicyTypeRequest.h>
#include <aws/organizations/model/EnableAWSServiceAccessRequest.h>
#include <aws/organizations/model/EnableAllFeaturesRequest.h>
#include <aws/organizations/model/EnablePolicyTypeRequest.h>
#include <aws/organizations/model/InviteAccountToOrganizationRequest.h>
#include <aws/organizations/model/ListAWSServiceAccessForOrganizationRequest.h>
#include <aws/organizations/model/ListAccountsRequest.h>
#include <aws/organizations/model/ListAccountsForParentRequest.h>
#include <aws/organizations/model/ListChildrenRequest.h>
#include <aws/organizations/model/ListCreateAccountStatusRequest.h>
#include <aws/organizations/model/ListDelegatedAdministratorsRequest.h>
#include <aws/organizations/model/ListDelegatedServicesForAccountRequest.h>
#include <aws/organizations/model/ListHandshakesForAccountRequest.h>
#include <aws/organizations/model/ListHandshakesForOrganizationRequest.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentRequest.h>
#include <aws/organizations/model/ListParentsRequest.h>
#include <aws/organizations/model/ListPoliciesRequest.h>
#include <aws/organizations/model/ListPoliciesForTargetRequest.h>
#include <aws/organizations/model/ListRootsRequest.h>
#include <aws/organizations/model/ListTagsForResourceRequest.h>
#include <aws/organizations/model/ListTargetsForPolicyRequest.h>
#include <aws/organizations/model/MoveAccountRequest.h>
#include <aws/organizations/model/RegisterDelegatedAdministratorRequest.h>
#include <aws/organizations/model/RemoveAccountFromOrganizationRequest.h>
#include <aws/organizations/model/TagResourceRequest.h>
#include <aws/organizations/model/UntagResourceRequest.h>
#include <aws/organizations/model/UpdateOrganizationalUnitRequest.h>
#include <aws/organizations/model/UpdatePolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Organizations;
using namespace Aws::Organizations::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "organizations";
static const char* ALLOCATION_TAG = "OrganizationsClient";

OrganizationsClient::OrganizationsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OrganizationsClient::~OrganizationsClient()
{
}

void OrganizationsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Organizations");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OrganizationsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OrganizationsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptHandshakeOutcome OrganizationsClient::AcceptHandshake(const AcceptHandshakeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptHandshakeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptHandshakeOutcomeCallable OrganizationsClient::AcceptHandshakeCallable(const AcceptHandshakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptHandshakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptHandshake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientAcceptHandshakeAsyncHelper(OrganizationsClient const * const clientThis, const AcceptHandshakeRequest& request, const AcceptHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptHandshake(request), context);
}

void OrganizationsClient::AcceptHandshakeAsync(const AcceptHandshakeRequest& request, const AcceptHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientAcceptHandshakeAsyncHelper( this, request, handler, context ); } );
}

AttachPolicyOutcome OrganizationsClient::AttachPolicy(const AttachPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachPolicyOutcomeCallable OrganizationsClient::AttachPolicyCallable(const AttachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientAttachPolicyAsyncHelper(OrganizationsClient const * const clientThis, const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachPolicy(request), context);
}

void OrganizationsClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientAttachPolicyAsyncHelper( this, request, handler, context ); } );
}

CancelHandshakeOutcome OrganizationsClient::CancelHandshake(const CancelHandshakeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelHandshakeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelHandshakeOutcomeCallable OrganizationsClient::CancelHandshakeCallable(const CancelHandshakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelHandshakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelHandshake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCancelHandshakeAsyncHelper(OrganizationsClient const * const clientThis, const CancelHandshakeRequest& request, const CancelHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelHandshake(request), context);
}

void OrganizationsClient::CancelHandshakeAsync(const CancelHandshakeRequest& request, const CancelHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCancelHandshakeAsyncHelper( this, request, handler, context ); } );
}

CloseAccountOutcome OrganizationsClient::CloseAccount(const CloseAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CloseAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloseAccountOutcomeCallable OrganizationsClient::CloseAccountCallable(const CloseAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloseAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloseAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCloseAccountAsyncHelper(OrganizationsClient const * const clientThis, const CloseAccountRequest& request, const CloseAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CloseAccount(request), context);
}

void OrganizationsClient::CloseAccountAsync(const CloseAccountRequest& request, const CloseAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCloseAccountAsyncHelper( this, request, handler, context ); } );
}

CreateAccountOutcome OrganizationsClient::CreateAccount(const CreateAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountOutcomeCallable OrganizationsClient::CreateAccountCallable(const CreateAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCreateAccountAsyncHelper(OrganizationsClient const * const clientThis, const CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccount(request), context);
}

void OrganizationsClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCreateAccountAsyncHelper( this, request, handler, context ); } );
}

CreateGovCloudAccountOutcome OrganizationsClient::CreateGovCloudAccount(const CreateGovCloudAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGovCloudAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGovCloudAccountOutcomeCallable OrganizationsClient::CreateGovCloudAccountCallable(const CreateGovCloudAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGovCloudAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGovCloudAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCreateGovCloudAccountAsyncHelper(OrganizationsClient const * const clientThis, const CreateGovCloudAccountRequest& request, const CreateGovCloudAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGovCloudAccount(request), context);
}

void OrganizationsClient::CreateGovCloudAccountAsync(const CreateGovCloudAccountRequest& request, const CreateGovCloudAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCreateGovCloudAccountAsyncHelper( this, request, handler, context ); } );
}

CreateOrganizationOutcome OrganizationsClient::CreateOrganization(const CreateOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrganizationOutcomeCallable OrganizationsClient::CreateOrganizationCallable(const CreateOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCreateOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOrganization(request), context);
}

void OrganizationsClient::CreateOrganizationAsync(const CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCreateOrganizationAsyncHelper( this, request, handler, context ); } );
}

CreateOrganizationalUnitOutcome OrganizationsClient::CreateOrganizationalUnit(const CreateOrganizationalUnitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOrganizationalUnitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrganizationalUnitOutcomeCallable OrganizationsClient::CreateOrganizationalUnitCallable(const CreateOrganizationalUnitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOrganizationalUnitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOrganizationalUnit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCreateOrganizationalUnitAsyncHelper(OrganizationsClient const * const clientThis, const CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOrganizationalUnit(request), context);
}

void OrganizationsClient::CreateOrganizationalUnitAsync(const CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCreateOrganizationalUnitAsyncHelper( this, request, handler, context ); } );
}

CreatePolicyOutcome OrganizationsClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePolicyOutcomeCallable OrganizationsClient::CreatePolicyCallable(const CreatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientCreatePolicyAsyncHelper(OrganizationsClient const * const clientThis, const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePolicy(request), context);
}

void OrganizationsClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientCreatePolicyAsyncHelper( this, request, handler, context ); } );
}

DeclineHandshakeOutcome OrganizationsClient::DeclineHandshake(const DeclineHandshakeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeclineHandshakeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineHandshakeOutcomeCallable OrganizationsClient::DeclineHandshakeCallable(const DeclineHandshakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineHandshakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineHandshake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDeclineHandshakeAsyncHelper(OrganizationsClient const * const clientThis, const DeclineHandshakeRequest& request, const DeclineHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeclineHandshake(request), context);
}

void OrganizationsClient::DeclineHandshakeAsync(const DeclineHandshakeRequest& request, const DeclineHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDeclineHandshakeAsyncHelper( this, request, handler, context ); } );
}

DeleteOrganizationOutcome OrganizationsClient::DeleteOrganization() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return DeleteOrganizationOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DeleteOrganization"));
}

DeleteOrganizationOutcomeCallable OrganizationsClient::DeleteOrganizationCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationOutcome() > >(ALLOCATION_TAG, [this](){ return this->DeleteOrganization(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDeleteOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->DeleteOrganization(), context);
}

void OrganizationsClient::DeleteOrganizationAsync(const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ OrganizationsClientDeleteOrganizationAsyncHelper( this, handler, context ); } );
}

DeleteOrganizationalUnitOutcome OrganizationsClient::DeleteOrganizationalUnit(const DeleteOrganizationalUnitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOrganizationalUnitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOrganizationalUnitOutcomeCallable OrganizationsClient::DeleteOrganizationalUnitCallable(const DeleteOrganizationalUnitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOrganizationalUnitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOrganizationalUnit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDeleteOrganizationalUnitAsyncHelper(OrganizationsClient const * const clientThis, const DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOrganizationalUnit(request), context);
}

void OrganizationsClient::DeleteOrganizationalUnitAsync(const DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDeleteOrganizationalUnitAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome OrganizationsClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcomeCallable OrganizationsClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDeletePolicyAsyncHelper(OrganizationsClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void OrganizationsClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DeregisterDelegatedAdministratorOutcome OrganizationsClient::DeregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterDelegatedAdministratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterDelegatedAdministratorOutcomeCallable OrganizationsClient::DeregisterDelegatedAdministratorCallable(const DeregisterDelegatedAdministratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterDelegatedAdministratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterDelegatedAdministrator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDeregisterDelegatedAdministratorAsyncHelper(OrganizationsClient const * const clientThis, const DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterDelegatedAdministrator(request), context);
}

void OrganizationsClient::DeregisterDelegatedAdministratorAsync(const DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDeregisterDelegatedAdministratorAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountOutcome OrganizationsClient::DescribeAccount(const DescribeAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountOutcomeCallable OrganizationsClient::DescribeAccountCallable(const DescribeAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeAccountAsyncHelper(OrganizationsClient const * const clientThis, const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccount(request), context);
}

void OrganizationsClient::DescribeAccountAsync(const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribeAccountAsyncHelper( this, request, handler, context ); } );
}

DescribeCreateAccountStatusOutcome OrganizationsClient::DescribeCreateAccountStatus(const DescribeCreateAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCreateAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCreateAccountStatusOutcomeCallable OrganizationsClient::DescribeCreateAccountStatusCallable(const DescribeCreateAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCreateAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCreateAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeCreateAccountStatusAsyncHelper(OrganizationsClient const * const clientThis, const DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCreateAccountStatus(request), context);
}

void OrganizationsClient::DescribeCreateAccountStatusAsync(const DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribeCreateAccountStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeEffectivePolicyOutcome OrganizationsClient::DescribeEffectivePolicy(const DescribeEffectivePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEffectivePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEffectivePolicyOutcomeCallable OrganizationsClient::DescribeEffectivePolicyCallable(const DescribeEffectivePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEffectivePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEffectivePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeEffectivePolicyAsyncHelper(OrganizationsClient const * const clientThis, const DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEffectivePolicy(request), context);
}

void OrganizationsClient::DescribeEffectivePolicyAsync(const DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribeEffectivePolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeHandshakeOutcome OrganizationsClient::DescribeHandshake(const DescribeHandshakeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHandshakeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHandshakeOutcomeCallable OrganizationsClient::DescribeHandshakeCallable(const DescribeHandshakeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHandshakeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHandshake(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeHandshakeAsyncHelper(OrganizationsClient const * const clientThis, const DescribeHandshakeRequest& request, const DescribeHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHandshake(request), context);
}

void OrganizationsClient::DescribeHandshakeAsync(const DescribeHandshakeRequest& request, const DescribeHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribeHandshakeAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationOutcome OrganizationsClient::DescribeOrganization() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return DescribeOrganizationOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeOrganization"));
}

DescribeOrganizationOutcomeCallable OrganizationsClient::DescribeOrganizationCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeOrganization(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->DescribeOrganization(), context);
}

void OrganizationsClient::DescribeOrganizationAsync(const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ OrganizationsClientDescribeOrganizationAsyncHelper( this, handler, context ); } );
}

DescribeOrganizationalUnitOutcome OrganizationsClient::DescribeOrganizationalUnit(const DescribeOrganizationalUnitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOrganizationalUnitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationalUnitOutcomeCallable OrganizationsClient::DescribeOrganizationalUnitCallable(const DescribeOrganizationalUnitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationalUnitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationalUnit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribeOrganizationalUnitAsyncHelper(OrganizationsClient const * const clientThis, const DescribeOrganizationalUnitRequest& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationalUnit(request), context);
}

void OrganizationsClient::DescribeOrganizationalUnitAsync(const DescribeOrganizationalUnitRequest& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribeOrganizationalUnitAsyncHelper( this, request, handler, context ); } );
}

DescribePolicyOutcome OrganizationsClient::DescribePolicy(const DescribePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePolicyOutcomeCallable OrganizationsClient::DescribePolicyCallable(const DescribePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDescribePolicyAsyncHelper(OrganizationsClient const * const clientThis, const DescribePolicyRequest& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePolicy(request), context);
}

void OrganizationsClient::DescribePolicyAsync(const DescribePolicyRequest& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDescribePolicyAsyncHelper( this, request, handler, context ); } );
}

DetachPolicyOutcome OrganizationsClient::DetachPolicy(const DetachPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachPolicyOutcomeCallable OrganizationsClient::DetachPolicyCallable(const DetachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDetachPolicyAsyncHelper(OrganizationsClient const * const clientThis, const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachPolicy(request), context);
}

void OrganizationsClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDetachPolicyAsyncHelper( this, request, handler, context ); } );
}

DisableAWSServiceAccessOutcome OrganizationsClient::DisableAWSServiceAccess(const DisableAWSServiceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableAWSServiceAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAWSServiceAccessOutcomeCallable OrganizationsClient::DisableAWSServiceAccessCallable(const DisableAWSServiceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAWSServiceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAWSServiceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDisableAWSServiceAccessAsyncHelper(OrganizationsClient const * const clientThis, const DisableAWSServiceAccessRequest& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableAWSServiceAccess(request), context);
}

void OrganizationsClient::DisableAWSServiceAccessAsync(const DisableAWSServiceAccessRequest& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDisableAWSServiceAccessAsyncHelper( this, request, handler, context ); } );
}

DisablePolicyTypeOutcome OrganizationsClient::DisablePolicyType(const DisablePolicyTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisablePolicyTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisablePolicyTypeOutcomeCallable OrganizationsClient::DisablePolicyTypeCallable(const DisablePolicyTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisablePolicyTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisablePolicyType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientDisablePolicyTypeAsyncHelper(OrganizationsClient const * const clientThis, const DisablePolicyTypeRequest& request, const DisablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisablePolicyType(request), context);
}

void OrganizationsClient::DisablePolicyTypeAsync(const DisablePolicyTypeRequest& request, const DisablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientDisablePolicyTypeAsyncHelper( this, request, handler, context ); } );
}

EnableAWSServiceAccessOutcome OrganizationsClient::EnableAWSServiceAccess(const EnableAWSServiceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableAWSServiceAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAWSServiceAccessOutcomeCallable OrganizationsClient::EnableAWSServiceAccessCallable(const EnableAWSServiceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAWSServiceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAWSServiceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientEnableAWSServiceAccessAsyncHelper(OrganizationsClient const * const clientThis, const EnableAWSServiceAccessRequest& request, const EnableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAWSServiceAccess(request), context);
}

void OrganizationsClient::EnableAWSServiceAccessAsync(const EnableAWSServiceAccessRequest& request, const EnableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientEnableAWSServiceAccessAsyncHelper( this, request, handler, context ); } );
}

EnableAllFeaturesOutcome OrganizationsClient::EnableAllFeatures(const EnableAllFeaturesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableAllFeaturesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAllFeaturesOutcomeCallable OrganizationsClient::EnableAllFeaturesCallable(const EnableAllFeaturesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAllFeaturesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAllFeatures(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientEnableAllFeaturesAsyncHelper(OrganizationsClient const * const clientThis, const EnableAllFeaturesRequest& request, const EnableAllFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAllFeatures(request), context);
}

void OrganizationsClient::EnableAllFeaturesAsync(const EnableAllFeaturesRequest& request, const EnableAllFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientEnableAllFeaturesAsyncHelper( this, request, handler, context ); } );
}

EnablePolicyTypeOutcome OrganizationsClient::EnablePolicyType(const EnablePolicyTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnablePolicyTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnablePolicyTypeOutcomeCallable OrganizationsClient::EnablePolicyTypeCallable(const EnablePolicyTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnablePolicyTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnablePolicyType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientEnablePolicyTypeAsyncHelper(OrganizationsClient const * const clientThis, const EnablePolicyTypeRequest& request, const EnablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnablePolicyType(request), context);
}

void OrganizationsClient::EnablePolicyTypeAsync(const EnablePolicyTypeRequest& request, const EnablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientEnablePolicyTypeAsyncHelper( this, request, handler, context ); } );
}

InviteAccountToOrganizationOutcome OrganizationsClient::InviteAccountToOrganization(const InviteAccountToOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InviteAccountToOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InviteAccountToOrganizationOutcomeCallable OrganizationsClient::InviteAccountToOrganizationCallable(const InviteAccountToOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteAccountToOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteAccountToOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientInviteAccountToOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const InviteAccountToOrganizationRequest& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InviteAccountToOrganization(request), context);
}

void OrganizationsClient::InviteAccountToOrganizationAsync(const InviteAccountToOrganizationRequest& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientInviteAccountToOrganizationAsyncHelper( this, request, handler, context ); } );
}

LeaveOrganizationOutcome OrganizationsClient::LeaveOrganization() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return LeaveOrganizationOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "LeaveOrganization"));
}

LeaveOrganizationOutcomeCallable OrganizationsClient::LeaveOrganizationCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< LeaveOrganizationOutcome() > >(ALLOCATION_TAG, [this](){ return this->LeaveOrganization(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientLeaveOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const LeaveOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->LeaveOrganization(), context);
}

void OrganizationsClient::LeaveOrganizationAsync(const LeaveOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ OrganizationsClientLeaveOrganizationAsyncHelper( this, handler, context ); } );
}

ListAWSServiceAccessForOrganizationOutcome OrganizationsClient::ListAWSServiceAccessForOrganization(const ListAWSServiceAccessForOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAWSServiceAccessForOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAWSServiceAccessForOrganizationOutcomeCallable OrganizationsClient::ListAWSServiceAccessForOrganizationCallable(const ListAWSServiceAccessForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAWSServiceAccessForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAWSServiceAccessForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListAWSServiceAccessForOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const ListAWSServiceAccessForOrganizationRequest& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAWSServiceAccessForOrganization(request), context);
}

void OrganizationsClient::ListAWSServiceAccessForOrganizationAsync(const ListAWSServiceAccessForOrganizationRequest& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListAWSServiceAccessForOrganizationAsyncHelper( this, request, handler, context ); } );
}

ListAccountsOutcome OrganizationsClient::ListAccounts(const ListAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountsOutcomeCallable OrganizationsClient::ListAccountsCallable(const ListAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListAccountsAsyncHelper(OrganizationsClient const * const clientThis, const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccounts(request), context);
}

void OrganizationsClient::ListAccountsAsync(const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListAccountsAsyncHelper( this, request, handler, context ); } );
}

ListAccountsForParentOutcome OrganizationsClient::ListAccountsForParent(const ListAccountsForParentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountsForParentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountsForParentOutcomeCallable OrganizationsClient::ListAccountsForParentCallable(const ListAccountsForParentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsForParentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountsForParent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListAccountsForParentAsyncHelper(OrganizationsClient const * const clientThis, const ListAccountsForParentRequest& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountsForParent(request), context);
}

void OrganizationsClient::ListAccountsForParentAsync(const ListAccountsForParentRequest& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListAccountsForParentAsyncHelper( this, request, handler, context ); } );
}

ListChildrenOutcome OrganizationsClient::ListChildren(const ListChildrenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListChildrenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListChildrenOutcomeCallable OrganizationsClient::ListChildrenCallable(const ListChildrenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChildrenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChildren(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListChildrenAsyncHelper(OrganizationsClient const * const clientThis, const ListChildrenRequest& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChildren(request), context);
}

void OrganizationsClient::ListChildrenAsync(const ListChildrenRequest& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListChildrenAsyncHelper( this, request, handler, context ); } );
}

ListCreateAccountStatusOutcome OrganizationsClient::ListCreateAccountStatus(const ListCreateAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCreateAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCreateAccountStatusOutcomeCallable OrganizationsClient::ListCreateAccountStatusCallable(const ListCreateAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCreateAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCreateAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListCreateAccountStatusAsyncHelper(OrganizationsClient const * const clientThis, const ListCreateAccountStatusRequest& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCreateAccountStatus(request), context);
}

void OrganizationsClient::ListCreateAccountStatusAsync(const ListCreateAccountStatusRequest& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListCreateAccountStatusAsyncHelper( this, request, handler, context ); } );
}

ListDelegatedAdministratorsOutcome OrganizationsClient::ListDelegatedAdministrators(const ListDelegatedAdministratorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDelegatedAdministratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDelegatedAdministratorsOutcomeCallable OrganizationsClient::ListDelegatedAdministratorsCallable(const ListDelegatedAdministratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDelegatedAdministratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDelegatedAdministrators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListDelegatedAdministratorsAsyncHelper(OrganizationsClient const * const clientThis, const ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDelegatedAdministrators(request), context);
}

void OrganizationsClient::ListDelegatedAdministratorsAsync(const ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListDelegatedAdministratorsAsyncHelper( this, request, handler, context ); } );
}

ListDelegatedServicesForAccountOutcome OrganizationsClient::ListDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDelegatedServicesForAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDelegatedServicesForAccountOutcomeCallable OrganizationsClient::ListDelegatedServicesForAccountCallable(const ListDelegatedServicesForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDelegatedServicesForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDelegatedServicesForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListDelegatedServicesForAccountAsyncHelper(OrganizationsClient const * const clientThis, const ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDelegatedServicesForAccount(request), context);
}

void OrganizationsClient::ListDelegatedServicesForAccountAsync(const ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListDelegatedServicesForAccountAsyncHelper( this, request, handler, context ); } );
}

ListHandshakesForAccountOutcome OrganizationsClient::ListHandshakesForAccount(const ListHandshakesForAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHandshakesForAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHandshakesForAccountOutcomeCallable OrganizationsClient::ListHandshakesForAccountCallable(const ListHandshakesForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHandshakesForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHandshakesForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListHandshakesForAccountAsyncHelper(OrganizationsClient const * const clientThis, const ListHandshakesForAccountRequest& request, const ListHandshakesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHandshakesForAccount(request), context);
}

void OrganizationsClient::ListHandshakesForAccountAsync(const ListHandshakesForAccountRequest& request, const ListHandshakesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListHandshakesForAccountAsyncHelper( this, request, handler, context ); } );
}

ListHandshakesForOrganizationOutcome OrganizationsClient::ListHandshakesForOrganization(const ListHandshakesForOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHandshakesForOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHandshakesForOrganizationOutcomeCallable OrganizationsClient::ListHandshakesForOrganizationCallable(const ListHandshakesForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHandshakesForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHandshakesForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListHandshakesForOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const ListHandshakesForOrganizationRequest& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHandshakesForOrganization(request), context);
}

void OrganizationsClient::ListHandshakesForOrganizationAsync(const ListHandshakesForOrganizationRequest& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListHandshakesForOrganizationAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationalUnitsForParentOutcome OrganizationsClient::ListOrganizationalUnitsForParent(const ListOrganizationalUnitsForParentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOrganizationalUnitsForParentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationalUnitsForParentOutcomeCallable OrganizationsClient::ListOrganizationalUnitsForParentCallable(const ListOrganizationalUnitsForParentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationalUnitsForParentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationalUnitsForParent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListOrganizationalUnitsForParentAsyncHelper(OrganizationsClient const * const clientThis, const ListOrganizationalUnitsForParentRequest& request, const ListOrganizationalUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationalUnitsForParent(request), context);
}

void OrganizationsClient::ListOrganizationalUnitsForParentAsync(const ListOrganizationalUnitsForParentRequest& request, const ListOrganizationalUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListOrganizationalUnitsForParentAsyncHelper( this, request, handler, context ); } );
}

ListParentsOutcome OrganizationsClient::ListParents(const ListParentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListParentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListParentsOutcomeCallable OrganizationsClient::ListParentsCallable(const ListParentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListParentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListParentsAsyncHelper(OrganizationsClient const * const clientThis, const ListParentsRequest& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListParents(request), context);
}

void OrganizationsClient::ListParentsAsync(const ListParentsRequest& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListParentsAsyncHelper( this, request, handler, context ); } );
}

ListPoliciesOutcome OrganizationsClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPoliciesOutcomeCallable OrganizationsClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListPoliciesAsyncHelper(OrganizationsClient const * const clientThis, const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicies(request), context);
}

void OrganizationsClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListPoliciesForTargetOutcome OrganizationsClient::ListPoliciesForTarget(const ListPoliciesForTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoliciesForTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPoliciesForTargetOutcomeCallable OrganizationsClient::ListPoliciesForTargetCallable(const ListPoliciesForTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesForTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPoliciesForTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListPoliciesForTargetAsyncHelper(OrganizationsClient const * const clientThis, const ListPoliciesForTargetRequest& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPoliciesForTarget(request), context);
}

void OrganizationsClient::ListPoliciesForTargetAsync(const ListPoliciesForTargetRequest& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListPoliciesForTargetAsyncHelper( this, request, handler, context ); } );
}

ListRootsOutcome OrganizationsClient::ListRoots(const ListRootsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRootsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRootsOutcomeCallable OrganizationsClient::ListRootsCallable(const ListRootsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRootsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListRootsAsyncHelper(OrganizationsClient const * const clientThis, const ListRootsRequest& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRoots(request), context);
}

void OrganizationsClient::ListRootsAsync(const ListRootsRequest& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListRootsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome OrganizationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable OrganizationsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListTagsForResourceAsyncHelper(OrganizationsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void OrganizationsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTargetsForPolicyOutcome OrganizationsClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTargetsForPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsForPolicyOutcomeCallable OrganizationsClient::ListTargetsForPolicyCallable(const ListTargetsForPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsForPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsForPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientListTargetsForPolicyAsyncHelper(OrganizationsClient const * const clientThis, const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTargetsForPolicy(request), context);
}

void OrganizationsClient::ListTargetsForPolicyAsync(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientListTargetsForPolicyAsyncHelper( this, request, handler, context ); } );
}

MoveAccountOutcome OrganizationsClient::MoveAccount(const MoveAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MoveAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MoveAccountOutcomeCallable OrganizationsClient::MoveAccountCallable(const MoveAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MoveAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MoveAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientMoveAccountAsyncHelper(OrganizationsClient const * const clientThis, const MoveAccountRequest& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MoveAccount(request), context);
}

void OrganizationsClient::MoveAccountAsync(const MoveAccountRequest& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientMoveAccountAsyncHelper( this, request, handler, context ); } );
}

RegisterDelegatedAdministratorOutcome OrganizationsClient::RegisterDelegatedAdministrator(const RegisterDelegatedAdministratorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterDelegatedAdministratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDelegatedAdministratorOutcomeCallable OrganizationsClient::RegisterDelegatedAdministratorCallable(const RegisterDelegatedAdministratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDelegatedAdministratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDelegatedAdministrator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientRegisterDelegatedAdministratorAsyncHelper(OrganizationsClient const * const clientThis, const RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterDelegatedAdministrator(request), context);
}

void OrganizationsClient::RegisterDelegatedAdministratorAsync(const RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientRegisterDelegatedAdministratorAsyncHelper( this, request, handler, context ); } );
}

RemoveAccountFromOrganizationOutcome OrganizationsClient::RemoveAccountFromOrganization(const RemoveAccountFromOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveAccountFromOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAccountFromOrganizationOutcomeCallable OrganizationsClient::RemoveAccountFromOrganizationCallable(const RemoveAccountFromOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAccountFromOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAccountFromOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientRemoveAccountFromOrganizationAsyncHelper(OrganizationsClient const * const clientThis, const RemoveAccountFromOrganizationRequest& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveAccountFromOrganization(request), context);
}

void OrganizationsClient::RemoveAccountFromOrganizationAsync(const RemoveAccountFromOrganizationRequest& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientRemoveAccountFromOrganizationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome OrganizationsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable OrganizationsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientTagResourceAsyncHelper(OrganizationsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void OrganizationsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome OrganizationsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable OrganizationsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientUntagResourceAsyncHelper(OrganizationsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void OrganizationsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateOrganizationalUnitOutcome OrganizationsClient::UpdateOrganizationalUnit(const UpdateOrganizationalUnitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateOrganizationalUnitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationalUnitOutcomeCallable OrganizationsClient::UpdateOrganizationalUnitCallable(const UpdateOrganizationalUnitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationalUnitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationalUnit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientUpdateOrganizationalUnitAsyncHelper(OrganizationsClient const * const clientThis, const UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOrganizationalUnit(request), context);
}

void OrganizationsClient::UpdateOrganizationalUnitAsync(const UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientUpdateOrganizationalUnitAsyncHelper( this, request, handler, context ); } );
}

UpdatePolicyOutcome OrganizationsClient::UpdatePolicy(const UpdatePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePolicyOutcomeCallable OrganizationsClient::UpdatePolicyCallable(const UpdatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OrganizationsClientUpdatePolicyAsyncHelper(OrganizationsClient const * const clientThis, const UpdatePolicyRequest& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePolicy(request), context);
}

void OrganizationsClient::UpdatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OrganizationsClientUpdatePolicyAsyncHelper( this, request, handler, context ); } );
}

