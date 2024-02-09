/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/b2bi/B2BIServiceClientModel.h>

namespace Aws
{
namespace B2BI
{
  /**
   * <p>This is the <i>Amazon Web Services B2B Data Interchange API Reference</i>. It
   * provides descriptions, API request parameters, and the XML response for each of
   * the B2BI API actions.</p> <p>B2BI enables automated exchange of EDI (electronic
   * data interchange) based business-critical transactions at cloud scale, with
   * elasticity and pay-as-you-go pricing. Businesses use EDI documents to exchange
   * transactional data with trading partners, such as suppliers and end customers,
   * using standardized formats such as X12.</p>  <p>Rather than actually
   * running a command, you can use the <code>--generate-cli-skeleton</code>
   * parameter with any API call to generate and display a parameter template. You
   * can then use the generated template to customize and use as input on a later
   * command. For details, see <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-skeleton.html#cli-usage-skeleton-generate">Generate
   * and use a parameter skeleton file</a>.</p> 
   */
  class AWS_B2BI_API B2BIClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<B2BIClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef B2BIClientConfiguration ClientConfigurationType;
      typedef B2BIEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        B2BIClient(const Aws::B2BI::B2BIClientConfiguration& clientConfiguration = Aws::B2BI::B2BIClientConfiguration(),
                   std::shared_ptr<B2BIEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        B2BIClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<B2BIEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::B2BI::B2BIClientConfiguration& clientConfiguration = Aws::B2BI::B2BIClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        B2BIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<B2BIEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::B2BI::B2BIClientConfiguration& clientConfiguration = Aws::B2BI::B2BIClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        B2BIClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        B2BIClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        B2BIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~B2BIClient();

        /**
         * <p>Instantiates a capability based on the specified parameters. A trading
         * capability contains the information required to transform incoming EDI documents
         * into JSON or XML outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CreateCapability">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCapabilityOutcome CreateCapability(const Model::CreateCapabilityRequest& request) const;

        /**
         * A Callable wrapper for CreateCapability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCapabilityRequestT = Model::CreateCapabilityRequest>
        Model::CreateCapabilityOutcomeCallable CreateCapabilityCallable(const CreateCapabilityRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::CreateCapability, request);
        }

        /**
         * An Async wrapper for CreateCapability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCapabilityRequestT = Model::CreateCapabilityRequest>
        void CreateCapabilityAsync(const CreateCapabilityRequestT& request, const CreateCapabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::CreateCapability, request, handler, context);
        }

        /**
         * <p>Creates a partnership between a customer and a trading partner, based on the
         * supplied parameters. A partnership represents the connection between you and
         * your trading partner. It ties together a profile and one or more trading
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CreatePartnership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnershipOutcome CreatePartnership(const Model::CreatePartnershipRequest& request) const;

        /**
         * A Callable wrapper for CreatePartnership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePartnershipRequestT = Model::CreatePartnershipRequest>
        Model::CreatePartnershipOutcomeCallable CreatePartnershipCallable(const CreatePartnershipRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::CreatePartnership, request);
        }

        /**
         * An Async wrapper for CreatePartnership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePartnershipRequestT = Model::CreatePartnershipRequest>
        void CreatePartnershipAsync(const CreatePartnershipRequestT& request, const CreatePartnershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::CreatePartnership, request, handler, context);
        }

        /**
         * <p>Creates a customer profile. You can have up to five customer profiles, each
         * representing a distinct private network. A profile is the mechanism used to
         * create the concept of a private network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        Model::CreateProfileOutcomeCallable CreateProfileCallable(const CreateProfileRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::CreateProfile, request);
        }

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProfileRequestT = Model::CreateProfileRequest>
        void CreateProfileAsync(const CreateProfileRequestT& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::CreateProfile, request, handler, context);
        }

        /**
         * <p>Creates a transformer. A transformer describes how to process the incoming
         * EDI documents and extract the necessary information to the output
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CreateTransformer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransformerOutcome CreateTransformer(const Model::CreateTransformerRequest& request) const;

        /**
         * A Callable wrapper for CreateTransformer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTransformerRequestT = Model::CreateTransformerRequest>
        Model::CreateTransformerOutcomeCallable CreateTransformerCallable(const CreateTransformerRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::CreateTransformer, request);
        }

        /**
         * An Async wrapper for CreateTransformer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTransformerRequestT = Model::CreateTransformerRequest>
        void CreateTransformerAsync(const CreateTransformerRequestT& request, const CreateTransformerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::CreateTransformer, request, handler, context);
        }

        /**
         * <p>Deletes the specified capability. A trading capability contains the
         * information required to transform incoming EDI documents into JSON or XML
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/DeleteCapability">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCapabilityOutcome DeleteCapability(const Model::DeleteCapabilityRequest& request) const;

        /**
         * A Callable wrapper for DeleteCapability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCapabilityRequestT = Model::DeleteCapabilityRequest>
        Model::DeleteCapabilityOutcomeCallable DeleteCapabilityCallable(const DeleteCapabilityRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::DeleteCapability, request);
        }

        /**
         * An Async wrapper for DeleteCapability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCapabilityRequestT = Model::DeleteCapabilityRequest>
        void DeleteCapabilityAsync(const DeleteCapabilityRequestT& request, const DeleteCapabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::DeleteCapability, request, handler, context);
        }

        /**
         * <p>Deletes the specified partnership. A partnership represents the connection
         * between you and your trading partner. It ties together a profile and one or more
         * trading capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/DeletePartnership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartnershipOutcome DeletePartnership(const Model::DeletePartnershipRequest& request) const;

        /**
         * A Callable wrapper for DeletePartnership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePartnershipRequestT = Model::DeletePartnershipRequest>
        Model::DeletePartnershipOutcomeCallable DeletePartnershipCallable(const DeletePartnershipRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::DeletePartnership, request);
        }

        /**
         * An Async wrapper for DeletePartnership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePartnershipRequestT = Model::DeletePartnershipRequest>
        void DeletePartnershipAsync(const DeletePartnershipRequestT& request, const DeletePartnershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::DeletePartnership, request, handler, context);
        }

        /**
         * <p>Deletes the specified profile. A profile is the mechanism used to create the
         * concept of a private network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const DeleteProfileRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::DeleteProfile, request);
        }

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProfileRequestT = Model::DeleteProfileRequest>
        void DeleteProfileAsync(const DeleteProfileRequestT& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::DeleteProfile, request, handler, context);
        }

        /**
         * <p>Deletes the specified transformer. A transformer describes how to process the
         * incoming EDI documents and extract the necessary information to the output
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/DeleteTransformer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTransformerOutcome DeleteTransformer(const Model::DeleteTransformerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTransformer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTransformerRequestT = Model::DeleteTransformerRequest>
        Model::DeleteTransformerOutcomeCallable DeleteTransformerCallable(const DeleteTransformerRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::DeleteTransformer, request);
        }

        /**
         * An Async wrapper for DeleteTransformer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTransformerRequestT = Model::DeleteTransformerRequest>
        void DeleteTransformerAsync(const DeleteTransformerRequestT& request, const DeleteTransformerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::DeleteTransformer, request, handler, context);
        }

        /**
         * <p>Retrieves the details for the specified capability. A trading capability
         * contains the information required to transform incoming EDI documents into JSON
         * or XML outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/GetCapability">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCapabilityOutcome GetCapability(const Model::GetCapabilityRequest& request) const;

        /**
         * A Callable wrapper for GetCapability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCapabilityRequestT = Model::GetCapabilityRequest>
        Model::GetCapabilityOutcomeCallable GetCapabilityCallable(const GetCapabilityRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::GetCapability, request);
        }

        /**
         * An Async wrapper for GetCapability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCapabilityRequestT = Model::GetCapabilityRequest>
        void GetCapabilityAsync(const GetCapabilityRequestT& request, const GetCapabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::GetCapability, request, handler, context);
        }

        /**
         * <p>Retrieves the details for a partnership, based on the partner and profile IDs
         * specified. A partnership represents the connection between you and your trading
         * partner. It ties together a profile and one or more trading
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/GetPartnership">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartnershipOutcome GetPartnership(const Model::GetPartnershipRequest& request) const;

        /**
         * A Callable wrapper for GetPartnership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPartnershipRequestT = Model::GetPartnershipRequest>
        Model::GetPartnershipOutcomeCallable GetPartnershipCallable(const GetPartnershipRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::GetPartnership, request);
        }

        /**
         * An Async wrapper for GetPartnership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPartnershipRequestT = Model::GetPartnershipRequest>
        void GetPartnershipAsync(const GetPartnershipRequestT& request, const GetPartnershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::GetPartnership, request, handler, context);
        }

        /**
         * <p>Retrieves the details for the profile specified by the profile ID. A profile
         * is the mechanism used to create the concept of a private network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/GetProfile">AWS API
         * Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        Model::GetProfileOutcomeCallable GetProfileCallable(const GetProfileRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::GetProfile, request);
        }

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProfileRequestT = Model::GetProfileRequest>
        void GetProfileAsync(const GetProfileRequestT& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::GetProfile, request, handler, context);
        }

        /**
         * <p>Retrieves the details for the transformer specified by the transformer ID. A
         * transformer describes how to process the incoming EDI documents and extract the
         * necessary information to the output file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/GetTransformer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransformerOutcome GetTransformer(const Model::GetTransformerRequest& request) const;

        /**
         * A Callable wrapper for GetTransformer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransformerRequestT = Model::GetTransformerRequest>
        Model::GetTransformerOutcomeCallable GetTransformerCallable(const GetTransformerRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::GetTransformer, request);
        }

        /**
         * An Async wrapper for GetTransformer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransformerRequestT = Model::GetTransformerRequest>
        void GetTransformerAsync(const GetTransformerRequestT& request, const GetTransformerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::GetTransformer, request, handler, context);
        }

        /**
         * <p>Returns the details of the transformer run, based on the Transformer job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/GetTransformerJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransformerJobOutcome GetTransformerJob(const Model::GetTransformerJobRequest& request) const;

        /**
         * A Callable wrapper for GetTransformerJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTransformerJobRequestT = Model::GetTransformerJobRequest>
        Model::GetTransformerJobOutcomeCallable GetTransformerJobCallable(const GetTransformerJobRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::GetTransformerJob, request);
        }

        /**
         * An Async wrapper for GetTransformerJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTransformerJobRequestT = Model::GetTransformerJobRequest>
        void GetTransformerJobAsync(const GetTransformerJobRequestT& request, const GetTransformerJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::GetTransformerJob, request, handler, context);
        }

        /**
         * <p>Lists the capabilities associated with your Amazon Web Services account for
         * your current or specified region. A trading capability contains the information
         * required to transform incoming EDI documents into JSON or XML
         * outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ListCapabilities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCapabilitiesOutcome ListCapabilities(const Model::ListCapabilitiesRequest& request) const;

        /**
         * A Callable wrapper for ListCapabilities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCapabilitiesRequestT = Model::ListCapabilitiesRequest>
        Model::ListCapabilitiesOutcomeCallable ListCapabilitiesCallable(const ListCapabilitiesRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::ListCapabilities, request);
        }

        /**
         * An Async wrapper for ListCapabilities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCapabilitiesRequestT = Model::ListCapabilitiesRequest>
        void ListCapabilitiesAsync(const ListCapabilitiesRequestT& request, const ListCapabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::ListCapabilities, request, handler, context);
        }

        /**
         * <p>Lists the partnerships associated with your Amazon Web Services account for
         * your current or specified region. A partnership represents the connection
         * between you and your trading partner. It ties together a profile and one or more
         * trading capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ListPartnerships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnershipsOutcome ListPartnerships(const Model::ListPartnershipsRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPartnershipsRequestT = Model::ListPartnershipsRequest>
        Model::ListPartnershipsOutcomeCallable ListPartnershipsCallable(const ListPartnershipsRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::ListPartnerships, request);
        }

        /**
         * An Async wrapper for ListPartnerships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPartnershipsRequestT = Model::ListPartnershipsRequest>
        void ListPartnershipsAsync(const ListPartnershipsRequestT& request, const ListPartnershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::ListPartnerships, request, handler, context);
        }

        /**
         * <p>Lists the profiles associated with your Amazon Web Services account for your
         * current or specified region. A profile is the mechanism used to create the
         * concept of a private network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        Model::ListProfilesOutcomeCallable ListProfilesCallable(const ListProfilesRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::ListProfiles, request);
        }

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProfilesRequestT = Model::ListProfilesRequest>
        void ListProfilesAsync(const ListProfilesRequestT& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::ListProfiles, request, handler, context);
        }

        /**
         * <p>Lists all of the tags associated with the Amazon Resource Name (ARN) that you
         * specify. The resource can be a capability, partnership, profile, or
         * transformer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the available transformers. A transformer describes how to process the
         * incoming EDI documents and extract the necessary information to the output
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ListTransformers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransformersOutcome ListTransformers(const Model::ListTransformersRequest& request) const;

        /**
         * A Callable wrapper for ListTransformers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTransformersRequestT = Model::ListTransformersRequest>
        Model::ListTransformersOutcomeCallable ListTransformersCallable(const ListTransformersRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::ListTransformers, request);
        }

        /**
         * An Async wrapper for ListTransformers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTransformersRequestT = Model::ListTransformersRequest>
        void ListTransformersAsync(const ListTransformersRequestT& request, const ListTransformersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::ListTransformers, request, handler, context);
        }

        /**
         * <p>Runs a job, using a transformer, to parse input EDI (electronic data
         * interchange) file into the output structures used by Amazon Web Services B2BI
         * Data Interchange.</p> <p>If you only want to transform EDI (electronic data
         * interchange) documents, you don't need to create profiles, partnerships or
         * capabilities. Just create and configure a transformer, and then run the
         * <code>StartTransformerJob</code> API to process your files.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/StartTransformerJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTransformerJobOutcome StartTransformerJob(const Model::StartTransformerJobRequest& request) const;

        /**
         * A Callable wrapper for StartTransformerJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTransformerJobRequestT = Model::StartTransformerJobRequest>
        Model::StartTransformerJobOutcomeCallable StartTransformerJobCallable(const StartTransformerJobRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::StartTransformerJob, request);
        }

        /**
         * An Async wrapper for StartTransformerJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTransformerJobRequestT = Model::StartTransformerJobRequest>
        void StartTransformerJobAsync(const StartTransformerJobRequestT& request, const StartTransformerJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::StartTransformerJob, request, handler, context);
        }

        /**
         * <p>Attaches a key-value pair to a resource, as identified by its Amazon Resource
         * Name (ARN). Resources are capability, partnership, profile, transformers and
         * other entities.</p> <p>There is no response returned from this
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::TagResource, request, handler, context);
        }

        /**
         * <p>Maps the input file according to the provided template file. The API call
         * downloads the file contents from the Amazon S3 location, and passes the contents
         * in as a string, to the <code>inputFileContent</code> parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/TestMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::TestMappingOutcome TestMapping(const Model::TestMappingRequest& request) const;

        /**
         * A Callable wrapper for TestMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestMappingRequestT = Model::TestMappingRequest>
        Model::TestMappingOutcomeCallable TestMappingCallable(const TestMappingRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::TestMapping, request);
        }

        /**
         * An Async wrapper for TestMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestMappingRequestT = Model::TestMappingRequest>
        void TestMappingAsync(const TestMappingRequestT& request, const TestMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::TestMapping, request, handler, context);
        }

        /**
         * <p>Parses the input EDI (electronic data interchange) file. The input file has a
         * file size limit of 250 KB.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/TestParsing">AWS
         * API Reference</a></p>
         */
        virtual Model::TestParsingOutcome TestParsing(const Model::TestParsingRequest& request) const;

        /**
         * A Callable wrapper for TestParsing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestParsingRequestT = Model::TestParsingRequest>
        Model::TestParsingOutcomeCallable TestParsingCallable(const TestParsingRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::TestParsing, request);
        }

        /**
         * An Async wrapper for TestParsing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestParsingRequestT = Model::TestParsingRequest>
        void TestParsingAsync(const TestParsingRequestT& request, const TestParsingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::TestParsing, request, handler, context);
        }

        /**
         * <p>Detaches a key-value pair from the specified resource, as identified by its
         * Amazon Resource Name (ARN). Resources are capability, partnership, profile,
         * transformers and other entities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates some of the parameters for a capability, based on the specified
         * parameters. A trading capability contains the information required to transform
         * incoming EDI documents into JSON or XML outputs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/UpdateCapability">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCapabilityOutcome UpdateCapability(const Model::UpdateCapabilityRequest& request) const;

        /**
         * A Callable wrapper for UpdateCapability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCapabilityRequestT = Model::UpdateCapabilityRequest>
        Model::UpdateCapabilityOutcomeCallable UpdateCapabilityCallable(const UpdateCapabilityRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::UpdateCapability, request);
        }

        /**
         * An Async wrapper for UpdateCapability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCapabilityRequestT = Model::UpdateCapabilityRequest>
        void UpdateCapabilityAsync(const UpdateCapabilityRequestT& request, const UpdateCapabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::UpdateCapability, request, handler, context);
        }

        /**
         * <p>Updates some of the parameters for a partnership between a customer and
         * trading partner. A partnership represents the connection between you and your
         * trading partner. It ties together a profile and one or more trading
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/UpdatePartnership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnershipOutcome UpdatePartnership(const Model::UpdatePartnershipRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartnership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePartnershipRequestT = Model::UpdatePartnershipRequest>
        Model::UpdatePartnershipOutcomeCallable UpdatePartnershipCallable(const UpdatePartnershipRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::UpdatePartnership, request);
        }

        /**
         * An Async wrapper for UpdatePartnership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePartnershipRequestT = Model::UpdatePartnershipRequest>
        void UpdatePartnershipAsync(const UpdatePartnershipRequestT& request, const UpdatePartnershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::UpdatePartnership, request, handler, context);
        }

        /**
         * <p>Updates the specified parameters for a profile. A profile is the mechanism
         * used to create the concept of a private network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const UpdateProfileRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::UpdateProfile, request);
        }

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProfileRequestT = Model::UpdateProfileRequest>
        void UpdateProfileAsync(const UpdateProfileRequestT& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::UpdateProfile, request, handler, context);
        }

        /**
         * <p>Updates the specified parameters for a transformer. A transformer describes
         * how to process the incoming EDI documents and extract the necessary information
         * to the output file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/UpdateTransformer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTransformerOutcome UpdateTransformer(const Model::UpdateTransformerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTransformer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTransformerRequestT = Model::UpdateTransformerRequest>
        Model::UpdateTransformerOutcomeCallable UpdateTransformerCallable(const UpdateTransformerRequestT& request) const
        {
            return SubmitCallable(&B2BIClient::UpdateTransformer, request);
        }

        /**
         * An Async wrapper for UpdateTransformer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTransformerRequestT = Model::UpdateTransformerRequest>
        void UpdateTransformerAsync(const UpdateTransformerRequestT& request, const UpdateTransformerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&B2BIClient::UpdateTransformer, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<B2BIEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<B2BIClient>;
      void init(const B2BIClientConfiguration& clientConfiguration);

      B2BIClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<B2BIEndpointProviderBase> m_endpointProvider;
  };

} // namespace B2BI
} // namespace Aws
