/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appflow/AppflowServiceClientModel.h>

namespace Aws
{
namespace Appflow
{
  /**
   * <p>Welcome to the Amazon AppFlow API reference. This guide is for developers who
   * need detailed information about the Amazon AppFlow API operations, data types,
   * and errors. </p> <p>Amazon AppFlow is a fully managed integration service that
   * enables you to securely transfer data between software as a service (SaaS)
   * applications like Salesforce, Marketo, Slack, and ServiceNow, and Amazon Web
   * Services like Amazon S3 and Amazon Redshift. </p> <p>Use the following links to
   * get started on the Amazon AppFlow API:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Operations.html">Actions</a>:
   * An alphabetical list of all Amazon AppFlow API operations.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Types.html">Data
   * types</a>: An alphabetical list of all Amazon AppFlow data types.</p> </li> <li>
   * <p> <a
   * href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonParameters.html">Common
   * parameters</a>: Parameters that all Query operations can use.</p> </li> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonErrors.html">Common
   * errors</a>: Client and server errors that all operations can return.</p> </li>
   * </ul> <p>If you're new to Amazon AppFlow, we recommend that you review the <a
   * href="https://docs.aws.amazon.com/appflow/latest/userguide/what-is-appflow.html">Amazon
   * AppFlow User Guide</a>.</p> <p>Amazon AppFlow API users can use vendor-specific
   * mechanisms for OAuth, and include applicable OAuth attributes (such as
   * <code>auth-code</code> and <code>redirecturi</code>) with the connector-specific
   * <code>ConnectorProfileProperties</code> when creating a new connector profile
   * using Amazon AppFlow API operations. For example, Salesforce users can refer to
   * the <a
   * href="https://help.salesforce.com/articleView?id=remoteaccess_authenticate.htm">
   * <i>Authorize Apps with OAuth</i> </a> documentation.</p>
   */
  class AWS_APPFLOW_API AppflowClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppflowClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppflowClientConfiguration ClientConfigurationType;
      typedef AppflowEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Appflow::AppflowClientConfiguration& clientConfiguration = Aws::Appflow::AppflowClientConfiguration(),
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Appflow::AppflowClientConfiguration& clientConfiguration = Aws::Appflow::AppflowClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppflowClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Appflow::AppflowClientConfiguration& clientConfiguration = Aws::Appflow::AppflowClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppflowClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppflowClient();

