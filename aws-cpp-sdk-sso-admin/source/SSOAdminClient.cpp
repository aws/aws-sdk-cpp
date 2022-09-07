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

#include <aws/sso-admin/SSOAdminClient.h>
#include <aws/sso-admin/SSOAdminEndpoint.h>
#include <aws/sso-admin/SSOAdminErrorMarshaller.h>
#include <aws/sso-admin/model/AttachCustomerManagedPolicyReferenceToPermissionSetRequest.h>
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/CreateAccountAssignmentRequest.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/CreatePermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentRequest.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DeletePermissionSetRequest.h>
#include <aws/sso-admin/model/DeletePermissionsBoundaryFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetRequest.h>
#include <aws/sso-admin/model/GetPermissionsBoundaryForPermissionSetRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentsRequest.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListInstancesRequest.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <aws/sso-admin/model/ListTagsForResourceRequest.h>
#include <aws/sso-admin/model/ProvisionPermissionSetRequest.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetRequest.h>
#include <aws/sso-admin/model/TagResourceRequest.h>
#include <aws/sso-admin/model/UntagResourceRequest.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/UpdatePermissionSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSOAdmin;
using namespace Aws::SSOAdmin::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sso";
static const char* ALLOCATION_TAG = "SSOAdminClient";

SSOAdminClient::SSOAdminClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::~SSOAdminClient()
{
}

void SSOAdminClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSO Admin");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSOAdminEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSOAdminClient::OverrideEndpoint(const Aws::String& endpoint)
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

AttachCustomerManagedPolicyReferenceToPermissionSetOutcome SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachCustomerManagedPolicyReferenceToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachCustomerManagedPolicyReferenceToPermissionSetOutcomeCallable SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSetCallable(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachCustomerManagedPolicyReferenceToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachCustomerManagedPolicyReferenceToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientAttachCustomerManagedPolicyReferenceToPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request, const AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachCustomerManagedPolicyReferenceToPermissionSet(request), context);
}

void SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSetAsync(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request, const AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientAttachCustomerManagedPolicyReferenceToPermissionSetAsyncHelper( this, request, handler, context ); } );
}

AttachManagedPolicyToPermissionSetOutcome SSOAdminClient::AttachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachManagedPolicyToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachManagedPolicyToPermissionSetOutcomeCallable SSOAdminClient::AttachManagedPolicyToPermissionSetCallable(const AttachManagedPolicyToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachManagedPolicyToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachManagedPolicyToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientAttachManagedPolicyToPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachManagedPolicyToPermissionSet(request), context);
}

void SSOAdminClient::AttachManagedPolicyToPermissionSetAsync(const AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientAttachManagedPolicyToPermissionSetAsyncHelper( this, request, handler, context ); } );
}

CreateAccountAssignmentOutcome SSOAdminClient::CreateAccountAssignment(const CreateAccountAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAccountAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountAssignmentOutcomeCallable SSOAdminClient::CreateAccountAssignmentCallable(const CreateAccountAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientCreateAccountAssignmentAsyncHelper(SSOAdminClient const * const clientThis, const CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccountAssignment(request), context);
}

void SSOAdminClient::CreateAccountAssignmentAsync(const CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientCreateAccountAssignmentAsyncHelper( this, request, handler, context ); } );
}

CreateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::CreateInstanceAccessControlAttributeConfigurationCallable(const CreateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientCreateInstanceAccessControlAttributeConfigurationAsyncHelper(SSOAdminClient const * const clientThis, const CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstanceAccessControlAttributeConfiguration(request), context);
}

void SSOAdminClient::CreateInstanceAccessControlAttributeConfigurationAsync(const CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientCreateInstanceAccessControlAttributeConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreatePermissionSetOutcome SSOAdminClient::CreatePermissionSet(const CreatePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePermissionSetOutcomeCallable SSOAdminClient::CreatePermissionSetCallable(const CreatePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientCreatePermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePermissionSet(request), context);
}

void SSOAdminClient::CreatePermissionSetAsync(const CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientCreatePermissionSetAsyncHelper( this, request, handler, context ); } );
}

