/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/AddProfileKeyResult.h>
#include <aws/customer-profiles/model/CreateDomainResult.h>
#include <aws/customer-profiles/model/CreateIntegrationWorkflowResult.h>
#include <aws/customer-profiles/model/CreateProfileResult.h>
#include <aws/customer-profiles/model/DeleteDomainResult.h>
#include <aws/customer-profiles/model/DeleteIntegrationResult.h>
#include <aws/customer-profiles/model/DeleteProfileResult.h>
#include <aws/customer-profiles/model/DeleteProfileKeyResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectResult.h>
#include <aws/customer-profiles/model/DeleteProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/DeleteWorkflowResult.h>
#include <aws/customer-profiles/model/GetAutoMergingPreviewResult.h>
#include <aws/customer-profiles/model/GetDomainResult.h>
#include <aws/customer-profiles/model/GetIdentityResolutionJobResult.h>
#include <aws/customer-profiles/model/GetIntegrationResult.h>
#include <aws/customer-profiles/model/GetMatchesResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/GetProfileObjectTypeTemplateResult.h>
#include <aws/customer-profiles/model/GetWorkflowResult.h>
#include <aws/customer-profiles/model/GetWorkflowStepsResult.h>
#include <aws/customer-profiles/model/ListAccountIntegrationsResult.h>
#include <aws/customer-profiles/model/ListDomainsResult.h>
#include <aws/customer-profiles/model/ListIdentityResolutionJobsResult.h>
#include <aws/customer-profiles/model/ListIntegrationsResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplatesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectTypesResult.h>
#include <aws/customer-profiles/model/ListProfileObjectsResult.h>
#include <aws/customer-profiles/model/ListTagsForResourceResult.h>
#include <aws/customer-profiles/model/ListWorkflowsResult.h>
#include <aws/customer-profiles/model/MergeProfilesResult.h>
#include <aws/customer-profiles/model/PutIntegrationResult.h>
#include <aws/customer-profiles/model/PutProfileObjectResult.h>
#include <aws/customer-profiles/model/PutProfileObjectTypeResult.h>
#include <aws/customer-profiles/model/SearchProfilesResult.h>
#include <aws/customer-profiles/model/TagResourceResult.h>
#include <aws/customer-profiles/model/UntagResourceResult.h>
#include <aws/customer-profiles/model/UpdateDomainResult.h>
#include <aws/customer-profiles/model/UpdateProfileResult.h>
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

namespace CustomerProfiles
{

namespace Model
{
        class AddProfileKeyRequest;
        class CreateDomainRequest;
        class CreateIntegrationWorkflowRequest;
        class CreateProfileRequest;
        class DeleteDomainRequest;
        class DeleteIntegrationRequest;
        class DeleteProfileRequest;
        class DeleteProfileKeyRequest;
        class DeleteProfileObjectRequest;
        class DeleteProfileObjectTypeRequest;
        class DeleteWorkflowRequest;
        class GetAutoMergingPreviewRequest;
        class GetDomainRequest;
        class GetIdentityResolutionJobRequest;
        class GetIntegrationRequest;
        class GetMatchesRequest;
        class GetProfileObjectTypeRequest;
        class GetProfileObjectTypeTemplateRequest;
        class GetWorkflowRequest;
        class GetWorkflowStepsRequest;
        class ListAccountIntegrationsRequest;
        class ListDomainsRequest;
        class ListIdentityResolutionJobsRequest;
        class ListIntegrationsRequest;
        class ListProfileObjectTypeTemplatesRequest;
        class ListProfileObjectTypesRequest;
        class ListProfileObjectsRequest;
        class ListTagsForResourceRequest;
        class ListWorkflowsRequest;
        class MergeProfilesRequest;
        class PutIntegrationRequest;
        class PutProfileObjectRequest;
        class PutProfileObjectTypeRequest;
        class SearchProfilesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDomainRequest;
        class UpdateProfileRequest;

