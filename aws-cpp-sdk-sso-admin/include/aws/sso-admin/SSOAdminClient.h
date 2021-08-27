/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetResult.h>
#include <aws/sso-admin/model/CreateAccountAssignmentResult.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/CreatePermissionSetResult.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentResult.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DeletePermissionSetResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DescribePermissionSetResult.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentsResult.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetResult.h>
#include <aws/sso-admin/model/ListInstancesResult.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetResult.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/ListPermissionSetsResult.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountResult.h>
#include <aws/sso-admin/model/ListTagsForResourceResult.h>
#include <aws/sso-admin/model/ProvisionPermissionSetResult.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetResult.h>
#include <aws/sso-admin/model/TagResourceResult.h>
#include <aws/sso-admin/model/UntagResourceResult.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/UpdatePermissionSetResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SSOAdmin
{

namespace Model
{
        class AttachManagedPolicyToPermissionSetRequest;
        class CreateAccountAssignmentRequest;
        class CreateInstanceAccessControlAttributeConfigurationRequest;
        class CreatePermissionSetRequest;
        class DeleteAccountAssignmentRequest;
        class DeleteInlinePolicyFromPermissionSetRequest;
        class DeleteInstanceAccessControlAttributeConfigurationRequest;
        class DeletePermissionSetRequest;
        class DescribeAccountAssignmentCreationStatusRequest;
        class DescribeAccountAssignmentDeletionStatusRequest;
        class DescribeInstanceAccessControlAttributeConfigurationRequest;
        class DescribePermissionSetRequest;
        class DescribePermissionSetProvisioningStatusRequest;
        class DetachManagedPolicyFromPermissionSetRequest;
        class GetInlinePolicyForPermissionSetRequest;
        class ListAccountAssignmentCreationStatusRequest;
        class ListAccountAssignmentDeletionStatusRequest;
        class ListAccountAssignmentsRequest;
        class ListAccountsForProvisionedPermissionSetRequest;
        class ListInstancesRequest;
        class ListManagedPoliciesInPermissionSetRequest;
        class ListPermissionSetProvisioningStatusRequest;
        class ListPermissionSetsRequest;
        class ListPermissionSetsProvisionedToAccountRequest;
        class ListTagsForResourceRequest;
        class ProvisionPermissionSetRequest;
        class PutInlinePolicyToPermissionSetRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateInstanceAccessControlAttributeConfigurationRequest;
        class UpdatePermissionSetRequest;

        typedef Aws::Utils::Outcome<AttachManagedPolicyToPermissionSetResult, SSOAdminError> AttachManagedPolicyToPermissionSetOutcome;
        typedef Aws::Utils::Outcome<CreateAccountAssignmentResult, SSOAdminError> CreateAccountAssignmentOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> CreateInstanceAccessControlAttributeConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreatePermissionSetResult, SSOAdminError> CreatePermissionSetOutcome;
        typedef Aws::Utils::Outcome<DeleteAccountAssignmentResult, SSOAdminError> DeleteAccountAssignmentOutcome;
        typedef Aws::Utils::Outcome<DeleteInlinePolicyFromPermissionSetResult, SSOAdminError> DeleteInlinePolicyFromPermissionSetOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DeleteInstanceAccessControlAttributeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeletePermissionSetResult, SSOAdminError> DeletePermissionSetOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAssignmentCreationStatusResult, SSOAdminError> DescribeAccountAssignmentCreationStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAssignmentDeletionStatusResult, SSOAdminError> DescribeAccountAssignmentDeletionStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DescribeInstanceAccessControlAttributeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribePermissionSetResult, SSOAdminError> DescribePermissionSetOutcome;
        typedef Aws::Utils::Outcome<DescribePermissionSetProvisioningStatusResult, SSOAdminError> DescribePermissionSetProvisioningStatusOutcome;
        typedef Aws::Utils::Outcome<DetachManagedPolicyFromPermissionSetResult, SSOAdminError> DetachManagedPolicyFromPermissionSetOutcome;
        typedef Aws::Utils::Outcome<GetInlinePolicyForPermissionSetResult, SSOAdminError> GetInlinePolicyForPermissionSetOutcome;
        typedef Aws::Utils::Outcome<ListAccountAssignmentCreationStatusResult, SSOAdminError> ListAccountAssignmentCreationStatusOutcome;
        typedef Aws::Utils::Outcome<ListAccountAssignmentDeletionStatusResult, SSOAdminError> ListAccountAssignmentDeletionStatusOutcome;
        typedef Aws::Utils::Outcome<ListAccountAssignmentsResult, SSOAdminError> ListAccountAssignmentsOutcome;
        typedef Aws::Utils::Outcome<ListAccountsForProvisionedPermissionSetResult, SSOAdminError> ListAccountsForProvisionedPermissionSetOutcome;
        typedef Aws::Utils::Outcome<ListInstancesResult, SSOAdminError> ListInstancesOutcome;
        typedef Aws::Utils::Outcome<ListManagedPoliciesInPermissionSetResult, SSOAdminError> ListManagedPoliciesInPermissionSetOutcome;
        typedef Aws::Utils::Outcome<ListPermissionSetProvisioningStatusResult, SSOAdminError> ListPermissionSetProvisioningStatusOutcome;
        typedef Aws::Utils::Outcome<ListPermissionSetsResult, SSOAdminError> ListPermissionSetsOutcome;
        typedef Aws::Utils::Outcome<ListPermissionSetsProvisionedToAccountResult, SSOAdminError> ListPermissionSetsProvisionedToAccountOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSOAdminError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ProvisionPermissionSetResult, SSOAdminError> ProvisionPermissionSetOutcome;
        typedef Aws::Utils::Outcome<PutInlinePolicyToPermissionSetResult, SSOAdminError> PutInlinePolicyToPermissionSetOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SSOAdminError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SSOAdminError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> UpdateInstanceAccessControlAttributeConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdatePermissionSetResult, SSOAdminError> UpdatePermissionSetOutcome;

        typedef std::future<AttachManagedPolicyToPermissionSetOutcome> AttachManagedPolicyToPermissionSetOutcomeCallable;
        typedef std::future<CreateAccountAssignmentOutcome> CreateAccountAssignmentOutcomeCallable;
        typedef std::future<CreateInstanceAccessControlAttributeConfigurationOutcome> CreateInstanceAccessControlAttributeConfigurationOutcomeCallable;
        typedef std::future<CreatePermissionSetOutcome> CreatePermissionSetOutcomeCallable;
        typedef std::future<DeleteAccountAssignmentOutcome> DeleteAccountAssignmentOutcomeCallable;
        typedef std::future<DeleteInlinePolicyFromPermissionSetOutcome> DeleteInlinePolicyFromPermissionSetOutcomeCallable;
        typedef std::future<DeleteInstanceAccessControlAttributeConfigurationOutcome> DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable;
        typedef std::future<DeletePermissionSetOutcome> DeletePermissionSetOutcomeCallable;
        typedef std::future<DescribeAccountAssignmentCreationStatusOutcome> DescribeAccountAssignmentCreationStatusOutcomeCallable;
        typedef std::future<DescribeAccountAssignmentDeletionStatusOutcome> DescribeAccountAssignmentDeletionStatusOutcomeCallable;
        typedef std::future<DescribeInstanceAccessControlAttributeConfigurationOutcome> DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable;
        typedef std::future<DescribePermissionSetOutcome> DescribePermissionSetOutcomeCallable;
        typedef std::future<DescribePermissionSetProvisioningStatusOutcome> DescribePermissionSetProvisioningStatusOutcomeCallable;
        typedef std::future<DetachManagedPolicyFromPermissionSetOutcome> DetachManagedPolicyFromPermissionSetOutcomeCallable;
        typedef std::future<GetInlinePolicyForPermissionSetOutcome> GetInlinePolicyForPermissionSetOutcomeCallable;
        typedef std::future<ListAccountAssignmentCreationStatusOutcome> ListAccountAssignmentCreationStatusOutcomeCallable;
        typedef std::future<ListAccountAssignmentDeletionStatusOutcome> ListAccountAssignmentDeletionStatusOutcomeCallable;
        typedef std::future<ListAccountAssignmentsOutcome> ListAccountAssignmentsOutcomeCallable;
        typedef std::future<ListAccountsForProvisionedPermissionSetOutcome> ListAccountsForProvisionedPermissionSetOutcomeCallable;
        typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
        typedef std::future<ListManagedPoliciesInPermissionSetOutcome> ListManagedPoliciesInPermissionSetOutcomeCallable;
        typedef std::future<ListPermissionSetProvisioningStatusOutcome> ListPermissionSetProvisioningStatusOutcomeCallable;
        typedef std::future<ListPermissionSetsOutcome> ListPermissionSetsOutcomeCallable;
        typedef std::future<ListPermissionSetsProvisionedToAccountOutcome> ListPermissionSetsProvisionedToAccountOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ProvisionPermissionSetOutcome> ProvisionPermissionSetOutcomeCallable;
        typedef std::future<PutInlinePolicyToPermissionSetOutcome> PutInlinePolicyToPermissionSetOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateInstanceAccessControlAttributeConfigurationOutcome> UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable;
        typedef std::future<UpdatePermissionSetOutcome> UpdatePermissionSetOutcomeCallable;
} // namespace Model

  class SSOAdminClient;

    typedef std::function<void(const SSOAdminClient*, const Model::AttachManagedPolicyToPermissionSetRequest&, const Model::AttachManagedPolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachManagedPolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateAccountAssignmentRequest&, const Model::CreateAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateInstanceAccessControlAttributeConfigurationRequest&, const Model::CreateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreatePermissionSetRequest&, const Model::CreatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteAccountAssignmentRequest&, const Model::DeleteAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInlinePolicyFromPermissionSetRequest&, const Model::DeleteInlinePolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInlinePolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInstanceAccessControlAttributeConfigurationRequest&, const Model::DeleteInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeletePermissionSetRequest&, const Model::DeletePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentCreationStatusRequest&, const Model::DescribeAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentDeletionStatusRequest&, const Model::DescribeAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeInstanceAccessControlAttributeConfigurationRequest&, const Model::DescribeInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetRequest&, const Model::DescribePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetProvisioningStatusRequest&, const Model::DescribePermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DetachManagedPolicyFromPermissionSetRequest&, const Model::DetachManagedPolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachManagedPolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetInlinePolicyForPermissionSetRequest&, const Model::GetInlinePolicyForPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInlinePolicyForPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentCreationStatusRequest&, const Model::ListAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentDeletionStatusRequest&, const Model::ListAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentsRequest&, const Model::ListAccountAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountsForProvisionedPermissionSetRequest&, const Model::ListAccountsForProvisionedPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsForProvisionedPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListManagedPoliciesInPermissionSetRequest&, const Model::ListManagedPoliciesInPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedPoliciesInPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetProvisioningStatusRequest&, const Model::ListPermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsRequest&, const Model::ListPermissionSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsProvisionedToAccountRequest&, const Model::ListPermissionSetsProvisionedToAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsProvisionedToAccountResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ProvisionPermissionSetRequest&, const Model::ProvisionPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutInlinePolicyToPermissionSetRequest&, const Model::PutInlinePolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInlinePolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateInstanceAccessControlAttributeConfigurationRequest&, const Model::UpdateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdatePermissionSetRequest&, const Model::UpdatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionSetResponseReceivedHandler;

  class AWS_SSOADMIN_API SSOAdminClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SSOAdminClient();


        /**
         * <p>Attaches an IAM managed policy ARN to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachManagedPolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachManagedPolicyToPermissionSetOutcome AttachManagedPolicyToPermissionSet(const Model::AttachManagedPolicyToPermissionSetRequest& request) const;

        /**
         * <p>Attaches an IAM managed policy ARN to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachManagedPolicyToPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachManagedPolicyToPermissionSetOutcomeCallable AttachManagedPolicyToPermissionSetCallable(const Model::AttachManagedPolicyToPermissionSetRequest& request) const;

        /**
         * <p>Attaches an IAM managed policy ARN to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachManagedPolicyToPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachManagedPolicyToPermissionSetAsync(const Model::AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns access to a principal for a specified AWS account using a specified
         * permission set.</p>  <p>The term <i>principal</i> here refers to a user or
         * group that is defined in AWS SSO.</p>   <p>As part of a successful
         * <code>CreateAccountAssignment</code> call, the specified permission set will
         * automatically be provisioned to the account in the form of an IAM policy
         * attached to the SSO-created IAM role. If the permission set is subsequently
         * updated, the corresponding IAM policies attached to roles in your accounts will
         * not be updated automatically. In this case, you will need to call <code>
         * <a>ProvisionPermissionSet</a> </code> to make these updates.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAssignmentOutcome CreateAccountAssignment(const Model::CreateAccountAssignmentRequest& request) const;

        /**
         * <p>Assigns access to a principal for a specified AWS account using a specified
         * permission set.</p>  <p>The term <i>principal</i> here refers to a user or
         * group that is defined in AWS SSO.</p>   <p>As part of a successful
         * <code>CreateAccountAssignment</code> call, the specified permission set will
         * automatically be provisioned to the account in the form of an IAM policy
         * attached to the SSO-created IAM role. If the permission set is subsequently
         * updated, the corresponding IAM policies attached to roles in your accounts will
         * not be updated automatically. In this case, you will need to call <code>
         * <a>ProvisionPermissionSet</a> </code> to make these updates.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateAccountAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountAssignmentOutcomeCallable CreateAccountAssignmentCallable(const Model::CreateAccountAssignmentRequest& request) const;

        /**
         * <p>Assigns access to a principal for a specified AWS account using a specified
         * permission set.</p>  <p>The term <i>principal</i> here refers to a user or
         * group that is defined in AWS SSO.</p>   <p>As part of a successful
         * <code>CreateAccountAssignment</code> call, the specified permission set will
         * automatically be provisioned to the account in the form of an IAM policy
         * attached to the SSO-created IAM role. If the permission set is subsequently
         * updated, the corresponding IAM policies attached to roles in your accounts will
         * not be updated automatically. In this case, you will need to call <code>
         * <a>ProvisionPermissionSet</a> </code> to make these updates.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateAccountAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAssignmentAsync(const Model::CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance. You can also specify new attributes to add to your ABAC
         * configuration during the enabling process. For more information about ABAC, see
         * <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceAccessControlAttributeConfigurationOutcome CreateInstanceAccessControlAttributeConfiguration(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Enables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance. You can also specify new attributes to add to your ABAC
         * configuration during the enabling process. For more information about ABAC, see
         * <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceAccessControlAttributeConfigurationOutcomeCallable CreateInstanceAccessControlAttributeConfigurationCallable(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Enables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance. You can also specify new attributes to add to your ABAC
         * configuration during the enabling process. For more information about ABAC, see
         * <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAccessControlAttributeConfigurationAsync(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a permission set within a specified SSO instance.</p>  <p>To
         * grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionSetOutcome CreatePermissionSet(const Model::CreatePermissionSetRequest& request) const;

        /**
         * <p>Creates a permission set within a specified SSO instance.</p>  <p>To
         * grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePermissionSetOutcomeCallable CreatePermissionSetCallable(const Model::CreatePermissionSetRequest& request) const;

        /**
         * <p>Creates a permission set within a specified SSO instance.</p>  <p>To
         * grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePermissionSetAsync(const Model::CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a principal's access from a specified AWS account using a specified
         * permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAssignmentOutcome DeleteAccountAssignment(const Model::DeleteAccountAssignmentRequest& request) const;

        /**
         * <p>Deletes a principal's access from a specified AWS account using a specified
         * permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteAccountAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAssignmentOutcomeCallable DeleteAccountAssignmentCallable(const Model::DeleteAccountAssignmentRequest& request) const;

        /**
         * <p>Deletes a principal's access from a specified AWS account using a specified
         * permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteAccountAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAssignmentAsync(const Model::DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the inline policy from a specified permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInlinePolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInlinePolicyFromPermissionSetOutcome DeleteInlinePolicyFromPermissionSet(const Model::DeleteInlinePolicyFromPermissionSetRequest& request) const;

        /**
         * <p>Deletes the inline policy from a specified permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInlinePolicyFromPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInlinePolicyFromPermissionSetOutcomeCallable DeleteInlinePolicyFromPermissionSetCallable(const Model::DeleteInlinePolicyFromPermissionSetRequest& request) const;

        /**
         * <p>Deletes the inline policy from a specified permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInlinePolicyFromPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInlinePolicyFromPermissionSetAsync(const Model::DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance and deletes all of the attribute mappings that have been
         * configured. Once deleted, any attributes that are received from an identity
         * source and any custom attributes you have previously configured will not be
         * passed. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceAccessControlAttributeConfigurationOutcome DeleteInstanceAccessControlAttributeConfiguration(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Disables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance and deletes all of the attribute mappings that have been
         * configured. Once deleted, any attributes that are received from an identity
         * source and any custom attributes you have previously configured will not be
         * passed. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable DeleteInstanceAccessControlAttributeConfigurationCallable(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Disables the attributes-based access control (ABAC) feature for the specified
         * AWS SSO instance and deletes all of the attribute mappings that have been
         * configured. Once deleted, any attributes that are received from an identity
         * source and any custom attributes you have previously configured will not be
         * passed. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAccessControlAttributeConfigurationAsync(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionSetOutcome DeletePermissionSet(const Model::DeletePermissionSetRequest& request) const;

        /**
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionSetOutcomeCallable DeletePermissionSetCallable(const Model::DeletePermissionSetRequest& request) const;

        /**
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionSetAsync(const Model::DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcome DescribeAccountAssignmentCreationStatus(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;

        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcomeCallable DescribeAccountAssignmentCreationStatusCallable(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;

        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAssignmentCreationStatusAsync(const Model::DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the assignment deletion request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentDeletionStatusOutcome DescribeAccountAssignmentDeletionStatus(const Model::DescribeAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * <p>Describes the status of the assignment deletion request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAssignmentDeletionStatusOutcomeCallable DescribeAccountAssignmentDeletionStatusCallable(const Model::DescribeAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * <p>Describes the status of the assignment deletion request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAssignmentDeletionStatusAsync(const Model::DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of AWS SSO identity store attributes that have been
         * configured to work with attributes-based access control (ABAC) for the specified
         * AWS SSO instance. This will not return attributes configured and sent by an
         * external identity provider. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAccessControlAttributeConfigurationOutcome DescribeInstanceAccessControlAttributeConfiguration(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Returns the list of AWS SSO identity store attributes that have been
         * configured to work with attributes-based access control (ABAC) for the specified
         * AWS SSO instance. This will not return attributes configured and sent by an
         * external identity provider. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable DescribeInstanceAccessControlAttributeConfigurationCallable(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Returns the list of AWS SSO identity store attributes that have been
         * configured to work with attributes-based access control (ABAC) for the specified
         * AWS SSO instance. This will not return attributes configured and sent by an
         * external identity provider. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAccessControlAttributeConfigurationAsync(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetOutcome DescribePermissionSet(const Model::DescribePermissionSetRequest& request) const;

        /**
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionSetOutcomeCallable DescribePermissionSetCallable(const Model::DescribePermissionSetRequest& request) const;

        /**
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePermissionSetAsync(const Model::DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status for the given permission set provisioning
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetProvisioningStatusOutcome DescribePermissionSetProvisioningStatus(const Model::DescribePermissionSetProvisioningStatusRequest& request) const;

        /**
         * <p>Describes the status for the given permission set provisioning
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionSetProvisioningStatusOutcomeCallable DescribePermissionSetProvisioningStatusCallable(const Model::DescribePermissionSetProvisioningStatusRequest& request) const;

        /**
         * <p>Describes the status for the given permission set provisioning
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePermissionSetProvisioningStatusAsync(const Model::DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the attached IAM managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcome DetachManagedPolicyFromPermissionSet(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;

        /**
         * <p>Detaches the attached IAM managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcomeCallable DetachManagedPolicyFromPermissionSetCallable(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;

        /**
         * <p>Detaches the attached IAM managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachManagedPolicyFromPermissionSetAsync(const Model::DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains the inline policy assigned to the permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetInlinePolicyForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInlinePolicyForPermissionSetOutcome GetInlinePolicyForPermissionSet(const Model::GetInlinePolicyForPermissionSetRequest& request) const;

        /**
         * <p>Obtains the inline policy assigned to the permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetInlinePolicyForPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInlinePolicyForPermissionSetOutcomeCallable GetInlinePolicyForPermissionSetCallable(const Model::GetInlinePolicyForPermissionSetRequest& request) const;

        /**
         * <p>Obtains the inline policy assigned to the permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetInlinePolicyForPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInlinePolicyForPermissionSetAsync(const Model::GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcome ListAccountAssignmentCreationStatus(const Model::ListAccountAssignmentCreationStatusRequest& request) const;

        /**
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcomeCallable ListAccountAssignmentCreationStatusCallable(const Model::ListAccountAssignmentCreationStatusRequest& request) const;

        /**
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAssignmentCreationStatusAsync(const Model::ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcome ListAccountAssignmentDeletionStatus(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcomeCallable ListAccountAssignmentDeletionStatusCallable(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAssignmentDeletionStatusAsync(const Model::ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assignee of the specified AWS account with the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentsOutcome ListAccountAssignments(const Model::ListAccountAssignmentsRequest& request) const;

        /**
         * <p>Lists the assignee of the specified AWS account with the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentsOutcomeCallable ListAccountAssignmentsCallable(const Model::ListAccountAssignmentsRequest& request) const;

        /**
         * <p>Lists the assignee of the specified AWS account with the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAssignmentsAsync(const Model::ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the AWS accounts where the specified permission set is
         * provisioned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountsForProvisionedPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsForProvisionedPermissionSetOutcome ListAccountsForProvisionedPermissionSet(const Model::ListAccountsForProvisionedPermissionSetRequest& request) const;

        /**
         * <p>Lists all the AWS accounts where the specified permission set is
         * provisioned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountsForProvisionedPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsForProvisionedPermissionSetOutcomeCallable ListAccountsForProvisionedPermissionSetCallable(const Model::ListAccountsForProvisionedPermissionSetRequest& request) const;

        /**
         * <p>Lists all the AWS accounts where the specified permission set is
         * provisioned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountsForProvisionedPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsForProvisionedPermissionSetAsync(const Model::ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SSO instances that the caller has access to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * <p>Lists the SSO instances that the caller has access to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * <p>Lists the SSO instances that the caller has access to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcome ListManagedPoliciesInPermissionSet(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;

        /**
         * <p>Lists the IAM managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcomeCallable ListManagedPoliciesInPermissionSetCallable(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;

        /**
         * <p>Lists the IAM managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedPoliciesInPermissionSetAsync(const Model::ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcome ListPermissionSetProvisioningStatus(const Model::ListPermissionSetProvisioningStatusRequest& request) const;

        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcomeCallable ListPermissionSetProvisioningStatusCallable(const Model::ListPermissionSetProvisioningStatusRequest& request) const;

        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * SSO instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionSetProvisioningStatusAsync(const Model::ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the <a>PermissionSet</a>s in an SSO instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsOutcome ListPermissionSets(const Model::ListPermissionSetsRequest& request) const;

        /**
         * <p>Lists the <a>PermissionSet</a>s in an SSO instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetsOutcomeCallable ListPermissionSetsCallable(const Model::ListPermissionSetsRequest& request) const;

        /**
         * <p>Lists the <a>PermissionSet</a>s in an SSO instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionSetsAsync(const Model::ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the permission sets that are provisioned to a specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetsProvisionedToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsProvisionedToAccountOutcome ListPermissionSetsProvisionedToAccount(const Model::ListPermissionSetsProvisionedToAccountRequest& request) const;

        /**
         * <p>Lists all the permission sets that are provisioned to a specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetsProvisionedToAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetsProvisionedToAccountOutcomeCallable ListPermissionSetsProvisionedToAccountCallable(const Model::ListPermissionSetsProvisionedToAccountRequest& request) const;

        /**
         * <p>Lists all the permission sets that are provisioned to a specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetsProvisionedToAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionSetsProvisionedToAccountAsync(const Model::ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that are attached to a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that are attached to a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The process by which a specified permission set is provisioned to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ProvisionPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionPermissionSetOutcome ProvisionPermissionSet(const Model::ProvisionPermissionSetRequest& request) const;

        /**
         * <p>The process by which a specified permission set is provisioned to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ProvisionPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionPermissionSetOutcomeCallable ProvisionPermissionSetCallable(const Model::ProvisionPermissionSetRequest& request) const;

        /**
         * <p>The process by which a specified permission set is provisioned to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ProvisionPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionPermissionSetAsync(const Model::ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an IAM inline policy to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutInlinePolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInlinePolicyToPermissionSetOutcome PutInlinePolicyToPermissionSet(const Model::PutInlinePolicyToPermissionSetRequest& request) const;

        /**
         * <p>Attaches an IAM inline policy to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutInlinePolicyToPermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInlinePolicyToPermissionSetOutcomeCallable PutInlinePolicyToPermissionSetCallable(const Model::PutInlinePolicyToPermissionSetRequest& request) const;

        /**
         * <p>Attaches an IAM inline policy to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutInlinePolicyToPermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInlinePolicyToPermissionSetAsync(const Model::PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a set of tags from a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates a set of tags from a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates a set of tags from a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the AWS SSO identity store attributes to use with the AWS SSO
         * instance for attributes-based access control (ABAC). When using an external
         * identity provider as an identity source, you can pass attributes through the
         * SAML assertion as an alternative to configuring attributes from the AWS SSO
         * identity store. If a SAML assertion passes any of these attributes, AWS SSO will
         * replace the attribute value with the value from the AWS SSO identity store. For
         * more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAccessControlAttributeConfigurationOutcome UpdateInstanceAccessControlAttributeConfiguration(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Updates the AWS SSO identity store attributes to use with the AWS SSO
         * instance for attributes-based access control (ABAC). When using an external
         * identity provider as an identity source, you can pass attributes through the
         * SAML assertion as an alternative to configuring attributes from the AWS SSO
         * identity store. If a SAML assertion passes any of these attributes, AWS SSO will
         * replace the attribute value with the value from the AWS SSO identity store. For
         * more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable UpdateInstanceAccessControlAttributeConfigurationCallable(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * <p>Updates the AWS SSO identity store attributes to use with the AWS SSO
         * instance for attributes-based access control (ABAC). When using an external
         * identity provider as an identity source, you can pass attributes through the
         * SAML assertion as an alternative to configuring attributes from the AWS SSO
         * identity store. If a SAML assertion passes any of these attributes, AWS SSO will
         * replace the attribute value with the value from the AWS SSO identity store. For
         * more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>AWS SSO User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAccessControlAttributeConfigurationAsync(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionSetOutcome UpdatePermissionSet(const Model::UpdatePermissionSetRequest& request) const;

        /**
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePermissionSetOutcomeCallable UpdatePermissionSetCallable(const Model::UpdatePermissionSetRequest& request) const;

        /**
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePermissionSetAsync(const Model::UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AttachManagedPolicyToPermissionSetAsyncHelper(const Model::AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAssignmentAsyncHelper(const Model::CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceAccessControlAttributeConfigurationAsyncHelper(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePermissionSetAsyncHelper(const Model::CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAssignmentAsyncHelper(const Model::DeleteAccountAssignmentRequest& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInlinePolicyFromPermissionSetAsyncHelper(const Model::DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceAccessControlAttributeConfigurationAsyncHelper(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePermissionSetAsyncHelper(const Model::DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAssignmentCreationStatusAsyncHelper(const Model::DescribeAccountAssignmentCreationStatusRequest& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAssignmentDeletionStatusAsyncHelper(const Model::DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAccessControlAttributeConfigurationAsyncHelper(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePermissionSetAsyncHelper(const Model::DescribePermissionSetRequest& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePermissionSetProvisioningStatusAsyncHelper(const Model::DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachManagedPolicyFromPermissionSetAsyncHelper(const Model::DetachManagedPolicyFromPermissionSetRequest& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInlinePolicyForPermissionSetAsyncHelper(const Model::GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAssignmentCreationStatusAsyncHelper(const Model::ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAssignmentDeletionStatusAsyncHelper(const Model::ListAccountAssignmentDeletionStatusRequest& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountAssignmentsAsyncHelper(const Model::ListAccountAssignmentsRequest& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsForProvisionedPermissionSetAsyncHelper(const Model::ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstancesAsyncHelper(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListManagedPoliciesInPermissionSetAsyncHelper(const Model::ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionSetProvisioningStatusAsyncHelper(const Model::ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionSetsAsyncHelper(const Model::ListPermissionSetsRequest& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionSetsProvisionedToAccountAsyncHelper(const Model::ListPermissionSetsProvisionedToAccountRequest& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ProvisionPermissionSetAsyncHelper(const Model::ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInlinePolicyToPermissionSetAsyncHelper(const Model::PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceAccessControlAttributeConfigurationAsyncHelper(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePermissionSetAsyncHelper(const Model::UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSOAdmin
} // namespace Aws