        /**
         * <p>Cancels active runs for a flow.</p> <p>You can cancel all of the active runs
         * for a flow, or you can cancel specific runs by providing their IDs.</p> <p>You
         * can cancel a flow run only when the run is in progress. You can't cancel a run
         * that has already completed or failed. You also can't cancel a run that's
         * scheduled to occur but hasn't started yet. To prevent a scheduled run, you can
         * deactivate the flow with the <code>StopFlow</code> action.</p> <p>You cannot
         * resume a run after you cancel it.</p> <p>When you send your request, the status
         * for each run becomes <code>CancelStarted</code>. When the cancellation
         * completes, the status becomes <code>Canceled</code>.</p>  <p>When you
         * cancel a run, you still incur charges for any data that the run already
         * processed before the cancellation. If the run had already written some data to
         * the flow destination, then that data remains in the destination. If you
         * configured the flow to use a batch API (such as the Salesforce Bulk API 2.0),
         * then the run will finish reading or writing its entire batch of data after the
         * cancellation. For these operations, the data processing charges for Amazon
         * AppFlow apply. For the pricing information, see <a
         * href="http://aws.amazon.com/appflow/pricing/">Amazon AppFlow pricing</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CancelFlowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelFlowExecutionsOutcome CancelFlowExecutions(const Model::CancelFlowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for CancelFlowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelFlowExecutionsRequestT = Model::CancelFlowExecutionsRequest>
        Model::CancelFlowExecutionsOutcomeCallable CancelFlowExecutionsCallable(const CancelFlowExecutionsRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::CancelFlowExecutions, request);
        }

        /**
         * An Async wrapper for CancelFlowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelFlowExecutionsRequestT = Model::CancelFlowExecutionsRequest>
        void CancelFlowExecutionsAsync(const CancelFlowExecutionsRequestT& request, const CancelFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::CancelFlowExecutions, request, handler, context);
        }

        /**
         * <p> Creates a new connector profile associated with your Amazon Web Services
         * account. There is a soft quota of 100 connector profiles per Amazon Web Services
         * account. If you need more connector profiles than this quota allows, you can
         * submit a request to the Amazon AppFlow team through the Amazon AppFlow support
         * channel. In each connector profile that you create, you can provide the
         * credentials and properties for only one connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateConnectorProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorProfileOutcome CreateConnectorProfile(const Model::CreateConnectorProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectorProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorProfileRequestT = Model::CreateConnectorProfileRequest>
        Model::CreateConnectorProfileOutcomeCallable CreateConnectorProfileCallable(const CreateConnectorProfileRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::CreateConnectorProfile, request);
        }

        /**
         * An Async wrapper for CreateConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorProfileRequestT = Model::CreateConnectorProfileRequest>
        void CreateConnectorProfileAsync(const CreateConnectorProfileRequestT& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::CreateConnectorProfile, request, handler, context);
        }

        /**
         * <p> Enables your application to create a new flow using Amazon AppFlow. You must
         * create a connector profile before calling this API. Please note that the Request
         * Syntax below shows syntax for multiple destinations, however, you can only
         * transfer data to one item in this list at a time. Amazon AppFlow does not
         * currently support flows to multiple destinations at once. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        Model::CreateFlowOutcomeCallable CreateFlowCallable(const CreateFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::CreateFlow, request);
        }

        /**
         * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        void CreateFlowAsync(const CreateFlowRequestT& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::CreateFlow, request, handler, context);
        }

        /**
         * <p> Enables you to delete an existing connector profile. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteConnectorProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorProfileOutcome DeleteConnectorProfile(const Model::DeleteConnectorProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectorProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorProfileRequestT = Model::DeleteConnectorProfileRequest>
        Model::DeleteConnectorProfileOutcomeCallable DeleteConnectorProfileCallable(const DeleteConnectorProfileRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DeleteConnectorProfile, request);
        }

        /**
         * An Async wrapper for DeleteConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorProfileRequestT = Model::DeleteConnectorProfileRequest>
        void DeleteConnectorProfileAsync(const DeleteConnectorProfileRequestT& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DeleteConnectorProfile, request, handler, context);
        }

        /**
         * <p> Enables your application to delete an existing flow. Before deleting the
         * flow, Amazon AppFlow validates the request by checking the flow configuration
         * and status. You can delete flows one at a time. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowOutcome DeleteFlow(const Model::DeleteFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const DeleteFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DeleteFlow, request);
        }

        /**
         * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        void DeleteFlowAsync(const DeleteFlowRequestT& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DeleteFlow, request, handler, context);
        }

        /**
         * <p>Describes the given custom connector registered in your Amazon Web Services
         * account. This API can be used for custom connectors that are registered in your
         * account and also for Amazon authored connectors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorOutcome DescribeConnector(const Model::DescribeConnectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const DescribeConnectorRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeConnector, request);
        }

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        void DescribeConnectorAsync(const DescribeConnectorRequestT& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeConnector, request, handler, context);
        }

        /**
         * <p> Provides details regarding the entity used with the connector, with a
         * description of the data model for each field in that entity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorEntityOutcome DescribeConnectorEntity(const Model::DescribeConnectorEntityRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectorEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectorEntityRequestT = Model::DescribeConnectorEntityRequest>
        Model::DescribeConnectorEntityOutcomeCallable DescribeConnectorEntityCallable(const DescribeConnectorEntityRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeConnectorEntity, request);
        }

        /**
         * An Async wrapper for DescribeConnectorEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorEntityRequestT = Model::DescribeConnectorEntityRequest>
        void DescribeConnectorEntityAsync(const DescribeConnectorEntityRequestT& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeConnectorEntity, request, handler, context);
        }

        /**
         * <p> Returns a list of <code>connector-profile</code> details matching the
         * provided <code>connector-profile</code> names and <code>connector-types</code>.
         * Both input lists are optional, and you can use them to filter the result. </p>
         * <p>If no names or <code>connector-types</code> are provided, returns all
         * connector profiles in a paginated form. If there is no match, this operation
         * returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorProfilesOutcome DescribeConnectorProfiles(const Model::DescribeConnectorProfilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectorProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectorProfilesRequestT = Model::DescribeConnectorProfilesRequest>
        Model::DescribeConnectorProfilesOutcomeCallable DescribeConnectorProfilesCallable(const DescribeConnectorProfilesRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeConnectorProfiles, request);
        }

        /**
         * An Async wrapper for DescribeConnectorProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorProfilesRequestT = Model::DescribeConnectorProfilesRequest>
        void DescribeConnectorProfilesAsync(const DescribeConnectorProfilesRequestT& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeConnectorProfiles, request, handler, context);
        }

        /**
         * <p> Describes the connectors vended by Amazon AppFlow for specified connector
         * types. If you don't specify a connector type, this operation describes all
         * connectors vended by Amazon AppFlow. If there are more connectors than can be
         * returned in one page, the response contains a <code>nextToken</code> object,
         * which can be be passed in to the next call to the
         * <code>DescribeConnectors</code> API operation to retrieve the next page.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorsOutcome DescribeConnectors(const Model::DescribeConnectorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectorsRequestT = Model::DescribeConnectorsRequest>
        Model::DescribeConnectorsOutcomeCallable DescribeConnectorsCallable(const DescribeConnectorsRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeConnectors, request);
        }

        /**
         * An Async wrapper for DescribeConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorsRequestT = Model::DescribeConnectorsRequest>
        void DescribeConnectorsAsync(const DescribeConnectorsRequestT& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeConnectors, request, handler, context);
        }

        /**
         * <p> Provides a description of the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowRequestT = Model::DescribeFlowRequest>
        Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const DescribeFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeFlow, request);
        }

        /**
         * An Async wrapper for DescribeFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowRequestT = Model::DescribeFlowRequest>
        void DescribeFlowAsync(const DescribeFlowRequestT& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeFlow, request, handler, context);
        }

        /**
         * <p> Fetches the execution history of the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlowExecutionRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowExecutionRecordsOutcome DescribeFlowExecutionRecords(const Model::DescribeFlowExecutionRecordsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowExecutionRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowExecutionRecordsRequestT = Model::DescribeFlowExecutionRecordsRequest>
        Model::DescribeFlowExecutionRecordsOutcomeCallable DescribeFlowExecutionRecordsCallable(const DescribeFlowExecutionRecordsRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::DescribeFlowExecutionRecords, request);
        }

        /**
         * An Async wrapper for DescribeFlowExecutionRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowExecutionRecordsRequestT = Model::DescribeFlowExecutionRecordsRequest>
        void DescribeFlowExecutionRecordsAsync(const DescribeFlowExecutionRecordsRequestT& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::DescribeFlowExecutionRecords, request, handler, context);
        }

        /**
         * <p> Returns the list of available connector entities supported by Amazon
         * AppFlow. For example, you can query Salesforce for <i>Account</i> and
         * <i>Opportunity</i> entities, or query ServiceNow for the <i>Incident</i> entity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListConnectorEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorEntitiesOutcome ListConnectorEntities(const Model::ListConnectorEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListConnectorEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorEntitiesRequestT = Model::ListConnectorEntitiesRequest>
        Model::ListConnectorEntitiesOutcomeCallable ListConnectorEntitiesCallable(const ListConnectorEntitiesRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::ListConnectorEntities, request);
        }

        /**
         * An Async wrapper for ListConnectorEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorEntitiesRequestT = Model::ListConnectorEntitiesRequest>
        void ListConnectorEntitiesAsync(const ListConnectorEntitiesRequestT& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::ListConnectorEntities, request, handler, context);
        }

        /**
         * <p>Returns the list of all registered custom connectors in your Amazon Web
         * Services account. This API lists only custom connectors registered in this
         * account, not the Amazon Web Services authored connectors. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::ListConnectors, request);
        }

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        void ListConnectorsAsync(const ListConnectorsRequestT& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::ListConnectors, request, handler, context);
        }

        /**
         * <p> Lists all of the flows associated with your account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        Model::ListFlowsOutcomeCallable ListFlowsCallable(const ListFlowsRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::ListFlows, request);
        }

        /**
         * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        void ListFlowsAsync(const ListFlowsRequestT& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::ListFlows, request, handler, context);
        }

        /**
         * <p> Retrieves the tags that are associated with a specified flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Registers a new custom connector with your Amazon Web Services account.
         * Before you can register the connector, you must deploy the associated AWS lambda
         * function in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/RegisterConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterConnectorOutcome RegisterConnector(const Model::RegisterConnectorRequest& request) const;

        /**
         * A Callable wrapper for RegisterConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterConnectorRequestT = Model::RegisterConnectorRequest>
        Model::RegisterConnectorOutcomeCallable RegisterConnectorCallable(const RegisterConnectorRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::RegisterConnector, request);
        }

        /**
         * An Async wrapper for RegisterConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterConnectorRequestT = Model::RegisterConnectorRequest>
        void RegisterConnectorAsync(const RegisterConnectorRequestT& request, const RegisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::RegisterConnector, request, handler, context);
        }

        /**
         * <p>Resets metadata about your connector entities that Amazon AppFlow stored in
         * its cache. Use this action when you want Amazon AppFlow to return the latest
         * information about the data that you have in a source application.</p> <p>Amazon
         * AppFlow returns metadata about your entities when you use the
         * ListConnectorEntities or DescribeConnectorEntities actions. Following these
         * actions, Amazon AppFlow caches the metadata to reduce the number of API requests
         * that it must send to the source application. Amazon AppFlow automatically resets
         * the cache once every hour, but you can use this action when you want to get the
         * latest metadata right away.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ResetConnectorMetadataCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetConnectorMetadataCacheOutcome ResetConnectorMetadataCache(const Model::ResetConnectorMetadataCacheRequest& request) const;

        /**
         * A Callable wrapper for ResetConnectorMetadataCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetConnectorMetadataCacheRequestT = Model::ResetConnectorMetadataCacheRequest>
        Model::ResetConnectorMetadataCacheOutcomeCallable ResetConnectorMetadataCacheCallable(const ResetConnectorMetadataCacheRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::ResetConnectorMetadataCache, request);
        }

        /**
         * An Async wrapper for ResetConnectorMetadataCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetConnectorMetadataCacheRequestT = Model::ResetConnectorMetadataCacheRequest>
        void ResetConnectorMetadataCacheAsync(const ResetConnectorMetadataCacheRequestT& request, const ResetConnectorMetadataCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::ResetConnectorMetadataCache, request, handler, context);
        }

        /**
         * <p> Activates an existing flow. For on-demand flows, this operation runs the
         * flow immediately. For schedule and event-triggered flows, this operation
         * activates the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StartFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

        /**
         * A Callable wrapper for StartFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlowRequestT = Model::StartFlowRequest>
        Model::StartFlowOutcomeCallable StartFlowCallable(const StartFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::StartFlow, request);
        }

        /**
         * An Async wrapper for StartFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlowRequestT = Model::StartFlowRequest>
        void StartFlowAsync(const StartFlowRequestT& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::StartFlow, request, handler, context);
        }

        /**
         * <p> Deactivates the existing flow. For on-demand flows, this operation returns
         * an <code>unsupportedOperationException</code> error message. For schedule and
         * event-triggered flows, this operation deactivates the flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StopFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFlowOutcome StopFlow(const Model::StopFlowRequest& request) const;

        /**
         * A Callable wrapper for StopFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopFlowRequestT = Model::StopFlowRequest>
        Model::StopFlowOutcomeCallable StopFlowCallable(const StopFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::StopFlow, request);
        }

        /**
         * An Async wrapper for StopFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopFlowRequestT = Model::StopFlowRequest>
        void StopFlowAsync(const StopFlowRequestT& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::StopFlow, request, handler, context);
        }

        /**
         * <p> Applies a tag to the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::TagResource, request, handler, context);
        }

        /**
         * <p>Unregisters the custom connector registered in your account that matches the
         * connector label provided in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UnregisterConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UnregisterConnectorOutcome UnregisterConnector(const Model::UnregisterConnectorRequest& request) const;

        /**
         * A Callable wrapper for UnregisterConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnregisterConnectorRequestT = Model::UnregisterConnectorRequest>
        Model::UnregisterConnectorOutcomeCallable UnregisterConnectorCallable(const UnregisterConnectorRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::UnregisterConnector, request);
        }

        /**
         * An Async wrapper for UnregisterConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnregisterConnectorRequestT = Model::UnregisterConnectorRequest>
        void UnregisterConnectorAsync(const UnregisterConnectorRequestT& request, const UnregisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::UnregisterConnector, request, handler, context);
        }

        /**
         * <p> Removes a tag from the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates a given connector profile associated with your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateConnectorProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorProfileOutcome UpdateConnectorProfile(const Model::UpdateConnectorProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectorProfileRequestT = Model::UpdateConnectorProfileRequest>
        Model::UpdateConnectorProfileOutcomeCallable UpdateConnectorProfileCallable(const UpdateConnectorProfileRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::UpdateConnectorProfile, request);
        }

        /**
         * An Async wrapper for UpdateConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorProfileRequestT = Model::UpdateConnectorProfileRequest>
        void UpdateConnectorProfileAsync(const UpdateConnectorProfileRequestT& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::UpdateConnectorProfile, request, handler, context);
        }

        /**
         * <p>Updates a custom connector that you've previously registered. This operation
         * updates the connector with one of the following:</p> <ul> <li> <p>The latest
         * version of the AWS Lambda function that's assigned to the connector</p> </li>
         * <li> <p>A new AWS Lambda function that you specify</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateConnectorRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorRegistrationOutcome UpdateConnectorRegistration(const Model::UpdateConnectorRegistrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectorRegistrationRequestT = Model::UpdateConnectorRegistrationRequest>
        Model::UpdateConnectorRegistrationOutcomeCallable UpdateConnectorRegistrationCallable(const UpdateConnectorRegistrationRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::UpdateConnectorRegistration, request);
        }

        /**
         * An Async wrapper for UpdateConnectorRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorRegistrationRequestT = Model::UpdateConnectorRegistrationRequest>
        void UpdateConnectorRegistrationAsync(const UpdateConnectorRegistrationRequestT& request, const UpdateConnectorRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::UpdateConnectorRegistration, request, handler, context);
        }

        /**
         * <p> Updates an existing flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const UpdateFlowRequestT& request) const
        {
            return SubmitCallable(&AppflowClient::UpdateFlow, request);
        }

        /**
         * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        void UpdateFlowAsync(const UpdateFlowRequestT& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppflowClient::UpdateFlow, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppflowEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppflowClient>;
      void init(const AppflowClientConfiguration& clientConfiguration);

      AppflowClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppflowEndpointProviderBase> m_endpointProvider;
  };

} // namespace Appflow
} // namespace Aws