        typedef Aws::Utils::Outcome<AddProfileKeyResult, CustomerProfilesError> AddProfileKeyOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, CustomerProfilesError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateIntegrationWorkflowResult, CustomerProfilesError> CreateIntegrationWorkflowOutcome;
        typedef Aws::Utils::Outcome<CreateProfileResult, CustomerProfilesError> CreateProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, CustomerProfilesError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteIntegrationResult, CustomerProfilesError> DeleteIntegrationOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileResult, CustomerProfilesError> DeleteProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileKeyResult, CustomerProfilesError> DeleteProfileKeyOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileObjectResult, CustomerProfilesError> DeleteProfileObjectOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileObjectTypeResult, CustomerProfilesError> DeleteProfileObjectTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkflowResult, CustomerProfilesError> DeleteWorkflowOutcome;
        typedef Aws::Utils::Outcome<GetAutoMergingPreviewResult, CustomerProfilesError> GetAutoMergingPreviewOutcome;
        typedef Aws::Utils::Outcome<GetDomainResult, CustomerProfilesError> GetDomainOutcome;
        typedef Aws::Utils::Outcome<GetIdentityResolutionJobResult, CustomerProfilesError> GetIdentityResolutionJobOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResult, CustomerProfilesError> GetIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetMatchesResult, CustomerProfilesError> GetMatchesOutcome;
        typedef Aws::Utils::Outcome<GetProfileObjectTypeResult, CustomerProfilesError> GetProfileObjectTypeOutcome;
        typedef Aws::Utils::Outcome<GetProfileObjectTypeTemplateResult, CustomerProfilesError> GetProfileObjectTypeTemplateOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowResult, CustomerProfilesError> GetWorkflowOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowStepsResult, CustomerProfilesError> GetWorkflowStepsOutcome;
        typedef Aws::Utils::Outcome<ListAccountIntegrationsResult, CustomerProfilesError> ListAccountIntegrationsOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, CustomerProfilesError> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListIdentityResolutionJobsResult, CustomerProfilesError> ListIdentityResolutionJobsOutcome;
        typedef Aws::Utils::Outcome<ListIntegrationsResult, CustomerProfilesError> ListIntegrationsOutcome;
        typedef Aws::Utils::Outcome<ListProfileObjectTypeTemplatesResult, CustomerProfilesError> ListProfileObjectTypeTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListProfileObjectTypesResult, CustomerProfilesError> ListProfileObjectTypesOutcome;
        typedef Aws::Utils::Outcome<ListProfileObjectsResult, CustomerProfilesError> ListProfileObjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CustomerProfilesError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorkflowsResult, CustomerProfilesError> ListWorkflowsOutcome;
        typedef Aws::Utils::Outcome<MergeProfilesResult, CustomerProfilesError> MergeProfilesOutcome;
        typedef Aws::Utils::Outcome<PutIntegrationResult, CustomerProfilesError> PutIntegrationOutcome;
        typedef Aws::Utils::Outcome<PutProfileObjectResult, CustomerProfilesError> PutProfileObjectOutcome;
        typedef Aws::Utils::Outcome<PutProfileObjectTypeResult, CustomerProfilesError> PutProfileObjectTypeOutcome;
        typedef Aws::Utils::Outcome<SearchProfilesResult, CustomerProfilesError> SearchProfilesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CustomerProfilesError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CustomerProfilesError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainResult, CustomerProfilesError> UpdateDomainOutcome;
        typedef Aws::Utils::Outcome<UpdateProfileResult, CustomerProfilesError> UpdateProfileOutcome;