DeleteAccountAssignmentOutcome SSOAdminClient::DeleteAccountAssignment(const DeleteAccountAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAccountAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountAssignmentOutcomeCallable SSOAdminClient::DeleteAccountAssignmentCallable(const DeleteAccountAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDeleteAccountAssignmentAsyncHelper(SSOAdminClient const * const clientThis, const DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccountAssignment(request), context);
}

void SSOAdminClient::DeleteAccountAssignmentAsync(const DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDeleteAccountAssignmentAsyncHelper( this, request, handler, context ); } );
}

DeleteInlinePolicyFromPermissionSetOutcome SSOAdminClient::DeleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInlinePolicyFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInlinePolicyFromPermissionSetOutcomeCallable SSOAdminClient::DeleteInlinePolicyFromPermissionSetCallable(const DeleteInlinePolicyFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInlinePolicyFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInlinePolicyFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDeleteInlinePolicyFromPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInlinePolicyFromPermissionSet(request), context);
}

void SSOAdminClient::DeleteInlinePolicyFromPermissionSetAsync(const DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDeleteInlinePolicyFromPermissionSetAsyncHelper( this, request, handler, context ); } );
}

DeleteInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::DeleteInstanceAccessControlAttributeConfigurationCallable(const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDeleteInstanceAccessControlAttributeConfigurationAsyncHelper(SSOAdminClient const * const clientThis, const DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstanceAccessControlAttributeConfiguration(request), context);
}

void SSOAdminClient::DeleteInstanceAccessControlAttributeConfigurationAsync(const DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDeleteInstanceAccessControlAttributeConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionSetOutcome SSOAdminClient::DeletePermissionSet(const DeletePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionSetOutcomeCallable SSOAdminClient::DeletePermissionSetCallable(const DeletePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDeletePermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermissionSet(request), context);
}

void SSOAdminClient::DeletePermissionSetAsync(const DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDeletePermissionSetAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionsBoundaryFromPermissionSetOutcome SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet(const DeletePermissionsBoundaryFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionsBoundaryFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionsBoundaryFromPermissionSetOutcomeCallable SSOAdminClient::DeletePermissionsBoundaryFromPermissionSetCallable(const DeletePermissionsBoundaryFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionsBoundaryFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionsBoundaryFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDeletePermissionsBoundaryFromPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DeletePermissionsBoundaryFromPermissionSetRequest& request, const DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermissionsBoundaryFromPermissionSet(request), context);
}

void SSOAdminClient::DeletePermissionsBoundaryFromPermissionSetAsync(const DeletePermissionsBoundaryFromPermissionSetRequest& request, const DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDeletePermissionsBoundaryFromPermissionSetAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAssignmentCreationStatusOutcome SSOAdminClient::DescribeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAssignmentCreationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentCreationStatusOutcomeCallable SSOAdminClient::DescribeAccountAssignmentCreationStatusCallable(const DescribeAccountAssignmentCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAssignmentCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAssignmentCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDescribeAccountAssignmentCreationStatusAsyncHelper(SSOAdminClient const * const clientThis, const DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAssignmentCreationStatus(request), context);
}

void SSOAdminClient::DescribeAccountAssignmentCreationStatusAsync(const DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDescribeAccountAssignmentCreationStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountAssignmentDeletionStatusOutcome SSOAdminClient::DescribeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAssignmentDeletionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentDeletionStatusOutcomeCallable SSOAdminClient::DescribeAccountAssignmentDeletionStatusCallable(const DescribeAccountAssignmentDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAssignmentDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAssignmentDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDescribeAccountAssignmentDeletionStatusAsyncHelper(SSOAdminClient const * const clientThis, const DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAssignmentDeletionStatus(request), context);
}

void SSOAdminClient::DescribeAccountAssignmentDeletionStatusAsync(const DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDescribeAccountAssignmentDeletionStatusAsyncHelper( this, request, handler, context ); } );
}

DescribeInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::DescribeInstanceAccessControlAttributeConfigurationCallable(const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDescribeInstanceAccessControlAttributeConfigurationAsyncHelper(SSOAdminClient const * const clientThis, const DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstanceAccessControlAttributeConfiguration(request), context);
}

void SSOAdminClient::DescribeInstanceAccessControlAttributeConfigurationAsync(const DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDescribeInstanceAccessControlAttributeConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribePermissionSetOutcome SSOAdminClient::DescribePermissionSet(const DescribePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetOutcomeCallable SSOAdminClient::DescribePermissionSetCallable(const DescribePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDescribePermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePermissionSet(request), context);
}

void SSOAdminClient::DescribePermissionSetAsync(const DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDescribePermissionSetAsyncHelper( this, request, handler, context ); } );
}

DescribePermissionSetProvisioningStatusOutcome SSOAdminClient::DescribePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePermissionSetProvisioningStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetProvisioningStatusOutcomeCallable SSOAdminClient::DescribePermissionSetProvisioningStatusCallable(const DescribePermissionSetProvisioningStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionSetProvisioningStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissionSetProvisioningStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDescribePermissionSetProvisioningStatusAsyncHelper(SSOAdminClient const * const clientThis, const DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePermissionSetProvisioningStatus(request), context);
}

void SSOAdminClient::DescribePermissionSetProvisioningStatusAsync(const DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDescribePermissionSetProvisioningStatusAsyncHelper( this, request, handler, context ); } );
}

DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachCustomerManagedPolicyReferenceFromPermissionSetOutcomeCallable SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSetCallable(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachCustomerManagedPolicyReferenceFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDetachCustomerManagedPolicyReferenceFromPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request, const DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachCustomerManagedPolicyReferenceFromPermissionSet(request), context);
}

void SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSetAsync(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request, const DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDetachCustomerManagedPolicyReferenceFromPermissionSetAsyncHelper( this, request, handler, context ); } );
}

DetachManagedPolicyFromPermissionSetOutcome SSOAdminClient::DetachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachManagedPolicyFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachManagedPolicyFromPermissionSetOutcomeCallable SSOAdminClient::DetachManagedPolicyFromPermissionSetCallable(const DetachManagedPolicyFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachManagedPolicyFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachManagedPolicyFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientDetachManagedPolicyFromPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachManagedPolicyFromPermissionSet(request), context);
}

void SSOAdminClient::DetachManagedPolicyFromPermissionSetAsync(const DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientDetachManagedPolicyFromPermissionSetAsyncHelper( this, request, handler, context ); } );
}

GetInlinePolicyForPermissionSetOutcome SSOAdminClient::GetInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInlinePolicyForPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInlinePolicyForPermissionSetOutcomeCallable SSOAdminClient::GetInlinePolicyForPermissionSetCallable(const GetInlinePolicyForPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInlinePolicyForPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInlinePolicyForPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientGetInlinePolicyForPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInlinePolicyForPermissionSet(request), context);
}

void SSOAdminClient::GetInlinePolicyForPermissionSetAsync(const GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientGetInlinePolicyForPermissionSetAsyncHelper( this, request, handler, context ); } );
}

GetPermissionsBoundaryForPermissionSetOutcome SSOAdminClient::GetPermissionsBoundaryForPermissionSet(const GetPermissionsBoundaryForPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPermissionsBoundaryForPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionsBoundaryForPermissionSetOutcomeCallable SSOAdminClient::GetPermissionsBoundaryForPermissionSetCallable(const GetPermissionsBoundaryForPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionsBoundaryForPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionsBoundaryForPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientGetPermissionsBoundaryForPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const GetPermissionsBoundaryForPermissionSetRequest& request, const GetPermissionsBoundaryForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPermissionsBoundaryForPermissionSet(request), context);
}

void SSOAdminClient::GetPermissionsBoundaryForPermissionSetAsync(const GetPermissionsBoundaryForPermissionSetRequest& request, const GetPermissionsBoundaryForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientGetPermissionsBoundaryForPermissionSetAsyncHelper( this, request, handler, context ); } );
}

ListAccountAssignmentCreationStatusOutcome SSOAdminClient::ListAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountAssignmentCreationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentCreationStatusOutcomeCallable SSOAdminClient::ListAccountAssignmentCreationStatusCallable(const ListAccountAssignmentCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignmentCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListAccountAssignmentCreationStatusAsyncHelper(SSOAdminClient const * const clientThis, const ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountAssignmentCreationStatus(request), context);
}

