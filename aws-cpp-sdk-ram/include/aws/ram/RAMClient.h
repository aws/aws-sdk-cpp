/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/AcceptResourceShareInvitationResult.h>
#include <aws/ram/model/AssociateResourceShareResult.h>
#include <aws/ram/model/CreateResourceShareResult.h>
#include <aws/ram/model/DeleteResourceShareResult.h>
#include <aws/ram/model/DisassociateResourceShareResult.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationResult.h>
#include <aws/ram/model/GetResourcePoliciesResult.h>
#include <aws/ram/model/GetResourceShareAssociationsResult.h>
#include <aws/ram/model/GetResourceShareInvitationsResult.h>
#include <aws/ram/model/GetResourceSharesResult.h>
#include <aws/ram/model/ListPrincipalsResult.h>
#include <aws/ram/model/ListResourcesResult.h>
#include <aws/ram/model/RejectResourceShareInvitationResult.h>
#include <aws/ram/model/TagResourceResult.h>
#include <aws/ram/model/UntagResourceResult.h>
#include <aws/ram/model/UpdateResourceShareResult.h>
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

namespace RAM
{

namespace Model
{
        class AcceptResourceShareInvitationRequest;
        class AssociateResourceShareRequest;
        class CreateResourceShareRequest;
        class DeleteResourceShareRequest;
        class DisassociateResourceShareRequest;
        class EnableSharingWithAwsOrganizationRequest;
        class GetResourcePoliciesRequest;
        class GetResourceShareAssociationsRequest;
        class GetResourceShareInvitationsRequest;
        class GetResourceSharesRequest;
        class ListPrincipalsRequest;
        class ListResourcesRequest;
        class RejectResourceShareInvitationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateResourceShareRequest;

        typedef Aws::Utils::Outcome<AcceptResourceShareInvitationResult, Aws::Client::AWSError<RAMErrors>> AcceptResourceShareInvitationOutcome;
        typedef Aws::Utils::Outcome<AssociateResourceShareResult, Aws::Client::AWSError<RAMErrors>> AssociateResourceShareOutcome;
        typedef Aws::Utils::Outcome<CreateResourceShareResult, Aws::Client::AWSError<RAMErrors>> CreateResourceShareOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceShareResult, Aws::Client::AWSError<RAMErrors>> DeleteResourceShareOutcome;
        typedef Aws::Utils::Outcome<DisassociateResourceShareResult, Aws::Client::AWSError<RAMErrors>> DisassociateResourceShareOutcome;
        typedef Aws::Utils::Outcome<EnableSharingWithAwsOrganizationResult, Aws::Client::AWSError<RAMErrors>> EnableSharingWithAwsOrganizationOutcome;
        typedef Aws::Utils::Outcome<GetResourcePoliciesResult, Aws::Client::AWSError<RAMErrors>> GetResourcePoliciesOutcome;
        typedef Aws::Utils::Outcome<GetResourceShareAssociationsResult, Aws::Client::AWSError<RAMErrors>> GetResourceShareAssociationsOutcome;
        typedef Aws::Utils::Outcome<GetResourceShareInvitationsResult, Aws::Client::AWSError<RAMErrors>> GetResourceShareInvitationsOutcome;
        typedef Aws::Utils::Outcome<GetResourceSharesResult, Aws::Client::AWSError<RAMErrors>> GetResourceSharesOutcome;
        typedef Aws::Utils::Outcome<ListPrincipalsResult, Aws::Client::AWSError<RAMErrors>> ListPrincipalsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesResult, Aws::Client::AWSError<RAMErrors>> ListResourcesOutcome;
        typedef Aws::Utils::Outcome<RejectResourceShareInvitationResult, Aws::Client::AWSError<RAMErrors>> RejectResourceShareInvitationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<RAMErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<RAMErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceShareResult, Aws::Client::AWSError<RAMErrors>> UpdateResourceShareOutcome;

