/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/IAMServiceClientModel.h>

namespace Aws
{
namespace IAM
{
  /**
   * <fullname>Identity and Access Management</fullname> <p>Identity and Access
   * Management (IAM) is a web service for securely controlling access to Amazon Web
   * Services services. With IAM, you can centrally manage users, security
   * credentials such as access keys, and permissions that control which Amazon Web
   * Services resources users and applications can access. For more information about
   * IAM, see <a href="http://aws.amazon.com/iam/">Identity and Access Management
   * (IAM)</a> and the <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access
   * Management User Guide</a>.</p>
   */
  class AWS_IAM_API IAMClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<IAMClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Aws::IAM::IAMClientConfiguration& clientConfiguration = Aws::IAM::IAMClientConfiguration(),
                  std::shared_ptr<IAMEndpointProviderBase> endpointProvider = Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<IAMEndpointProviderBase> endpointProvider = Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::IAM::IAMClientConfiguration& clientConfiguration = Aws::IAM::IAMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<IAMEndpointProviderBase> endpointProvider = Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::IAM::IAMClientConfiguration& clientConfiguration = Aws::IAM::IAMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IAMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IAMClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a new client ID (also known as audience) to the list of client IDs
         * already registered for the specified IAM OpenID Connect (OIDC) provider
         * resource.</p> <p>This operation is idempotent; it does not fail or return an
         * error if you add an existing client ID to the provider.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddClientIDToOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcome AddClientIDToOpenIDConnectProvider(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for AddClientIDToOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddClientIDToOpenIDConnectProviderOutcomeCallable AddClientIDToOpenIDConnectProviderCallable(const Model::AddClientIDToOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for AddClientIDToOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddClientIDToOpenIDConnectProviderAsync(const Model::AddClientIDToOpenIDConnectProviderRequest& request, const AddClientIDToOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified IAM role to the specified instance profile. An instance
         * profile can contain only one role, and this quota cannot be increased. You can
         * remove the existing role and then add a different role to an instance profile.
         * You must then wait for the change to appear across all of Amazon Web Services
         * because of <a href="https://en.wikipedia.org/wiki/Eventual_consistency">eventual
         * consistency</a>. To force the change, you must <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DisassociateIamInstanceProfile.html">disassociate
         * the instance profile</a> and then <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateIamInstanceProfile.html">associate
         * the instance profile</a>, or you can stop your instance and then restart it.</p>
         *  <p>The caller of this operation must be granted the <code>PassRole</code>
         * permission on the IAM role by a permissions policy.</p>  <p>For more
         * information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with roles</a>. For more information about instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddRoleToInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToInstanceProfileOutcome AddRoleToInstanceProfile(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddRoleToInstanceProfileOutcomeCallable AddRoleToInstanceProfileCallable(const Model::AddRoleToInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for AddRoleToInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddRoleToInstanceProfileAsync(const Model::AddRoleToInstanceProfileRequest& request, const AddRoleToInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified user to the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AddUserToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddUserToGroupOutcome AddUserToGroup(const Model::AddUserToGroupRequest& request) const;

        /**
         * A Callable wrapper for AddUserToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddUserToGroupOutcomeCallable AddUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;

        /**
         * An Async wrapper for AddUserToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM group.</p> <p>You
         * use this operation to attach a managed policy to a group. To embed an inline
         * policy in a group, use <a>PutGroupPolicy</a>.</p> <p>As a best practice, you can
         * validate your IAM policies. To learn more, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating
         * IAM policies</a> in the <i>IAM User Guide</i>.</p> <p>For more information about
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachGroupPolicyOutcome AttachGroupPolicy(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachGroupPolicyOutcomeCallable AttachGroupPolicyCallable(const Model::AttachGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for AttachGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachGroupPolicyAsync(const Model::AttachGroupPolicyRequest& request, const AttachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified IAM role. When you
         * attach a managed policy to a role, the managed policy becomes part of the role's
         * permission (access) policy.</p>  <p>You cannot use a managed policy as the
         * role's trust policy. The role's trust policy is created at the same time as the
         * role, using <a>CreateRole</a>. You can update a role's trust policy using
         * <a>UpdateAssumeRolePolicy</a>.</p>  <p>Use this operation to attach a
         * <i>managed</i> policy to a role. To embed an inline policy in a role, use
         * <a>PutRolePolicy</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>As a best
         * practice, you can validate your IAM policies. To learn more, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating
         * IAM policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachRolePolicyOutcome AttachRolePolicy(const Model::AttachRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachRolePolicyOutcomeCallable AttachRolePolicyCallable(const Model::AttachRolePolicyRequest& request) const;

        /**
         * An Async wrapper for AttachRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachRolePolicyAsync(const Model::AttachRolePolicyRequest& request, const AttachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified managed policy to the specified user.</p> <p>You use
         * this operation to attach a <i>managed</i> policy to a user. To embed an inline
         * policy in a user, use <a>PutUserPolicy</a>.</p> <p>As a best practice, you can
         * validate your IAM policies. To learn more, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating
         * IAM policies</a> in the <i>IAM User Guide</i>.</p> <p>For more information about
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachUserPolicyOutcome AttachUserPolicy(const Model::AttachUserPolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachUserPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachUserPolicyOutcomeCallable AttachUserPolicyCallable(const Model::AttachUserPolicyRequest& request) const;

        /**
         * An Async wrapper for AttachUserPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachUserPolicyAsync(const Model::AttachUserPolicyRequest& request, const AttachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password of the IAM user who is calling this operation. This
         * operation can be performed using the CLI, the Amazon Web Services API, or the
         * <b>My Security Credentials</b> page in the Amazon Web Services Management
         * Console. The Amazon Web Services account root user password is not affected by
         * this operation.</p> <p>Use <a>UpdateLoginProfile</a> to use the CLI, the Amazon
         * Web Services API, or the <b>Users</b> page in the IAM console to change the
         * password for any IAM user. For more information about modifying passwords, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ChangePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangePasswordOutcome ChangePassword(const Model::ChangePasswordRequest& request) const;

        /**
         * A Callable wrapper for ChangePassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangePasswordOutcomeCallable ChangePasswordCallable(const Model::ChangePasswordRequest& request) const;

        /**
         * An Async wrapper for ChangePassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new Amazon Web Services secret access key and corresponding Amazon
         * Web Services access key ID for the specified user. The default status for new
         * keys is <code>Active</code>.</p> <p>If you do not specify a user name, IAM
         * determines the user name implicitly based on the Amazon Web Services access key
         * ID signing the request. This operation works for access keys under the Amazon
         * Web Services account. Consequently, you can use this operation to manage Amazon
         * Web Services account root user credentials. This is true even if the Amazon Web
         * Services account has no associated users.</p> <p> For information about quotas
         * on the number of keys you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>To ensure
         * the security of your Amazon Web Services account, the secret access key is
         * accessible only during key and user creation. You must save the key (for
         * example, in a text file) if you want to be able to access it again. If a secret
         * key is lost, you can delete the access keys for the associated user and then
         * create new keys.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessKeyOutcome CreateAccessKey(const Model::CreateAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessKeyOutcomeCallable CreateAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;

        /**
         * An Async wrapper for CreateAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for your Amazon Web Services account. For information about
         * using an Amazon Web Services account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an alias for your Amazon Web Services account ID</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAliasOutcome CreateAccountAlias(const Model::CreateAccountAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountAliasOutcomeCallable CreateAccountAliasCallable(const Model::CreateAccountAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAccountAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAliasAsync(const Model::CreateAccountAliasRequest& request, const CreateAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new group.</p> <p> For information about the number of groups you
         * can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new instance profile. For information about instance profiles, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_switch-role-ec2.html">Using
         * roles for applications on Amazon EC2</a> in the <i>IAM User Guide</i>, and <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/iam-roles-for-amazon-ec2.html#ec2-instance-profile">Instance
         * profiles</a> in the <i>Amazon EC2 User Guide</i>.</p> <p> For information about
         * the number of instance profiles you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * object quotas</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a password for the specified IAM user. A password allows an IAM user
         * to access Amazon Web Services services through the Amazon Web Services
         * Management Console.</p> <p>You can use the CLI, the Amazon Web Services API, or
         * the <b>Users</b> page in the IAM console to create a password for any IAM user.
         * Use <a>ChangePassword</a> to update your own existing password in the <b>My
         * Security Credentials</b> page in the Amazon Web Services Management Console.</p>
         * <p>For more information about managing passwords, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoginProfileOutcome CreateLoginProfile(const Model::CreateLoginProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateLoginProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoginProfileOutcomeCallable CreateLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;

        /**
         * An Async wrapper for CreateLoginProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM entity to describe an identity provider (IdP) that supports <a
         * href="http://openid.net/connect/">OpenID Connect (OIDC)</a>.</p> <p>The OIDC
         * provider that you create with this operation can be used as a principal in a
         * role's trust policy. Such a policy establishes a trust relationship between
         * Amazon Web Services and the OIDC provider.</p> <p>If you are using an OIDC
         * identity provider from Google, Facebook, or Amazon Cognito, you don't need to
         * create a separate IAM identity provider. These OIDC identity providers are
         * already built-in to Amazon Web Services and are available for your use. Instead,
         * you can move directly to creating new roles using your identity provider. To
         * learn more, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-idp_oidc.html">Creating
         * a role for web identity or OpenID connect federation</a> in the <i>IAM User
         * Guide</i>.</p> <p>When you create the IAM OIDC provider, you specify the
         * following:</p> <ul> <li> <p>The URL of the OIDC identity provider (IdP) to
         * trust</p> </li> <li> <p>A list of client IDs (also known as audiences) that
         * identify the application or applications allowed to authenticate using the OIDC
         * provider</p> </li> <li> <p>A list of thumbprints of one or more server
         * certificates that the IdP uses</p> </li> </ul> <p>You get all of this
         * information from the OIDC IdP you want to use to access Amazon Web Services.</p>
         *  <p>Amazon Web Services secures communication with some OIDC identity
         * providers (IdPs) through our library of trusted certificate authorities (CAs)
         * instead of using a certificate thumbprint to verify your IdP server certificate.
         * These OIDC IdPs include Google, and those that use an Amazon S3 bucket to host a
         * JSON Web Key Set (JWKS) endpoint. In these cases, your legacy thumbprint remains
         * in your configuration, but is no longer used for validation.</p>  
         * <p>The trust for the OIDC provider is derived from the IAM provider that this
         * operation creates. Therefore, it is best to limit access to the
         * <a>CreateOpenIDConnectProvider</a> operation to highly privileged users.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOpenIDConnectProviderOutcome CreateOpenIDConnectProvider(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOpenIDConnectProviderOutcomeCallable CreateOpenIDConnectProviderCallable(const Model::CreateOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for CreateOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOpenIDConnectProviderAsync(const Model::CreateOpenIDConnectProviderRequest& request, const CreateOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new managed policy for your Amazon Web Services account.</p>
         * <p>This operation creates a policy version with a version identifier of
         * <code>v1</code> and sets v1 as the policy's default version. For more
         * information about policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for managed policies</a> in the <i>IAM User Guide</i>.</p> <p>As a best
         * practice, you can validate your IAM policies. To learn more, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_policy-validator.html">Validating
         * IAM policies</a> in the <i>IAM User Guide</i>.</p> <p>For more information about
         * managed policies in general, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified managed policy. To update a managed
         * policy, you create a new policy version. A managed policy can have up to five
         * versions. If the policy has five versions, you must delete an existing version
         * using <a>DeletePolicyVersion</a> before you create a new version.</p>
         * <p>Optionally, you can set the new version as the policy's default version. The
         * default version is the version that is in effect for the IAM users, groups, and
         * roles to which the policy is attached.</p> <p>For more information about managed
         * policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for managed policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreatePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * An Async wrapper for CreatePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new role for your Amazon Web Services account. For more information
         * about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">IAM
         * roles</a>. For information about quotas for role names and the number of roles
         * you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateRole">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRoleOutcome CreateRole(const Model::CreateRoleRequest& request) const;

        /**
         * A Callable wrapper for CreateRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoleOutcomeCallable CreateRoleCallable(const Model::CreateRoleRequest& request) const;

        /**
         * An Async wrapper for CreateRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM resource that describes an identity provider (IdP) that
         * supports SAML 2.0.</p> <p>The SAML provider resource that you create with this
         * operation can be used as a principal in an IAM role's trust policy. Such a
         * policy can enable federated users who sign in using the SAML IdP to assume the
         * role. You can create an IAM role that supports Web-based single sign-on (SSO) to
         * the Amazon Web Services Management Console or one that supports API access to
         * Amazon Web Services.</p> <p>When you create the SAML provider resource, you
         * upload a SAML metadata document that you get from your IdP. That document
         * includes the issuer's name, expiration information, and keys that can be used to
         * validate the SAML authentication response (assertions) that the IdP sends. You
         * must generate the metadata document using the identity management software that
         * is used as your organization's IdP.</p>  <p> This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p>  <p> For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_enable-console-saml.html">Enabling
         * SAML 2.0 federated users to access the Amazon Web Services Management
         * Console</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based federation</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSAMLProviderOutcome CreateSAMLProvider(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSAMLProviderOutcomeCallable CreateSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for CreateSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM role that is linked to a specific Amazon Web Services service.
         * The service controls the attached policies and when the role can be deleted.
         * This helps ensure that the service is not broken by an unexpectedly changed or
         * deleted role, which could put your Amazon Web Services resources into an unknown
         * state. Allowing the service to control the role helps improve service stability
         * and proper cleanup when a service and its role are no longer needed. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">Using
         * service-linked roles</a> in the <i>IAM User Guide</i>. </p> <p>To attach a
         * policy to this service-linked role, you must make the request using the Amazon
         * Web Services service that depends on this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceLinkedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceLinkedRoleOutcome CreateServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceLinkedRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceLinkedRoleOutcomeCallable CreateServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;

        /**
         * An Async wrapper for CreateServiceLinkedRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a set of credentials consisting of a user name and password that
         * can be used to access the service specified in the request. These credentials
         * are generated by IAM, and can be used only for the specified service. </p>
         * <p>You can have a maximum of two sets of service-specific credentials for each
         * supported service per user.</p> <p>You can create service-specific credentials
         * for CodeCommit and Amazon Keyspaces (for Apache Cassandra).</p> <p>You can reset
         * the password to a new service-generated value by calling
         * <a>ResetServiceSpecificCredential</a>.</p> <p>For more information about
         * service-specific credentials, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_ssh-keys.html">Using
         * IAM with CodeCommit: Git credentials, SSH keys, and Amazon Web Services access
         * keys</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceSpecificCredentialOutcome CreateServiceSpecificCredential(const Model::CreateServiceSpecificCredentialRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceSpecificCredential that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceSpecificCredentialOutcomeCallable CreateServiceSpecificCredentialCallable(const Model::CreateServiceSpecificCredentialRequest& request) const;

        /**
         * An Async wrapper for CreateServiceSpecificCredential that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceSpecificCredentialAsync(const Model::CreateServiceSpecificCredentialRequest& request, const CreateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IAM user for your Amazon Web Services account.</p> <p> For
         * information about quotas for the number of IAM users you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new virtual MFA device for the Amazon Web Services account. After
         * creating the virtual MFA, use <a>EnableMFADevice</a> to attach the MFA device to
         * an IAM user. For more information about creating and working with virtual MFA
         * devices, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a virtual MFA device</a> in the <i>IAM User Guide</i>.</p> <p>For information
         * about the maximum number of MFA devices you can create, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>The seed
         * information contained in the QR code and the Base32 string should be treated
         * like any other secret access information. In other words, protect the seed
         * information as you would your Amazon Web Services access keys or your passwords.
         * After you provision your virtual device, you should ensure that the information
         * is destroyed following secure procedures.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualMFADeviceOutcome CreateVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for CreateVirtualMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualMFADeviceOutcomeCallable CreateVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;

        /**
         * An Async wrapper for CreateVirtualMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified MFA device and removes it from association with the
         * user name for which it was originally enabled.</p> <p>For more information about
         * creating and working with virtual MFA devices, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Enabling
         * a virtual multi-factor authentication (MFA) device</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeactivateMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateMFADeviceOutcome DeactivateMFADevice(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for DeactivateMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateMFADeviceOutcomeCallable DeactivateMFADeviceCallable(const Model::DeactivateMFADeviceRequest& request) const;

        /**
         * An Async wrapper for DeactivateMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateMFADeviceAsync(const Model::DeactivateMFADeviceRequest& request, const DeactivateMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access key pair associated with the specified IAM user.</p> <p>If
         * you do not specify a user name, IAM determines the user name implicitly based on
         * the Amazon Web Services access key ID signing the request. This operation works
         * for access keys under the Amazon Web Services account. Consequently, you can use
         * this operation to manage Amazon Web Services account root user credentials even
         * if the Amazon Web Services account has no associated users.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessKeyOutcome DeleteAccessKey(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessKeyOutcomeCallable DeleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the specified Amazon Web Services account alias. For information
         * about using an Amazon Web Services account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an alias for your Amazon Web Services account ID</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAliasOutcome DeleteAccountAlias(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAliasOutcomeCallable DeleteAccountAliasCallable(const Model::DeleteAccountAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAliasAsync(const Model::DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password policy for the Amazon Web Services account. There are no
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountPasswordPolicyOutcome DeleteAccountPasswordPolicy(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountPasswordPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountPasswordPolicyOutcomeCallable DeleteAccountPasswordPolicyCallable(const Model::DeleteAccountPasswordPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountPasswordPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountPasswordPolicyAsync(const Model::DeleteAccountPasswordPolicyRequest& request, const DeleteAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM group. The group must not contain any users or have
         * any attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * group.</p> <p>A group can also have managed policies attached to it. To detach a
         * managed policy from a group, use <a>DetachGroupPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupPolicyOutcome DeleteGroupPolicy(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupPolicyOutcomeCallable DeleteGroupPolicyCallable(const Model::DeleteGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupPolicyAsync(const Model::DeleteGroupPolicyRequest& request, const DeleteGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified instance profile. The instance profile must not have an
         * associated role.</p>  <p>Make sure that you do not have any Amazon
         * EC2 instances running with the instance profile you are about to delete.
         * Deleting a role or instance profile that is associated with a running instance
         * will break any applications running on the instance.</p>  <p>For
         * more information about instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the password for the specified IAM user, For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_passwords_admin-change-user.html">Managing
         * passwords for IAM users</a>.</p> <p>You can use the CLI, the Amazon Web Services
         * API, or the <b>Users</b> page in the IAM console to delete a password for any
         * IAM user. You can use <a>ChangePassword</a> to update, but not delete, your own
         * password in the <b>My Security Credentials</b> page in the Amazon Web Services
         * Management Console.</p>  <p>Deleting a user's password does not
         * prevent a user from accessing Amazon Web Services through the command line
         * interface or the API. To prevent all user access, you must also either make any
         * access keys inactive or delete them. For more information about making keys
         * inactive or deleting them, see <a>UpdateAccessKey</a> and
         * <a>DeleteAccessKey</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoginProfileOutcome DeleteLoginProfile(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoginProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoginProfileOutcomeCallable DeleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteLoginProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an OpenID Connect identity provider (IdP) resource object in IAM.</p>
         * <p>Deleting an IAM OIDC provider resource does not update any roles that
         * reference the provider as a principal in their trust policies. Any attempt to
         * assume a role that references a deleted provider fails.</p> <p>This operation is
         * idempotent; it does not fail or return an error if you call the operation for a
         * provider that does not exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOpenIDConnectProviderOutcome DeleteOpenIDConnectProvider(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOpenIDConnectProviderOutcomeCallable DeleteOpenIDConnectProviderCallable(const Model::DeleteOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOpenIDConnectProviderAsync(const Model::DeleteOpenIDConnectProviderRequest& request, const DeleteOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified managed policy.</p> <p>Before you can delete a managed
         * policy, you must first detach the policy from all users, groups, and roles that
         * it is attached to. In addition, you must delete all the policy's versions. The
         * following steps describe the process for deleting a managed policy:</p> <ul>
         * <li> <p>Detach the policy from all users, groups, and roles that the policy is
         * attached to, using <a>DetachUserPolicy</a>, <a>DetachGroupPolicy</a>, or
         * <a>DetachRolePolicy</a>. To list all the users, groups, and roles that a policy
         * is attached to, use <a>ListEntitiesForPolicy</a>.</p> </li> <li> <p>Delete all
         * versions of the policy using <a>DeletePolicyVersion</a>. To list the policy's
         * versions, use <a>ListPolicyVersions</a>. You cannot use
         * <a>DeletePolicyVersion</a> to delete the version that is marked as the default
         * version. You delete the policy's default version in the next step of the
         * process.</p> </li> <li> <p>Delete the policy (this automatically deletes the
         * policy's default version) using this operation.</p> </li> </ul> <p>For
         * information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version from the specified managed policy.</p> <p>You
         * cannot delete the default version from a policy using this operation. To delete
         * the default version from a policy, use <a>DeletePolicy</a>. To find out which
         * version of a policy is marked as the default version, use
         * <a>ListPolicyVersions</a>.</p> <p>For information about versions for managed
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for managed policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeletePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * An Async wrapper for DeletePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified role. The role must not have any policies attached. For
         * more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with roles</a>.</p>  <p>Make sure that you do not have any Amazon EC2
         * instances running with the role you are about to delete. Deleting a role or
         * instance profile that is associated with a running instance will break any
         * applications running on the instance.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRole">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRoleOutcome DeleteRole(const Model::DeleteRoleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoleOutcomeCallable DeleteRoleCallable(const Model::DeleteRoleRequest& request) const;

        /**
         * An Async wrapper for DeleteRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM role. </p> 
         * <p>Deleting the permissions boundary for a role might increase its permissions.
         * For example, it might allow anyone who assumes the role to perform all the
         * actions granted in its permissions policies. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRolePermissionsBoundaryOutcome DeleteRolePermissionsBoundary(const Model::DeleteRolePermissionsBoundaryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRolePermissionsBoundary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRolePermissionsBoundaryOutcomeCallable DeleteRolePermissionsBoundaryCallable(const Model::DeleteRolePermissionsBoundaryRequest& request) const;

        /**
         * An Async wrapper for DeleteRolePermissionsBoundary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRolePermissionsBoundaryAsync(const Model::DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * role.</p> <p>A role can also have managed policies attached to it. To detach a
         * managed policy from a role, use <a>DetachRolePolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRolePolicyOutcome DeleteRolePolicy(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRolePolicyOutcomeCallable DeleteRolePolicyCallable(const Model::DeleteRolePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRolePolicyAsync(const Model::DeleteRolePolicyRequest& request, const DeleteRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SAML provider resource in IAM.</p> <p>Deleting the provider
         * resource from IAM does not update any roles that reference the SAML provider
         * resource's ARN as a principal in their trust policies. Any attempt to assume a
         * role that references a non-existent provider resource ARN fails.</p>  <p>
         * This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSAMLProviderOutcome DeleteSAMLProvider(const Model::DeleteSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSAMLProviderOutcomeCallable DeleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for DeleteSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified SSH public key.</p> <p>The SSH public key deleted by
         * this operation is used only for authenticating the associated IAM user to an
         * CodeCommit repository. For more information about using SSH keys to authenticate
         * to an CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up CodeCommit for SSH connections</a> in the <i>CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSSHPublicKeyOutcome DeleteSSHPublicKey(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSSHPublicKeyOutcomeCallable DeleteSSHPublicKeyCallable(const Model::DeleteSSHPublicKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSSHPublicKeyAsync(const Model::DeleteSSHPublicKeyRequest& request, const DeleteSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified server certificate.</p> <p>For more information about
         * working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of Amazon Web Services services that can use the server
         * certificates that you manage with IAM.</p>  <p> If you are using a
         * server certificate with Elastic Load Balancing, deleting the certificate could
         * have implications for your application. If Elastic Load Balancing doesn't detect
         * the deletion of bound certificates, it may continue to use the certificates.
         * This could cause Elastic Load Balancing to stop accepting traffic. We recommend
         * that you remove the reference to the certificate from Elastic Load Balancing
         * before using this command to delete the certificate. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/APIReference/API_DeleteLoadBalancerListeners.html">DeleteLoadBalancerListeners</a>
         * in the <i>Elastic Load Balancing API Reference</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCertificateOutcome DeleteServerCertificate(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCertificateOutcomeCallable DeleteServerCertificateCallable(const Model::DeleteServerCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCertificateAsync(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a service-linked role deletion request and returns a
         * <code>DeletionTaskId</code>, which you can use to check the status of the
         * deletion. Before you call this operation, confirm that the role has no active
         * sessions and that any resources used by the role in the linked service are
         * deleted. If you call this operation more than once for the same service-linked
         * role and an earlier deletion task is not complete, then the
         * <code>DeletionTaskId</code> of the earlier request is returned.</p> <p>If you
         * submit a deletion request for a service-linked role whose linked service is
         * still accessing a resource, then the deletion task fails. If it fails, the
         * <a>GetServiceLinkedRoleDeletionStatus</a> operation returns the reason for the
         * failure, usually including the resources that must be deleted. To delete the
         * service-linked role, you must first remove those resources from the linked
         * service and then submit the deletion request again. Resources are specific to
         * the service that is linked to the role. For more information about removing
         * resources from a service, see the <a href="http://docs.aws.amazon.com/">Amazon
         * Web Services documentation</a> for your service.</p> <p>For more information
         * about service-linked roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Roles
         * terms and concepts: Amazon Web Services service-linked role</a> in the <i>IAM
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceLinkedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceLinkedRoleOutcome DeleteServiceLinkedRole(const Model::DeleteServiceLinkedRoleRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceLinkedRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceLinkedRoleOutcomeCallable DeleteServiceLinkedRoleCallable(const Model::DeleteServiceLinkedRoleRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceLinkedRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceLinkedRoleAsync(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified service-specific credential.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceSpecificCredentialOutcome DeleteServiceSpecificCredential(const Model::DeleteServiceSpecificCredentialRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceSpecificCredential that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceSpecificCredentialOutcomeCallable DeleteServiceSpecificCredentialCallable(const Model::DeleteServiceSpecificCredentialRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceSpecificCredential that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceSpecificCredentialAsync(const Model::DeleteServiceSpecificCredentialRequest& request, const DeleteServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a signing certificate associated with the specified IAM user.</p>
         * <p>If you do not specify a user name, IAM determines the user name implicitly
         * based on the Amazon Web Services access key ID signing the request. This
         * operation works for access keys under the Amazon Web Services account.
         * Consequently, you can use this operation to manage Amazon Web Services account
         * root user credentials even if the Amazon Web Services account has no associated
         * IAM users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSigningCertificateOutcome DeleteSigningCertificate(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteSigningCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSigningCertificateOutcomeCallable DeleteSigningCertificateCallable(const Model::DeleteSigningCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteSigningCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSigningCertificateAsync(const Model::DeleteSigningCertificateRequest& request, const DeleteSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IAM user. Unlike the Amazon Web Services Management
         * Console, when you delete a user programmatically, you must delete the items
         * attached to the user manually, or the deletion fails. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_deleting_cli">Deleting
         * an IAM user</a>. Before attempting to delete a user, remove the following
         * items:</p> <ul> <li> <p>Password (<a>DeleteLoginProfile</a>)</p> </li> <li>
         * <p>Access keys (<a>DeleteAccessKey</a>)</p> </li> <li> <p>Signing certificate
         * (<a>DeleteSigningCertificate</a>)</p> </li> <li> <p>SSH public key
         * (<a>DeleteSSHPublicKey</a>)</p> </li> <li> <p>Git credentials
         * (<a>DeleteServiceSpecificCredential</a>)</p> </li> <li> <p>Multi-factor
         * authentication (MFA) device (<a>DeactivateMFADevice</a>,
         * <a>DeleteVirtualMFADevice</a>)</p> </li> <li> <p>Inline policies
         * (<a>DeleteUserPolicy</a>)</p> </li> <li> <p>Attached managed policies
         * (<a>DetachUserPolicy</a>)</p> </li> <li> <p>Group memberships
         * (<a>RemoveUserFromGroup</a>)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the permissions boundary for the specified IAM user.</p> 
         * <p>Deleting the permissions boundary for a user might increase its permissions
         * by allowing the user to perform all the actions granted in its permissions
         * policies. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPermissionsBoundaryOutcome DeleteUserPermissionsBoundary(const Model::DeleteUserPermissionsBoundaryRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPermissionsBoundary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPermissionsBoundaryOutcomeCallable DeleteUserPermissionsBoundaryCallable(const Model::DeleteUserPermissionsBoundaryRequest& request) const;

        /**
         * An Async wrapper for DeleteUserPermissionsBoundary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPermissionsBoundaryAsync(const Model::DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified inline policy that is embedded in the specified IAM
         * user.</p> <p>A user can also have managed policies attached to it. To detach a
         * managed policy from a user, use <a>DetachUserPolicy</a>. For more information
         * about policies, refer to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserPolicyOutcome DeleteUserPolicy(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserPolicyOutcomeCallable DeleteUserPolicyCallable(const Model::DeleteUserPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteUserPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserPolicyAsync(const Model::DeleteUserPolicyRequest& request, const DeleteUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a virtual MFA device.</p>  <p> You must deactivate a user's
         * virtual MFA device before you can delete it. For information about deactivating
         * MFA devices, see <a>DeactivateMFADevice</a>. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DeleteVirtualMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualMFADeviceOutcome DeleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVirtualMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualMFADeviceOutcomeCallable DeleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;

        /**
         * An Async wrapper for DeleteVirtualMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified IAM group.</p> <p>A
         * group can also have inline policies embedded with it. To delete an inline
         * policy, use <a>DeleteGroupPolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachGroupPolicyOutcome DetachGroupPolicy(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachGroupPolicyOutcomeCallable DetachGroupPolicyCallable(const Model::DetachGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for DetachGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachGroupPolicyAsync(const Model::DetachGroupPolicyRequest& request, const DetachGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified role.</p> <p>A role
         * can also have inline policies embedded with it. To delete an inline policy, use
         * <a>DeleteRolePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachRolePolicyOutcome DetachRolePolicy(const Model::DetachRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachRolePolicyOutcomeCallable DetachRolePolicyCallable(const Model::DetachRolePolicyRequest& request) const;

        /**
         * An Async wrapper for DetachRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachRolePolicyAsync(const Model::DetachRolePolicyRequest& request, const DetachRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified managed policy from the specified user.</p> <p>A user
         * can also have inline policies embedded with it. To delete an inline policy, use
         * <a>DeleteUserPolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DetachUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachUserPolicyOutcome DetachUserPolicy(const Model::DetachUserPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachUserPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachUserPolicyOutcomeCallable DetachUserPolicyCallable(const Model::DetachUserPolicyRequest& request) const;

        /**
         * An Async wrapper for DetachUserPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachUserPolicyAsync(const Model::DetachUserPolicyRequest& request, const DetachUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified MFA device and associates it with the specified IAM
         * user. When enabled, the MFA device is required for every subsequent login by the
         * IAM user associated with the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/EnableMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMFADeviceOutcome EnableMFADevice(const Model::EnableMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for EnableMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMFADeviceOutcomeCallable EnableMFADeviceCallable(const Model::EnableMFADeviceRequest& request) const;

        /**
         * An Async wrapper for EnableMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMFADeviceAsync(const Model::EnableMFADeviceRequest& request, const EnableMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Generates a credential report for the Amazon Web Services account. For more
         * information about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * credential reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateCredentialReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateCredentialReportOutcome GenerateCredentialReport(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * A Callable wrapper for GenerateCredentialReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateCredentialReportOutcomeCallable GenerateCredentialReportCallable(const Model::GenerateCredentialReportRequest& request) const;

        /**
         * An Async wrapper for GenerateCredentialReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateCredentialReportAsync(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report for service last accessed data for Organizations. You can
         * generate a report for any entities (organization root, organizational unit, or
         * account) or policies in your organization.</p> <p>To call this operation, you
         * must be signed in using your Organizations management account credentials. You
         * can use your long-term IAM user or root user credentials, or temporary
         * credentials from assuming an IAM role. SCPs must be enabled for your
         * organization root. You must have the required IAM and Organizations permissions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * permissions using service last accessed data</a> in the <i>IAM User
         * Guide</i>.</p> <p>You can generate a service last accessed data report for
         * entities by specifying only the entity's path. This data includes a list of
         * services that are allowed by any service control policies (SCPs) that apply to
         * the entity.</p> <p>You can generate a service last accessed data report for a
         * policy by specifying an entity's path and an optional Organizations policy ID.
         * This data includes a list of services that are allowed by the specified SCP.</p>
         * <p>For each service in both report types, the data includes the most recent
         * account activity that the policy allows to account principals in the entity or
         * the entity's children. For important information about the data, reporting
         * period, permissions required, troubleshooting, and supported Regions see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * permissions using service last accessed data</a> in the <i>IAM User
         * Guide</i>.</p>  <p>The data includes all attempts to access Amazon
         * Web Services, not just the successful ones. This includes all attempts that were
         * made using the Amazon Web Services Management Console, the Amazon Web Services
         * API through any of the SDKs, or any of the command line tools. An unexpected
         * entry in the service last accessed data does not mean that an account has been
         * compromised, because the request might have been denied. Refer to your
         * CloudTrail logs as the authoritative source for information about all API calls
         * and whether they were successful or denied access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> 
         * <p>This operation returns a <code>JobId</code>. Use this parameter in the <code>
         * <a>GetOrganizationsAccessReport</a> </code> operation to check the status of the
         * report generation. To check the status of this request, use the
         * <code>JobId</code> parameter in the <code> <a>GetOrganizationsAccessReport</a>
         * </code> operation and test the <code>JobStatus</code> response parameter. When
         * the job is complete, you can retrieve the report.</p> <p>To generate a service
         * last accessed data report for entities, specify an entity path without
         * specifying the optional Organizations policy ID. The type of entity that you
         * specify determines the data returned in the report.</p> <ul> <li> <p>
         * <b>Root</b> – When you specify the organizations root as the entity, the
         * resulting report lists all of the services allowed by SCPs that are attached to
         * your root. For each service, the report includes data for all accounts in your
         * organization except the management account, because the management account is
         * not limited by SCPs.</p> </li> <li> <p> <b>OU</b> – When you specify an
         * organizational unit (OU) as the entity, the resulting report lists all of the
         * services allowed by SCPs that are attached to the OU and its parents. For each
         * service, the report includes data for all accounts in the OU or its children.
         * This data excludes the management account, because the management account is not
         * limited by SCPs.</p> </li> <li> <p> <b>management account</b> – When you specify
         * the management account, the resulting report lists all Amazon Web Services
         * services, because the management account is not limited by SCPs. For each
         * service, the report includes data for only the management account.</p> </li>
         * <li> <p> <b>Account</b> – When you specify another account as the entity, the
         * resulting report lists all of the services allowed by SCPs that are attached to
         * the account and its parents. For each service, the report includes data for only
         * the specified account.</p> </li> </ul> <p>To generate a service last accessed
         * data report for policies, specify an entity path and the optional Organizations
         * policy ID. The type of entity that you specify determines the data returned for
         * each service.</p> <ul> <li> <p> <b>Root</b> – When you specify the root entity
         * and a policy ID, the resulting report lists all of the services that are allowed
         * by the specified SCP. For each service, the report includes data for all
         * accounts in your organization to which the SCP applies. This data excludes the
         * management account, because the management account is not limited by SCPs. If
         * the SCP is not attached to any entities in the organization, then the report
         * will return a list of services with no data.</p> </li> <li> <p> <b>OU</b> – When
         * you specify an OU entity and a policy ID, the resulting report lists all of the
         * services that are allowed by the specified SCP. For each service, the report
         * includes data for all accounts in the OU or its children to which the SCP
         * applies. This means that other accounts outside the OU that are affected by the
         * SCP might not be included in the data. This data excludes the management
         * account, because the management account is not limited by SCPs. If the SCP is
         * not attached to the OU or one of its children, the report will return a list of
         * services with no data.</p> </li> <li> <p> <b>management account</b> – When you
         * specify the management account, the resulting report lists all Amazon Web
         * Services services, because the management account is not limited by SCPs. If you
         * specify a policy ID in the CLI or API, the policy is ignored. For each service,
         * the report includes data for only the management account.</p> </li> <li> <p>
         * <b>Account</b> – When you specify another account entity and a policy ID, the
         * resulting report lists all of the services that are allowed by the specified
         * SCP. For each service, the report includes data for only the specified account.
         * This means that other accounts in the organization that are affected by the SCP
         * might not be included in the data. If the SCP is not attached to the account,
         * the report will return a list of services with no data.</p> </li> </ul> 
         * <p>Service last accessed data does not use other policy types when determining
         * whether a principal could access a service. These other policy types include
         * identity-based policies, resource-based policies, access control lists, IAM
         * permissions boundaries, and STS assume role policies. It only applies SCP logic.
         * For more about the evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * policies</a> in the <i>IAM User Guide</i>.</p>  <p>For more information
         * about service last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * policy scope by viewing user activity</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateOrganizationsAccessReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateOrganizationsAccessReportOutcome GenerateOrganizationsAccessReport(const Model::GenerateOrganizationsAccessReportRequest& request) const;

        /**
         * A Callable wrapper for GenerateOrganizationsAccessReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateOrganizationsAccessReportOutcomeCallable GenerateOrganizationsAccessReportCallable(const Model::GenerateOrganizationsAccessReportRequest& request) const;

        /**
         * An Async wrapper for GenerateOrganizationsAccessReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateOrganizationsAccessReportAsync(const Model::GenerateOrganizationsAccessReportRequest& request, const GenerateOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report that includes details about when an IAM resource (user,
         * group, role, or policy) was last used in an attempt to access Amazon Web
         * Services services. Recent activity usually appears within four hours. IAM
         * reports activity for at least the last 400 days, or less if your Region began
         * supporting this feature within the last year. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
         * where data is tracked</a>.</p>  <p>The service last accessed data
         * includes all attempts to access an Amazon Web Services API, not just the
         * successful ones. This includes all attempts that were made using the Amazon Web
         * Services Management Console, the Amazon Web Services API through any of the
         * SDKs, or any of the command line tools. An unexpected entry in the service last
         * accessed data does not mean that your account has been compromised, because the
         * request might have been denied. Refer to your CloudTrail logs as the
         * authoritative source for information about all API calls and whether they were
         * successful or denied access. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/cloudtrail-integration.html">Logging
         * IAM events with CloudTrail</a> in the <i>IAM User Guide</i>.</p> 
         * <p>The <code>GenerateServiceLastAccessedDetails</code> operation returns a
         * <code>JobId</code>. Use this parameter in the following operations to retrieve
         * the following details from your report: </p> <ul> <li> <p>
         * <a>GetServiceLastAccessedDetails</a> – Use this operation for users, groups,
         * roles, or policies to list every Amazon Web Services service that the resource
         * could access using permissions policies. For each service, the response includes
         * information about the most recent access attempt.</p> <p>The <code>JobId</code>
         * returned by <code>GenerateServiceLastAccessedDetail</code> must be used by the
         * same role within a session, or by the same user when used to call
         * <code>GetServiceLastAccessedDetail</code>.</p> </li> <li> <p>
         * <a>GetServiceLastAccessedDetailsWithEntities</a> – Use this operation for groups
         * and policies to list information about the associated entities (users or roles)
         * that attempted to access a specific Amazon Web Services service. </p> </li>
         * </ul> <p>To check the status of the
         * <code>GenerateServiceLastAccessedDetails</code> request, use the
         * <code>JobId</code> parameter in the same operations and test the
         * <code>JobStatus</code> response parameter.</p> <p>For additional information
         * about the permissions policies that allow an identity (user, group, or role) to
         * access specific services, use the <a>ListPoliciesGrantingServiceAccess</a>
         * operation.</p>  <p>Service last accessed data does not use other policy
         * types when determining whether a resource could access a service. These other
         * policy types include resource-based policies, access control lists,
         * Organizations policies, IAM permissions boundaries, and STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * policies</a> in the <i>IAM User Guide</i>.</p>  <p>For more information
         * about service and action last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * permissions using service last accessed data</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GenerateServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateServiceLastAccessedDetailsOutcome GenerateServiceLastAccessedDetails(const Model::GenerateServiceLastAccessedDetailsRequest& request) const;

        /**
         * A Callable wrapper for GenerateServiceLastAccessedDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateServiceLastAccessedDetailsOutcomeCallable GenerateServiceLastAccessedDetailsCallable(const Model::GenerateServiceLastAccessedDetailsRequest& request) const;

        /**
         * An Async wrapper for GenerateServiceLastAccessedDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateServiceLastAccessedDetailsAsync(const Model::GenerateServiceLastAccessedDetailsRequest& request, const GenerateServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about when the specified access key was last used. The
         * information includes the date and time of last use, along with the Amazon Web
         * Services service and Region that were specified in the last request made with
         * that key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccessKeyLastUsed">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessKeyLastUsedOutcome GetAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * A Callable wrapper for GetAccessKeyLastUsed that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessKeyLastUsedOutcomeCallable GetAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;

        /**
         * An Async wrapper for GetAccessKeyLastUsed that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all IAM users, groups, roles, and policies in
         * your Amazon Web Services account, including their relationships to one another.
         * Use this operation to obtain a snapshot of the configuration of IAM permissions
         * (users, groups, roles, and policies) in your account.</p>  <p>Policies
         * returned by this operation are URL-encoded compliant with <a
         * href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You can use a URL
         * decoding method to convert the policy back to plain JSON text. For example, if
         * you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p>  <p>You can optionally filter
         * the results using the <code>Filter</code> parameter. You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountAuthorizationDetailsOutcome GetAccountAuthorizationDetails(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountAuthorizationDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountAuthorizationDetailsOutcomeCallable GetAccountAuthorizationDetailsCallable(const Model::GetAccountAuthorizationDetailsRequest& request) const;

        /**
         * An Async wrapper for GetAccountAuthorizationDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAuthorizationDetailsAsync(const Model::GetAccountAuthorizationDetailsRequest& request, const GetAccountAuthorizationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the password policy for the Amazon Web Services account. This tells
         * you the complexity requirements and mandatory rotation periods for the IAM user
         * passwords in your account. For more information about using a password policy,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM password policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountPasswordPolicyOutcome GetAccountPasswordPolicy(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAccountPasswordPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountPasswordPolicyOutcomeCallable GetAccountPasswordPolicyCallable(const Model::GetAccountPasswordPolicyRequest& request) const;

        /**
         * An Async wrapper for GetAccountPasswordPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountPasswordPolicyAsync(const Model::GetAccountPasswordPolicyRequest& request, const GetAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about IAM entity usage and IAM quotas in the Amazon Web
         * Services account.</p> <p> For information about IAM quotas, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSummaryOutcome GetAccountSummary(const Model::GetAccountSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSummaryOutcomeCallable GetAccountSummaryCallable(const Model::GetAccountSummaryRequest& request) const;

        /**
         * An Async wrapper for GetAccountSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all of the context keys referenced in the input policies. The
         * policies are supplied as a list of one or more strings. To get the context keys
         * from policies associated with an IAM user, group, or role, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>Context keys are variables
         * maintained by Amazon Web Services and its services that provide details about
         * the context of an API query request. Context keys can be evaluated by testing
         * against a value specified in an IAM policy. Use
         * <code>GetContextKeysForCustomPolicy</code> to understand what key names and
         * values you must supply when you call <a>SimulateCustomPolicy</a>. Note that all
         * parameters are shown in unencoded form here for clarity but must be URL encoded
         * to be included as a part of a real HTML request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForCustomPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContextKeysForCustomPolicyOutcome GetContextKeysForCustomPolicy(const Model::GetContextKeysForCustomPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContextKeysForCustomPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContextKeysForCustomPolicyOutcomeCallable GetContextKeysForCustomPolicyCallable(const Model::GetContextKeysForCustomPolicyRequest& request) const;

        /**
         * An Async wrapper for GetContextKeysForCustomPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForCustomPolicyAsync(const Model::GetContextKeysForCustomPolicyRequest& request, const GetContextKeysForCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all of the context keys referenced in all the IAM policies
         * that are attached to the specified IAM entity. The entity can be an IAM user,
         * group, or role. If you specify a user, then the request also includes all of the
         * policies attached to groups that the user is a member of.</p> <p>You can
         * optionally include a list of one or more additional policies, specified as
         * strings. If you want to include <i>only</i> a list of policies by string, use
         * <a>GetContextKeysForCustomPolicy</a> instead.</p> <p> <b>Note:</b> This
         * operation discloses information about the permissions granted to other users. If
         * you do not want users to see other user's permissions, then consider allowing
         * them to use <a>GetContextKeysForCustomPolicy</a> instead.</p> <p>Context keys
         * are variables maintained by Amazon Web Services and its services that provide
         * details about the context of an API query request. Context keys can be evaluated
         * by testing against a value in an IAM policy. Use
         * <a>GetContextKeysForPrincipalPolicy</a> to understand what key names and values
         * you must supply when you call <a>SimulatePrincipalPolicy</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetContextKeysForPrincipalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcome GetContextKeysForPrincipalPolicy(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContextKeysForPrincipalPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContextKeysForPrincipalPolicyOutcomeCallable GetContextKeysForPrincipalPolicyCallable(const Model::GetContextKeysForPrincipalPolicyRequest& request) const;

        /**
         * An Async wrapper for GetContextKeysForPrincipalPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContextKeysForPrincipalPolicyAsync(const Model::GetContextKeysForPrincipalPolicyRequest& request, const GetContextKeysForPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a credential report for the Amazon Web Services account. For more
         * information about the credential report, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Getting
         * credential reports</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialReportOutcome GetCredentialReport(const Model::GetCredentialReportRequest& request) const;

        /**
         * A Callable wrapper for GetCredentialReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialReportOutcomeCallable GetCredentialReportCallable(const Model::GetCredentialReportRequest& request) const;

        /**
         * An Async wrapper for GetCredentialReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialReportAsync(const Model::GetCredentialReportRequest& request, const GetCredentialReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of IAM users that are in the specified IAM group. You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM group.</p>  <p>Policies returned by this operation are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p>  <p>An IAM
         * group can also have managed policies attached to it. To retrieve a managed
         * policy document that is attached to a group, use <a>GetPolicy</a> to determine
         * the policy's default version, then use <a>GetPolicyVersion</a> to retrieve the
         * policy document.</p> <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupPolicyOutcome GetGroupPolicy(const Model::GetGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupPolicyOutcomeCallable GetGroupPolicyCallable(const Model::GetGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for GetGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupPolicyAsync(const Model::GetGroupPolicyRequest& request, const GetGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves information about the specified instance profile, including the
         * instance profile's path, GUID, ARN, and role. For more information about
         * instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for GetInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the user name for the specified IAM user. A login profile is
         * created when you create a password for the user to access the Amazon Web
         * Services Management Console. If the user does not exist or does not have a
         * password, the operation returns a 404 (<code>NoSuchEntity</code>) error.</p>
         * <p>If you create an IAM user with access to the console, the
         * <code>CreateDate</code> reflects the date you created the initial password for
         * the user.</p> <p>If you create an IAM user with programmatic access, and then
         * later add a password for the user to access the Amazon Web Services Management
         * Console, the <code>CreateDate</code> reflects the initial password creation
         * date. A user with programmatic access does not have a login profile unless you
         * create a password for the user to access the Amazon Web Services Management
         * Console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoginProfileOutcome GetLoginProfile(const Model::GetLoginProfileRequest& request) const;

        /**
         * A Callable wrapper for GetLoginProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoginProfileOutcomeCallable GetLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;

        /**
         * An Async wrapper for GetLoginProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified OpenID Connect (OIDC) provider
         * resource object in IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIDConnectProviderOutcome GetOpenIDConnectProvider(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for GetOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIDConnectProviderOutcomeCallable GetOpenIDConnectProviderCallable(const Model::GetOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for GetOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIDConnectProviderAsync(const Model::GetOpenIDConnectProviderRequest& request, const GetOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the service last accessed data report for Organizations that was
         * previously generated using the <code> <a>GenerateOrganizationsAccessReport</a>
         * </code> operation. This operation retrieves the status of your report job and
         * the report contents.</p> <p>Depending on the parameters that you passed when you
         * generated the report, the data returned could include different information. For
         * details, see <a>GenerateOrganizationsAccessReport</a>.</p> <p>To call this
         * operation, you must be signed in to the management account in your organization.
         * SCPs must be enabled for your organization root. You must have permissions to
         * perform this operation. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Refining
         * permissions using service last accessed data</a> in the <i>IAM User
         * Guide</i>.</p> <p>For each service that principals in an account (root users,
         * IAM users, or IAM roles) could access using SCPs, the operation returns details
         * about the most recent access attempt. If there was no attempt, the service is
         * listed without details about the most recent attempt to access the service. If
         * the operation fails, it returns the reason that it failed.</p> <p>By default,
         * the list is sorted by service namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOrganizationsAccessReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationsAccessReportOutcome GetOrganizationsAccessReport(const Model::GetOrganizationsAccessReportRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationsAccessReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOrganizationsAccessReportOutcomeCallable GetOrganizationsAccessReportCallable(const Model::GetOrganizationsAccessReportRequest& request) const;

        /**
         * An Async wrapper for GetOrganizationsAccessReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOrganizationsAccessReportAsync(const Model::GetOrganizationsAccessReportRequest& request, const GetOrganizationsAccessReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified managed policy, including the
         * policy's default version and the total number of IAM users, groups, and roles to
         * which the policy is attached. To retrieve the list of the specific users,
         * groups, and roles that the policy is attached to, use
         * <a>ListEntitiesForPolicy</a>. This operation returns metadata about the policy.
         * To retrieve the actual policy document for a specific version of the policy, use
         * <a>GetPolicyVersion</a>.</p> <p>This operation retrieves information about
         * managed policies. To retrieve information about an inline policy that is
         * embedded with an IAM user, group, or role, use <a>GetUserPolicy</a>,
         * <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a>.</p> <p>For more information
         * about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified version of the specified managed
         * policy, including the policy document.</p>  <p>Policies returned by this
         * operation are URL-encoded compliant with <a
         * href="https://tools.ietf.org/html/rfc3986">RFC 3986</a>. You can use a URL
         * decoding method to convert the policy back to plain JSON text. For example, if
         * you use Java, you can use the <code>decode</code> method of the
         * <code>java.net.URLDecoder</code> utility class in the Java SDK. Other languages
         * and SDKs provide similar functionality.</p>  <p>To list the available
         * versions for a policy, use <a>ListPolicyVersions</a>.</p> <p>This operation
         * retrieves information about managed policies. To retrieve information about an
         * inline policy that is embedded in a user, group, or role, use
         * <a>GetUserPolicy</a>, <a>GetGroupPolicy</a>, or <a>GetRolePolicy</a>.</p> <p>For
         * more information about the types of policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about managed policy versions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
         * for managed policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for GetPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for GetPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified role, including the role's path,
         * GUID, ARN, and the role's trust policy that grants permission to assume the
         * role. For more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with roles</a>.</p>  <p>Policies returned by this operation are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRole">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoleOutcome GetRole(const Model::GetRoleRequest& request) const;

        /**
         * A Callable wrapper for GetRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoleOutcomeCallable GetRoleCallable(const Model::GetRoleRequest& request) const;

        /**
         * An Async wrapper for GetRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoleAsync(const Model::GetRoleRequest& request, const GetRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded with the
         * specified IAM role.</p>  <p>Policies returned by this operation are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p>  <p>An IAM
         * role can also have managed policies attached to it. To retrieve a managed policy
         * document that is attached to a role, use <a>GetPolicy</a> to determine the
         * policy's default version, then use <a>GetPolicyVersion</a> to retrieve the
         * policy document.</p> <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>For more
         * information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * roles to delegate permissions and federate identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRolePolicyOutcome GetRolePolicy(const Model::GetRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRolePolicyOutcomeCallable GetRolePolicyCallable(const Model::GetRolePolicyRequest& request) const;

        /**
         * An Async wrapper for GetRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRolePolicyAsync(const Model::GetRolePolicyRequest& request, const GetRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the SAML provider metadocument that was uploaded when the IAM SAML
         * provider resource object was created or updated.</p>  <p>This operation
         * requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSAMLProviderOutcome GetSAMLProvider(const Model::GetSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for GetSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSAMLProviderOutcomeCallable GetSAMLProviderCallable(const Model::GetSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for GetSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified SSH public key, including metadata about the key.</p>
         * <p>The SSH public key retrieved by this operation is used only for
         * authenticating the associated IAM user to an CodeCommit repository. For more
         * information about using SSH keys to authenticate to an CodeCommit repository,
         * see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up CodeCommit for SSH connections</a> in the <i>CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSSHPublicKeyOutcome GetSSHPublicKey(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for GetSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSSHPublicKeyOutcomeCallable GetSSHPublicKeyCallable(const Model::GetSSHPublicKeyRequest& request) const;

        /**
         * An Async wrapper for GetSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSSHPublicKeyAsync(const Model::GetSSHPublicKeyRequest& request, const GetSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified server certificate stored in
         * IAM.</p> <p>For more information about working with server certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of Amazon Web Services services that can use the server certificates that
         * you manage with IAM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerCertificateOutcome GetServerCertificate(const Model::GetServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServerCertificateOutcomeCallable GetServerCertificateCallable(const Model::GetServerCertificateRequest& request) const;

        /**
         * An Async wrapper for GetServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServerCertificateAsync(const Model::GetServerCertificateRequest& request, const GetServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a service last accessed report that was created using the
         * <code>GenerateServiceLastAccessedDetails</code> operation. You can use the
         * <code>JobId</code> parameter in <code>GetServiceLastAccessedDetails</code> to
         * retrieve the status of your report job. When the report is complete, you can
         * retrieve the generated report. The report includes a list of Amazon Web Services
         * services that the resource (user, group, role, or managed policy) can
         * access.</p>  <p>Service last accessed data does not use other policy types
         * when determining whether a resource could access a service. These other policy
         * types include resource-based policies, access control lists, Organizations
         * policies, IAM permissions boundaries, and STS assume role policies. It only
         * applies permissions policy logic. For more about the evaluation of policy types,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * policies</a> in the <i>IAM User Guide</i>.</p>  <p>For each service that
         * the resource could access using permissions policies, the operation returns
         * details about the most recent access attempt. If there was no attempt, the
         * service is listed without details about the most recent attempt to access the
         * service. If the operation fails, the <code>GetServiceLastAccessedDetails</code>
         * operation returns the reason that it failed.</p> <p>The
         * <code>GetServiceLastAccessedDetails</code> operation returns a list of services.
         * This list includes the number of entities that have attempted to access the
         * service and the date and time of the last attempt. It also returns the ARN of
         * the following entity, depending on the resource ARN that you used to generate
         * the report:</p> <ul> <li> <p> <b>User</b> – Returns the user ARN that you used
         * to generate the report</p> </li> <li> <p> <b>Group</b> – Returns the ARN of the
         * group member (user) that last attempted to access the service</p> </li> <li> <p>
         * <b>Role</b> – Returns the role ARN that you used to generate the report</p>
         * </li> <li> <p> <b>Policy</b> – Returns the ARN of the user or role that last
         * used the policy to attempt to access the service</p> </li> </ul> <p>By default,
         * the list is sorted by service namespace.</p> <p>If you specified
         * <code>ACTION_LEVEL</code> granularity when you generated the report, this
         * operation returns service and action last accessed data. This includes the most
         * recent access attempt for each tracked action within a service. Otherwise, this
         * operation returns only service data.</p> <p>For more information about service
         * and action last accessed data, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html">Reducing
         * permissions using service last accessed data</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLastAccessedDetailsOutcome GetServiceLastAccessedDetails(const Model::GetServiceLastAccessedDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetServiceLastAccessedDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLastAccessedDetailsOutcomeCallable GetServiceLastAccessedDetailsCallable(const Model::GetServiceLastAccessedDetailsRequest& request) const;

        /**
         * An Async wrapper for GetServiceLastAccessedDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLastAccessedDetailsAsync(const Model::GetServiceLastAccessedDetailsRequest& request, const GetServiceLastAccessedDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>After you generate a group or policy report using the
         * <code>GenerateServiceLastAccessedDetails</code> operation, you can use the
         * <code>JobId</code> parameter in
         * <code>GetServiceLastAccessedDetailsWithEntities</code>. This operation retrieves
         * the status of your report job and a list of entities that could have used group
         * or policy permissions to access the specified service.</p> <ul> <li> <p>
         * <b>Group</b> – For a group report, this operation returns a list of users in the
         * group that could have used the group’s policies in an attempt to access the
         * service.</p> </li> <li> <p> <b>Policy</b> – For a policy report, this operation
         * returns a list of entities (users or roles) that could have used the policy in
         * an attempt to access the service.</p> </li> </ul> <p>You can also use this
         * operation for user or role reports to retrieve details about those entities.</p>
         * <p>If the operation fails, the
         * <code>GetServiceLastAccessedDetailsWithEntities</code> operation returns the
         * reason that it failed.</p> <p>By default, the list of associated entities is
         * sorted by date, with the most recent access listed first.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLastAccessedDetailsWithEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLastAccessedDetailsWithEntitiesOutcome GetServiceLastAccessedDetailsWithEntities(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request) const;

        /**
         * A Callable wrapper for GetServiceLastAccessedDetailsWithEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLastAccessedDetailsWithEntitiesOutcomeCallable GetServiceLastAccessedDetailsWithEntitiesCallable(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request) const;

        /**
         * An Async wrapper for GetServiceLastAccessedDetailsWithEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLastAccessedDetailsWithEntitiesAsync(const Model::GetServiceLastAccessedDetailsWithEntitiesRequest& request, const GetServiceLastAccessedDetailsWithEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of your service-linked role deletion. After you use
         * <a>DeleteServiceLinkedRole</a> to submit a service-linked role for deletion, you
         * can use the <code>DeletionTaskId</code> parameter in
         * <code>GetServiceLinkedRoleDeletionStatus</code> to check the status of the
         * deletion. If the deletion fails, this operation returns the reason that it
         * failed, if that information is returned by the service.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetServiceLinkedRoleDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceLinkedRoleDeletionStatusOutcome GetServiceLinkedRoleDeletionStatus(const Model::GetServiceLinkedRoleDeletionStatusRequest& request) const;

        /**
         * A Callable wrapper for GetServiceLinkedRoleDeletionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceLinkedRoleDeletionStatusOutcomeCallable GetServiceLinkedRoleDeletionStatusCallable(const Model::GetServiceLinkedRoleDeletionStatusRequest& request) const;

        /**
         * An Async wrapper for GetServiceLinkedRoleDeletionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceLinkedRoleDeletionStatusAsync(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified IAM user, including the user's
         * creation date, path, unique ID, and ARN.</p> <p>If you do not specify a user
         * name, IAM determines the user name implicitly based on the Amazon Web Services
         * access key ID used to sign the request to this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUser">AWS API
         * Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified inline policy document that is embedded in the
         * specified IAM user.</p>  <p>Policies returned by this operation are
         * URL-encoded compliant with <a href="https://tools.ietf.org/html/rfc3986">RFC
         * 3986</a>. You can use a URL decoding method to convert the policy back to plain
         * JSON text. For example, if you use Java, you can use the <code>decode</code>
         * method of the <code>java.net.URLDecoder</code> utility class in the Java SDK.
         * Other languages and SDKs provide similar functionality.</p>  <p>An IAM
         * user can also have managed policies attached to it. To retrieve a managed policy
         * document that is attached to a user, use <a>GetPolicy</a> to determine the
         * policy's default version. Then use <a>GetPolicyVersion</a> to retrieve the
         * policy document.</p> <p>For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserPolicyOutcome GetUserPolicy(const Model::GetUserPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetUserPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserPolicyOutcomeCallable GetUserPolicyCallable(const Model::GetUserPolicyRequest& request) const;

        /**
         * An Async wrapper for GetUserPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserPolicyAsync(const Model::GetUserPolicyRequest& request, const GetUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the access key IDs associated with the specified
         * IAM user. If there is none, the operation returns an empty list.</p> <p>Although
         * each user is limited to a small number of keys, you can still paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code> parameters.</p>
         * <p>If the <code>UserName</code> is not specified, the user name is determined
         * implicitly based on the Amazon Web Services access key ID used to sign the
         * request. If a temporary access key is used, then <code>UserName</code> is
         * required. If a long-term key is assigned to the user, then <code>UserName</code>
         * is not required. This operation works for access keys under the Amazon Web
         * Services account. Consequently, you can use this operation to manage Amazon Web
         * Services account root user credentials even if the Amazon Web Services account
         * has no associated users.</p>  <p>To ensure the security of your Amazon Web
         * Services account, the secret access key is accessible only during key and user
         * creation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccessKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessKeysOutcome ListAccessKeys(const Model::ListAccessKeysRequest& request) const;

        /**
         * A Callable wrapper for ListAccessKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessKeysOutcomeCallable ListAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;

        /**
         * An Async wrapper for ListAccessKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account alias associated with the Amazon Web Services account
         * (Note: you can have only one). For information about using an Amazon Web
         * Services account alias, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AccountAlias.html">Using
         * an alias for your Amazon Web Services account ID</a> in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAccountAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAliasesOutcome ListAccountAliases(const Model::ListAccountAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAliasesOutcomeCallable ListAccountAliasesCallable(const Model::ListAccountAliasesRequest& request) const;

        /**
         * An Async wrapper for ListAccountAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAliasesAsync(const Model::ListAccountAliasesRequest& request, const ListAccountAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM group.</p>
         * <p>An IAM group can also have inline policies embedded with it. To list the
         * inline policies for a group, use <a>ListGroupPolicies</a>. For information about
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedGroupPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedGroupPoliciesOutcome ListAttachedGroupPolicies(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedGroupPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedGroupPoliciesOutcomeCallable ListAttachedGroupPoliciesCallable(const Model::ListAttachedGroupPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAttachedGroupPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedGroupPoliciesAsync(const Model::ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM role.</p>
         * <p>An IAM role can also have inline policies embedded with it. To list the
         * inline policies for a role, use <a>ListRolePolicies</a>. For information about
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified role (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedRolePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedRolePoliciesOutcome ListAttachedRolePolicies(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedRolePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedRolePoliciesOutcomeCallable ListAttachedRolePoliciesCallable(const Model::ListAttachedRolePoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAttachedRolePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedRolePoliciesAsync(const Model::ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all managed policies that are attached to the specified IAM user.</p>
         * <p>An IAM user can also have inline policies embedded with it. To list the
         * inline policies for a user, use <a>ListUserPolicies</a>. For information about
         * policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. You can use the <code>PathPrefix</code> parameter to limit the list
         * of policies to only those matching the specified path prefix. If there are no
         * policies attached to the specified group (or none that match the specified path
         * prefix), the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedUserPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedUserPoliciesOutcome ListAttachedUserPolicies(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedUserPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedUserPoliciesOutcomeCallable ListAttachedUserPoliciesCallable(const Model::ListAttachedUserPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAttachedUserPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedUserPoliciesAsync(const Model::ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all IAM users, groups, and roles that the specified managed policy is
         * attached to.</p> <p>You can use the optional <code>EntityFilter</code> parameter
         * to limit the results to a particular type of entity (users, groups, or roles).
         * For example, to list only the roles that are attached to the specified policy,
         * set <code>EntityFilter</code> to <code>Role</code>.</p> <p>You can paginate the
         * results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesForPolicyOutcome ListEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest& request) const;

        /**
         * A Callable wrapper for ListEntitiesForPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesForPolicyOutcomeCallable ListEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request) const;

        /**
         * An Async wrapper for ListEntitiesForPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * group.</p> <p>An IAM group can also have managed policies attached to it. To
         * list the managed policies that are attached to a group, use
         * <a>ListAttachedGroupPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified group,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupPoliciesOutcome ListGroupPolicies(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupPoliciesOutcomeCallable ListGroupPoliciesCallable(const Model::ListGroupPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListGroupPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupPoliciesAsync(const Model::ListGroupPoliciesRequest& request, const ListGroupPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that have the specified path prefix.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroups">AWS API
         * Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM groups that the specified IAM user belongs to.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListGroupsForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsForUserOutcome ListGroupsForUser(const Model::ListGroupsForUserRequest& request) const;

        /**
         * A Callable wrapper for ListGroupsForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsForUserOutcomeCallable ListGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;

        /**
         * An Async wrapper for ListGroupsForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified IAM instance profile. The
         * returned list of tags is sorted by tag key. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfileTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfileTagsOutcome ListInstanceProfileTags(const Model::ListInstanceProfileTagsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceProfileTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfileTagsOutcomeCallable ListInstanceProfileTagsCallable(const Model::ListInstanceProfileTagsRequest& request) const;

        /**
         * An Async wrapper for ListInstanceProfileTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfileTagsAsync(const Model::ListInstanceProfileTagsRequest& request, const ListInstanceProfileTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified path prefix. If there are
         * none, the operation returns an empty list. For more information about instance
         * profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a>.</p>  <p>IAM resource-listing operations return a
         * subset of the available attributes for the resource. For example, this operation
         * does not return tags, even though they are an attribute of the returned object.
         * To view all of the information for an instance profile, see
         * <a>GetInstanceProfile</a>.</p>  <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * An Async wrapper for ListInstanceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance profiles that have the specified associated IAM role. If
         * there are none, the operation returns an empty list. For more information about
         * instance profiles, go to <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a>.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListInstanceProfilesForRole">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesForRoleOutcome ListInstanceProfilesForRole(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceProfilesForRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesForRoleOutcomeCallable ListInstanceProfilesForRoleCallable(const Model::ListInstanceProfilesForRoleRequest& request) const;

        /**
         * An Async wrapper for ListInstanceProfilesForRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesForRoleAsync(const Model::ListInstanceProfilesForRoleRequest& request, const ListInstanceProfilesForRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified IAM virtual multi-factor
         * authentication (MFA) device. The returned list of tags is sorted by tag key. For
         * more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListMFADeviceTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMFADeviceTagsOutcome ListMFADeviceTags(const Model::ListMFADeviceTagsRequest& request) const;

        /**
         * A Callable wrapper for ListMFADeviceTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMFADeviceTagsOutcomeCallable ListMFADeviceTagsCallable(const Model::ListMFADeviceTagsRequest& request) const;

        /**
         * An Async wrapper for ListMFADeviceTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMFADeviceTagsAsync(const Model::ListMFADeviceTagsRequest& request, const ListMFADeviceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the MFA devices for an IAM user. If the request includes a IAM user
         * name, then this operation lists all the MFA devices associated with the
         * specified user. If you do not specify a user name, IAM determines the user name
         * implicitly based on the Amazon Web Services access key ID signing the request
         * for this operation.</p> <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListMFADevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMFADevicesOutcome ListMFADevices(const Model::ListMFADevicesRequest& request) const;

        /**
         * A Callable wrapper for ListMFADevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMFADevicesOutcomeCallable ListMFADevicesCallable(const Model::ListMFADevicesRequest& request) const;

        /**
         * An Async wrapper for ListMFADevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMFADevicesAsync(const Model::ListMFADevicesRequest& request, const ListMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified OpenID Connect
         * (OIDC)-compatible identity provider. The returned list of tags is sorted by tag
         * key. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About
         * web identity federation</a>.</p> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProviderTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenIDConnectProviderTagsOutcome ListOpenIDConnectProviderTags(const Model::ListOpenIDConnectProviderTagsRequest& request) const;

        /**
         * A Callable wrapper for ListOpenIDConnectProviderTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpenIDConnectProviderTagsOutcomeCallable ListOpenIDConnectProviderTagsCallable(const Model::ListOpenIDConnectProviderTagsRequest& request) const;

        /**
         * An Async wrapper for ListOpenIDConnectProviderTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpenIDConnectProviderTagsAsync(const Model::ListOpenIDConnectProviderTagsRequest& request, const ListOpenIDConnectProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the IAM OpenID Connect (OIDC) provider resource
         * objects defined in the Amazon Web Services account.</p>  <p>IAM
         * resource-listing operations return a subset of the available attributes for the
         * resource. For example, this operation does not return tags, even though they are
         * an attribute of the returned object. To view all of the information for an OIDC
         * provider, see <a>GetOpenIDConnectProvider</a>.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenIDConnectProvidersOutcome ListOpenIDConnectProviders(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListOpenIDConnectProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOpenIDConnectProvidersOutcomeCallable ListOpenIDConnectProvidersCallable(const Model::ListOpenIDConnectProvidersRequest& request) const;

        /**
         * An Async wrapper for ListOpenIDConnectProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOpenIDConnectProvidersAsync(const Model::ListOpenIDConnectProvidersRequest& request, const ListOpenIDConnectProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the managed policies that are available in your Amazon Web Services
         * account, including your own customer-defined managed policies and all Amazon Web
         * Services managed policies.</p> <p>You can filter the list of policies that is
         * returned using the optional <code>OnlyAttached</code>, <code>Scope</code>, and
         * <code>PathPrefix</code> parameters. For example, to list only the customer
         * managed policies in your Amazon Web Services account, set <code>Scope</code> to
         * <code>Local</code>. To list only Amazon Web Services managed policies, set
         * <code>Scope</code> to <code>AWS</code>.</p> <p>You can paginate the results
         * using the <code>MaxItems</code> and <code>Marker</code> parameters.</p> <p>For
         * more information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p>  <p>IAM
         * resource-listing operations return a subset of the available attributes for the
         * resource. For example, this operation does not return tags, even though they are
         * an attribute of the returned object. To view all of the information for a
         * customer manged policy, see <a>GetPolicy</a>.</p> <p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of policies that the IAM identity (user, group, or role) can
         * use to access each specified service.</p>  <p>This operation does not use
         * other policy types when determining whether a resource could access a service.
         * These other policy types include resource-based policies, access control lists,
         * Organizations policies, IAM permissions boundaries, and STS assume role
         * policies. It only applies permissions policy logic. For more about the
         * evaluation of policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-basics">Evaluating
         * policies</a> in the <i>IAM User Guide</i>.</p>  <p>The list of policies
         * returned by the operation depends on the ARN of the identity that you
         * provide.</p> <ul> <li> <p> <b>User</b> – The list of policies includes the
         * managed and inline policies that are attached to the user directly. The list
         * also includes any additional managed and inline policies that are attached to
         * the group to which the user belongs. </p> </li> <li> <p> <b>Group</b> – The list
         * of policies includes only the managed and inline policies that are attached to
         * the group directly. Policies that are attached to the group’s user are not
         * included.</p> </li> <li> <p> <b>Role</b> – The list of policies includes only
         * the managed and inline policies that are attached to the role.</p> </li> </ul>
         * <p>For each managed policy, this operation returns the ARN and policy name. For
         * each inline policy, it returns the policy name and the entity to which it is
         * attached. Inline policies do not have an ARN. For more information about these
         * policy types, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>Policies
         * that are attached to users and roles as permissions boundaries are not returned.
         * To view which managed policy is currently used to set the permissions boundary
         * for a user or role, use the <a>GetUser</a> or <a>GetRole</a>
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPoliciesGrantingServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesGrantingServiceAccessOutcome ListPoliciesGrantingServiceAccess(const Model::ListPoliciesGrantingServiceAccessRequest& request) const;

        /**
         * A Callable wrapper for ListPoliciesGrantingServiceAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesGrantingServiceAccessOutcomeCallable ListPoliciesGrantingServiceAccessCallable(const Model::ListPoliciesGrantingServiceAccessRequest& request) const;

        /**
         * An Async wrapper for ListPoliciesGrantingServiceAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesGrantingServiceAccessAsync(const Model::ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified IAM customer managed
         * policy. The returned list of tags is sorted by tag key. For more information
         * about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicyTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyTagsOutcome ListPolicyTags(const Model::ListPolicyTagsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyTagsOutcomeCallable ListPolicyTagsCallable(const Model::ListPolicyTagsRequest& request) const;

        /**
         * An Async wrapper for ListPolicyTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyTagsAsync(const Model::ListPolicyTagsRequest& request, const ListPolicyTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the versions of the specified managed policy,
         * including the version that is currently set as the policy's default version.</p>
         * <p>For more information about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * An Async wrapper for ListPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies that are embedded in the specified IAM
         * role.</p> <p>An IAM role can also have managed policies attached to it. To list
         * the managed policies that are attached to a role, use
         * <a>ListAttachedRolePolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified role,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRolePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRolePoliciesOutcome ListRolePolicies(const Model::ListRolePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListRolePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolePoliciesOutcomeCallable ListRolePoliciesCallable(const Model::ListRolePoliciesRequest& request) const;

        /**
         * An Async wrapper for ListRolePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolePoliciesAsync(const Model::ListRolePoliciesRequest& request, const ListRolePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified role. The returned list of
         * tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoleTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoleTagsOutcome ListRoleTags(const Model::ListRoleTagsRequest& request) const;

        /**
         * A Callable wrapper for ListRoleTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoleTagsOutcomeCallable ListRoleTagsCallable(const Model::ListRoleTagsRequest& request) const;

        /**
         * An Async wrapper for ListRoleTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoleTagsAsync(const Model::ListRoleTagsRequest& request, const ListRoleTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM roles that have the specified path prefix. If there are none,
         * the operation returns an empty list. For more information about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with roles</a>.</p>  <p>IAM resource-listing operations return a subset of
         * the available attributes for the resource. For example, this operation does not
         * return tags, even though they are an attribute of the returned object. To view
         * all of the information for a role, see <a>GetRole</a>.</p>  <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListRoles">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRolesOutcome ListRoles(const Model::ListRolesRequest& request) const;

        /**
         * A Callable wrapper for ListRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRolesOutcomeCallable ListRolesCallable(const Model::ListRolesRequest& request) const;

        /**
         * An Async wrapper for ListRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRolesAsync(const Model::ListRolesRequest& request, const ListRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified Security Assertion Markup
         * Language (SAML) identity provider. The returned list of tags is sorted by tag
         * key. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based federation</a>.</p> <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProviderTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSAMLProviderTagsOutcome ListSAMLProviderTags(const Model::ListSAMLProviderTagsRequest& request) const;

        /**
         * A Callable wrapper for ListSAMLProviderTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSAMLProviderTagsOutcomeCallable ListSAMLProviderTagsCallable(const Model::ListSAMLProviderTagsRequest& request) const;

        /**
         * An Async wrapper for ListSAMLProviderTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSAMLProviderTagsAsync(const Model::ListSAMLProviderTagsRequest& request, const ListSAMLProviderTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SAML provider resource objects defined in IAM in the account. IAM
         * resource-listing operations return a subset of the available attributes for the
         * resource. For example, this operation does not return tags, even though they are
         * an attribute of the returned object. To view all of the information for a SAML
         * provider, see <a>GetSAMLProvider</a>.</p>  <p> This operation
         * requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSAMLProvidersOutcome ListSAMLProviders(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListSAMLProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSAMLProvidersOutcomeCallable ListSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request) const;

        /**
         * An Async wrapper for ListSAMLProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the SSH public keys associated with the specified
         * IAM user. If none exists, the operation returns an empty list.</p> <p>The SSH
         * public keys returned by this operation are used only for authenticating the IAM
         * user to an CodeCommit repository. For more information about using SSH keys to
         * authenticate to an CodeCommit repository, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up CodeCommit for SSH connections</a> in the <i>CodeCommit User Guide</i>.</p>
         * <p>Although each user is limited to a small number of keys, you can still
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSSHPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSSHPublicKeysOutcome ListSSHPublicKeys(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * A Callable wrapper for ListSSHPublicKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSSHPublicKeysOutcomeCallable ListSSHPublicKeysCallable(const Model::ListSSHPublicKeysRequest& request) const;

        /**
         * An Async wrapper for ListSSHPublicKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSSHPublicKeysAsync(const Model::ListSSHPublicKeysRequest& request, const ListSSHPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified IAM server certificate. The
         * returned list of tags is sorted by tag key. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p>  <p>For certificates in a
         * Region supported by Certificate Manager (ACM), we recommend that you don't use
         * IAM server certificates. Instead, use ACM to provision, manage, and deploy your
         * server certificates. For more information about IAM server certificates, <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServerCertificateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServerCertificateTagsOutcome ListServerCertificateTags(const Model::ListServerCertificateTagsRequest& request) const;

        /**
         * A Callable wrapper for ListServerCertificateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerCertificateTagsOutcomeCallable ListServerCertificateTagsCallable(const Model::ListServerCertificateTagsRequest& request) const;

        /**
         * An Async wrapper for ListServerCertificateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerCertificateTagsAsync(const Model::ListServerCertificateTagsRequest& request, const ListServerCertificateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the server certificates stored in IAM that have the specified path
         * prefix. If none exist, the operation returns an empty list.</p> <p> You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p> <p>For more information about working with server certificates,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of Amazon Web Services services that can use the server
         * certificates that you manage with IAM.</p>  <p>IAM resource-listing
         * operations return a subset of the available attributes for the resource. For
         * example, this operation does not return tags, even though they are an attribute
         * of the returned object. To view all of the information for a servercertificate,
         * see <a>GetServerCertificate</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServerCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServerCertificatesOutcome ListServerCertificates(const Model::ListServerCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListServerCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerCertificatesOutcomeCallable ListServerCertificatesCallable(const Model::ListServerCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListServerCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerCertificatesAsync(const Model::ListServerCertificatesRequest& request, const ListServerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the service-specific credentials associated with
         * the specified IAM user. If none exists, the operation returns an empty list. The
         * service-specific credentials returned by this operation are used only for
         * authenticating the IAM user to a specific service. For more information about
         * using service-specific credentials to authenticate to an Amazon Web Services
         * service, see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-gc.html">Set
         * up service-specific credentials</a> in the CodeCommit User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListServiceSpecificCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceSpecificCredentialsOutcome ListServiceSpecificCredentials(const Model::ListServiceSpecificCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceSpecificCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceSpecificCredentialsOutcomeCallable ListServiceSpecificCredentialsCallable(const Model::ListServiceSpecificCredentialsRequest& request) const;

        /**
         * An Async wrapper for ListServiceSpecificCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceSpecificCredentialsAsync(const Model::ListServiceSpecificCredentialsRequest& request, const ListServiceSpecificCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the signing certificates associated with the
         * specified IAM user. If none exists, the operation returns an empty list.</p>
         * <p>Although each user is limited to a small number of signing certificates, you
         * can still paginate the results using the <code>MaxItems</code> and
         * <code>Marker</code> parameters.</p> <p>If the <code>UserName</code> field is not
         * specified, the user name is determined implicitly based on the Amazon Web
         * Services access key ID used to sign the request for this operation. This
         * operation works for access keys under the Amazon Web Services account.
         * Consequently, you can use this operation to manage Amazon Web Services account
         * root user credentials even if the Amazon Web Services account has no associated
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSigningCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningCertificatesOutcome ListSigningCertificates(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListSigningCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningCertificatesOutcomeCallable ListSigningCertificatesCallable(const Model::ListSigningCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListSigningCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningCertificatesAsync(const Model::ListSigningCertificatesRequest& request, const ListSigningCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names of the inline policies embedded in the specified IAM
         * user.</p> <p>An IAM user can also have managed policies attached to it. To list
         * the managed policies that are attached to a user, use
         * <a>ListAttachedUserPolicies</a>. For more information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters. If there are no inline policies embedded with the specified user,
         * the operation returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserPoliciesOutcome ListUserPolicies(const Model::ListUserPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListUserPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserPoliciesOutcomeCallable ListUserPoliciesCallable(const Model::ListUserPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListUserPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserPoliciesAsync(const Model::ListUserPoliciesRequest& request, const ListUserPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified IAM user. The returned list
         * of tags is sorted by tag key. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUserTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserTagsOutcome ListUserTags(const Model::ListUserTagsRequest& request) const;

        /**
         * A Callable wrapper for ListUserTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserTagsOutcomeCallable ListUserTagsCallable(const Model::ListUserTagsRequest& request) const;

        /**
         * An Async wrapper for ListUserTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserTagsAsync(const Model::ListUserTagsRequest& request, const ListUserTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM users that have the specified path prefix. If no path prefix is
         * specified, the operation returns all users in the Amazon Web Services account.
         * If there are none, the operation returns an empty list.</p>  <p>IAM
         * resource-listing operations return a subset of the available attributes for the
         * resource. For example, this operation does not return tags, even though they are
         * an attribute of the returned object. To view all of the information for a user,
         * see <a>GetUser</a>.</p>  <p>You can paginate the results using the
         * <code>MaxItems</code> and <code>Marker</code> parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the virtual MFA devices defined in the Amazon Web Services account by
         * assignment status. If you do not specify an assignment status, the operation
         * returns a list of all virtual MFA devices. Assignment status can be
         * <code>Assigned</code>, <code>Unassigned</code>, or <code>Any</code>.</p> 
         * <p>IAM resource-listing operations return a subset of the available attributes
         * for the resource. For example, this operation does not return tags, even though
         * they are an attribute of the returned object. To view tag information for a
         * virtual MFA device, see <a>ListMFADeviceTags</a>.</p>  <p>You can
         * paginate the results using the <code>MaxItems</code> and <code>Marker</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListVirtualMFADevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualMFADevicesOutcome ListVirtualMFADevices(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualMFADevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualMFADevicesOutcomeCallable ListVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;

        /**
         * An Async wrapper for ListVirtualMFADevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualMFADevicesAsync(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM group.</p> <p>A user can also have managed policies attached to it. To
         * attach a managed policy to a group, use <a>AttachGroupPolicy</a>. To create a
         * new managed policy, use <a>CreatePolicy</a>. For information about policies, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the maximum number of inline policies that you can embed in a
         * group, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutGroupPolicy</code>. For general information about using the Query API
         * with IAM, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * query requests</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGroupPolicyOutcome PutGroupPolicy(const Model::PutGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutGroupPolicyOutcomeCallable PutGroupPolicyCallable(const Model::PutGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for PutGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGroupPolicyAsync(const Model::PutGroupPolicyRequest& request, const PutGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM role's permissions
         * boundary. You can use an Amazon Web Services managed policy or a customer
         * managed policy to set the boundary for a role. Use the boundary to control the
         * maximum permissions that the role can have. Setting a permissions boundary is an
         * advanced feature that can affect the permissions for the role.</p> <p>You cannot
         * set the boundary for a service-linked role. </p>  <p>Policies used as
         * permissions boundaries do not provide permissions. You must also attach a
         * permissions policy to the role. To learn how the effective permissions for a
         * role are evaluated, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON policy evaluation logic</a> in the IAM User Guide. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRolePermissionsBoundaryOutcome PutRolePermissionsBoundary(const Model::PutRolePermissionsBoundaryRequest& request) const;

        /**
         * A Callable wrapper for PutRolePermissionsBoundary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRolePermissionsBoundaryOutcomeCallable PutRolePermissionsBoundaryCallable(const Model::PutRolePermissionsBoundaryRequest& request) const;

        /**
         * An Async wrapper for PutRolePermissionsBoundary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRolePermissionsBoundaryAsync(const Model::PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM role.</p> <p>When you embed an inline policy in a role, the inline policy is
         * used as part of the role's access (permissions) policy. The role's trust policy
         * is created at the same time as the role, using <a>CreateRole</a>. You can update
         * a role's trust policy using <a>UpdateAssumeRolePolicy</a>. For more information
         * about IAM roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * roles to delegate permissions and federate identities</a>.</p> <p>A role can
         * also have a managed policy attached to it. To attach a managed policy to a role,
         * use <a>AttachRolePolicy</a>. To create a new managed policy, use
         * <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the maximum number of inline policies that you can embed with
         * a role, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutRolePolicy</code>. For general information about using the Query API
         * with IAM, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * query requests</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRolePolicyOutcome PutRolePolicy(const Model::PutRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRolePolicyOutcomeCallable PutRolePolicyCallable(const Model::PutRolePolicyRequest& request) const;

        /**
         * An Async wrapper for PutRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRolePolicyAsync(const Model::PutRolePolicyRequest& request, const PutRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the policy that is specified as the IAM user's permissions
         * boundary. You can use an Amazon Web Services managed policy or a customer
         * managed policy to set the boundary for a user. Use the boundary to control the
         * maximum permissions that the user can have. Setting a permissions boundary is an
         * advanced feature that can affect the permissions for the user.</p> 
         * <p>Policies that are used as permissions boundaries do not provide permissions.
         * You must also attach a permissions policy to the user. To learn how the
         * effective permissions for a user are evaluated, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
         * JSON policy evaluation logic</a> in the IAM User Guide. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPermissionsBoundary">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserPermissionsBoundaryOutcome PutUserPermissionsBoundary(const Model::PutUserPermissionsBoundaryRequest& request) const;

        /**
         * A Callable wrapper for PutUserPermissionsBoundary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserPermissionsBoundaryOutcomeCallable PutUserPermissionsBoundaryCallable(const Model::PutUserPermissionsBoundaryRequest& request) const;

        /**
         * An Async wrapper for PutUserPermissionsBoundary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserPermissionsBoundaryAsync(const Model::PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an inline policy document that is embedded in the specified
         * IAM user.</p> <p>An IAM user can also have a managed policy attached to it. To
         * attach a managed policy to a user, use <a>AttachUserPolicy</a>. To create a new
         * managed policy, use <a>CreatePolicy</a>. For information about policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p> <p>For
         * information about the maximum number of inline policies that you can embed in a
         * user, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>Because policy
         * documents can be large, you should use POST rather than GET when calling
         * <code>PutUserPolicy</code>. For general information about using the Query API
         * with IAM, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * query requests</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PutUserPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserPolicyOutcome PutUserPolicy(const Model::PutUserPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutUserPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUserPolicyOutcomeCallable PutUserPolicyCallable(const Model::PutUserPolicyRequest& request) const;

        /**
         * An Async wrapper for PutUserPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUserPolicyAsync(const Model::PutUserPolicyRequest& request, const PutUserPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified client ID (also known as audience) from the list of
         * client IDs registered for the specified IAM OpenID Connect (OIDC) provider
         * resource object.</p> <p>This operation is idempotent; it does not fail or return
         * an error if you try to remove a client ID that does not exist.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveClientIDFromOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcome RemoveClientIDFromOpenIDConnectProvider(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for RemoveClientIDFromOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveClientIDFromOpenIDConnectProviderOutcomeCallable RemoveClientIDFromOpenIDConnectProviderCallable(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for RemoveClientIDFromOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveClientIDFromOpenIDConnectProviderAsync(const Model::RemoveClientIDFromOpenIDConnectProviderRequest& request, const RemoveClientIDFromOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified IAM role from the specified EC2 instance profile.</p>
         *  <p>Make sure that you do not have any Amazon EC2 instances running
         * with the role you are about to remove from the instance profile. Removing a role
         * from an instance profile that is associated with a running instance might break
         * any applications running on the instance.</p>  <p> For more
         * information about IAM roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/WorkingWithRoles.html">Working
         * with roles</a>. For more information about instance profiles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/AboutInstanceProfiles.html">About
         * instance profiles</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveRoleFromInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcome RemoveRoleFromInstanceProfile(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveRoleFromInstanceProfileOutcomeCallable RemoveRoleFromInstanceProfileCallable(const Model::RemoveRoleFromInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for RemoveRoleFromInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveRoleFromInstanceProfileAsync(const Model::RemoveRoleFromInstanceProfileRequest& request, const RemoveRoleFromInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified user from the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RemoveUserFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveUserFromGroupOutcome RemoveUserFromGroup(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * A Callable wrapper for RemoveUserFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveUserFromGroupOutcomeCallable RemoveUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;

        /**
         * An Async wrapper for RemoveUserFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the password for a service-specific credential. The new password is
         * Amazon Web Services generated and cryptographically strong. It cannot be
         * configured by the user. Resetting the password immediately invalidates the
         * previous password associated with this user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResetServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetServiceSpecificCredentialOutcome ResetServiceSpecificCredential(const Model::ResetServiceSpecificCredentialRequest& request) const;

        /**
         * A Callable wrapper for ResetServiceSpecificCredential that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetServiceSpecificCredentialOutcomeCallable ResetServiceSpecificCredentialCallable(const Model::ResetServiceSpecificCredentialRequest& request) const;

        /**
         * An Async wrapper for ResetServiceSpecificCredential that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetServiceSpecificCredentialAsync(const Model::ResetServiceSpecificCredentialRequest& request, const ResetServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Synchronizes the specified MFA device with its IAM resource object on the
         * Amazon Web Services servers.</p> <p>For more information about creating and
         * working with virtual MFA devices, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_VirtualMFA.html">Using
         * a virtual MFA device</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ResyncMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ResyncMFADeviceOutcome ResyncMFADevice(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for ResyncMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResyncMFADeviceOutcomeCallable ResyncMFADeviceCallable(const Model::ResyncMFADeviceRequest& request) const;

        /**
         * An Async wrapper for ResyncMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResyncMFADeviceAsync(const Model::ResyncMFADeviceRequest& request, const ResyncMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version.</p> <p>This operation affects all users, groups, and roles
         * that the policy is attached to. To list the users, groups, and roles that the
         * policy is attached to, use <a>ListEntitiesForPolicy</a>.</p> <p>For information
         * about managed policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
         * policies and inline policies</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for SetDefaultPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the global endpoint token as the token version
         * used for the Amazon Web Services account.</p> <p>By default, Security Token
         * Service (STS) is available as a global service, and all STS requests go to a
         * single endpoint at <code>https://sts.amazonaws.com</code>. Amazon Web Services
         * recommends using Regional STS endpoints to reduce latency, build in redundancy,
         * and increase session token availability. For information about Regional
         * endpoints for STS, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/sts.html">Security Token
         * Service endpoints and quotas</a> in the <i>Amazon Web Services General
         * Reference</i>.</p> <p>If you make an STS call to the global endpoint, the
         * resulting session tokens might be valid in some Regions but not others. It
         * depends on the version that is set in this operation. Version 1 tokens are valid
         * only in Amazon Web Services Regions that are available by default. These tokens
         * do not work in manually enabled Regions, such as Asia Pacific (Hong Kong).
         * Version 2 tokens are valid in all Regions. However, version 2 tokens are longer
         * and might affect systems where you temporarily store tokens. For information,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and deactivating STS in an Amazon Web Services Region</a> in the <i>IAM User
         * Guide</i>.</p> <p>To view the current session token version, see the
         * <code>GlobalEndpointTokenVersion</code> entry in the response of the
         * <a>GetAccountSummary</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SetSecurityTokenServicePreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSecurityTokenServicePreferencesOutcome SetSecurityTokenServicePreferences(const Model::SetSecurityTokenServicePreferencesRequest& request) const;

        /**
         * A Callable wrapper for SetSecurityTokenServicePreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSecurityTokenServicePreferencesOutcomeCallable SetSecurityTokenServicePreferencesCallable(const Model::SetSecurityTokenServicePreferencesRequest& request) const;

        /**
         * An Async wrapper for SetSecurityTokenServicePreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSecurityTokenServicePreferencesAsync(const Model::SetSecurityTokenServicePreferencesRequest& request, const SetSecurityTokenServicePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies and optionally a resource-based policy
         * works with a list of API operations and Amazon Web Services resources to
         * determine the policies' effective permissions. The policies are provided as
         * strings.</p> <p>The simulation does not perform the API operations; it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the operations. You can simulate resources that don't exist in your account.</p>
         * <p>If you want to simulate existing policies that are attached to an IAM user,
         * group, or role, use <a>SimulatePrincipalPolicy</a> instead.</p> <p>Context keys
         * are variables that are maintained by Amazon Web Services and its services and
         * which provide details about the context of an API query request. You can use the
         * <code>Condition</code> element of an IAM policy to evaluate context keys. To get
         * the list of context keys that the policies require for correct simulation, use
         * <a>GetContextKeysForCustomPolicy</a>.</p> <p>If the output is long, you can use
         * <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p> <p>For more information about using the policy simulator, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_testing-policies.html">Testing
         * IAM policies with the IAM policy simulator </a>in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulateCustomPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SimulateCustomPolicyOutcome SimulateCustomPolicy(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * A Callable wrapper for SimulateCustomPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulateCustomPolicyOutcomeCallable SimulateCustomPolicyCallable(const Model::SimulateCustomPolicyRequest& request) const;

        /**
         * An Async wrapper for SimulateCustomPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulateCustomPolicyAsync(const Model::SimulateCustomPolicyRequest& request, const SimulateCustomPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Simulate how a set of IAM policies attached to an IAM entity works with a
         * list of API operations and Amazon Web Services resources to determine the
         * policies' effective permissions. The entity can be an IAM user, group, or role.
         * If you specify a user, then the simulation also includes all of the policies
         * that are attached to groups that the user belongs to. You can simulate resources
         * that don't exist in your account.</p> <p>You can optionally include a list of
         * one or more additional policies specified as strings to include in the
         * simulation. If you want to simulate only policies specified as strings, use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>You can also optionally include one
         * resource-based policy to be evaluated with each of the resources included in the
         * simulation.</p> <p>The simulation does not perform the API operations; it only
         * checks the authorization to determine if the simulated policies allow or deny
         * the operations.</p> <p> <b>Note:</b> This operation discloses information about
         * the permissions granted to other users. If you do not want users to see other
         * user's permissions, then consider allowing them to use
         * <a>SimulateCustomPolicy</a> instead.</p> <p>Context keys are variables
         * maintained by Amazon Web Services and its services that provide details about
         * the context of an API query request. You can use the <code>Condition</code>
         * element of an IAM policy to evaluate context keys. To get the list of context
         * keys that the policies require for correct simulation, use
         * <a>GetContextKeysForPrincipalPolicy</a>.</p> <p>If the output is long, you can
         * use the <code>MaxItems</code> and <code>Marker</code> parameters to paginate the
         * results.</p> <p>For more information about using the policy simulator, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_testing-policies.html">Testing
         * IAM policies with the IAM policy simulator </a>in the <i>IAM User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SimulatePrincipalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SimulatePrincipalPolicyOutcome SimulatePrincipalPolicy(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * A Callable wrapper for SimulatePrincipalPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SimulatePrincipalPolicyOutcomeCallable SimulatePrincipalPolicyCallable(const Model::SimulatePrincipalPolicyRequest& request) const;

        /**
         * An Async wrapper for SimulatePrincipalPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SimulatePrincipalPolicyAsync(const Model::SimulatePrincipalPolicyRequest& request, const SimulatePrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM instance profile. If a tag with the same key
         * name already exists, then that tag is overwritten with the new value.</p>
         * <p>Each tag consists of a key name and an associated value. By assigning tags to
         * your resources, you can do the following:</p> <ul> <li> <p> <b>Administrative
         * grouping and discovery</b> - Attach tags to resources to aid in organization and
         * search. For example, you could search for all resources with the key name
         * <i>Project</i> and the value <i>MyImportantProject</i>. Or search for all
         * resources with the key name <i>Cost Center</i> and the value <i>41200</i>. </p>
         * </li> <li> <p> <b>Access control</b> - Include tags in IAM user-based and
         * resource-based policies. You can use tags to restrict access to only an IAM
         * instance profile that has a specified tag attached. For examples of policies
         * that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> </ul> 
         * <ul> <li> <p>If any one of the tags is invalid or if you exceed the allowed
         * maximum number of tags, then the entire request fails and the resource is not
         * created. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::TagInstanceProfileOutcome TagInstanceProfile(const Model::TagInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for TagInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagInstanceProfileOutcomeCallable TagInstanceProfileCallable(const Model::TagInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for TagInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagInstanceProfileAsync(const Model::TagInstanceProfileRequest& request, const TagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM virtual multi-factor authentication (MFA)
         * device. If a tag with the same key name already exists, then that tag is
         * overwritten with the new value.</p> <p>A tag consists of a key name and an
         * associated value. By assigning tags to your resources, you can do the
         * following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Include tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an IAM virtual MFA device that has a specified tag
         * attached. For examples of policies that show how to use tags to control access,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> </ul> 
         * <ul> <li> <p>If any one of the tags is invalid or if you exceed the allowed
         * maximum number of tags, then the entire request fails and the resource is not
         * created. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TagMFADeviceOutcome TagMFADevice(const Model::TagMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for TagMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagMFADeviceOutcomeCallable TagMFADeviceCallable(const Model::TagMFADeviceRequest& request) const;

        /**
         * An Async wrapper for TagMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagMFADeviceAsync(const Model::TagMFADeviceRequest& request, const TagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an OpenID Connect (OIDC)-compatible identity
         * provider. For more information about these providers, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About
         * web identity federation</a>. If a tag with the same key name already exists,
         * then that tag is overwritten with the new value.</p> <p>A tag consists of a key
         * name and an associated value. By assigning tags to your resources, you can do
         * the following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Include tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an OIDC provider that has a specified tag attached.
         * For examples of policies that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> </ul> 
         * <ul> <li> <p>If any one of the tags is invalid or if you exceed the allowed
         * maximum number of tags, then the entire request fails and the resource is not
         * created. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::TagOpenIDConnectProviderOutcome TagOpenIDConnectProvider(const Model::TagOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for TagOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagOpenIDConnectProviderOutcomeCallable TagOpenIDConnectProviderCallable(const Model::TagOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for TagOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagOpenIDConnectProviderAsync(const Model::TagOpenIDConnectProviderRequest& request, const TagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM customer managed policy. If a tag with the
         * same key name already exists, then that tag is overwritten with the new
         * value.</p> <p>A tag consists of a key name and an associated value. By assigning
         * tags to your resources, you can do the following:</p> <ul> <li> <p>
         * <b>Administrative grouping and discovery</b> - Attach tags to resources to aid
         * in organization and search. For example, you could search for all resources with
         * the key name <i>Project</i> and the value <i>MyImportantProject</i>. Or search
         * for all resources with the key name <i>Cost Center</i> and the value
         * <i>41200</i>. </p> </li> <li> <p> <b>Access control</b> - Include tags in IAM
         * user-based and resource-based policies. You can use tags to restrict access to
         * only an IAM customer managed policy that has a specified tag attached. For
         * examples of policies that show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> </ul> 
         * <ul> <li> <p>If any one of the tags is invalid or if you exceed the allowed
         * maximum number of tags, then the entire request fails and the resource is not
         * created. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::TagPolicyOutcome TagPolicy(const Model::TagPolicyRequest& request) const;

        /**
         * A Callable wrapper for TagPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagPolicyOutcomeCallable TagPolicyCallable(const Model::TagPolicyRequest& request) const;

        /**
         * An Async wrapper for TagPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagPolicyAsync(const Model::TagPolicyRequest& request, const TagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM role. The role can be a regular role or a
         * service-linked role. If a tag with the same key name already exists, then that
         * tag is overwritten with the new value.</p> <p>A tag consists of a key name and
         * an associated value. By assigning tags to your resources, you can do the
         * following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Include tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only an IAM role that has a specified tag attached. You
         * can also restrict access to only those resources that have a certain tag
         * attached. For examples of policies that show how to use tags to control access,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which Amazon Web Services resources.</p> </li> </ul>  <ul> <li>
         * <p>If any one of the tags is invalid or if you exceed the allowed maximum number
         * of tags, then the entire request fails and the resource is not created. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul> 
         * <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagRole">AWS API
         * Reference</a></p>
         */
        virtual Model::TagRoleOutcome TagRole(const Model::TagRoleRequest& request) const;

        /**
         * A Callable wrapper for TagRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagRoleOutcomeCallable TagRoleCallable(const Model::TagRoleRequest& request) const;

        /**
         * An Async wrapper for TagRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagRoleAsync(const Model::TagRoleRequest& request, const TagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a Security Assertion Markup Language (SAML) identity
         * provider. For more information about these providers, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About
         * SAML 2.0-based federation </a>. If a tag with the same key name already exists,
         * then that tag is overwritten with the new value.</p> <p>A tag consists of a key
         * name and an associated value. By assigning tags to your resources, you can do
         * the following:</p> <ul> <li> <p> <b>Administrative grouping and discovery</b> -
         * Attach tags to resources to aid in organization and search. For example, you
         * could search for all resources with the key name <i>Project</i> and the value
         * <i>MyImportantProject</i>. Or search for all resources with the key name <i>Cost
         * Center</i> and the value <i>41200</i>. </p> </li> <li> <p> <b>Access control</b>
         * - Include tags in IAM user-based and resource-based policies. You can use tags
         * to restrict access to only a SAML identity provider that has a specified tag
         * attached. For examples of policies that show how to use tags to control access,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> </ul> 
         * <ul> <li> <p>If any one of the tags is invalid or if you exceed the allowed
         * maximum number of tags, then the entire request fails and the resource is not
         * created. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::TagSAMLProviderOutcome TagSAMLProvider(const Model::TagSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for TagSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagSAMLProviderOutcomeCallable TagSAMLProviderCallable(const Model::TagSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for TagSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagSAMLProviderAsync(const Model::TagSAMLProviderRequest& request, const TagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM server certificate. If a tag with the same
         * key name already exists, then that tag is overwritten with the new value.</p>
         *  <p>For certificates in a Region supported by Certificate Manager (ACM),
         * we recommend that you don't use IAM server certificates. Instead, use ACM to
         * provision, manage, and deploy your server certificates. For more information
         * about IAM server certificates, <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>.</p>  <p>A tag
         * consists of a key name and an associated value. By assigning tags to your
         * resources, you can do the following:</p> <ul> <li> <p> <b>Administrative
         * grouping and discovery</b> - Attach tags to resources to aid in organization and
         * search. For example, you could search for all resources with the key name
         * <i>Project</i> and the value <i>MyImportantProject</i>. Or search for all
         * resources with the key name <i>Cost Center</i> and the value <i>41200</i>. </p>
         * </li> <li> <p> <b>Access control</b> - Include tags in IAM user-based and
         * resource-based policies. You can use tags to restrict access to only a server
         * certificate that has a specified tag attached. For examples of policies that
         * show how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which Amazon Web Services resources.</p> </li> </ul>  <ul> <li>
         * <p>If any one of the tags is invalid or if you exceed the allowed maximum number
         * of tags, then the entire request fails and the resource is not created. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::TagServerCertificateOutcome TagServerCertificate(const Model::TagServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for TagServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagServerCertificateOutcomeCallable TagServerCertificateCallable(const Model::TagServerCertificateRequest& request) const;

        /**
         * An Async wrapper for TagServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagServerCertificateAsync(const Model::TagServerCertificateRequest& request, const TagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an IAM user. If a tag with the same key name already
         * exists, then that tag is overwritten with the new value.</p> <p>A tag consists
         * of a key name and an associated value. By assigning tags to your resources, you
         * can do the following:</p> <ul> <li> <p> <b>Administrative grouping and
         * discovery</b> - Attach tags to resources to aid in organization and search. For
         * example, you could search for all resources with the key name <i>Project</i> and
         * the value <i>MyImportantProject</i>. Or search for all resources with the key
         * name <i>Cost Center</i> and the value <i>41200</i>. </p> </li> <li> <p>
         * <b>Access control</b> - Include tags in IAM user-based and resource-based
         * policies. You can use tags to restrict access to only an IAM requesting user
         * that has a specified tag attached. You can also restrict access to only those
         * resources that have a certain tag attached. For examples of policies that show
         * how to use tags to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Control
         * access using IAM tags</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>
         * <b>Cost allocation</b> - Use tags to help track which individuals and teams are
         * using which Amazon Web Services resources.</p> </li> </ul>  <ul> <li>
         * <p>If any one of the tags is invalid or if you exceed the allowed maximum number
         * of tags, then the entire request fails and the resource is not created. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p> </li> <li> <p>Amazon Web
         * Services always interprets the tag <code>Value</code> as a single string. If you
         * need to store an array, you can store comma-separated values in the string.
         * However, you must interpret the value in your code.</p> </li> </ul> 
         * <p>For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/TagUser">AWS API
         * Reference</a></p>
         */
        virtual Model::TagUserOutcome TagUser(const Model::TagUserRequest& request) const;

        /**
         * A Callable wrapper for TagUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagUserOutcomeCallable TagUserCallable(const Model::TagUserRequest& request) const;

        /**
         * An Async wrapper for TagUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagUserAsync(const Model::TagUserRequest& request, const TagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the IAM instance profile. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagInstanceProfileOutcome UntagInstanceProfile(const Model::UntagInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for UntagInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagInstanceProfileOutcomeCallable UntagInstanceProfileCallable(const Model::UntagInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for UntagInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagInstanceProfileAsync(const Model::UntagInstanceProfileRequest& request, const UntagInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the IAM virtual multi-factor authentication
         * (MFA) device. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagMFADevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagMFADeviceOutcome UntagMFADevice(const Model::UntagMFADeviceRequest& request) const;

        /**
         * A Callable wrapper for UntagMFADevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagMFADeviceOutcomeCallable UntagMFADeviceCallable(const Model::UntagMFADeviceRequest& request) const;

        /**
         * An Async wrapper for UntagMFADevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagMFADeviceAsync(const Model::UntagMFADeviceRequest& request, const UntagMFADeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified OpenID Connect
         * (OIDC)-compatible identity provider in IAM. For more information about OIDC
         * providers, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About
         * web identity federation</a>. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagOpenIDConnectProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagOpenIDConnectProviderOutcome UntagOpenIDConnectProvider(const Model::UntagOpenIDConnectProviderRequest& request) const;

        /**
         * A Callable wrapper for UntagOpenIDConnectProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagOpenIDConnectProviderOutcomeCallable UntagOpenIDConnectProviderCallable(const Model::UntagOpenIDConnectProviderRequest& request) const;

        /**
         * An Async wrapper for UntagOpenIDConnectProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagOpenIDConnectProviderAsync(const Model::UntagOpenIDConnectProviderRequest& request, const UntagOpenIDConnectProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the customer managed policy. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagPolicyOutcome UntagPolicy(const Model::UntagPolicyRequest& request) const;

        /**
         * A Callable wrapper for UntagPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagPolicyOutcomeCallable UntagPolicyCallable(const Model::UntagPolicyRequest& request) const;

        /**
         * An Async wrapper for UntagPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagPolicyAsync(const Model::UntagPolicyRequest& request, const UntagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the role. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagRole">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagRoleOutcome UntagRole(const Model::UntagRoleRequest& request) const;

        /**
         * A Callable wrapper for UntagRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagRoleOutcomeCallable UntagRoleCallable(const Model::UntagRoleRequest& request) const;

        /**
         * An Async wrapper for UntagRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagRoleAsync(const Model::UntagRoleRequest& request, const UntagRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified Security Assertion Markup
         * Language (SAML) identity provider in IAM. For more information about these
         * providers, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc.html">About
         * web identity federation</a>. For more information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagSAMLProviderOutcome UntagSAMLProvider(const Model::UntagSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for UntagSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagSAMLProviderOutcomeCallable UntagSAMLProviderCallable(const Model::UntagSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for UntagSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagSAMLProviderAsync(const Model::UntagSAMLProviderRequest& request, const UntagSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the IAM server certificate. For more
         * information about tagging, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p>  <p>For certificates in a
         * Region supported by Certificate Manager (ACM), we recommend that you don't use
         * IAM server certificates. Instead, use ACM to provision, manage, and deploy your
         * server certificates. For more information about IAM server certificates, <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagServerCertificateOutcome UntagServerCertificate(const Model::UntagServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for UntagServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagServerCertificateOutcomeCallable UntagServerCertificateCallable(const Model::UntagServerCertificateRequest& request) const;

        /**
         * An Async wrapper for UntagServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagServerCertificateAsync(const Model::UntagServerCertificateRequest& request, const UntagServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the user. For more information about tagging,
         * see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
         * resources</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UntagUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagUserOutcome UntagUser(const Model::UntagUserRequest& request) const;

        /**
         * A Callable wrapper for UntagUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagUserOutcomeCallable UntagUserCallable(const Model::UntagUserRequest& request) const;

        /**
         * An Async wrapper for UntagUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagUserAsync(const Model::UntagUserRequest& request, const UntagUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified access key from Active to Inactive, or
         * vice versa. This operation can be used to disable a user's key as part of a key
         * rotation workflow.</p> <p>If the <code>UserName</code> is not specified, the
         * user name is determined implicitly based on the Amazon Web Services access key
         * ID used to sign the request. If a temporary access key is used, then
         * <code>UserName</code> is required. If a long-term key is assigned to the user,
         * then <code>UserName</code> is not required. This operation works for access keys
         * under the Amazon Web Services account. Consequently, you can use this operation
         * to manage Amazon Web Services account root user credentials even if the Amazon
         * Web Services account has no associated users.</p> <p>For information about
         * rotating keys, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/ManagingCredentials.html">Managing
         * keys and certificates</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessKeyOutcome UpdateAccessKey(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccessKeyOutcomeCallable UpdateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;

        /**
         * An Async wrapper for UpdateAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the password policy settings for the Amazon Web Services account.</p>
         *  <p>This operation does not support partial updates. No parameters are
         * required, but if you do not specify a parameter, that parameter's value reverts
         * to its default value. See the <b>Request Parameters</b> section for each
         * parameter's default value. Also note that some parameters do not allow the
         * default parameter to be explicitly set. Instead, to invoke the default value, do
         * not include that parameter when you invoke the operation.</p>  <p> For
         * more information about using a password policy, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingPasswordPolicies.html">Managing
         * an IAM password policy</a> in the <i>IAM User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAccountPasswordPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountPasswordPolicyOutcome UpdateAccountPasswordPolicy(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountPasswordPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountPasswordPolicyOutcomeCallable UpdateAccountPasswordPolicyCallable(const Model::UpdateAccountPasswordPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountPasswordPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountPasswordPolicyAsync(const Model::UpdateAccountPasswordPolicyRequest& request, const UpdateAccountPasswordPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the policy that grants an IAM entity permission to assume a role.
         * This is typically referred to as the "role trust policy". For more information
         * about roles, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">Using
         * roles to delegate permissions and federate identities</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateAssumeRolePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssumeRolePolicyOutcome UpdateAssumeRolePolicy(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssumeRolePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssumeRolePolicyOutcomeCallable UpdateAssumeRolePolicyCallable(const Model::UpdateAssumeRolePolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateAssumeRolePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssumeRolePolicyAsync(const Model::UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM group.</p> 
         * <p> You should understand the implications of changing a group's path or name.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_WorkingWithGroupsAndUsers.html">Renaming
         * users and groups</a> in the <i>IAM User Guide</i>.</p>  
         * <p>The person making the request (the principal), must have permission to change
         * the role group with the old name and the new name. For example, to change the
         * group named <code>Managers</code> to <code>MGRs</code>, the principal must have
         * a policy that allows them to update both groups. If the principal has permission
         * to update the <code>Managers</code> group, but not the <code>MGRs</code> group,
         * then the update fails. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * management</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the password for the specified IAM user. You can use the CLI, the
         * Amazon Web Services API, or the <b>Users</b> page in the IAM console to change
         * the password for any IAM user. Use <a>ChangePassword</a> to change your own
         * password in the <b>My Security Credentials</b> page in the Amazon Web Services
         * Management Console.</p> <p>For more information about modifying passwords, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_ManagingLogins.html">Managing
         * passwords</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateLoginProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoginProfileOutcome UpdateLoginProfile(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoginProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoginProfileOutcomeCallable UpdateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateLoginProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the existing list of server certificate thumbprints associated with
         * an OpenID Connect (OIDC) provider resource object with a new list of
         * thumbprints.</p> <p>The list that you pass with this operation completely
         * replaces the existing list of thumbprints. (The lists are not merged.)</p>
         * <p>Typically, you need to update a thumbprint only when the identity provider
         * certificate changes, which occurs rarely. However, if the provider's certificate
         * <i>does</i> change, any attempt to assume an IAM role that specifies the OIDC
         * provider as a principal fails until the certificate thumbprint is updated.</p>
         *  <p>Amazon Web Services secures communication with some OIDC identity
         * providers (IdPs) through our library of trusted certificate authorities (CAs)
         * instead of using a certificate thumbprint to verify your IdP server certificate.
         * These OIDC IdPs include Google, and those that use an Amazon S3 bucket to host a
         * JSON Web Key Set (JWKS) endpoint. In these cases, your legacy thumbprint remains
         * in your configuration, but is no longer used for validation.</p>  
         * <p>Trust for the OIDC provider is derived from the provider certificate and is
         * validated by the thumbprint. Therefore, it is best to limit access to the
         * <code>UpdateOpenIDConnectProviderThumbprint</code> operation to highly
         * privileged users.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateOpenIDConnectProviderThumbprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcome UpdateOpenIDConnectProviderThumbprint(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * A Callable wrapper for UpdateOpenIDConnectProviderThumbprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOpenIDConnectProviderThumbprintOutcomeCallable UpdateOpenIDConnectProviderThumbprintCallable(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request) const;

        /**
         * An Async wrapper for UpdateOpenIDConnectProviderThumbprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOpenIDConnectProviderThumbprintAsync(const Model::UpdateOpenIDConnectProviderThumbprintRequest& request, const UpdateOpenIDConnectProviderThumbprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description or maximum session duration setting of a
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRole">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRoleOutcome UpdateRole(const Model::UpdateRoleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleOutcomeCallable UpdateRoleCallable(const Model::UpdateRoleRequest& request) const;

        /**
         * An Async wrapper for UpdateRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use <a>UpdateRole</a> instead.</p> <p>Modifies only the description of a
         * role. This operation performs the same function as the <code>Description</code>
         * parameter in the <code>UpdateRole</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateRoleDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoleDescriptionOutcome UpdateRoleDescription(const Model::UpdateRoleDescriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoleDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleDescriptionOutcomeCallable UpdateRoleDescriptionCallable(const Model::UpdateRoleDescriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateRoleDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleDescriptionAsync(const Model::UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the metadata document for an existing SAML provider resource
         * object.</p>  <p>This operation requires <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
         * Version 4</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSAMLProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSAMLProviderOutcome UpdateSAMLProvider(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateSAMLProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSAMLProviderOutcomeCallable UpdateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request) const;

        /**
         * An Async wrapper for UpdateSAMLProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the status of an IAM user's SSH public key to active or inactive. SSH
         * public keys that are inactive cannot be used for authentication. This operation
         * can be used to disable a user's SSH public key as part of a key rotation work
         * flow.</p> <p>The SSH public key affected by this operation is used only for
         * authenticating the associated IAM user to an CodeCommit repository. For more
         * information about using SSH keys to authenticate to an CodeCommit repository,
         * see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up CodeCommit for SSH connections</a> in the <i>CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSSHPublicKeyOutcome UpdateSSHPublicKey(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSSHPublicKeyOutcomeCallable UpdateSSHPublicKeyCallable(const Model::UpdateSSHPublicKeyRequest& request) const;

        /**
         * An Async wrapper for UpdateSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSSHPublicKeyAsync(const Model::UpdateSSHPublicKeyRequest& request, const UpdateSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified server certificate stored
         * in IAM.</p> <p>For more information about working with server certificates, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>. This topic also
         * includes a list of Amazon Web Services services that can use the server
         * certificates that you manage with IAM.</p>  <p>You should understand
         * the implications of changing a server certificate's path or name. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs_manage.html#RenamingServerCerts">Renaming
         * a server certificate</a> in the <i>IAM User Guide</i>.</p>  
         * <p>The person making the request (the principal), must have permission to change
         * the server certificate with the old name and the new name. For example, to
         * change the certificate named <code>ProductionCert</code> to
         * <code>ProdCert</code>, the principal must have a policy that allows them to
         * update both certificates. If the principal has permission to update the
         * <code>ProductionCert</code> group, but not the <code>ProdCert</code>
         * certificate, then the update fails. For more information about permissions, see
         * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
         * management</a> in the <i>IAM User Guide</i>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerCertificateOutcome UpdateServerCertificate(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServerCertificateOutcomeCallable UpdateServerCertificateCallable(const Model::UpdateServerCertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServerCertificateAsync(const Model::UpdateServerCertificateRequest& request, const UpdateServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the status of a service-specific credential to <code>Active</code> or
         * <code>Inactive</code>. Service-specific credentials that are inactive cannot be
         * used for authentication to the service. This operation can be used to disable a
         * user's service-specific credential as part of a credential rotation work
         * flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateServiceSpecificCredential">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSpecificCredentialOutcome UpdateServiceSpecificCredential(const Model::UpdateServiceSpecificCredentialRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceSpecificCredential that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSpecificCredentialOutcomeCallable UpdateServiceSpecificCredentialCallable(const Model::UpdateServiceSpecificCredentialRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceSpecificCredential that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSpecificCredentialAsync(const Model::UpdateServiceSpecificCredentialRequest& request, const UpdateServiceSpecificCredentialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the specified user signing certificate from active to
         * disabled, or vice versa. This operation can be used to disable an IAM user's
         * signing certificate as part of a certificate rotation work flow.</p> <p>If the
         * <code>UserName</code> field is not specified, the user name is determined
         * implicitly based on the Amazon Web Services access key ID used to sign the
         * request. This operation works for access keys under the Amazon Web Services
         * account. Consequently, you can use this operation to manage Amazon Web Services
         * account root user credentials even if the Amazon Web Services account has no
         * associated users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSigningCertificateOutcome UpdateSigningCertificate(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateSigningCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSigningCertificateOutcomeCallable UpdateSigningCertificateCallable(const Model::UpdateSigningCertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateSigningCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSigningCertificateAsync(const Model::UpdateSigningCertificateRequest& request, const UpdateSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name and/or the path of the specified IAM user.</p> 
         * <p> You should understand the implications of changing an IAM user's path or
         * name. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_users_manage.html#id_users_renaming">Renaming
         * an IAM user</a> and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_rename.html">Renaming
         * an IAM group</a> in the <i>IAM User Guide</i>.</p>   <p> To
         * change a user name, the requester must have appropriate permissions on both the
         * source object and the target object. For example, to change Bob to Robert, the
         * entity making the request must have permission on Bob and Robert, or must have
         * permission on all (*). For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/PermissionsAndPolicies.html">Permissions
         * and policies</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UpdateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an SSH public key and associates it with the specified IAM user.</p>
         * <p>The SSH public key uploaded by this operation can be used only for
         * authenticating the associated IAM user to an CodeCommit repository. For more
         * information about using SSH keys to authenticate to an CodeCommit repository,
         * see <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/setting-up-credentials-ssh.html">Set
         * up CodeCommit for SSH connections</a> in the <i>CodeCommit User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadSSHPublicKeyOutcome UploadSSHPublicKey(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for UploadSSHPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSSHPublicKeyOutcomeCallable UploadSSHPublicKeyCallable(const Model::UploadSSHPublicKeyRequest& request) const;

        /**
         * An Async wrapper for UploadSSHPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSSHPublicKeyAsync(const Model::UploadSSHPublicKeyRequest& request, const UploadSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a server certificate entity for the Amazon Web Services account. The
         * server certificate entity includes a public key certificate, a private key, and
         * an optional certificate chain, which should all be PEM-encoded.</p> <p>We
         * recommend that you use <a href="https://docs.aws.amazon.com/acm/">Certificate
         * Manager</a> to provision, manage, and deploy your server certificates. With ACM
         * you can request a certificate, deploy it to Amazon Web Services resources, and
         * let ACM handle certificate renewals for you. Certificates provided by ACM are
         * free. For more information about using ACM, see the <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/">Certificate Manager
         * User Guide</a>.</p> <p>For more information about working with server
         * certificates, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Working
         * with server certificates</a> in the <i>IAM User Guide</i>. This topic includes a
         * list of Amazon Web Services services that can use the server certificates that
         * you manage with IAM.</p> <p>For information about the number of server
         * certificates you can upload, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
         * and STS quotas</a> in the <i>IAM User Guide</i>.</p>  <p>Because the body
         * of the public key certificate, private key, and the certificate chain can be
         * large, you should use POST rather than GET when calling
         * <code>UploadServerCertificate</code>. For information about setting up
         * signatures and authorization through the API, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * Amazon Web Services API requests</a> in the <i>Amazon Web Services General
         * Reference</i>. For general information about using the Query API with IAM, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/programming.html">Calling
         * the API by making HTTP query requests</a> in the <i>IAM User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadServerCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadServerCertificateOutcome UploadServerCertificate(const Model::UploadServerCertificateRequest& request) const;

        /**
         * A Callable wrapper for UploadServerCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadServerCertificateOutcomeCallable UploadServerCertificateCallable(const Model::UploadServerCertificateRequest& request) const;

        /**
         * An Async wrapper for UploadServerCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadServerCertificateAsync(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an X.509 signing certificate and associates it with the specified IAM
         * user. Some Amazon Web Services services require you to use certificates to
         * validate requests that are signed with a corresponding private key. When you
         * upload the certificate, its default status is <code>Active</code>.</p> <p>For
         * information about when you would use an X.509 signing certificate, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_server-certs.html">Managing
         * server certificates in IAM</a> in the <i>IAM User Guide</i>.</p> <p>If the
         * <code>UserName</code> is not specified, the IAM user name is determined
         * implicitly based on the Amazon Web Services access key ID used to sign the
         * request. This operation works for access keys under the Amazon Web Services
         * account. Consequently, you can use this operation to manage Amazon Web Services
         * account root user credentials even if the Amazon Web Services account has no
         * associated users.</p>  <p>Because the body of an X.509 certificate can be
         * large, you should use POST rather than GET when calling
         * <code>UploadSigningCertificate</code>. For information about setting up
         * signatures and authorization through the API, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing
         * Amazon Web Services API requests</a> in the <i>Amazon Web Services General
         * Reference</i>. For general information about using the Query API with IAM, see
         * <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making
         * query requests</a> in the <i>IAM User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSigningCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadSigningCertificateOutcome UploadSigningCertificate(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * A Callable wrapper for UploadSigningCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadSigningCertificateOutcomeCallable UploadSigningCertificateCallable(const Model::UploadSigningCertificateRequest& request) const;

        /**
         * An Async wrapper for UploadSigningCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadSigningCertificateAsync(const Model::UploadSigningCertificateRequest& request, const UploadSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<IAMEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<IAMClient>;
        void init(const IAMClientConfiguration& clientConfiguration);

        IAMClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<IAMEndpointProviderBase> m_endpointProvider;
  };

} // namespace IAM
} // namespace Aws
