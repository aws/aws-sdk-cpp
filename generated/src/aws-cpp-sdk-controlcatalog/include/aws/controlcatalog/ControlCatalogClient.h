/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>

namespace Aws
{
namespace ControlCatalog
{
  /**
   * <p>Welcome to the Amazon Web Services Control Catalog API reference. This guide
   * is for developers who need detailed information about how to programmatically
   * identify and filter the common controls and related metadata that are available
   * to Amazon Web Services customers. This API reference provides descriptions,
   * syntax, and usage examples for each of the actions and data types that are
   * supported by Amazon Web Services Control Catalog. </p> <p>Use the following
   * links to get started with the Amazon Web Services Control Catalog API:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_Operations.html">Actions</a>:
   * An alphabetical list of all Control Catalog API operations.</p> </li> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_Types.html">Data
   * types</a>: An alphabetical list of all Control Catalog data types.</p> </li>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/CommonParameters.html">Common
   * parameters</a>: Parameters that all operations can use.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/CommonErrors.html">Common
   * errors</a>: Client and server errors that all operations can return.</p> </li>
   * </ul>
   */
  class AWS_CONTROLCATALOG_API ControlCatalogClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ControlCatalogClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ControlCatalogClientConfiguration ClientConfigurationType;
      typedef ControlCatalogEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlCatalogClient(const Aws::ControlCatalog::ControlCatalogClientConfiguration& clientConfiguration = Aws::ControlCatalog::ControlCatalogClientConfiguration(),
                             std::shared_ptr<ControlCatalogEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ControlCatalogEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ControlCatalog::ControlCatalogClientConfiguration& clientConfiguration = Aws::ControlCatalog::ControlCatalogClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ControlCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ControlCatalogEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ControlCatalog::ControlCatalogClientConfiguration& clientConfiguration = Aws::ControlCatalog::ControlCatalogClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ControlCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ControlCatalogClient();

        /**
         * <p>Returns a paginated list of common controls from the Amazon Web Services
         * Control Catalog.</p> <p>You can apply an optional filter to see common controls
         * that have a specific objective. If you don’t provide a filter, the operation
         * returns all common controls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListCommonControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommonControlsOutcome ListCommonControls(const Model::ListCommonControlsRequest& request) const;

        /**
         * A Callable wrapper for ListCommonControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCommonControlsRequestT = Model::ListCommonControlsRequest>
        Model::ListCommonControlsOutcomeCallable ListCommonControlsCallable(const ListCommonControlsRequestT& request) const
        {
            return SubmitCallable(&ControlCatalogClient::ListCommonControls, request);
        }

        /**
         * An Async wrapper for ListCommonControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCommonControlsRequestT = Model::ListCommonControlsRequest>
        void ListCommonControlsAsync(const ListCommonControlsRequestT& request, const ListCommonControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlCatalogClient::ListCommonControls, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of domains from the Amazon Web Services Control
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&ControlCatalogClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlCatalogClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of objectives from the Amazon Web Services Control
         * Catalog.</p> <p>You can apply an optional filter to see the objectives that
         * belong to a specific domain. If you don’t provide a filter, the operation
         * returns all objectives. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListObjectives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectivesOutcome ListObjectives(const Model::ListObjectivesRequest& request) const;

        /**
         * A Callable wrapper for ListObjectives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectivesRequestT = Model::ListObjectivesRequest>
        Model::ListObjectivesOutcomeCallable ListObjectivesCallable(const ListObjectivesRequestT& request) const
        {
            return SubmitCallable(&ControlCatalogClient::ListObjectives, request);
        }

        /**
         * An Async wrapper for ListObjectives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectivesRequestT = Model::ListObjectivesRequest>
        void ListObjectivesAsync(const ListObjectivesRequestT& request, const ListObjectivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlCatalogClient::ListObjectives, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ControlCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ControlCatalogClient>;
      void init(const ControlCatalogClientConfiguration& clientConfiguration);

      ControlCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ControlCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace ControlCatalog
} // namespace Aws