        typedef std::future<AddProfileKeyOutcome> AddProfileKeyOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<CreateIntegrationWorkflowOutcome> CreateIntegrationWorkflowOutcomeCallable;
        typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
        typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
        typedef std::future<DeleteProfileKeyOutcome> DeleteProfileKeyOutcomeCallable;
        typedef std::future<DeleteProfileObjectOutcome> DeleteProfileObjectOutcomeCallable;
        typedef std::future<DeleteProfileObjectTypeOutcome> DeleteProfileObjectTypeOutcomeCallable;
        typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
        typedef std::future<GetAutoMergingPreviewOutcome> GetAutoMergingPreviewOutcomeCallable;
        typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
        typedef std::future<GetIdentityResolutionJobOutcome> GetIdentityResolutionJobOutcomeCallable;
        typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
        typedef std::future<GetMatchesOutcome> GetMatchesOutcomeCallable;
        typedef std::future<GetProfileObjectTypeOutcome> GetProfileObjectTypeOutcomeCallable;
        typedef std::future<GetProfileObjectTypeTemplateOutcome> GetProfileObjectTypeTemplateOutcomeCallable;
        typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
        typedef std::future<GetWorkflowStepsOutcome> GetWorkflowStepsOutcomeCallable;
        typedef std::future<ListAccountIntegrationsOutcome> ListAccountIntegrationsOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListIdentityResolutionJobsOutcome> ListIdentityResolutionJobsOutcomeCallable;
        typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
        typedef std::future<ListProfileObjectTypeTemplatesOutcome> ListProfileObjectTypeTemplatesOutcomeCallable;
        typedef std::future<ListProfileObjectTypesOutcome> ListProfileObjectTypesOutcomeCallable;
        typedef std::future<ListProfileObjectsOutcome> ListProfileObjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
        typedef std::future<MergeProfilesOutcome> MergeProfilesOutcomeCallable;
        typedef std::future<PutIntegrationOutcome> PutIntegrationOutcomeCallable;
        typedef std::future<PutProfileObjectOutcome> PutProfileObjectOutcomeCallable;
        typedef std::future<PutProfileObjectTypeOutcome> PutProfileObjectTypeOutcomeCallable;
        typedef std::future<SearchProfilesOutcome> SearchProfilesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
        typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
} // namespace Model

  class CustomerProfilesClient;

