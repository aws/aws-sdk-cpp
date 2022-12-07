/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/SSOAdminServiceClientModel.h>

namespace Aws
{
namespace SSOAdmin
{
  /**
   * <p>AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely
   * create, or connect, your workforce identities and manage their access centrally
   * across AWS accounts and applications. IAM Identity Center is the recommended
   * approach for workforce authentication and authorization in AWS, for
   * organizations of any size and type.</p>  <p>Although AWS Single Sign-On
   * was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces
   * will continue to retain their original name for backward compatibility purposes.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM
   * Identity Center rename</a>.</p>  <p>This reference guide provides
   * information on single sign-on operations which could be used for access
   * management of AWS accounts. For information about IAM Identity Center features,
   * see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM
   * Identity Center User Guide</a>.</p> <p>Many operations in the IAM Identity
   * Center APIs rely on identifiers for users and groups, known as principals. For
   * more information about how to work with principals and principal IDs in IAM
   * Identity Center, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity
   * Store API Reference</a>.</p>  <p>AWS provides SDKs that consist of
   * libraries and sample code for various programming languages and platforms (Java,
   * Ruby, .Net, iOS, Android, and more). The SDKs provide a convenient way to create
   * programmatic access to IAM Identity Center and other AWS services. For more
   * information about the AWS SDKs, including how to download and install them, see
   * <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_SSOADMIN_API SSOAdminClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSOAdminClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration(),
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG),
                       const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG),
                       const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSOAdminClient();

        /**
         * <p>Attaches the specified customer managed policy to the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachCustomerManagedPolicyReferenceToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcome AttachCustomerManagedPolicyReferenceToPermissionSet(const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for AttachCustomerManagedPolicyReferenceToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcomeCallable AttachCustomerManagedPolicyReferenceToPermissionSetCallable(const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const;

        /**
         * An Async wrapper for AttachCustomerManagedPolicyReferenceToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachCustomerManagedPolicyReferenceToPermissionSetAsync(const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request, const AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an AWS managed policy ARN to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this
         * operation. Calling <code>ProvisionPermissionSet</code> applies the corresponding
         * IAM policy updates to all assigned accounts.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachManagedPolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachManagedPolicyToPermissionSetOutcome AttachManagedPolicyToPermissionSet(const Model::AttachManagedPolicyToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for AttachManagedPolicyToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachManagedPolicyToPermissionSetOutcomeCallable AttachManagedPolicyToPermissionSetCallable(const Model::AttachManagedPolicyToPermissionSetRequest& request) const;

        /**
         * An Async wrapper for AttachManagedPolicyToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachManagedPolicyToPermissionSetAsync(const Model::AttachManagedPolicyToPermissionSetRequest& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns access to a principal for a specified AWS account using a specified
         * permission set.</p>  <p>The term <i>principal</i> here refers to a user or
         * group that is defined in IAM Identity Center.</p>   <p>As part of a
         * successful <code>CreateAccountAssignment</code> call, the specified permission
         * set will automatically be provisioned to the account in the form of an IAM
         * policy. That policy is attached to the IAM role created in IAM Identity Center.
         * If the permission set is subsequently updated, the corresponding IAM policies
         * attached to roles in your accounts will not be updated automatically. In this
         * case, you must call <code> <a>ProvisionPermissionSet</a> </code> to make these
         * updates.</p>   <p> After a successful response, call
         * <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of
         * an assignment creation request. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAssignmentOutcome CreateAccountAssignment(const Model::CreateAccountAssignmentRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountAssignmentOutcomeCallable CreateAccountAssignmentCallable(const Model::CreateAccountAssignmentRequest& request) const;

        /**
         * An Async wrapper for CreateAccountAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAssignmentAsync(const Model::CreateAccountAssignmentRequest& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the attributes-based access control (ABAC) feature for the specified
         * IAM Identity Center instance. You can also specify new attributes to add to your
         * ABAC configuration during the enabling process. For more information about ABAC,
         * see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p>  <p>After a
         * successful response, call
         * <code>DescribeInstanceAccessControlAttributeConfiguration</code> to validate
         * that <code>InstanceAccessControlAttributeConfiguration</code> was created.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceAccessControlAttributeConfigurationOutcome CreateInstanceAccessControlAttributeConfiguration(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceAccessControlAttributeConfigurationOutcomeCallable CreateInstanceAccessControlAttributeConfigurationCallable(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAccessControlAttributeConfigurationAsync(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a permission set within a specified IAM Identity Center instance.</p>
         *  <p>To grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionSetOutcome CreatePermissionSet(const Model::CreatePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for CreatePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePermissionSetOutcomeCallable CreatePermissionSetCallable(const Model::CreatePermissionSetRequest& request) const;

        /**
         * An Async wrapper for CreatePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePermissionSetAsync(const Model::CreatePermissionSetRequest& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a principal's access from a specified AWS account using a specified
         * permission set.</p>  <p>After a successful response, call
         * <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of
         * an assignment deletion request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAssignmentOutcome DeleteAccountAssignment(const Model::DeleteAccountAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAssignmentOutcomeCallable DeleteAccountAssignmentCallable(const Model::DeleteAccountAssignmentRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteInlinePolicyFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInlinePolicyFromPermissionSetOutcomeCallable DeleteInlinePolicyFromPermissionSetCallable(const Model::DeleteInlinePolicyFromPermissionSetRequest& request) const;

        /**
         * An Async wrapper for DeleteInlinePolicyFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInlinePolicyFromPermissionSetAsync(const Model::DeleteInlinePolicyFromPermissionSetRequest& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the attributes-based access control (ABAC) feature for the specified
         * IAM Identity Center instance and deletes all of the attribute mappings that have
         * been configured. Once deleted, any attributes that are received from an identity
         * source and any custom attributes you have previously configured will not be
         * passed. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceAccessControlAttributeConfigurationOutcome DeleteInstanceAccessControlAttributeConfiguration(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable DeleteInstanceAccessControlAttributeConfigurationCallable(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAccessControlAttributeConfigurationAsync(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionSetOutcome DeletePermissionSet(const Model::DeletePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionSetOutcomeCallable DeletePermissionSetCallable(const Model::DeletePermissionSetRequest& request) const;

        /**
         * An Async wrapper for DeletePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionSetAsync(const Model::DeletePermissionSetRequest& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the permissions boundary from a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionsBoundaryFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionsBoundaryFromPermissionSetOutcome DeletePermissionsBoundaryFromPermissionSet(const Model::DeletePermissionsBoundaryFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionsBoundaryFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionsBoundaryFromPermissionSetOutcomeCallable DeletePermissionsBoundaryFromPermissionSetCallable(const Model::DeletePermissionsBoundaryFromPermissionSetRequest& request) const;

        /**
         * An Async wrapper for DeletePermissionsBoundaryFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionsBoundaryFromPermissionSetAsync(const Model::DeletePermissionsBoundaryFromPermissionSetRequest& request, const DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcome DescribeAccountAssignmentCreationStatus(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAssignmentCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcomeCallable DescribeAccountAssignmentCreationStatusCallable(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAssignmentCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeAccountAssignmentDeletionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAssignmentDeletionStatusOutcomeCallable DescribeAccountAssignmentDeletionStatusCallable(const Model::DescribeAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAssignmentDeletionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAssignmentDeletionStatusAsync(const Model::DescribeAccountAssignmentDeletionStatusRequest& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of IAM Identity Center identity store attributes that have
         * been configured to work with attributes-based access control (ABAC) for the
         * specified IAM Identity Center instance. This will not return attributes
         * configured and sent by an external identity provider. For more information about
         * ABAC, see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based
         * Access Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAccessControlAttributeConfigurationOutcome DescribeInstanceAccessControlAttributeConfiguration(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable DescribeInstanceAccessControlAttributeConfigurationCallable(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAccessControlAttributeConfigurationAsync(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetOutcome DescribePermissionSet(const Model::DescribePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DescribePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionSetOutcomeCallable DescribePermissionSetCallable(const Model::DescribePermissionSetRequest& request) const;

        /**
         * An Async wrapper for DescribePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribePermissionSetProvisioningStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionSetProvisioningStatusOutcomeCallable DescribePermissionSetProvisioningStatusCallable(const Model::DescribePermissionSetProvisioningStatusRequest& request) const;

        /**
         * An Async wrapper for DescribePermissionSetProvisioningStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePermissionSetProvisioningStatusAsync(const Model::DescribePermissionSetProvisioningStatusRequest& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified customer managed policy from the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachCustomerManagedPolicyReferenceFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome DetachCustomerManagedPolicyReferenceFromPermissionSet(const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DetachCustomerManagedPolicyReferenceFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcomeCallable DetachCustomerManagedPolicyReferenceFromPermissionSetCallable(const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const;

        /**
         * An Async wrapper for DetachCustomerManagedPolicyReferenceFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachCustomerManagedPolicyReferenceFromPermissionSetAsync(const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request, const DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the attached AWS managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcome DetachManagedPolicyFromPermissionSet(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DetachManagedPolicyFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcomeCallable DetachManagedPolicyFromPermissionSetCallable(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;

        /**
         * An Async wrapper for DetachManagedPolicyFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetInlinePolicyForPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInlinePolicyForPermissionSetOutcomeCallable GetInlinePolicyForPermissionSetCallable(const Model::GetInlinePolicyForPermissionSetRequest& request) const;

        /**
         * An Async wrapper for GetInlinePolicyForPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInlinePolicyForPermissionSetAsync(const Model::GetInlinePolicyForPermissionSetRequest& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains the permissions boundary for a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetPermissionsBoundaryForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionsBoundaryForPermissionSetOutcome GetPermissionsBoundaryForPermissionSet(const Model::GetPermissionsBoundaryForPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionsBoundaryForPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionsBoundaryForPermissionSetOutcomeCallable GetPermissionsBoundaryForPermissionSetCallable(const Model::GetPermissionsBoundaryForPermissionSetRequest& request) const;

        /**
         * An Async wrapper for GetPermissionsBoundaryForPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionsBoundaryForPermissionSetAsync(const Model::GetPermissionsBoundaryForPermissionSetRequest& request, const GetPermissionsBoundaryForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcome ListAccountAssignmentCreationStatus(const Model::ListAccountAssignmentCreationStatusRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignmentCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcomeCallable ListAccountAssignmentCreationStatusCallable(const Model::ListAccountAssignmentCreationStatusRequest& request) const;

        /**
         * An Async wrapper for ListAccountAssignmentCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountAssignmentCreationStatusAsync(const Model::ListAccountAssignmentCreationStatusRequest& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcome ListAccountAssignmentDeletionStatus(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignmentDeletionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcomeCallable ListAccountAssignmentDeletionStatusCallable(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * An Async wrapper for ListAccountAssignmentDeletionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAccountAssignments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountAssignmentsOutcomeCallable ListAccountAssignmentsCallable(const Model::ListAccountAssignmentsRequest& request) const;

        /**
         * An Async wrapper for ListAccountAssignments that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListAccountsForProvisionedPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsForProvisionedPermissionSetOutcomeCallable ListAccountsForProvisionedPermissionSetCallable(const Model::ListAccountsForProvisionedPermissionSetRequest& request) const;

        /**
         * An Async wrapper for ListAccountsForProvisionedPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsForProvisionedPermissionSetAsync(const Model::ListAccountsForProvisionedPermissionSetRequest& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all customer managed policies attached to a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListCustomerManagedPolicyReferencesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome ListCustomerManagedPolicyReferencesInPermissionSet(const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ListCustomerManagedPolicyReferencesInPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcomeCallable ListCustomerManagedPolicyReferencesInPermissionSetCallable(const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const;

        /**
         * An Async wrapper for ListCustomerManagedPolicyReferencesInPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomerManagedPolicyReferencesInPermissionSetAsync(const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request, const ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IAM Identity Center instances that the caller has access
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcome ListManagedPoliciesInPermissionSet(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ListManagedPoliciesInPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcomeCallable ListManagedPoliciesInPermissionSetCallable(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;

        /**
         * An Async wrapper for ListManagedPoliciesInPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedPoliciesInPermissionSetAsync(const Model::ListManagedPoliciesInPermissionSetRequest& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcome ListPermissionSetProvisioningStatus(const Model::ListPermissionSetProvisioningStatusRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionSetProvisioningStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcomeCallable ListPermissionSetProvisioningStatusCallable(const Model::ListPermissionSetProvisioningStatusRequest& request) const;

        /**
         * An Async wrapper for ListPermissionSetProvisioningStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionSetProvisioningStatusAsync(const Model::ListPermissionSetProvisioningStatusRequest& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the <a>PermissionSet</a>s in an IAM Identity Center
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsOutcome ListPermissionSets(const Model::ListPermissionSetsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetsOutcomeCallable ListPermissionSetsCallable(const Model::ListPermissionSetsRequest& request) const;

        /**
         * An Async wrapper for ListPermissionSets that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListPermissionSetsProvisionedToAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionSetsProvisionedToAccountOutcomeCallable ListPermissionSetsProvisionedToAccountCallable(const Model::ListPermissionSetsProvisionedToAccountRequest& request) const;

        /**
         * An Async wrapper for ListPermissionSetsProvisionedToAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ProvisionPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionPermissionSetOutcomeCallable ProvisionPermissionSetCallable(const Model::ProvisionPermissionSetRequest& request) const;

        /**
         * An Async wrapper for ProvisionPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionPermissionSetAsync(const Model::ProvisionPermissionSetRequest& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an inline policy to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutInlinePolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInlinePolicyToPermissionSetOutcome PutInlinePolicyToPermissionSet(const Model::PutInlinePolicyToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for PutInlinePolicyToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInlinePolicyToPermissionSetOutcomeCallable PutInlinePolicyToPermissionSetCallable(const Model::PutInlinePolicyToPermissionSetRequest& request) const;

        /**
         * An Async wrapper for PutInlinePolicyToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInlinePolicyToPermissionSetAsync(const Model::PutInlinePolicyToPermissionSetRequest& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an AWS managed or customer managed policy to the specified
         * <a>PermissionSet</a> as a permissions boundary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutPermissionsBoundaryToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionsBoundaryToPermissionSetOutcome PutPermissionsBoundaryToPermissionSet(const Model::PutPermissionsBoundaryToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for PutPermissionsBoundaryToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionsBoundaryToPermissionSetOutcomeCallable PutPermissionsBoundaryToPermissionSetCallable(const Model::PutPermissionsBoundaryToPermissionSetRequest& request) const;

        /**
         * An Async wrapper for PutPermissionsBoundaryToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionsBoundaryToPermissionSetAsync(const Model::PutPermissionsBoundaryToPermissionSetRequest& request, const PutPermissionsBoundaryToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the IAM Identity Center identity store attributes that you can use
         * with the IAM Identity Center instance for attributes-based access control
         * (ABAC). When using an external identity provider as an identity source, you can
         * pass attributes through the SAML assertion as an alternative to configuring
         * attributes from the IAM Identity Center identity store. If a SAML assertion
         * passes any of these attributes, IAM Identity Center replaces the attribute value
         * with the value from the IAM Identity Center identity store. For more information
         * about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAccessControlAttributeConfigurationOutcome UpdateInstanceAccessControlAttributeConfiguration(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable UpdateInstanceAccessControlAttributeConfigurationCallable(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAccessControlAttributeConfigurationAsync(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionSetOutcome UpdatePermissionSet(const Model::UpdatePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for UpdatePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePermissionSetOutcomeCallable UpdatePermissionSetCallable(const Model::UpdatePermissionSetRequest& request) const;

        /**
         * An Async wrapper for UpdatePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePermissionSetAsync(const Model::UpdatePermissionSetRequest& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSOAdminEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSOAdminClient>;
      void init(const SSOAdminClientConfiguration& clientConfiguration);

      SSOAdminClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSOAdminEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSOAdmin
} // namespace Aws