        typedef std::future<AcceptResourceShareInvitationOutcome> AcceptResourceShareInvitationOutcomeCallable;
        typedef std::future<AssociateResourceShareOutcome> AssociateResourceShareOutcomeCallable;
        typedef std::future<CreateResourceShareOutcome> CreateResourceShareOutcomeCallable;
        typedef std::future<DeleteResourceShareOutcome> DeleteResourceShareOutcomeCallable;
        typedef std::future<DisassociateResourceShareOutcome> DisassociateResourceShareOutcomeCallable;
        typedef std::future<EnableSharingWithAwsOrganizationOutcome> EnableSharingWithAwsOrganizationOutcomeCallable;
        typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
        typedef std::future<GetResourceShareAssociationsOutcome> GetResourceShareAssociationsOutcomeCallable;
        typedef std::future<GetResourceShareInvitationsOutcome> GetResourceShareInvitationsOutcomeCallable;
        typedef std::future<GetResourceSharesOutcome> GetResourceSharesOutcomeCallable;
        typedef std::future<ListPrincipalsOutcome> ListPrincipalsOutcomeCallable;
        typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
        typedef std::future<RejectResourceShareInvitationOutcome> RejectResourceShareInvitationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateResourceShareOutcome> UpdateResourceShareOutcomeCallable;
} // namespace Model

  class RAMClient;