void SSOAdminClient::ListAccountAssignmentCreationStatusAsync(const ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListAccountAssignmentCreationStatusAsyncHelper( this, request, handler, context ); } );
}

ListAccountAssignmentDeletionStatusOutcome SSOAdminClient::ListAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountAssignmentDeletionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentDeletionStatusOutcomeCallable SSOAdminClient::ListAccountAssignmentDeletionStatusCallable(const ListAccountAssignmentDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignmentDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListAccountAssignmentDeletionStatusAsyncHelper(SSOAdminClient const * const clientThis, const ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountAssignmentDeletionStatus(request), context);
}

void SSOAdminClient::ListAccountAssignmentDeletionStatusAsync(const ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListAccountAssignmentDeletionStatusAsyncHelper( this, request, handler, context ); } );
}

ListAccountAssignmentsOutcome SSOAdminClient::ListAccountAssignments(const ListAccountAssignmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountAssignmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentsOutcomeCallable SSOAdminClient::ListAccountAssignmentsCallable(const ListAccountAssignmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListAccountAssignmentsAsyncHelper(SSOAdminClient const * const clientThis, const ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountAssignments(request), context);
}

void SSOAdminClient::ListAccountAssignmentsAsync(const ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListAccountAssignmentsAsyncHelper( this, request, handler, context ); } );
}

ListAccountsForProvisionedPermissionSetOutcome SSOAdminClient::ListAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAccountsForProvisionedPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountsForProvisionedPermissionSetOutcomeCallable SSOAdminClient::ListAccountsForProvisionedPermissionSetCallable(const ListAccountsForProvisionedPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsForProvisionedPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountsForProvisionedPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListAccountsForProvisionedPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccountsForProvisionedPermissionSet(request), context);
}

void SSOAdminClient::ListAccountsForProvisionedPermissionSetAsync(const ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListAccountsForProvisionedPermissionSetAsyncHelper( this, request, handler, context ); } );
}

ListCustomerManagedPolicyReferencesInPermissionSetOutcome SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet(const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomerManagedPolicyReferencesInPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomerManagedPolicyReferencesInPermissionSetOutcomeCallable SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSetCallable(const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomerManagedPolicyReferencesInPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomerManagedPolicyReferencesInPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListCustomerManagedPolicyReferencesInPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request, const ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomerManagedPolicyReferencesInPermissionSet(request), context);
}

void SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSetAsync(const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request, const ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListCustomerManagedPolicyReferencesInPermissionSetAsyncHelper( this, request, handler, context ); } );
}

ListInstancesOutcome SSOAdminClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable SSOAdminClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListInstancesAsyncHelper(SSOAdminClient const * const clientThis, const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstances(request), context);
}

void SSOAdminClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListInstancesAsyncHelper( this, request, handler, context ); } );
}

ListManagedPoliciesInPermissionSetOutcome SSOAdminClient::ListManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListManagedPoliciesInPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedPoliciesInPermissionSetOutcomeCallable SSOAdminClient::ListManagedPoliciesInPermissionSetCallable(const ListManagedPoliciesInPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedPoliciesInPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedPoliciesInPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListManagedPoliciesInPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListManagedPoliciesInPermissionSet(request), context);
}

void SSOAdminClient::ListManagedPoliciesInPermissionSetAsync(const ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListManagedPoliciesInPermissionSetAsyncHelper( this, request, handler, context ); } );
}

ListPermissionSetProvisioningStatusOutcome SSOAdminClient::ListPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPermissionSetProvisioningStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetProvisioningStatusOutcomeCallable SSOAdminClient::ListPermissionSetProvisioningStatusCallable(const ListPermissionSetProvisioningStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetProvisioningStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSetProvisioningStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListPermissionSetProvisioningStatusAsyncHelper(SSOAdminClient const * const clientThis, const ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissionSetProvisioningStatus(request), context);
}

void SSOAdminClient::ListPermissionSetProvisioningStatusAsync(const ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListPermissionSetProvisioningStatusAsyncHelper( this, request, handler, context ); } );
}