    typedef std::function<void(const CustomerProfilesClient*, const Model::AddProfileKeyRequest&, const Model::AddProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateIntegrationWorkflowRequest&, const Model::CreateIntegrationWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileKeyRequest&, const Model::DeleteProfileKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileKeyResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectRequest&, const Model::DeleteProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteProfileObjectTypeRequest&, const Model::DeleteProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetAutoMergingPreviewRequest&, const Model::GetAutoMergingPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoMergingPreviewResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIdentityResolutionJobRequest&, const Model::GetIdentityResolutionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityResolutionJobResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetMatchesRequest&, const Model::GetMatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeRequest&, const Model::GetProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetProfileObjectTypeTemplateRequest&, const Model::GetProfileObjectTypeTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileObjectTypeTemplateResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::GetWorkflowStepsRequest&, const Model::GetWorkflowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowStepsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListAccountIntegrationsRequest&, const Model::ListAccountIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIdentityResolutionJobsRequest&, const Model::ListIdentityResolutionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityResolutionJobsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntegrationsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypeTemplatesRequest&, const Model::ListProfileObjectTypeTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypeTemplatesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectTypesRequest&, const Model::ListProfileObjectTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectTypesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListProfileObjectsRequest&, const Model::ListProfileObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileObjectsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::MergeProfilesRequest&, const Model::MergeProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutIntegrationRequest&, const Model::PutIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntegrationResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectRequest&, const Model::PutProfileObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::PutProfileObjectTypeRequest&, const Model::PutProfileObjectTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileObjectTypeResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::SearchProfilesRequest&, const Model::SearchProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProfilesResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const CustomerProfilesClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;

  /**
   * <fullname>Amazon Connect Customer Profiles</fullname> <p>Welcome to the Amazon
   * Connect Customer Profiles API Reference. This guide provides information about
   * the Amazon Connect Customer Profiles API, including supported operations, data
   * types, parameters, and schemas.</p> <p>Amazon Connect Customer Profiles is a
   * unified customer profile for your contact center that has pre-built connectors
   * powered by AppFlow that make it easy to combine customer information from third
   * party applications, such as Salesforce (CRM), ServiceNow (ITSM), and your
   * enterprise resource planning (ERP), with contact history from your Amazon
   * Connect contact center.</p> <p>If you're new to Amazon Connect , you might find
   * it helpful to also review the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon
   * Connect Administrator Guide</a>.</p>
   */
  class AWS_CUSTOMERPROFILES_API CustomerProfilesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CustomerProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CustomerProfilesClient();


        /**
         * <p>Associates a new key value with a specific profile, such as a Contact Trace
         * Record (CTR) ContactId.</p> <p>A profile object can have a single unique key and
         * any number of additional keys that can be used to identify the profile that it
         * belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AddProfileKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AddProfileKeyOutcome AddProfileKey(const Model::AddProfileKeyRequest& request) const;

        /**
         * A Callable wrapper for AddProfileKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddProfileKeyOutcomeCallable AddProfileKeyCallable(const Model::AddProfileKeyRequest& request) const;

        /**
         * An Async wrapper for AddProfileKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddProfileKeyAsync(const Model::AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain, which is a container for all customer data, such as
         * customer profile attributes, object types, profile keys, and encryption keys.
         * You can create multiple domains, and each domain can have multiple third-party
         * integrations.</p> <p>Each Amazon Connect instance can be associated with only
         * one domain. Multiple Amazon Connect instances can be associated with one
         * domain.</p> <p>Use this API or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UpdateDomain.html">UpdateDomain</a>
         * to enable <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">identity
         * resolution</a>: set <code>Matching</code> to true. </p> <p>To prevent
         * cross-service impersonation when you call this API, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html">Cross-service
         * confused deputy prevention</a> for sample policies that you should apply.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an integration workflow. An integration workflow is an async process
         * which ingests historic data and sets up an integration for ongoing updates. The
         * supported Amazon AppFlow sources are Salesforce, ServiceNow, and Marketo.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateIntegrationWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationWorkflowOutcome CreateIntegrationWorkflow(const Model::CreateIntegrationWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegrationWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntegrationWorkflowOutcomeCallable CreateIntegrationWorkflowCallable(const Model::CreateIntegrationWorkflowRequest& request) const;

        /**
         * An Async wrapper for CreateIntegrationWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntegrationWorkflowAsync(const Model::CreateIntegrationWorkflowRequest& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a standard profile.</p> <p>A standard profile represents the
         * following attributes for a customer profile in a domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileOutcomeCallable CreateProfileCallable(const Model::CreateProfileRequest& request) const;

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileAsync(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific domain and all of its customer data, such as customer
         * profile attributes and their related objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an integration from a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const Model::DeleteIntegrationRequest& request) const;

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationAsync(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the standard customer profile and all data pertaining to the
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const Model::DeleteProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a searchable key from a customer profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileKeyOutcome DeleteProfileKey(const Model::DeleteProfileKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfileKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileKeyOutcomeCallable DeleteProfileKeyCallable(const Model::DeleteProfileKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteProfileKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileKeyAsync(const Model::DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an object associated with a profile of a given
         * ProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileObjectOutcome DeleteProfileObject(const Model::DeleteProfileObjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfileObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileObjectOutcomeCallable DeleteProfileObjectCallable(const Model::DeleteProfileObjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProfileObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileObjectAsync(const Model::DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a ProfileObjectType from a specific domain as well as removes all the
         * ProfileObjects of that type. It also disables integrations from this specific
         * ProfileObjectType. In addition, it scrubs all of the fields of the standard
         * profile that were populated from this ProfileObjectType.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileObjectTypeOutcome DeleteProfileObjectType(const Model::DeleteProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileObjectTypeOutcomeCallable DeleteProfileObjectTypeCallable(const Model::DeleteProfileObjectTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileObjectTypeAsync(const Model::DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified workflow and all its corresponding resources. This is
         * an async process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the auto-merging settings of your Identity Resolution Job without
         * merging your data. It randomly selects a sample of matching groups from the
         * existing matching results, and applies the automerging settings that you
         * provided. You can then view the number of profiles in the sample, the number of
         * matches, and the number of profiles identified to be merged. This enables you to
         * evaluate the accuracy of the attributes in your matching list. </p> <p>You can't
         * view which profiles are matched and would be merged.</p>  <p>We
         * strongly recommend you use this API to do a dry run of the automerging process
         * before running the Identity Resolution Job. Include <b>at least</b> two matching
         * attributes. If your matching list includes too few attributes (such as only
         * <code>FirstName</code> or only <code>LastName</code>), there may be a large
         * number of matches. This increases the chances of erroneous merges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetAutoMergingPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoMergingPreviewOutcome GetAutoMergingPreview(const Model::GetAutoMergingPreviewRequest& request) const;

        /**
         * A Callable wrapper for GetAutoMergingPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoMergingPreviewOutcomeCallable GetAutoMergingPreviewCallable(const Model::GetAutoMergingPreviewRequest& request) const;

        /**
         * An Async wrapper for GetAutoMergingPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoMergingPreviewAsync(const Model::GetAutoMergingPreviewRequest& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainOutcomeCallable GetDomainCallable(const Model::GetDomainRequest& request) const;

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainAsync(const Model::GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an Identity Resolution Job in a specific domain.
         * </p> <p>Identity Resolution Jobs are set up using the Amazon Connect admin
         * console. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/use-identity-resolution.html">Use
         * Identity Resolution to consolidate similar profiles</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetIdentityResolutionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityResolutionJobOutcome GetIdentityResolutionJob(const Model::GetIdentityResolutionJobRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityResolutionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityResolutionJobOutcomeCallable GetIdentityResolutionJobCallable(const Model::GetIdentityResolutionJobRequest& request) const;

        /**
         * An Async wrapper for GetIdentityResolutionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityResolutionJobAsync(const Model::GetIdentityResolutionJobRequest& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an integration for a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const Model::GetIntegrationRequest& request) const;

        /**
         * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationAsync(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Before calling this API, use <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UpdateDomain.html">UpdateDomain</a>
         * to enable identity resolution: set <code>Matching</code> to true.</p>
         * <p>GetMatches returns potentially matching profiles, based on the results of the
         * latest run of a machine learning process. </p>  <p>The process of
         * matching duplicate profiles. If <code>Matching</code> = <code>true</code>,
         * Amazon Connect Customer Profiles starts a weekly batch process called Identity
         * Resolution Job. If you do not specify a date and time for Identity Resolution
         * Job to run, by default it runs every Saturday at 12AM UTC to detect duplicate
         * profiles in your domains. </p> <p>After the Identity Resolution Job completes,
         * use the <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
         * API to return and review the results. Or, if you have configured
         * <code>ExportingConfig</code> in the <code>MatchingRequest</code>, you can
         * download the results from S3.</p>  <p>Amazon Connect uses the
         * following profile attributes to identify matches:</p> <ul> <li>
         * <p>PhoneNumber</p> </li> <li> <p>HomePhoneNumber</p> </li> <li>
         * <p>BusinessPhoneNumber</p> </li> <li> <p>MobilePhoneNumber</p> </li> <li>
         * <p>EmailAddress</p> </li> <li> <p>PersonalEmailAddress</p> </li> <li>
         * <p>BusinessEmailAddress</p> </li> <li> <p>FullName</p> </li> </ul> <p>For
         * example, two or more profiles—with spelling mistakes such as <b>John Doe</b> and
         * <b>Jhn Doe</b>, or different casing email addresses such as
         * <b>JOHN_DOE@ANYCOMPANY.COM</b> and <b>johndoe@anycompany.com</b>, or different
         * phone number formats such as <b>555-010-0000</b> and <b>+1-555-010-0000</b>—can
         * be detected as belonging to the same customer <b>John Doe</b> and merged into a
         * unified profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetMatches">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMatchesOutcome GetMatches(const Model::GetMatchesRequest& request) const;

        /**
         * A Callable wrapper for GetMatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMatchesOutcomeCallable GetMatchesCallable(const Model::GetMatchesRequest& request) const;

        /**
         * An Async wrapper for GetMatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMatchesAsync(const Model::GetMatchesRequest& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the object types for a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileObjectTypeOutcome GetProfileObjectType(const Model::GetProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for GetProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileObjectTypeOutcomeCallable GetProfileObjectTypeCallable(const Model::GetProfileObjectTypeRequest& request) const;

        /**
         * An Async wrapper for GetProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileObjectTypeAsync(const Model::GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the template information for a specific object type.</p> <p>A
         * template is a predefined ProfileObjectType, such as “Salesforce-Account” or
         * “Salesforce-Contact.” When a user sends a ProfileObject, using the
         * PutProfileObject API, with an ObjectTypeName that matches one of the
         * TemplateIds, it uses the mappings from the template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetProfileObjectTypeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileObjectTypeTemplateOutcome GetProfileObjectTypeTemplate(const Model::GetProfileObjectTypeTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetProfileObjectTypeTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileObjectTypeTemplateOutcomeCallable GetProfileObjectTypeTemplateCallable(const Model::GetProfileObjectTypeTemplateRequest& request) const;

        /**
         * An Async wrapper for GetProfileObjectTypeTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileObjectTypeTemplateAsync(const Model::GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get details of specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request) const;

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get granular list of steps in workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepsOutcome GetWorkflowSteps(const Model::GetWorkflowStepsRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowStepsOutcomeCallable GetWorkflowStepsCallable(const Model::GetWorkflowStepsRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowStepsAsync(const Model::GetWorkflowStepsRequest& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the integrations associated to a specific URI in the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListAccountIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountIntegrationsOutcome ListAccountIntegrations(const Model::ListAccountIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountIntegrationsOutcomeCallable ListAccountIntegrationsCallable(const Model::ListAccountIntegrationsRequest& request) const;

        /**
         * An Async wrapper for ListAccountIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountIntegrationsAsync(const Model::ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all the domains for an AWS account that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the Identity Resolution Jobs in your domain. The response sorts
         * the list by <code>JobStartTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIdentityResolutionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityResolutionJobsOutcome ListIdentityResolutionJobs(const Model::ListIdentityResolutionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityResolutionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityResolutionJobsOutcomeCallable ListIdentityResolutionJobsCallable(const Model::ListIdentityResolutionJobsRequest& request) const;

        /**
         * An Async wrapper for ListIdentityResolutionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityResolutionJobsAsync(const Model::ListIdentityResolutionJobsRequest& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the integrations in your domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIntegrationsOutcomeCallable ListIntegrationsCallable(const Model::ListIntegrationsRequest& request) const;

        /**
         * An Async wrapper for ListIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIntegrationsAsync(const Model::ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the template information for object types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypeTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectTypeTemplatesOutcome ListProfileObjectTypeTemplates(const Model::ListProfileObjectTypeTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListProfileObjectTypeTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfileObjectTypeTemplatesOutcomeCallable ListProfileObjectTypeTemplatesCallable(const Model::ListProfileObjectTypeTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListProfileObjectTypeTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfileObjectTypeTemplatesAsync(const Model::ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the templates available within the service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectTypesOutcome ListProfileObjectTypes(const Model::ListProfileObjectTypesRequest& request) const;

        /**
         * A Callable wrapper for ListProfileObjectTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfileObjectTypesOutcomeCallable ListProfileObjectTypesCallable(const Model::ListProfileObjectTypesRequest& request) const;

        /**
         * An Async wrapper for ListProfileObjectTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfileObjectTypesAsync(const Model::ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of objects associated with a profile of a given
         * ProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectsOutcome ListProfileObjects(const Model::ListProfileObjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProfileObjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfileObjectsOutcomeCallable ListProfileObjectsCallable(const Model::ListProfileObjectsRequest& request) const;

        /**
         * An Async wrapper for ListProfileObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfileObjectsAsync(const Model::ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with an Amazon Connect Customer Profiles
         * resource. In Connect Customer Profiles, domains, profile object types, and
         * integrations can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListTagsForResource">AWS
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
         * <p>Query to list all workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs an AWS Lambda job that does the following:</p> <ol> <li> <p>All the
         * profileKeys in the <code>ProfileToBeMerged</code> will be moved to the main
         * profile.</p> </li> <li> <p>All the objects in the <code>ProfileToBeMerged</code>
         * will be moved to the main profile.</p> </li> <li> <p>All the
         * <code>ProfileToBeMerged</code> will be deleted at the end.</p> </li> <li> <p>All
         * the profileKeys in the <code>ProfileIdsToBeMerged</code> will be moved to the
         * main profile.</p> </li> <li> <p>Standard fields are merged as follows:</p> <ol>
         * <li> <p>Fields are always "union"-ed if there are no conflicts in standard
         * fields or attributeKeys.</p> </li> <li> <p>When there are conflicting
         * fields:</p> <ol> <li> <p>If no <code>SourceProfileIds</code> entry is specified,
         * the main Profile value is always taken. </p> </li> <li> <p>If a
         * <code>SourceProfileIds</code> entry is specified, the specified profileId is
         * always taken, even if it is a NULL value.</p> </li> </ol> </li> </ol> </li>
         * </ol> <p>You can use MergeProfiles together with <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>,
         * which returns potentially matching profiles, or use it with the results of
         * another matching system. After profiles have been merged, they cannot be
         * separated (unmerged).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MergeProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeProfilesOutcome MergeProfiles(const Model::MergeProfilesRequest& request) const;

        /**
         * A Callable wrapper for MergeProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeProfilesOutcomeCallable MergeProfilesCallable(const Model::MergeProfilesRequest& request) const;

        /**
         * An Async wrapper for MergeProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeProfilesAsync(const Model::MergeProfilesRequest& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an integration between the service and a third-party service, which
         * includes Amazon AppFlow and Amazon Connect.</p> <p>An integration can belong to
         * only one domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;

        /**
         * A Callable wrapper for PutIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntegrationOutcomeCallable PutIntegrationCallable(const Model::PutIntegrationRequest& request) const;

        /**
         * An Async wrapper for PutIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntegrationAsync(const Model::PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds additional objects to customer profiles of a given ObjectType.</p>
         * <p>When adding a specific profile object, like a Contact Trace Record (CTR), an
         * inferred profile can get created if it is not mapped to an existing profile. The
         * resulting profile will only have a phone number populated in the standard
         * ProfileObject. Any additional CTRs with the same phone number will be mapped to
         * the same inferred profile.</p> <p>When a ProfileObject is created and if a
         * ProfileObjectType already exists for the ProfileObject, it will provide data to
         * a standard profile depending on the ProfileObjectType definition.</p>
         * <p>PutProfileObject needs an ObjectType, which can be created using
         * PutProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectOutcome PutProfileObject(const Model::PutProfileObjectRequest& request) const;

        /**
         * A Callable wrapper for PutProfileObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProfileObjectOutcomeCallable PutProfileObjectCallable(const Model::PutProfileObjectRequest& request) const;

        /**
         * An Async wrapper for PutProfileObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProfileObjectAsync(const Model::PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a ProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectTypeOutcome PutProfileObjectType(const Model::PutProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for PutProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProfileObjectTypeOutcomeCallable PutProfileObjectTypeCallable(const Model::PutProfileObjectTypeRequest& request) const;

        /**
         * An Async wrapper for PutProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProfileObjectTypeAsync(const Model::PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for profiles within a specific domain name using name, phone number,
         * email address, account number, or a custom defined index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchProfilesOutcomeCallable SearchProfilesCallable(const Model::SearchProfilesRequest& request) const;

        /**
         * An Async wrapper for SearchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchProfilesAsync(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon Connect
         * Customer Profiles resource. Tags can help you organize and categorize your
         * resources. You can also use them to scope user permissions by granting a user
         * permission to access or change only resources with certain tag values. In
         * Connect Customer Profiles, domains, profile object types, and integrations can
         * be tagged.</p> <p>Tags don't have any semantic meaning to AWS and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * TagResource action with a resource that already has tags. If you specify a new
         * tag key, this tag is appended to the list of tags associated with the resource.
         * If you specify a tag key that is already associated with the resource, the new
         * tag value that you specify replaces the previous value for that tag.</p> <p>You
         * can associate as many as 50 tags with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/TagResource">AWS
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
         * <p>Removes one or more tags from the specified Amazon Connect Customer Profiles
         * resource. In Connect Customer Profiles, domains, profile object types, and
         * integrations can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UntagResource">AWS
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
         * <p>Updates the properties of a domain, including creating or selecting a dead
         * letter queue or an encryption key.</p> <p>After a domain is created, the name
         * can’t be changed.</p> <p>Use this API or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * to enable <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">identity
         * resolution</a>: set <code>Matching</code> to true. </p> <p>To prevent
         * cross-service impersonation when you call this API, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html">Cross-service
         * confused deputy prevention</a> for sample policies that you should apply.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const Model::UpdateDomainRequest& request) const;

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAsync(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of a profile. The ProfileId is required for updating a
         * customer profile.</p> <p>When calling the UpdateProfile API, specifying an empty
         * string value means that any existing value will be removed. Not specifying a
         * string value means that any value already there will be kept.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const Model::UpdateProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddProfileKeyAsyncHelper(const Model::AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntegrationWorkflowAsyncHelper(const Model::CreateIntegrationWorkflowRequest& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfileAsyncHelper(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationAsyncHelper(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileAsyncHelper(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileKeyAsyncHelper(const Model::DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileObjectAsyncHelper(const Model::DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfileObjectTypeAsyncHelper(const Model::DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkflowAsyncHelper(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAutoMergingPreviewAsyncHelper(const Model::GetAutoMergingPreviewRequest& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainAsyncHelper(const Model::GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityResolutionJobAsyncHelper(const Model::GetIdentityResolutionJobRequest& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationAsyncHelper(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMatchesAsyncHelper(const Model::GetMatchesRequest& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileObjectTypeAsyncHelper(const Model::GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileObjectTypeTemplateAsyncHelper(const Model::GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowAsyncHelper(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowStepsAsyncHelper(const Model::GetWorkflowStepsRequest& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountIntegrationsAsyncHelper(const Model::ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityResolutionJobsAsyncHelper(const Model::ListIdentityResolutionJobsRequest& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIntegrationsAsyncHelper(const Model::ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfileObjectTypeTemplatesAsyncHelper(const Model::ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfileObjectTypesAsyncHelper(const Model::ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfileObjectsAsyncHelper(const Model::ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkflowsAsyncHelper(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergeProfilesAsyncHelper(const Model::MergeProfilesRequest& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutIntegrationAsyncHelper(const Model::PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutProfileObjectAsyncHelper(const Model::PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutProfileObjectTypeAsyncHelper(const Model::PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchProfilesAsyncHelper(const Model::SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainAsyncHelper(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfileAsyncHelper(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CustomerProfiles
} // namespace Aws