    typedef std::function<void(const RAMClient*, const Model::AcceptResourceShareInvitationRequest&, const Model::AcceptResourceShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptResourceShareInvitationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::AssociateResourceShareRequest&, const Model::AssociateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::CreateResourceShareRequest&, const Model::CreateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::DeleteResourceShareRequest&, const Model::DeleteResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::DisassociateResourceShareRequest&, const Model::DisassociateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::EnableSharingWithAwsOrganizationRequest&, const Model::EnableSharingWithAwsOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSharingWithAwsOrganizationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceShareAssociationsRequest&, const Model::GetResourceShareAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceShareAssociationsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceShareInvitationsRequest&, const Model::GetResourceShareInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceShareInvitationsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceSharesRequest&, const Model::GetResourceSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSharesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListPrincipalsRequest&, const Model::ListPrincipalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::RejectResourceShareInvitationRequest&, const Model::RejectResourceShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectResourceShareInvitationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::UpdateResourceShareRequest&, const Model::UpdateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceShareResponseReceivedHandler;

  /**
   * <p>Use AWS Resource Access Manager to share AWS resources between AWS accounts.
   * To share a resource, you create a resource share, associate the resource with
   * the resource share, and specify the principals that can access the resource. The
   * following principals are supported:</p> <ul> <li> <p>The ID of an AWS
   * account</p> </li> <li> <p>The Amazon Resource Name (ARN) of an OU from AWS
   * Organizations</p> </li> <li> <p>The Amazon Resource Name (ARN) of an
   * organization from AWS Organizations</p> </li> </ul> <p>If you specify an AWS
   * account that doesn't exist in the same organization as the account that owns the
   * resource share, the owner of the specified account receives an invitation to
   * accept the resource share. After the owner accepts the invitation, they can
   * access the resources in the resource share. An administrator of the specified
   * account can use IAM policies to restrict access resources in the resource
   * share.</p>
   */
  class AWS_RAM_API RAMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RAMClient();

        inline virtual const char* GetServiceClientName() const override { return "RAM"; }


        /**
         * <p>Accepts an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AcceptResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptResourceShareInvitationOutcome AcceptResourceShareInvitation(const Model::AcceptResourceShareInvitationRequest& request) const;

        /**
         * <p>Accepts an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AcceptResourceShareInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptResourceShareInvitationOutcomeCallable AcceptResourceShareInvitationCallable(const Model::AcceptResourceShareInvitationRequest& request) const;

        /**
         * <p>Accepts an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AcceptResourceShareInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptResourceShareInvitationAsync(const Model::AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified resource share with the specified principals and
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceShareOutcome AssociateResourceShare(const Model::AssociateResourceShareRequest& request) const;

        /**
         * <p>Associates the specified resource share with the specified principals and
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceShareOutcomeCallable AssociateResourceShareCallable(const Model::AssociateResourceShareRequest& request) const;

        /**
         * <p>Associates the specified resource share with the specified principals and
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResourceShareAsync(const Model::AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceShareOutcome CreateResourceShare(const Model::CreateResourceShareRequest& request) const;

        /**
         * <p>Creates a resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreateResourceShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceShareOutcomeCallable CreateResourceShareCallable(const Model::CreateResourceShareRequest& request) const;

        /**
         * <p>Creates a resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreateResourceShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceShareAsync(const Model::CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeleteResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceShareOutcome DeleteResourceShare(const Model::DeleteResourceShareRequest& request) const;

        /**
         * <p>Deletes the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeleteResourceShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceShareOutcomeCallable DeleteResourceShareCallable(const Model::DeleteResourceShareRequest& request) const;

        /**
         * <p>Deletes the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeleteResourceShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates the specified principals or resources from the specified
         * resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceShareOutcomeCallable DisassociateResourceShareCallable(const Model::DisassociateResourceShareRequest& request) const;

        /**
         * <p>Disassociates the specified principals or resources from the specified
         * resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResourceShareAsync(const Model::DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables resource sharing within your organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/EnableSharingWithAwsOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSharingWithAwsOrganizationOutcome EnableSharingWithAwsOrganization(const Model::EnableSharingWithAwsOrganizationRequest& request) const;

        /**
         * <p>Enables resource sharing within your organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/EnableSharingWithAwsOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSharingWithAwsOrganizationOutcomeCallable EnableSharingWithAwsOrganizationCallable(const Model::EnableSharingWithAwsOrganizationRequest& request) const;

        /**
         * <p>Enables resource sharing within your organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/EnableSharingWithAwsOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSharingWithAwsOrganizationAsync(const Model::EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the policies for the specifies resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * <p>Gets the policies for the specifies resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * <p>Gets the policies for the specifies resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePoliciesAsync(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the associations for the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareAssociationsOutcome GetResourceShareAssociations(const Model::GetResourceShareAssociationsRequest& request) const;

        /**
         * <p>Gets the associations for the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceShareAssociationsOutcomeCallable GetResourceShareAssociationsCallable(const Model::GetResourceShareAssociationsRequest& request) const;

        /**
         * <p>Gets the associations for the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceShareAssociationsAsync(const Model::GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified invitations for resource sharing.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareInvitationsOutcome GetResourceShareInvitations(const Model::GetResourceShareInvitationsRequest& request) const;

        /**
         * <p>Gets the specified invitations for resource sharing.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceShareInvitationsOutcomeCallable GetResourceShareInvitationsCallable(const Model::GetResourceShareInvitationsRequest& request) const;

        /**
         * <p>Gets the specified invitations for resource sharing.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceShareInvitationsAsync(const Model::GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified resource shares or all of your resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSharesOutcome GetResourceShares(const Model::GetResourceSharesRequest& request) const;

        /**
         * <p>Gets the specified resource shares or all of your resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceSharesOutcomeCallable GetResourceSharesCallable(const Model::GetResourceSharesRequest& request) const;

        /**
         * <p>Gets the specified resource shares or all of your resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceSharesAsync(const Model::GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals with access to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsOutcome ListPrincipals(const Model::ListPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals with access to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalsOutcomeCallable ListPrincipalsCallable(const Model::ListPrincipalsRequest& request) const;

        /**
         * <p>Lists the principals with access to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalsAsync(const Model::ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources that the specified principal can access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists the resources that the specified principal can access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists the resources that the specified principal can access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectResourceShareInvitationOutcome RejectResourceShareInvitation(const Model::RejectResourceShareInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectResourceShareInvitationOutcomeCallable RejectResourceShareInvitationCallable(const Model::RejectResourceShareInvitationRequest& request) const;

        /**
         * <p>Rejects an invitation to a resource share from another AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectResourceShareInvitationAsync(const Model::RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource share.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceShareOutcome UpdateResourceShare(const Model::UpdateResourceShareRequest& request) const;

        /**
         * <p>Updates the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceShareOutcomeCallable UpdateResourceShareCallable(const Model::UpdateResourceShareRequest& request) const;

        /**
         * <p>Updates the specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceShareAsync(const Model::UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptResourceShareInvitationAsyncHelper(const Model::AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResourceShareAsyncHelper(const Model::AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceShareAsyncHelper(const Model::CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceShareAsyncHelper(const Model::DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResourceShareAsyncHelper(const Model::DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSharingWithAwsOrganizationAsyncHelper(const Model::EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePoliciesAsyncHelper(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceShareAssociationsAsyncHelper(const Model::GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceShareInvitationsAsyncHelper(const Model::GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceSharesAsyncHelper(const Model::GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPrincipalsAsyncHelper(const Model::ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectResourceShareInvitationAsyncHelper(const Model::RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceShareAsyncHelper(const Model::UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RAM
} // namespace Aws