ListPermissionSetsOutcome SSOAdminClient::ListPermissionSets(const ListPermissionSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPermissionSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsOutcomeCallable SSOAdminClient::ListPermissionSetsCallable(const ListPermissionSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListPermissionSetsAsyncHelper(SSOAdminClient const * const clientThis, const ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissionSets(request), context);
}

void SSOAdminClient::ListPermissionSetsAsync(const ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListPermissionSetsAsyncHelper( this, request, handler, context ); } );
}

ListPermissionSetsProvisionedToAccountOutcome SSOAdminClient::ListPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPermissionSetsProvisionedToAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsProvisionedToAccountOutcomeCallable SSOAdminClient::ListPermissionSetsProvisionedToAccountCallable(const ListPermissionSetsProvisionedToAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetsProvisionedToAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSetsProvisionedToAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListPermissionSetsProvisionedToAccountAsyncHelper(SSOAdminClient const * const clientThis, const ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissionSetsProvisionedToAccount(request), context);
}

void SSOAdminClient::ListPermissionSetsProvisionedToAccountAsync(const ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListPermissionSetsProvisionedToAccountAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SSOAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSOAdminClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientListTagsForResourceAsyncHelper(SSOAdminClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SSOAdminClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ProvisionPermissionSetOutcome SSOAdminClient::ProvisionPermissionSet(const ProvisionPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ProvisionPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionPermissionSetOutcomeCallable SSOAdminClient::ProvisionPermissionSetCallable(const ProvisionPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientProvisionPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ProvisionPermissionSet(request), context);
}

void SSOAdminClient::ProvisionPermissionSetAsync(const ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientProvisionPermissionSetAsyncHelper( this, request, handler, context ); } );
}

PutInlinePolicyToPermissionSetOutcome SSOAdminClient::PutInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInlinePolicyToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInlinePolicyToPermissionSetOutcomeCallable SSOAdminClient::PutInlinePolicyToPermissionSetCallable(const PutInlinePolicyToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInlinePolicyToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInlinePolicyToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientPutInlinePolicyToPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInlinePolicyToPermissionSet(request), context);
}

void SSOAdminClient::PutInlinePolicyToPermissionSetAsync(const PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientPutInlinePolicyToPermissionSetAsyncHelper( this, request, handler, context ); } );
}

PutPermissionsBoundaryToPermissionSetOutcome SSOAdminClient::PutPermissionsBoundaryToPermissionSet(const PutPermissionsBoundaryToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionsBoundaryToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionsBoundaryToPermissionSetOutcomeCallable SSOAdminClient::PutPermissionsBoundaryToPermissionSetCallable(const PutPermissionsBoundaryToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionsBoundaryToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionsBoundaryToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientPutPermissionsBoundaryToPermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const PutPermissionsBoundaryToPermissionSetRequest& request, const PutPermissionsBoundaryToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermissionsBoundaryToPermissionSet(request), context);
}

void SSOAdminClient::PutPermissionsBoundaryToPermissionSetAsync(const PutPermissionsBoundaryToPermissionSetRequest& request, const PutPermissionsBoundaryToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientPutPermissionsBoundaryToPermissionSetAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SSOAdminClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SSOAdminClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientTagResourceAsyncHelper(SSOAdminClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SSOAdminClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SSOAdminClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SSOAdminClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientUntagResourceAsyncHelper(SSOAdminClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SSOAdminClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::UpdateInstanceAccessControlAttributeConfigurationCallable(const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientUpdateInstanceAccessControlAttributeConfigurationAsyncHelper(SSOAdminClient const * const clientThis, const UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstanceAccessControlAttributeConfiguration(request), context);
}

void SSOAdminClient::UpdateInstanceAccessControlAttributeConfigurationAsync(const UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientUpdateInstanceAccessControlAttributeConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdatePermissionSetOutcome SSOAdminClient::UpdatePermissionSet(const UpdatePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePermissionSetOutcomeCallable SSOAdminClient::UpdatePermissionSetCallable(const UpdatePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClientUpdatePermissionSetAsyncHelper(SSOAdminClient const * const clientThis, const UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePermissionSet(request), context);
}

void SSOAdminClient::UpdatePermissionSetAsync(const UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSOAdminClientUpdatePermissionSetAsyncHelper( this, request, handler, context ); } );
}

