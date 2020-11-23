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
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/CreateAccountAssignmentRequest.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/CreatePermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentRequest.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DeletePermissionSetRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentsRequest.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <aws/sso-admin/model/ListInstancesRequest.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <aws/sso-admin/model/ListTagsForResourceRequest.h>
#include <aws/sso-admin/model/ProvisionPermissionSetRequest.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOAdminClient::~SSOAdminClient()
{
}

void SSOAdminClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("SSO Admin");
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

AttachManagedPolicyToPermissionSetOutcome SSOAdminClient::AttachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AttachManagedPolicyToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachManagedPolicyToPermissionSetOutcomeCallable SSOAdminClient::AttachManagedPolicyToPermissionSetCallable(const AttachManagedPolicyToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachManagedPolicyToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachManagedPolicyToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::AttachManagedPolicyToPermissionSetAsync(const AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachManagedPolicyToPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::AttachManagedPolicyToPermissionSetAsyncHelper(const AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachManagedPolicyToPermissionSet(request), context);
}

CreateAccountAssignmentOutcome SSOAdminClient::CreateAccountAssignment(const CreateAccountAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAccountAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountAssignmentOutcomeCallable SSOAdminClient::CreateAccountAssignmentCallable(const CreateAccountAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccountAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::CreateAccountAssignmentAsync(const CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccountAssignmentAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::CreateAccountAssignmentAsyncHelper(const CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccountAssignment(request), context);
}

CreateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::CreateInstanceAccessControlAttributeConfigurationCallable(const CreateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::CreateInstanceAccessControlAttributeConfigurationAsync(const CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceAccessControlAttributeConfigurationAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::CreateInstanceAccessControlAttributeConfigurationAsyncHelper(const CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceAccessControlAttributeConfiguration(request), context);
}

CreatePermissionSetOutcome SSOAdminClient::CreatePermissionSet(const CreatePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePermissionSetOutcomeCallable SSOAdminClient::CreatePermissionSetCallable(const CreatePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::CreatePermissionSetAsync(const CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::CreatePermissionSetAsyncHelper(const CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePermissionSet(request), context);
}

DeleteAccountAssignmentOutcome SSOAdminClient::DeleteAccountAssignment(const DeleteAccountAssignmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccountAssignmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountAssignmentOutcomeCallable SSOAdminClient::DeleteAccountAssignmentCallable(const DeleteAccountAssignmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAssignmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAssignment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DeleteAccountAssignmentAsync(const DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccountAssignmentAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DeleteAccountAssignmentAsyncHelper(const DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccountAssignment(request), context);
}

DeleteInlinePolicyFromPermissionSetOutcome SSOAdminClient::DeleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteInlinePolicyFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInlinePolicyFromPermissionSetOutcomeCallable SSOAdminClient::DeleteInlinePolicyFromPermissionSetCallable(const DeleteInlinePolicyFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInlinePolicyFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInlinePolicyFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DeleteInlinePolicyFromPermissionSetAsync(const DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInlinePolicyFromPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DeleteInlinePolicyFromPermissionSetAsyncHelper(const DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInlinePolicyFromPermissionSet(request), context);
}

DeleteInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::DeleteInstanceAccessControlAttributeConfigurationCallable(const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DeleteInstanceAccessControlAttributeConfigurationAsync(const DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceAccessControlAttributeConfigurationAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DeleteInstanceAccessControlAttributeConfigurationAsyncHelper(const DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceAccessControlAttributeConfiguration(request), context);
}

DeletePermissionSetOutcome SSOAdminClient::DeletePermissionSet(const DeletePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionSetOutcomeCallable SSOAdminClient::DeletePermissionSetCallable(const DeletePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DeletePermissionSetAsync(const DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DeletePermissionSetAsyncHelper(const DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePermissionSet(request), context);
}

DescribeAccountAssignmentCreationStatusOutcome SSOAdminClient::DescribeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAccountAssignmentCreationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentCreationStatusOutcomeCallable SSOAdminClient::DescribeAccountAssignmentCreationStatusCallable(const DescribeAccountAssignmentCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAssignmentCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAssignmentCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DescribeAccountAssignmentCreationStatusAsync(const DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAssignmentCreationStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DescribeAccountAssignmentCreationStatusAsyncHelper(const DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAssignmentCreationStatus(request), context);
}

DescribeAccountAssignmentDeletionStatusOutcome SSOAdminClient::DescribeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAccountAssignmentDeletionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentDeletionStatusOutcomeCallable SSOAdminClient::DescribeAccountAssignmentDeletionStatusCallable(const DescribeAccountAssignmentDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAssignmentDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAssignmentDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DescribeAccountAssignmentDeletionStatusAsync(const DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAssignmentDeletionStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DescribeAccountAssignmentDeletionStatusAsyncHelper(const DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAssignmentDeletionStatus(request), context);
}

DescribeInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::DescribeInstanceAccessControlAttributeConfigurationCallable(const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DescribeInstanceAccessControlAttributeConfigurationAsync(const DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceAccessControlAttributeConfigurationAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DescribeInstanceAccessControlAttributeConfigurationAsyncHelper(const DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceAccessControlAttributeConfiguration(request), context);
}

DescribePermissionSetOutcome SSOAdminClient::DescribePermissionSet(const DescribePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetOutcomeCallable SSOAdminClient::DescribePermissionSetCallable(const DescribePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DescribePermissionSetAsync(const DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DescribePermissionSetAsyncHelper(const DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePermissionSet(request), context);
}

DescribePermissionSetProvisioningStatusOutcome SSOAdminClient::DescribePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePermissionSetProvisioningStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetProvisioningStatusOutcomeCallable SSOAdminClient::DescribePermissionSetProvisioningStatusCallable(const DescribePermissionSetProvisioningStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionSetProvisioningStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissionSetProvisioningStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DescribePermissionSetProvisioningStatusAsync(const DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePermissionSetProvisioningStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DescribePermissionSetProvisioningStatusAsyncHelper(const DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePermissionSetProvisioningStatus(request), context);
}

DetachManagedPolicyFromPermissionSetOutcome SSOAdminClient::DetachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DetachManagedPolicyFromPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachManagedPolicyFromPermissionSetOutcomeCallable SSOAdminClient::DetachManagedPolicyFromPermissionSetCallable(const DetachManagedPolicyFromPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachManagedPolicyFromPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachManagedPolicyFromPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::DetachManagedPolicyFromPermissionSetAsync(const DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachManagedPolicyFromPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::DetachManagedPolicyFromPermissionSetAsyncHelper(const DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachManagedPolicyFromPermissionSet(request), context);
}

GetInlinePolicyForPermissionSetOutcome SSOAdminClient::GetInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetInlinePolicyForPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInlinePolicyForPermissionSetOutcomeCallable SSOAdminClient::GetInlinePolicyForPermissionSetCallable(const GetInlinePolicyForPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInlinePolicyForPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInlinePolicyForPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::GetInlinePolicyForPermissionSetAsync(const GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInlinePolicyForPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::GetInlinePolicyForPermissionSetAsyncHelper(const GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInlinePolicyForPermissionSet(request), context);
}

ListAccountAssignmentCreationStatusOutcome SSOAdminClient::ListAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountAssignmentCreationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentCreationStatusOutcomeCallable SSOAdminClient::ListAccountAssignmentCreationStatusCallable(const ListAccountAssignmentCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignmentCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListAccountAssignmentCreationStatusAsync(const ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountAssignmentCreationStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListAccountAssignmentCreationStatusAsyncHelper(const ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountAssignmentCreationStatus(request), context);
}

ListAccountAssignmentDeletionStatusOutcome SSOAdminClient::ListAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountAssignmentDeletionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentDeletionStatusOutcomeCallable SSOAdminClient::ListAccountAssignmentDeletionStatusCallable(const ListAccountAssignmentDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignmentDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListAccountAssignmentDeletionStatusAsync(const ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountAssignmentDeletionStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListAccountAssignmentDeletionStatusAsyncHelper(const ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountAssignmentDeletionStatus(request), context);
}

ListAccountAssignmentsOutcome SSOAdminClient::ListAccountAssignments(const ListAccountAssignmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountAssignmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentsOutcomeCallable SSOAdminClient::ListAccountAssignmentsCallable(const ListAccountAssignmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountAssignmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountAssignments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListAccountAssignmentsAsync(const ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountAssignmentsAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListAccountAssignmentsAsyncHelper(const ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountAssignments(request), context);
}

ListAccountsForProvisionedPermissionSetOutcome SSOAdminClient::ListAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountsForProvisionedPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountsForProvisionedPermissionSetOutcomeCallable SSOAdminClient::ListAccountsForProvisionedPermissionSetCallable(const ListAccountsForProvisionedPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsForProvisionedPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountsForProvisionedPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListAccountsForProvisionedPermissionSetAsync(const ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountsForProvisionedPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListAccountsForProvisionedPermissionSetAsyncHelper(const ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountsForProvisionedPermissionSet(request), context);
}

ListInstancesOutcome SSOAdminClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable SSOAdminClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListManagedPoliciesInPermissionSetOutcome SSOAdminClient::ListManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListManagedPoliciesInPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedPoliciesInPermissionSetOutcomeCallable SSOAdminClient::ListManagedPoliciesInPermissionSetCallable(const ListManagedPoliciesInPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedPoliciesInPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedPoliciesInPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListManagedPoliciesInPermissionSetAsync(const ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListManagedPoliciesInPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListManagedPoliciesInPermissionSetAsyncHelper(const ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListManagedPoliciesInPermissionSet(request), context);
}

ListPermissionSetProvisioningStatusOutcome SSOAdminClient::ListPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPermissionSetProvisioningStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetProvisioningStatusOutcomeCallable SSOAdminClient::ListPermissionSetProvisioningStatusCallable(const ListPermissionSetProvisioningStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetProvisioningStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSetProvisioningStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListPermissionSetProvisioningStatusAsync(const ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionSetProvisioningStatusAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListPermissionSetProvisioningStatusAsyncHelper(const ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionSetProvisioningStatus(request), context);
}

ListPermissionSetsOutcome SSOAdminClient::ListPermissionSets(const ListPermissionSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPermissionSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsOutcomeCallable SSOAdminClient::ListPermissionSetsCallable(const ListPermissionSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListPermissionSetsAsync(const ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionSetsAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListPermissionSetsAsyncHelper(const ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionSets(request), context);
}

ListPermissionSetsProvisionedToAccountOutcome SSOAdminClient::ListPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPermissionSetsProvisionedToAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsProvisionedToAccountOutcomeCallable SSOAdminClient::ListPermissionSetsProvisionedToAccountCallable(const ListPermissionSetsProvisionedToAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionSetsProvisionedToAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionSetsProvisionedToAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListPermissionSetsProvisionedToAccountAsync(const ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionSetsProvisionedToAccountAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListPermissionSetsProvisionedToAccountAsyncHelper(const ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionSetsProvisionedToAccount(request), context);
}

ListTagsForResourceOutcome SSOAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSOAdminClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ProvisionPermissionSetOutcome SSOAdminClient::ProvisionPermissionSet(const ProvisionPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ProvisionPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionPermissionSetOutcomeCallable SSOAdminClient::ProvisionPermissionSetCallable(const ProvisionPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ProvisionPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ProvisionPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::ProvisionPermissionSetAsync(const ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::ProvisionPermissionSetAsyncHelper(const ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionPermissionSet(request), context);
}

PutInlinePolicyToPermissionSetOutcome SSOAdminClient::PutInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutInlinePolicyToPermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInlinePolicyToPermissionSetOutcomeCallable SSOAdminClient::PutInlinePolicyToPermissionSetCallable(const PutInlinePolicyToPermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInlinePolicyToPermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInlinePolicyToPermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::PutInlinePolicyToPermissionSetAsync(const PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutInlinePolicyToPermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::PutInlinePolicyToPermissionSetAsyncHelper(const PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutInlinePolicyToPermissionSet(request), context);
}

TagResourceOutcome SSOAdminClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SSOAdminClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SSOAdminClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SSOAdminClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable SSOAdminClient::UpdateInstanceAccessControlAttributeConfigurationCallable(const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceAccessControlAttributeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceAccessControlAttributeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::UpdateInstanceAccessControlAttributeConfigurationAsync(const UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceAccessControlAttributeConfigurationAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::UpdateInstanceAccessControlAttributeConfigurationAsyncHelper(const UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstanceAccessControlAttributeConfiguration(request), context);
}

UpdatePermissionSetOutcome SSOAdminClient::UpdatePermissionSet(const UpdatePermissionSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePermissionSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePermissionSetOutcomeCallable SSOAdminClient::UpdatePermissionSetCallable(const UpdatePermissionSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePermissionSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePermissionSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOAdminClient::UpdatePermissionSetAsync(const UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePermissionSetAsyncHelper( request, handler, context ); } );
}

void SSOAdminClient::UpdatePermissionSetAsyncHelper(const UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePermissionSet(request), context);
}

