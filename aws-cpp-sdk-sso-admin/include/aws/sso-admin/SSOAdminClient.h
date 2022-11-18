/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/SSOAdminServiceClientModel.h>
#include <aws/sso-admin/SSOAdminLegacyAsyncMacros.h>

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
  class AWS_SSOADMIN_API SSOAdminClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Attaches the specified customer managed policy to the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachCustomerManagedPolicyReferenceToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcome AttachCustomerManagedPolicyReferenceToPermissionSet(const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const;


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
         * <p>Creates a permission set within a specified IAM Identity Center instance.</p>
         *  <p>To grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionSetOutcome CreatePermissionSet(const Model::CreatePermissionSetRequest& request) const;


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
         * <p>Deletes the inline policy from a specified permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInlinePolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInlinePolicyFromPermissionSetOutcome DeleteInlinePolicyFromPermissionSet(const Model::DeleteInlinePolicyFromPermissionSetRequest& request) const;


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
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionSetOutcome DeletePermissionSet(const Model::DeletePermissionSetRequest& request) const;


        /**
         * <p>Deletes the permissions boundary from a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionsBoundaryFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionsBoundaryFromPermissionSetOutcome DeletePermissionsBoundaryFromPermissionSet(const Model::DeletePermissionsBoundaryFromPermissionSetRequest& request) const;


        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcome DescribeAccountAssignmentCreationStatus(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;


        /**
         * <p>Describes the status of the assignment deletion request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentDeletionStatusOutcome DescribeAccountAssignmentDeletionStatus(const Model::DescribeAccountAssignmentDeletionStatusRequest& request) const;


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
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetOutcome DescribePermissionSet(const Model::DescribePermissionSetRequest& request) const;


        /**
         * <p>Describes the status for the given permission set provisioning
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetProvisioningStatusOutcome DescribePermissionSetProvisioningStatus(const Model::DescribePermissionSetProvisioningStatusRequest& request) const;


        /**
         * <p>Detaches the specified customer managed policy from the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachCustomerManagedPolicyReferenceFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome DetachCustomerManagedPolicyReferenceFromPermissionSet(const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const;


        /**
         * <p>Detaches the attached AWS managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcome DetachManagedPolicyFromPermissionSet(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;


        /**
         * <p>Obtains the inline policy assigned to the permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetInlinePolicyForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInlinePolicyForPermissionSetOutcome GetInlinePolicyForPermissionSet(const Model::GetInlinePolicyForPermissionSetRequest& request) const;


        /**
         * <p>Obtains the permissions boundary for a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetPermissionsBoundaryForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionsBoundaryForPermissionSetOutcome GetPermissionsBoundaryForPermissionSet(const Model::GetPermissionsBoundaryForPermissionSetRequest& request) const;


        /**
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcome ListAccountAssignmentCreationStatus(const Model::ListAccountAssignmentCreationStatusRequest& request) const;


        /**
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcome ListAccountAssignmentDeletionStatus(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;


        /**
         * <p>Lists the assignee of the specified AWS account with the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentsOutcome ListAccountAssignments(const Model::ListAccountAssignmentsRequest& request) const;


        /**
         * <p>Lists all the AWS accounts where the specified permission set is
         * provisioned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountsForProvisionedPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsForProvisionedPermissionSetOutcome ListAccountsForProvisionedPermissionSet(const Model::ListAccountsForProvisionedPermissionSetRequest& request) const;


        /**
         * <p>Lists all customer managed policies attached to a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListCustomerManagedPolicyReferencesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome ListCustomerManagedPolicyReferencesInPermissionSet(const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const;


        /**
         * <p>Lists the IAM Identity Center instances that the caller has access
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;


        /**
         * <p>Lists the AWS managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcome ListManagedPoliciesInPermissionSet(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;


        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcome ListPermissionSetProvisioningStatus(const Model::ListPermissionSetProvisioningStatusRequest& request) const;


        /**
         * <p>Lists the <a>PermissionSet</a>s in an IAM Identity Center
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsOutcome ListPermissionSets(const Model::ListPermissionSetsRequest& request) const;


        /**
         * <p>Lists all the permission sets that are provisioned to a specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetsProvisionedToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsProvisionedToAccountOutcome ListPermissionSetsProvisionedToAccount(const Model::ListPermissionSetsProvisionedToAccountRequest& request) const;


        /**
         * <p>Lists the tags that are attached to a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>The process by which a specified permission set is provisioned to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ProvisionPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionPermissionSetOutcome ProvisionPermissionSet(const Model::ProvisionPermissionSetRequest& request) const;


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
         * <p>Attaches an AWS managed or customer managed policy to the specified
         * <a>PermissionSet</a> as a permissions boundary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutPermissionsBoundaryToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionsBoundaryToPermissionSetOutcome PutPermissionsBoundaryToPermissionSet(const Model::PutPermissionsBoundaryToPermissionSetRequest& request) const;


        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Disassociates a set of tags from a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionSetOutcome UpdatePermissionSet(const Model::UpdatePermissionSetRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSOAdminEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SSOAdminClientConfiguration& clientConfiguration);

      SSOAdminClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSOAdminEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSOAdmin
} // namespace Aws
