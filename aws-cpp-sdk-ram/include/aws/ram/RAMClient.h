/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/RAMServiceClientModel.h>
#include <aws/ram/RAMLegacyAsyncMacros.h>

namespace Aws
{
namespace RAM
{
  /**
   * <p>This is the <i>Resource Access Manager API Reference</i>. This documentation
   * provides descriptions and syntax for each of the actions and data types in RAM.
   * RAM is a service that helps you securely share your Amazon Web Services
   * resources across Amazon Web Services accounts. If you have multiple Amazon Web
   * Services accounts, you can use RAM to share those resources with other accounts.
   * If you use Organizations to manage your accounts, then you share your resources
   * with your organization or organizational units (OUs). For supported resource
   * types, you can also share resources with individual Identity and Access
   * Management (IAM) roles an users. </p> <p>To learn more about RAM, see the
   * following resources:</p> <ul> <li> <p> <a
   * href="http://aws.amazon.com/ram">Resource Access Manager product page</a> </p>
   * </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager
   * User Guide</a> </p> </li> </ul>
   */
  class AWS_RAM_API RAMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration(),
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RAMClient();


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
         * <p>Accepts an invitation to a resource share from another Amazon Web Services
         * account. After you accept the invitation, the resources included in the resource
         * share are available to interact with in the relevant Amazon Web Services
         * Management Consoles and tools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AcceptResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptResourceShareInvitationOutcome AcceptResourceShareInvitation(const Model::AcceptResourceShareInvitationRequest& request) const;


        /**
         * <p>Adds the specified list of principals and list of resources to a resource
         * share. Principals that already have access to this resource share immediately
         * receive access to the added resources. Newly added principals immediately
         * receive access to the resources shared in this resource share. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceShareOutcome AssociateResourceShare(const Model::AssociateResourceShareRequest& request) const;


        /**
         * <p>Adds or replaces the RAM permission for a resource type included in a
         * resource share. You can have exactly one permission associated with each
         * resource type in the resource share. You can add a new RAM permission only if
         * there are currently no resources of that resource type currently in the resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceSharePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceSharePermissionOutcome AssociateResourceSharePermission(const Model::AssociateResourceSharePermissionRequest& request) const;


        /**
         * <p>Creates a resource share. You can provide a list of the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Names (ARNs)</a> for the resources that you want to share, a list of
         * principals you want to share the resources with, and the permissions to grant
         * those principals.</p>  <p>Sharing a resource makes it available for use by
         * principals outside of the Amazon Web Services account that created the resource.
         * Sharing doesn't change any permissions or quotas that apply to the resource in
         * the account that created it.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceShareOutcome CreateResourceShare(const Model::CreateResourceShareRequest& request) const;


        /**
         * <p>Deletes the specified resource share. This doesn't delete any of the
         * resources that were associated with the resource share; it only stops the
         * sharing of those resources outside of the Amazon Web Services account that
         * created them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeleteResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceShareOutcome DeleteResourceShare(const Model::DeleteResourceShareRequest& request) const;


        /**
         * <p>Disassociates the specified principals or resources from the specified
         * resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceShareOutcome DisassociateResourceShare(const Model::DisassociateResourceShareRequest& request) const;


        /**
         * <p>Disassociates an RAM permission from a resource share. Permission changes
         * take effect immediately. You can remove a RAM permission from a resource share
         * only if there are currently no resources of the relevant resource type currently
         * attached to the resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceSharePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceSharePermissionOutcome DisassociateResourceSharePermission(const Model::DisassociateResourceSharePermissionRequest& request) const;


        /**
         * <p>Enables resource sharing within your organization in Organizations. Calling
         * this operation enables RAM to retrieve information about the organization and
         * its structure. This lets you share resources with all of the accounts in an
         * organization by specifying the organization's ID, or all of the accounts in an
         * organizational unit (OU) by specifying the OU's ID. Until you enable sharing
         * within the organization, you can specify only individual Amazon Web Services
         * accounts, or for supported resource types, IAM users and roles.</p> <p>You must
         * call this operation from an IAM user or role in the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/EnableSharingWithAwsOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSharingWithAwsOrganizationOutcome EnableSharingWithAwsOrganization(const Model::EnableSharingWithAwsOrganizationRequest& request) const;


        /**
         * <p>Gets the contents of an RAM permission in JSON format.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionOutcome GetPermission(const Model::GetPermissionRequest& request) const;


        /**
         * <p>Retrieves the resource policies for the specified resources that you own and
         * have shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;


        /**
         * <p>Retrieves the resource and principal associations for resource shares that
         * you own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareAssociationsOutcome GetResourceShareAssociations(const Model::GetResourceShareAssociationsRequest& request) const;


        /**
         * <p>Retrieves details about invitations that you have received for resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareInvitationsOutcome GetResourceShareInvitations(const Model::GetResourceShareInvitationsRequest& request) const;


        /**
         * <p>Retrieves details about the resource shares that you own or that are shared
         * with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSharesOutcome GetResourceShares(const Model::GetResourceSharesRequest& request) const;


        /**
         * <p>Lists the resources in a resource share that is shared with you but for which
         * the invitation is still <code>PENDING</code>. That means that you haven't
         * accepted or rejected the invitation and the invitation hasn't
         * expired.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPendingInvitationResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPendingInvitationResourcesOutcome ListPendingInvitationResources(const Model::ListPendingInvitationResourcesRequest& request) const;


        /**
         * <p>Lists the available versions of the specified RAM permission.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionVersionsOutcome ListPermissionVersions(const Model::ListPermissionVersionsRequest& request) const;


        /**
         * <p>Retrieves a list of available RAM permissions that you can use for the
         * supported resource types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;


        /**
         * <p>Lists the principals that you are sharing resources with or that are sharing
         * resources with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsOutcome ListPrincipals(const Model::ListPrincipalsRequest& request) const;


        /**
         * <p>Lists the RAM permissions that are associated with a resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceSharePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSharePermissionsOutcome ListResourceSharePermissions(const Model::ListResourceSharePermissionsRequest& request) const;


        /**
         * <p>Lists the resource types that can be shared by RAM.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTypesOutcome ListResourceTypes(const Model::ListResourceTypesRequest& request) const;


        /**
         * <p>Lists the resources that you added to a resource share or the resources that
         * are shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;


        /**
         * <p>When you attach a resource-based permission policy to a resource, it
         * automatically creates a resource share. However, resource shares created this
         * way are visible only to the resource share owner, and the resource share can't
         * be modified in RAM.</p> <p>You can use this operation to promote the resource
         * share to a full RAM resource share. When you promote a resource share, you can
         * then manage the resource share in RAM and it becomes visible to all of the
         * principals you shared it with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PromoteResourceShareCreatedFromPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteResourceShareCreatedFromPolicyOutcome PromoteResourceShareCreatedFromPolicy(const Model::PromoteResourceShareCreatedFromPolicyRequest& request) const;


        /**
         * <p>Rejects an invitation to a resource share from another Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectResourceShareInvitationOutcome RejectResourceShareInvitation(const Model::RejectResourceShareInvitationRequest& request) const;


        /**
         * <p>Adds the specified tag keys and values to the specified resource share. The
         * tags are attached only to the resource share, not to the resources that are in
         * the resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tag key and value pairs from the specified resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Modifies some of the properties of the specified resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceShareOutcome UpdateResourceShare(const Model::UpdateResourceShareRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RAMEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RAMClientConfiguration& clientConfiguration);

      RAMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RAMEndpointProviderBase> m_endpointProvider;
  };

} // namespace RAM
} // namespace Aws
