/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/RAMServiceClientModel.h>

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
  class AWS_RAM_API RAMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RAMClient>
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
         * A Callable wrapper for AcceptResourceShareInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptResourceShareInvitationOutcomeCallable AcceptResourceShareInvitationCallable(const Model::AcceptResourceShareInvitationRequest& request) const;

        /**
         * An Async wrapper for AcceptResourceShareInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptResourceShareInvitationAsync(const Model::AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceShareOutcomeCallable AssociateResourceShareCallable(const Model::AssociateResourceShareRequest& request) const;

        /**
         * An Async wrapper for AssociateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResourceShareAsync(const Model::AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for AssociateResourceSharePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceSharePermissionOutcomeCallable AssociateResourceSharePermissionCallable(const Model::AssociateResourceSharePermissionRequest& request) const;

        /**
         * An Async wrapper for AssociateResourceSharePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResourceSharePermissionAsync(const Model::AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceShareOutcomeCallable CreateResourceShareCallable(const Model::CreateResourceShareRequest& request) const;

        /**
         * An Async wrapper for CreateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceShareAsync(const Model::CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceShareOutcomeCallable DeleteResourceShareCallable(const Model::DeleteResourceShareRequest& request) const;

        /**
         * An Async wrapper for DeleteResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceShareAsync(const Model::DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified principals or resources from the specified
         * resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceShareOutcome DisassociateResourceShare(const Model::DisassociateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceShareOutcomeCallable DisassociateResourceShareCallable(const Model::DisassociateResourceShareRequest& request) const;

        /**
         * An Async wrapper for DisassociateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResourceShareAsync(const Model::DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DisassociateResourceSharePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceSharePermissionOutcomeCallable DisassociateResourceSharePermissionCallable(const Model::DisassociateResourceSharePermissionRequest& request) const;

        /**
         * An Async wrapper for DisassociateResourceSharePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResourceSharePermissionAsync(const Model::DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for EnableSharingWithAwsOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSharingWithAwsOrganizationOutcomeCallable EnableSharingWithAwsOrganizationCallable(const Model::EnableSharingWithAwsOrganizationRequest& request) const;

        /**
         * An Async wrapper for EnableSharingWithAwsOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSharingWithAwsOrganizationAsync(const Model::EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contents of an RAM permission in JSON format.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionOutcome GetPermission(const Model::GetPermissionRequest& request) const;

        /**
         * A Callable wrapper for GetPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionOutcomeCallable GetPermissionCallable(const Model::GetPermissionRequest& request) const;

        /**
         * An Async wrapper for GetPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionAsync(const Model::GetPermissionRequest& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource policies for the specified resources that you own and
         * have shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePoliciesAsync(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource and principal associations for resource shares that
         * you own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareAssociationsOutcome GetResourceShareAssociations(const Model::GetResourceShareAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShareAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceShareAssociationsOutcomeCallable GetResourceShareAssociationsCallable(const Model::GetResourceShareAssociationsRequest& request) const;

        /**
         * An Async wrapper for GetResourceShareAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceShareAssociationsAsync(const Model::GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about invitations that you have received for resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareInvitationsOutcome GetResourceShareInvitations(const Model::GetResourceShareInvitationsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShareInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceShareInvitationsOutcomeCallable GetResourceShareInvitationsCallable(const Model::GetResourceShareInvitationsRequest& request) const;

        /**
         * An Async wrapper for GetResourceShareInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceShareInvitationsAsync(const Model::GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about the resource shares that you own or that are shared
         * with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSharesOutcome GetResourceShares(const Model::GetResourceSharesRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceSharesOutcomeCallable GetResourceSharesCallable(const Model::GetResourceSharesRequest& request) const;

        /**
         * An Async wrapper for GetResourceShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceSharesAsync(const Model::GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListPendingInvitationResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPendingInvitationResourcesOutcomeCallable ListPendingInvitationResourcesCallable(const Model::ListPendingInvitationResourcesRequest& request) const;

        /**
         * An Async wrapper for ListPendingInvitationResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPendingInvitationResourcesAsync(const Model::ListPendingInvitationResourcesRequest& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the available versions of the specified RAM permission.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionVersionsOutcome ListPermissionVersions(const Model::ListPermissionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionVersionsOutcomeCallable ListPermissionVersionsCallable(const Model::ListPermissionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListPermissionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionVersionsAsync(const Model::ListPermissionVersionsRequest& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of available RAM permissions that you can use for the
         * supported resource types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals that you are sharing resources with or that are sharing
         * resources with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsOutcome ListPrincipals(const Model::ListPrincipalsRequest& request) const;

        /**
         * A Callable wrapper for ListPrincipals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalsOutcomeCallable ListPrincipalsCallable(const Model::ListPrincipalsRequest& request) const;

        /**
         * An Async wrapper for ListPrincipals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalsAsync(const Model::ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the RAM permissions that are associated with a resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceSharePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSharePermissionsOutcome ListResourceSharePermissions(const Model::ListResourceSharePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSharePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceSharePermissionsOutcomeCallable ListResourceSharePermissionsCallable(const Model::ListResourceSharePermissionsRequest& request) const;

        /**
         * An Async wrapper for ListResourceSharePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceSharePermissionsAsync(const Model::ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource types that can be shared by RAM.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTypesOutcome ListResourceTypes(const Model::ListResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceTypesOutcomeCallable ListResourceTypesCallable(const Model::ListResourceTypesRequest& request) const;

        /**
         * An Async wrapper for ListResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceTypesAsync(const Model::ListResourceTypesRequest& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources that you added to a resource share or the resources that
         * are shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for PromoteResourceShareCreatedFromPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PromoteResourceShareCreatedFromPolicyOutcomeCallable PromoteResourceShareCreatedFromPolicyCallable(const Model::PromoteResourceShareCreatedFromPolicyRequest& request) const;

        /**
         * An Async wrapper for PromoteResourceShareCreatedFromPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PromoteResourceShareCreatedFromPolicyAsync(const Model::PromoteResourceShareCreatedFromPolicyRequest& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to a resource share from another Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectResourceShareInvitationOutcome RejectResourceShareInvitation(const Model::RejectResourceShareInvitationRequest& request) const;

        /**
         * A Callable wrapper for RejectResourceShareInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectResourceShareInvitationOutcomeCallable RejectResourceShareInvitationCallable(const Model::RejectResourceShareInvitationRequest& request) const;

        /**
         * An Async wrapper for RejectResourceShareInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectResourceShareInvitationAsync(const Model::RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tag keys and values to the specified resource share. The
         * tags are attached only to the resource share, not to the resources that are in
         * the resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Removes the specified tag key and value pairs from the specified resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
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
         * <p>Modifies some of the properties of the specified resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceShareOutcome UpdateResourceShare(const Model::UpdateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceShareOutcomeCallable UpdateResourceShareCallable(const Model::UpdateResourceShareRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceShareAsync(const Model::UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RAMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RAMClient>;
      void init(const RAMClientConfiguration& clientConfiguration);

      RAMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RAMEndpointProviderBase> m_endpointProvider;
  };

} // namespace RAM
} // namespace Aws
