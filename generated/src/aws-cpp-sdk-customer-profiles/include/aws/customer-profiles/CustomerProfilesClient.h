/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/CustomerProfilesServiceClientModel.h>

namespace Aws
{
namespace CustomerProfiles
{
  /**
   * <fullname>Amazon Connect Customer Profiles</fullname> <p>Amazon Connect Customer
   * Profiles is a unified customer profile for your contact center that has
   * pre-built connectors powered by AppFlow that make it easy to combine customer
   * information from third party applications, such as Salesforce (CRM), ServiceNow
   * (ITSM), and your enterprise resource planning (ERP), with contact history from
   * your Amazon Connect contact center. If you're new to Amazon Connect, you might
   * find it helpful to review the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/">Amazon Connect
   * Administrator Guide</a>.</p>
   */
  class AWS_CUSTOMERPROFILES_API CustomerProfilesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CustomerProfilesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CustomerProfilesClientConfiguration ClientConfigurationType;
      typedef CustomerProfilesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration(),
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CustomerProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CustomerProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CustomerProfilesClient();

        /**
         * <p>Associates a new key value with a specific profile, such as a Contact Record
         * ContactId.</p> <p>A profile object can have a single unique key and any number
         * of additional keys that can be used to identify the profile that it belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AddProfileKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AddProfileKeyOutcome AddProfileKey(const Model::AddProfileKeyRequest& request) const;

        /**
         * A Callable wrapper for AddProfileKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddProfileKeyRequestT = Model::AddProfileKeyRequest>
        Model::AddProfileKeyOutcomeCallable AddProfileKeyCallable(const AddProfileKeyRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::AddProfileKey, request);
        }

        /**
         * An Async wrapper for AddProfileKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddProfileKeyRequestT = Model::AddProfileKeyRequest>
        void AddProfileKeyAsync(const AddProfileKeyRequestT& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::AddProfileKey, request, handler, context);
        }

        /**
         * <p>Creates a new calculated attribute definition. After creation, new object
         * data ingested into Customer Profiles will be included in the calculated
         * attribute, which can be retrieved for a profile using the <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetCalculatedAttributeForProfile.html">GetCalculatedAttributeForProfile</a>
         * API. Defining a calculated attribute makes it available for all profiles within
         * a domain. Each calculated attribute can only reference one
         * <code>ObjectType</code> and at most, two fields from that
         * <code>ObjectType</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateCalculatedAttributeDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCalculatedAttributeDefinitionOutcome CreateCalculatedAttributeDefinition(const Model::CreateCalculatedAttributeDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateCalculatedAttributeDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCalculatedAttributeDefinitionRequestT = Model::CreateCalculatedAttributeDefinitionRequest>
        Model::CreateCalculatedAttributeDefinitionOutcomeCallable CreateCalculatedAttributeDefinitionCallable(const CreateCalculatedAttributeDefinitionRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::CreateCalculatedAttributeDefinition, request);
        }

        /**
         * An Async wrapper for CreateCalculatedAttributeDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCalculatedAttributeDefinitionRequestT = Model::CreateCalculatedAttributeDefinitionRequest>
        void CreateCalculatedAttributeDefinitionAsync(const CreateCalculatedAttributeDefinitionRequestT& request, const CreateCalculatedAttributeDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::CreateCalculatedAttributeDefinition, request, handler, context);
        }

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
         * resolution</a>: set <code>Matching</code> to true.</p> <p>To prevent
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
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates an event stream, which is a subscription to real-time events, such as
         * when profiles are created and updated through Amazon Connect Customer
         * Profiles.</p> <p>Each event stream can be associated with only one Kinesis Data
         * Stream destination in the same region and Amazon Web Services account as the
         * customer profiles domain</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventStreamOutcome CreateEventStream(const Model::CreateEventStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventStreamRequestT = Model::CreateEventStreamRequest>
        Model::CreateEventStreamOutcomeCallable CreateEventStreamCallable(const CreateEventStreamRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::CreateEventStream, request);
        }

        /**
         * An Async wrapper for CreateEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventStreamRequestT = Model::CreateEventStreamRequest>
        void CreateEventStreamAsync(const CreateEventStreamRequestT& request, const CreateEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::CreateEventStream, request, handler, context);
        }

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
        template<typename CreateIntegrationWorkflowRequestT = Model::CreateIntegrationWorkflowRequest>
        Model::CreateIntegrationWorkflowOutcomeCallable CreateIntegrationWorkflowCallable(const CreateIntegrationWorkflowRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::CreateIntegrationWorkflow, request);
        }

        /**
         * An Async wrapper for CreateIntegrationWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntegrationWorkflowRequestT = Model::CreateIntegrationWorkflowRequest>
        void CreateIntegrationWorkflowAsync(const CreateIntegrationWorkflowRequestT& request, const CreateIntegrationWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::CreateIntegrationWorkflow, request, handler, context);
        }

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
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::CreateProfile, request, handler, context);
        }

        /**
         * <p>Deletes an existing calculated attribute definition. Note that deleting a
         * default calculated attribute is possible, however once deleted, you will be
         * unable to undo that action and will need to recreate it on your own using the
         * CreateCalculatedAttributeDefinition API if you want it back.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteCalculatedAttributeDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCalculatedAttributeDefinitionOutcome DeleteCalculatedAttributeDefinition(const Model::DeleteCalculatedAttributeDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCalculatedAttributeDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCalculatedAttributeDefinitionRequestT = Model::DeleteCalculatedAttributeDefinitionRequest>
        Model::DeleteCalculatedAttributeDefinitionOutcomeCallable DeleteCalculatedAttributeDefinitionCallable(const DeleteCalculatedAttributeDefinitionRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteCalculatedAttributeDefinition, request);
        }

        /**
         * An Async wrapper for DeleteCalculatedAttributeDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCalculatedAttributeDefinitionRequestT = Model::DeleteCalculatedAttributeDefinitionRequest>
        void DeleteCalculatedAttributeDefinitionAsync(const DeleteCalculatedAttributeDefinitionRequestT& request, const DeleteCalculatedAttributeDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteCalculatedAttributeDefinition, request, handler, context);
        }

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
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Disables and deletes the specified event stream.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventStreamRequestT = Model::DeleteEventStreamRequest>
        Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const DeleteEventStreamRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteEventStream, request);
        }

        /**
         * An Async wrapper for DeleteEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventStreamRequestT = Model::DeleteEventStreamRequest>
        void DeleteEventStreamAsync(const DeleteEventStreamRequestT& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteEventStream, request, handler, context);
        }

        /**
         * <p>Removes an integration from a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteIntegration, request);
        }

        /**
         * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
        void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteIntegration, request, handler, context);
        }

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
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteProfile, request, handler, context);
        }

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
        template<typename DeleteProfileKeyRequestT = Model::DeleteProfileKeyRequest>
        Model::DeleteProfileKeyOutcomeCallable DeleteProfileKeyCallable(const DeleteProfileKeyRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteProfileKey, request);
        }

        /**
         * An Async wrapper for DeleteProfileKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileKeyRequestT = Model::DeleteProfileKeyRequest>
        void DeleteProfileKeyAsync(const DeleteProfileKeyRequestT& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteProfileKey, request, handler, context);
        }

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
        template<typename DeleteProfileObjectRequestT = Model::DeleteProfileObjectRequest>
        Model::DeleteProfileObjectOutcomeCallable DeleteProfileObjectCallable(const DeleteProfileObjectRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteProfileObject, request);
        }

        /**
         * An Async wrapper for DeleteProfileObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileObjectRequestT = Model::DeleteProfileObjectRequest>
        void DeleteProfileObjectAsync(const DeleteProfileObjectRequestT& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteProfileObject, request, handler, context);
        }

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
        template<typename DeleteProfileObjectTypeRequestT = Model::DeleteProfileObjectTypeRequest>
        Model::DeleteProfileObjectTypeOutcomeCallable DeleteProfileObjectTypeCallable(const DeleteProfileObjectTypeRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteProfileObjectType, request);
        }

        /**
         * An Async wrapper for DeleteProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileObjectTypeRequestT = Model::DeleteProfileObjectTypeRequest>
        void DeleteProfileObjectTypeAsync(const DeleteProfileObjectTypeRequestT& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteProfileObjectType, request, handler, context);
        }

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
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DeleteWorkflow, request, handler, context);
        }

        /**
         * <p>The process of detecting profile object type mapping by using given
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DetectProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectProfileObjectTypeOutcome DetectProfileObjectType(const Model::DetectProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for DetectProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectProfileObjectTypeRequestT = Model::DetectProfileObjectTypeRequest>
        Model::DetectProfileObjectTypeOutcomeCallable DetectProfileObjectTypeCallable(const DetectProfileObjectTypeRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::DetectProfileObjectType, request);
        }

        /**
         * An Async wrapper for DetectProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectProfileObjectTypeRequestT = Model::DetectProfileObjectTypeRequest>
        void DetectProfileObjectTypeAsync(const DetectProfileObjectTypeRequestT& request, const DetectProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::DetectProfileObjectType, request, handler, context);
        }

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
        template<typename GetAutoMergingPreviewRequestT = Model::GetAutoMergingPreviewRequest>
        Model::GetAutoMergingPreviewOutcomeCallable GetAutoMergingPreviewCallable(const GetAutoMergingPreviewRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetAutoMergingPreview, request);
        }

        /**
         * An Async wrapper for GetAutoMergingPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutoMergingPreviewRequestT = Model::GetAutoMergingPreviewRequest>
        void GetAutoMergingPreviewAsync(const GetAutoMergingPreviewRequestT& request, const GetAutoMergingPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetAutoMergingPreview, request, handler, context);
        }

        /**
         * <p>Provides more information on a calculated attribute definition for Customer
         * Profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetCalculatedAttributeDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculatedAttributeDefinitionOutcome GetCalculatedAttributeDefinition(const Model::GetCalculatedAttributeDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetCalculatedAttributeDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCalculatedAttributeDefinitionRequestT = Model::GetCalculatedAttributeDefinitionRequest>
        Model::GetCalculatedAttributeDefinitionOutcomeCallable GetCalculatedAttributeDefinitionCallable(const GetCalculatedAttributeDefinitionRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetCalculatedAttributeDefinition, request);
        }

        /**
         * An Async wrapper for GetCalculatedAttributeDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalculatedAttributeDefinitionRequestT = Model::GetCalculatedAttributeDefinitionRequest>
        void GetCalculatedAttributeDefinitionAsync(const GetCalculatedAttributeDefinitionRequestT& request, const GetCalculatedAttributeDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetCalculatedAttributeDefinition, request, handler, context);
        }

        /**
         * <p>Retrieve a calculated attribute for a customer profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetCalculatedAttributeForProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCalculatedAttributeForProfileOutcome GetCalculatedAttributeForProfile(const Model::GetCalculatedAttributeForProfileRequest& request) const;

        /**
         * A Callable wrapper for GetCalculatedAttributeForProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCalculatedAttributeForProfileRequestT = Model::GetCalculatedAttributeForProfileRequest>
        Model::GetCalculatedAttributeForProfileOutcomeCallable GetCalculatedAttributeForProfileCallable(const GetCalculatedAttributeForProfileRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetCalculatedAttributeForProfile, request);
        }

        /**
         * An Async wrapper for GetCalculatedAttributeForProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCalculatedAttributeForProfileRequestT = Model::GetCalculatedAttributeForProfileRequest>
        void GetCalculatedAttributeForProfileAsync(const GetCalculatedAttributeForProfileRequestT& request, const GetCalculatedAttributeForProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetCalculatedAttributeForProfile, request, handler, context);
        }

        /**
         * <p>Returns information about a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetDomain, request);
        }

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetDomain, request, handler, context);
        }

        /**
         * <p>Returns information about the specified event stream in a specific
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * A Callable wrapper for GetEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventStreamRequestT = Model::GetEventStreamRequest>
        Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const GetEventStreamRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetEventStream, request);
        }

        /**
         * An Async wrapper for GetEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventStreamRequestT = Model::GetEventStreamRequest>
        void GetEventStreamAsync(const GetEventStreamRequestT& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetEventStream, request, handler, context);
        }

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
        template<typename GetIdentityResolutionJobRequestT = Model::GetIdentityResolutionJobRequest>
        Model::GetIdentityResolutionJobOutcomeCallable GetIdentityResolutionJobCallable(const GetIdentityResolutionJobRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetIdentityResolutionJob, request);
        }

        /**
         * An Async wrapper for GetIdentityResolutionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityResolutionJobRequestT = Model::GetIdentityResolutionJobRequest>
        void GetIdentityResolutionJobAsync(const GetIdentityResolutionJobRequestT& request, const GetIdentityResolutionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetIdentityResolutionJob, request, handler, context);
        }

        /**
         * <p>Returns an integration for a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetIntegration, request);
        }

        /**
         * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntegrationRequestT = Model::GetIntegrationRequest>
        void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetIntegration, request, handler, context);
        }

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
        template<typename GetMatchesRequestT = Model::GetMatchesRequest>
        Model::GetMatchesOutcomeCallable GetMatchesCallable(const GetMatchesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetMatches, request);
        }

        /**
         * An Async wrapper for GetMatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMatchesRequestT = Model::GetMatchesRequest>
        void GetMatchesAsync(const GetMatchesRequestT& request, const GetMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetMatches, request, handler, context);
        }

        /**
         * <p>Returns the object types for a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileObjectTypeOutcome GetProfileObjectType(const Model::GetProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for GetProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileObjectTypeRequestT = Model::GetProfileObjectTypeRequest>
        Model::GetProfileObjectTypeOutcomeCallable GetProfileObjectTypeCallable(const GetProfileObjectTypeRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetProfileObjectType, request);
        }

        /**
         * An Async wrapper for GetProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileObjectTypeRequestT = Model::GetProfileObjectTypeRequest>
        void GetProfileObjectTypeAsync(const GetProfileObjectTypeRequestT& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetProfileObjectType, request, handler, context);
        }

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
        template<typename GetProfileObjectTypeTemplateRequestT = Model::GetProfileObjectTypeTemplateRequest>
        Model::GetProfileObjectTypeTemplateOutcomeCallable GetProfileObjectTypeTemplateCallable(const GetProfileObjectTypeTemplateRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetProfileObjectTypeTemplate, request);
        }

        /**
         * An Async wrapper for GetProfileObjectTypeTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileObjectTypeTemplateRequestT = Model::GetProfileObjectTypeTemplateRequest>
        void GetProfileObjectTypeTemplateAsync(const GetProfileObjectTypeTemplateRequestT& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetProfileObjectTypeTemplate, request, handler, context);
        }

        /**
         * <p>Returns a set of profiles that belong to the same matching group using the
         * <code>matchId</code> or <code>profileId</code>. You can also specify the type of
         * matching that you want for finding similar profiles using either
         * <code>RULE_BASED_MATCHING</code> or
         * <code>ML_BASED_MATCHING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetSimilarProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSimilarProfilesOutcome GetSimilarProfiles(const Model::GetSimilarProfilesRequest& request) const;

        /**
         * A Callable wrapper for GetSimilarProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSimilarProfilesRequestT = Model::GetSimilarProfilesRequest>
        Model::GetSimilarProfilesOutcomeCallable GetSimilarProfilesCallable(const GetSimilarProfilesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetSimilarProfiles, request);
        }

        /**
         * An Async wrapper for GetSimilarProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSimilarProfilesRequestT = Model::GetSimilarProfilesRequest>
        void GetSimilarProfilesAsync(const GetSimilarProfilesRequestT& request, const GetSimilarProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetSimilarProfiles, request, handler, context);
        }

        /**
         * <p>Get details of specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Get granular list of steps in workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepsOutcome GetWorkflowSteps(const Model::GetWorkflowStepsRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowStepsRequestT = Model::GetWorkflowStepsRequest>
        Model::GetWorkflowStepsOutcomeCallable GetWorkflowStepsCallable(const GetWorkflowStepsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::GetWorkflowSteps, request);
        }

        /**
         * An Async wrapper for GetWorkflowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowStepsRequestT = Model::GetWorkflowStepsRequest>
        void GetWorkflowStepsAsync(const GetWorkflowStepsRequestT& request, const GetWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::GetWorkflowSteps, request, handler, context);
        }

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
        template<typename ListAccountIntegrationsRequestT = Model::ListAccountIntegrationsRequest>
        Model::ListAccountIntegrationsOutcomeCallable ListAccountIntegrationsCallable(const ListAccountIntegrationsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListAccountIntegrations, request);
        }

        /**
         * An Async wrapper for ListAccountIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountIntegrationsRequestT = Model::ListAccountIntegrationsRequest>
        void ListAccountIntegrationsAsync(const ListAccountIntegrationsRequestT& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListAccountIntegrations, request, handler, context);
        }

        /**
         * <p>Lists calculated attribute definitions for Customer Profiles</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListCalculatedAttributeDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCalculatedAttributeDefinitionsOutcome ListCalculatedAttributeDefinitions(const Model::ListCalculatedAttributeDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListCalculatedAttributeDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCalculatedAttributeDefinitionsRequestT = Model::ListCalculatedAttributeDefinitionsRequest>
        Model::ListCalculatedAttributeDefinitionsOutcomeCallable ListCalculatedAttributeDefinitionsCallable(const ListCalculatedAttributeDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListCalculatedAttributeDefinitions, request);
        }

        /**
         * An Async wrapper for ListCalculatedAttributeDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCalculatedAttributeDefinitionsRequestT = Model::ListCalculatedAttributeDefinitionsRequest>
        void ListCalculatedAttributeDefinitionsAsync(const ListCalculatedAttributeDefinitionsRequestT& request, const ListCalculatedAttributeDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListCalculatedAttributeDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieve a list of calculated attributes for a customer
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListCalculatedAttributesForProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCalculatedAttributesForProfileOutcome ListCalculatedAttributesForProfile(const Model::ListCalculatedAttributesForProfileRequest& request) const;

        /**
         * A Callable wrapper for ListCalculatedAttributesForProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCalculatedAttributesForProfileRequestT = Model::ListCalculatedAttributesForProfileRequest>
        Model::ListCalculatedAttributesForProfileOutcomeCallable ListCalculatedAttributesForProfileCallable(const ListCalculatedAttributesForProfileRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListCalculatedAttributesForProfile, request);
        }

        /**
         * An Async wrapper for ListCalculatedAttributesForProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCalculatedAttributesForProfileRequestT = Model::ListCalculatedAttributesForProfileRequest>
        void ListCalculatedAttributesForProfileAsync(const ListCalculatedAttributesForProfileRequestT& request, const ListCalculatedAttributesForProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListCalculatedAttributesForProfile, request, handler, context);
        }

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
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Returns a list of all the event streams in a specific domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListEventStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventStreamsOutcome ListEventStreams(const Model::ListEventStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListEventStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventStreamsRequestT = Model::ListEventStreamsRequest>
        Model::ListEventStreamsOutcomeCallable ListEventStreamsCallable(const ListEventStreamsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListEventStreams, request);
        }

        /**
         * An Async wrapper for ListEventStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventStreamsRequestT = Model::ListEventStreamsRequest>
        void ListEventStreamsAsync(const ListEventStreamsRequestT& request, const ListEventStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListEventStreams, request, handler, context);
        }

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
        template<typename ListIdentityResolutionJobsRequestT = Model::ListIdentityResolutionJobsRequest>
        Model::ListIdentityResolutionJobsOutcomeCallable ListIdentityResolutionJobsCallable(const ListIdentityResolutionJobsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListIdentityResolutionJobs, request);
        }

        /**
         * An Async wrapper for ListIdentityResolutionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityResolutionJobsRequestT = Model::ListIdentityResolutionJobsRequest>
        void ListIdentityResolutionJobsAsync(const ListIdentityResolutionJobsRequestT& request, const ListIdentityResolutionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListIdentityResolutionJobs, request, handler, context);
        }

        /**
         * <p>Lists all of the integrations in your domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
        Model::ListIntegrationsOutcomeCallable ListIntegrationsCallable(const ListIntegrationsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListIntegrations, request);
        }

        /**
         * An Async wrapper for ListIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
        void ListIntegrationsAsync(const ListIntegrationsRequestT& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListIntegrations, request, handler, context);
        }

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
        template<typename ListProfileObjectTypeTemplatesRequestT = Model::ListProfileObjectTypeTemplatesRequest>
        Model::ListProfileObjectTypeTemplatesOutcomeCallable ListProfileObjectTypeTemplatesCallable(const ListProfileObjectTypeTemplatesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListProfileObjectTypeTemplates, request);
        }

        /**
         * An Async wrapper for ListProfileObjectTypeTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileObjectTypeTemplatesRequestT = Model::ListProfileObjectTypeTemplatesRequest>
        void ListProfileObjectTypeTemplatesAsync(const ListProfileObjectTypeTemplatesRequestT& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListProfileObjectTypeTemplates, request, handler, context);
        }

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
        template<typename ListProfileObjectTypesRequestT = Model::ListProfileObjectTypesRequest>
        Model::ListProfileObjectTypesOutcomeCallable ListProfileObjectTypesCallable(const ListProfileObjectTypesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListProfileObjectTypes, request);
        }

        /**
         * An Async wrapper for ListProfileObjectTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileObjectTypesRequestT = Model::ListProfileObjectTypesRequest>
        void ListProfileObjectTypesAsync(const ListProfileObjectTypesRequestT& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListProfileObjectTypes, request, handler, context);
        }

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
        template<typename ListProfileObjectsRequestT = Model::ListProfileObjectsRequest>
        Model::ListProfileObjectsOutcomeCallable ListProfileObjectsCallable(const ListProfileObjectsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListProfileObjects, request);
        }

        /**
         * An Async wrapper for ListProfileObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfileObjectsRequestT = Model::ListProfileObjectsRequest>
        void ListProfileObjectsAsync(const ListProfileObjectsRequestT& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListProfileObjects, request, handler, context);
        }

        /**
         * <p>Returns a set of <code>MatchIds</code> that belong to the given
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListRuleBasedMatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleBasedMatchesOutcome ListRuleBasedMatches(const Model::ListRuleBasedMatchesRequest& request) const;

        /**
         * A Callable wrapper for ListRuleBasedMatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleBasedMatchesRequestT = Model::ListRuleBasedMatchesRequest>
        Model::ListRuleBasedMatchesOutcomeCallable ListRuleBasedMatchesCallable(const ListRuleBasedMatchesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListRuleBasedMatches, request);
        }

        /**
         * An Async wrapper for ListRuleBasedMatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleBasedMatchesRequestT = Model::ListRuleBasedMatchesRequest>
        void ListRuleBasedMatchesAsync(const ListRuleBasedMatchesRequestT& request, const ListRuleBasedMatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListRuleBasedMatches, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Query to list all workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::ListWorkflows, request, handler, context);
        }

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
        template<typename MergeProfilesRequestT = Model::MergeProfilesRequest>
        Model::MergeProfilesOutcomeCallable MergeProfilesCallable(const MergeProfilesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::MergeProfiles, request);
        }

        /**
         * An Async wrapper for MergeProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MergeProfilesRequestT = Model::MergeProfilesRequest>
        void MergeProfilesAsync(const MergeProfilesRequestT& request, const MergeProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::MergeProfiles, request, handler, context);
        }

        /**
         * <p>Adds an integration between the service and a third-party service, which
         * includes Amazon AppFlow and Amazon Connect.</p> <p>An integration can belong to
         * only one domain.</p> <p>To add or remove tags on an existing Integration, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">
         * TagResource </a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">
         * UntagResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;

        /**
         * A Callable wrapper for PutIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutIntegrationRequestT = Model::PutIntegrationRequest>
        Model::PutIntegrationOutcomeCallable PutIntegrationCallable(const PutIntegrationRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::PutIntegration, request);
        }

        /**
         * An Async wrapper for PutIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutIntegrationRequestT = Model::PutIntegrationRequest>
        void PutIntegrationAsync(const PutIntegrationRequestT& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::PutIntegration, request, handler, context);
        }

        /**
         * <p>Adds additional objects to customer profiles of a given ObjectType.</p>
         * <p>When adding a specific profile object, like a Contact Record, an inferred
         * profile can get created if it is not mapped to an existing profile. The
         * resulting profile will only have a phone number populated in the standard
         * ProfileObject. Any additional Contact Records with the same phone number will be
         * mapped to the same inferred profile.</p> <p>When a ProfileObject is created and
         * if a ProfileObjectType already exists for the ProfileObject, it will provide
         * data to a standard profile depending on the ProfileObjectType definition.</p>
         * <p>PutProfileObject needs an ObjectType, which can be created using
         * PutProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectOutcome PutProfileObject(const Model::PutProfileObjectRequest& request) const;

        /**
         * A Callable wrapper for PutProfileObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProfileObjectRequestT = Model::PutProfileObjectRequest>
        Model::PutProfileObjectOutcomeCallable PutProfileObjectCallable(const PutProfileObjectRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::PutProfileObject, request);
        }

        /**
         * An Async wrapper for PutProfileObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProfileObjectRequestT = Model::PutProfileObjectRequest>
        void PutProfileObjectAsync(const PutProfileObjectRequestT& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::PutProfileObject, request, handler, context);
        }

        /**
         * <p>Defines a ProfileObjectType.</p> <p>To add or remove tags on an existing
         * ObjectType, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">
         * TagResource</a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectTypeOutcome PutProfileObjectType(const Model::PutProfileObjectTypeRequest& request) const;

        /**
         * A Callable wrapper for PutProfileObjectType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProfileObjectTypeRequestT = Model::PutProfileObjectTypeRequest>
        Model::PutProfileObjectTypeOutcomeCallable PutProfileObjectTypeCallable(const PutProfileObjectTypeRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::PutProfileObjectType, request);
        }

        /**
         * An Async wrapper for PutProfileObjectType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProfileObjectTypeRequestT = Model::PutProfileObjectTypeRequest>
        void PutProfileObjectTypeAsync(const PutProfileObjectTypeRequestT& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::PutProfileObjectType, request, handler, context);
        }

        /**
         * <p>Searches for profiles within a specific domain using one or more predefined
         * search keys (e.g., _fullName, _phone, _email, _account, etc.) and/or
         * custom-defined search keys. A search key is a data type pair that consists of a
         * <code>KeyName</code> and <code>Values</code> list.</p> <p>This operation
         * supports searching for profiles with a minimum of 1 key-value(s) pair and up to
         * 5 key-value(s) pairs using either <code>AND</code> or <code>OR</code>
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchProfilesRequestT = Model::SearchProfilesRequest>
        Model::SearchProfilesOutcomeCallable SearchProfilesCallable(const SearchProfilesRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::SearchProfiles, request);
        }

        /**
         * An Async wrapper for SearchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchProfilesRequestT = Model::SearchProfilesRequest>
        void SearchProfilesAsync(const SearchProfilesRequestT& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::SearchProfiles, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing calculated attribute definition. When updating the
         * Conditions, note that increasing the date range of a calculated attribute will
         * not trigger inclusion of historical data greater than the current date
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateCalculatedAttributeDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCalculatedAttributeDefinitionOutcome UpdateCalculatedAttributeDefinition(const Model::UpdateCalculatedAttributeDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCalculatedAttributeDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCalculatedAttributeDefinitionRequestT = Model::UpdateCalculatedAttributeDefinitionRequest>
        Model::UpdateCalculatedAttributeDefinitionOutcomeCallable UpdateCalculatedAttributeDefinitionCallable(const UpdateCalculatedAttributeDefinitionRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::UpdateCalculatedAttributeDefinition, request);
        }

        /**
         * An Async wrapper for UpdateCalculatedAttributeDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCalculatedAttributeDefinitionRequestT = Model::UpdateCalculatedAttributeDefinitionRequest>
        void UpdateCalculatedAttributeDefinitionAsync(const UpdateCalculatedAttributeDefinitionRequestT& request, const UpdateCalculatedAttributeDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::UpdateCalculatedAttributeDefinition, request, handler, context);
        }

        /**
         * <p>Updates the properties of a domain, including creating or selecting a dead
         * letter queue or an encryption key.</p> <p>After a domain is created, the name
         * can’t be changed.</p> <p>Use this API or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * to enable <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">identity
         * resolution</a>: set <code>Matching</code> to true.</p> <p>To prevent
         * cross-service impersonation when you call this API, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html">Cross-service
         * confused deputy prevention</a> for sample policies that you should apply. </p>
         * <p>To add or remove tags on an existing Domain, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">TagResource</a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const UpdateDomainRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::UpdateDomain, request);
        }

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        void UpdateDomainAsync(const UpdateDomainRequestT& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::UpdateDomain, request, handler, context);
        }

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
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&CustomerProfilesClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CustomerProfilesClient::UpdateProfile, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CustomerProfilesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CustomerProfilesClient>;
      void init(const CustomerProfilesClientConfiguration& clientConfiguration);

      CustomerProfilesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CustomerProfilesEndpointProviderBase> m_endpointProvider;
  };

} // namespace CustomerProfiles
} // namespace Aws
