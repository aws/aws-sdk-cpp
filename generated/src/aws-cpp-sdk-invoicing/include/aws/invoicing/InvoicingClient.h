/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/InvoicingServiceClientModel.h>

namespace Aws
{
namespace Invoicing
{
  /**
   * <p> <b>Amazon Web Services Invoice Configuration</b> </p> <p>You can use Amazon
   * Web Services Invoice Configuration APIs to programmatically create, update,
   * delete, get, and list invoice units. You can also programmatically fetch the
   * information of the invoice receiver. For example, business legal name, address,
   * and invoicing contacts. </p> <p>You can use Amazon Web Services Invoice
   * Configuration to receive separate Amazon Web Services invoices based your
   * organizational needs. By using Amazon Web Services Invoice Configuration, you
   * can configure invoice units that are groups of Amazon Web Services accounts that
   * represent your business entities, and receive separate invoices for each
   * business entity. You can also assign a unique member or payer account as the
   * invoice receiver for each invoice unit. As you create new accounts within your
   * Organizations using Amazon Web Services Invoice Configuration APIs, you can
   * automate the creation of new invoice units and subsequently automate the
   * addition of new accounts to your invoice units.</p> <p>Service endpoint</p>
   * <p>You can use the following endpoints for Amazon Web Services Invoice
   * Configuration:</p> <ul> <li> <p>
   * <code>https://invoicing.us-east-1.api.aws</code> </p> </li> </ul>
   */
  class AWS_INVOICING_API InvoicingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<InvoicingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef InvoicingClientConfiguration ClientConfigurationType;
      typedef InvoicingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InvoicingClient(const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration(),
                        std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InvoicingClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InvoicingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<InvoicingEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Invoicing::InvoicingClientConfiguration& clientConfiguration = Aws::Invoicing::InvoicingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InvoicingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InvoicingClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InvoicingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~InvoicingClient();

        /**
         * <p>This gets the invoice profile associated with a set of accounts. The accounts
         * must be linked accounts under the requester management account
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/BatchGetInvoiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetInvoiceProfileOutcome BatchGetInvoiceProfile(const Model::BatchGetInvoiceProfileRequest& request) const;

        /**
         * A Callable wrapper for BatchGetInvoiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetInvoiceProfileRequestT = Model::BatchGetInvoiceProfileRequest>
        Model::BatchGetInvoiceProfileOutcomeCallable BatchGetInvoiceProfileCallable(const BatchGetInvoiceProfileRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::BatchGetInvoiceProfile, request);
        }

        /**
         * An Async wrapper for BatchGetInvoiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetInvoiceProfileRequestT = Model::BatchGetInvoiceProfileRequest>
        void BatchGetInvoiceProfileAsync(const BatchGetInvoiceProfileRequestT& request, const BatchGetInvoiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::BatchGetInvoiceProfile, request, handler, context);
        }

        /**
         * <p>This creates a new invoice unit with the provided definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/CreateInvoiceUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvoiceUnitOutcome CreateInvoiceUnit(const Model::CreateInvoiceUnitRequest& request) const;

        /**
         * A Callable wrapper for CreateInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInvoiceUnitRequestT = Model::CreateInvoiceUnitRequest>
        Model::CreateInvoiceUnitOutcomeCallable CreateInvoiceUnitCallable(const CreateInvoiceUnitRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::CreateInvoiceUnit, request);
        }

        /**
         * An Async wrapper for CreateInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInvoiceUnitRequestT = Model::CreateInvoiceUnitRequest>
        void CreateInvoiceUnitAsync(const CreateInvoiceUnitRequestT& request, const CreateInvoiceUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::CreateInvoiceUnit, request, handler, context);
        }

        /**
         * <p>This deletes an invoice unit with the provided invoice unit ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/DeleteInvoiceUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvoiceUnitOutcome DeleteInvoiceUnit(const Model::DeleteInvoiceUnitRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInvoiceUnitRequestT = Model::DeleteInvoiceUnitRequest>
        Model::DeleteInvoiceUnitOutcomeCallable DeleteInvoiceUnitCallable(const DeleteInvoiceUnitRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::DeleteInvoiceUnit, request);
        }

        /**
         * An Async wrapper for DeleteInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvoiceUnitRequestT = Model::DeleteInvoiceUnitRequest>
        void DeleteInvoiceUnitAsync(const DeleteInvoiceUnitRequestT& request, const DeleteInvoiceUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::DeleteInvoiceUnit, request, handler, context);
        }

        /**
         * <p>This retrieves the invoice unit definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/GetInvoiceUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvoiceUnitOutcome GetInvoiceUnit(const Model::GetInvoiceUnitRequest& request) const;

        /**
         * A Callable wrapper for GetInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvoiceUnitRequestT = Model::GetInvoiceUnitRequest>
        Model::GetInvoiceUnitOutcomeCallable GetInvoiceUnitCallable(const GetInvoiceUnitRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::GetInvoiceUnit, request);
        }

        /**
         * An Async wrapper for GetInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvoiceUnitRequestT = Model::GetInvoiceUnitRequest>
        void GetInvoiceUnitAsync(const GetInvoiceUnitRequestT& request, const GetInvoiceUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::GetInvoiceUnit, request, handler, context);
        }

        /**
         * <p>Retrieves your invoice details programmatically, without line item
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListInvoiceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvoiceSummariesOutcome ListInvoiceSummaries(const Model::ListInvoiceSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListInvoiceSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvoiceSummariesRequestT = Model::ListInvoiceSummariesRequest>
        Model::ListInvoiceSummariesOutcomeCallable ListInvoiceSummariesCallable(const ListInvoiceSummariesRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::ListInvoiceSummaries, request);
        }

        /**
         * An Async wrapper for ListInvoiceSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvoiceSummariesRequestT = Model::ListInvoiceSummariesRequest>
        void ListInvoiceSummariesAsync(const ListInvoiceSummariesRequestT& request, const ListInvoiceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::ListInvoiceSummaries, request, handler, context);
        }

        /**
         * <p>This fetches a list of all invoice unit definitions for a given account, as
         * of the provided <code>AsOf</code> date.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListInvoiceUnits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvoiceUnitsOutcome ListInvoiceUnits(const Model::ListInvoiceUnitsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInvoiceUnits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvoiceUnitsRequestT = Model::ListInvoiceUnitsRequest>
        Model::ListInvoiceUnitsOutcomeCallable ListInvoiceUnitsCallable(const ListInvoiceUnitsRequestT& request = {}) const
        {
            return SubmitCallable(&InvoicingClient::ListInvoiceUnits, request);
        }

        /**
         * An Async wrapper for ListInvoiceUnits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvoiceUnitsRequestT = Model::ListInvoiceUnitsRequest>
        void ListInvoiceUnitsAsync(const ListInvoiceUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInvoiceUnitsRequestT& request = {}) const
        {
            return SubmitAsync(&InvoicingClient::ListInvoiceUnits, request, handler, context);
        }

        /**
         * <p>Lists the tags for a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::TagResource, request, handler, context);
        }

        /**
         * <p> Removes a tag from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>You can update the invoice unit configuration at any time, and Amazon Web
         * Services will use the latest configuration at the end of the
         * month.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/UpdateInvoiceUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInvoiceUnitOutcome UpdateInvoiceUnit(const Model::UpdateInvoiceUnitRequest& request) const;

        /**
         * A Callable wrapper for UpdateInvoiceUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInvoiceUnitRequestT = Model::UpdateInvoiceUnitRequest>
        Model::UpdateInvoiceUnitOutcomeCallable UpdateInvoiceUnitCallable(const UpdateInvoiceUnitRequestT& request) const
        {
            return SubmitCallable(&InvoicingClient::UpdateInvoiceUnit, request);
        }

        /**
         * An Async wrapper for UpdateInvoiceUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInvoiceUnitRequestT = Model::UpdateInvoiceUnitRequest>
        void UpdateInvoiceUnitAsync(const UpdateInvoiceUnitRequestT& request, const UpdateInvoiceUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InvoicingClient::UpdateInvoiceUnit, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<InvoicingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<InvoicingClient>;
      void init(const InvoicingClientConfiguration& clientConfiguration);

      InvoicingClientConfiguration m_clientConfiguration;
      std::shared_ptr<InvoicingEndpointProviderBase> m_endpointProvider;
  };

} // namespace Invoicing
} // namespace Aws
