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
   * <p>Welcome to the Control Catalog API reference. This guide is for developers
   * who need detailed information about how to programmatically identify and filter
   * the common controls and related metadata that are available to Amazon Web
   * Services customers. This API reference provides descriptions, syntax, and usage
   * examples for each of the actions and data types that are supported by Control
   * Catalog. </p> <p>Use the following links to get started with the Control Catalog
   * API:</p> <ul> <li> <p> <a
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
         * <p>Returns details about a specific control, most notably a list of Amazon Web
         * Services Regions where this control is supported. Input a value for the
         * <i>ControlArn</i> parameter, in ARN form. <code>GetControl</code> accepts
         * <i>controltower</i> or <i>controlcatalog</i> control ARNs as input. Returns a
         * <i>controlcatalog</i> ARN format.</p> <p>In the API response, controls that have
         * the value <code>GLOBAL</code> in the <code>Scope</code> field do not show the
         * <code>DeployableRegions</code> field, because it does not apply. Controls that
         * have the value <code>REGIONAL</code> in the <code>Scope</code> field return a
         * value for the <code>DeployableRegions</code> field, as shown in the
         * example.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/GetControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOutcome GetControl(const Model::GetControlRequest& request) const;

        /**
         * A Callable wrapper for GetControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetControlRequestT = Model::GetControlRequest>
        Model::GetControlOutcomeCallable GetControlCallable(const GetControlRequestT& request) const
        {
            return SubmitCallable(&ControlCatalogClient::GetControl, request);
        }

        /**
         * An Async wrapper for GetControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetControlRequestT = Model::GetControlRequest>
        void GetControlAsync(const GetControlRequestT& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlCatalogClient::GetControl, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of common controls from the Amazon Web Services
         * Control Catalog.</p> <p>You can apply an optional filter to see common controls
         * that have a specific objective. If you don’t provide a filter, the operation
         * returns all common controls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListCommonControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCommonControlsOutcome ListCommonControls(const Model::ListCommonControlsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCommonControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCommonControlsRequestT = Model::ListCommonControlsRequest>
        Model::ListCommonControlsOutcomeCallable ListCommonControlsCallable(const ListCommonControlsRequestT& request = {}) const
        {
            return SubmitCallable(&ControlCatalogClient::ListCommonControls, request);
        }

        /**
         * An Async wrapper for ListCommonControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCommonControlsRequestT = Model::ListCommonControlsRequest>
        void ListCommonControlsAsync(const ListCommonControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCommonControlsRequestT& request = {}) const
        {
            return SubmitAsync(&ControlCatalogClient::ListCommonControls, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of control mappings from the Control Catalog.
         * Control mappings show relationships between controls and other entities, such as
         * common controls or compliance frameworks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListControlMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlMappingsOutcome ListControlMappings(const Model::ListControlMappingsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListControlMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListControlMappingsRequestT = Model::ListControlMappingsRequest>
        Model::ListControlMappingsOutcomeCallable ListControlMappingsCallable(const ListControlMappingsRequestT& request = {}) const
        {
            return SubmitCallable(&ControlCatalogClient::ListControlMappings, request);
        }

        /**
         * An Async wrapper for ListControlMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlMappingsRequestT = Model::ListControlMappingsRequest>
        void ListControlMappingsAsync(const ListControlMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListControlMappingsRequestT& request = {}) const
        {
            return SubmitAsync(&ControlCatalogClient::ListControlMappings, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all available controls in the Control Catalog
         * library. Allows you to discover available controls. The list of controls is
         * given as structures of type <i>controlSummary</i>. The ARN is returned in the
         * global <i>controlcatalog</i> format, as shown in the examples.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlsOutcome ListControls(const Model::ListControlsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListControlsRequestT = Model::ListControlsRequest>
        Model::ListControlsOutcomeCallable ListControlsCallable(const ListControlsRequestT& request = {}) const
        {
            return SubmitCallable(&ControlCatalogClient::ListControls, request);
        }

        /**
         * An Async wrapper for ListControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlsRequestT = Model::ListControlsRequest>
        void ListControlsAsync(const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListControlsRequestT& request = {}) const
        {
            return SubmitAsync(&ControlCatalogClient::ListControls, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of domains from the Control Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request = {}) const
        {
            return SubmitCallable(&ControlCatalogClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDomainsRequestT& request = {}) const
        {
            return SubmitAsync(&ControlCatalogClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of objectives from the Control Catalog.</p> <p>You
         * can apply an optional filter to see the objectives that belong to a specific
         * domain. If you don���t provide a filter, the operation returns all objectives.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ListObjectives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectivesOutcome ListObjectives(const Model::ListObjectivesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListObjectives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectivesRequestT = Model::ListObjectivesRequest>
        Model::ListObjectivesOutcomeCallable ListObjectivesCallable(const ListObjectivesRequestT& request = {}) const
        {
            return SubmitCallable(&ControlCatalogClient::ListObjectives, request);
        }

        /**
         * An Async wrapper for ListObjectives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectivesRequestT = Model::ListObjectivesRequest>
        void ListObjectivesAsync(const ListObjectivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListObjectivesRequestT& request = {}) const
        {
            return SubmitAsync(&ControlCatalogClient::ListObjectives, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ControlCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ControlCatalogClient>;
      void init(const ControlCatalogClientConfiguration& clientConfiguration);

      ControlCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<ControlCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace ControlCatalog
} // namespace Aws
