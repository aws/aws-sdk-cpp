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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Appflow::AppflowClientConfiguration& clientConfiguration = Aws::Appflow::AppflowClientConfiguration(),
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Appflow::AppflowClientConfiguration& clientConfiguration = Aws::Appflow::AppflowClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppflowClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<AppflowEndpointProviderBase> endpointProvider = Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateConnectorProfileOutcomeCallable CreateConnectorProfileCallable(const Model::CreateConnectorProfileRequest& request) const;

        /**
         * An Async wrapper for CreateConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorProfileAsync(const Model::CreateConnectorProfileRequest& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request) const;

        /**
         * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteConnectorProfileOutcomeCallable DeleteConnectorProfileCallable(const Model::DeleteConnectorProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectorProfileAsync(const Model::DeleteConnectorProfileRequest& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const Model::DeleteFlowRequest& request) const;

        /**
         * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const Model::DescribeConnectorRequest& request) const;

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorAsync(const Model::DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConnectorEntityOutcomeCallable DescribeConnectorEntityCallable(const Model::DescribeConnectorEntityRequest& request) const;

        /**
         * An Async wrapper for DescribeConnectorEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorEntityAsync(const Model::DescribeConnectorEntityRequest& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConnectorProfilesOutcomeCallable DescribeConnectorProfilesCallable(const Model::DescribeConnectorProfilesRequest& request) const;

        /**
         * An Async wrapper for DescribeConnectorProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorProfilesAsync(const Model::DescribeConnectorProfilesRequest& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConnectorsOutcomeCallable DescribeConnectorsCallable(const Model::DescribeConnectorsRequest& request) const;

        /**
         * An Async wrapper for DescribeConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorsAsync(const Model::DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Provides a description of the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request) const;

        /**
         * An Async wrapper for DescribeFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Fetches the execution history of the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlowExecutionRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowExecutionRecordsOutcome DescribeFlowExecutionRecords(const Model::DescribeFlowExecutionRecordsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowExecutionRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowExecutionRecordsOutcomeCallable DescribeFlowExecutionRecordsCallable(const Model::DescribeFlowExecutionRecordsRequest& request) const;

        /**
         * An Async wrapper for DescribeFlowExecutionRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowExecutionRecordsAsync(const Model::DescribeFlowExecutionRecordsRequest& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConnectorEntitiesOutcomeCallable ListConnectorEntitiesCallable(const Model::ListConnectorEntitiesRequest& request) const;

        /**
         * An Async wrapper for ListConnectorEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorEntitiesAsync(const Model::ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const Model::ListConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListFlowsOutcomeCallable ListFlowsCallable(const Model::ListFlowsRequest& request) const;

        /**
         * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFlowsAsync(const Model::ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RegisterConnectorOutcomeCallable RegisterConnectorCallable(const Model::RegisterConnectorRequest& request) const;

        /**
         * An Async wrapper for RegisterConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterConnectorAsync(const Model::RegisterConnectorRequest& request, const RegisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request) const;

        /**
         * An Async wrapper for StartFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopFlowOutcomeCallable StopFlowCallable(const Model::StopFlowRequest& request) const;

        /**
         * An Async wrapper for StopFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFlowAsync(const Model::StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Applies a tag to the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TagResource">AWS
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
         * <p>Unregisters the custom connector registered in your account that matches the
         * connector label provided in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UnregisterConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UnregisterConnectorOutcome UnregisterConnector(const Model::UnregisterConnectorRequest& request) const;

        /**
         * A Callable wrapper for UnregisterConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnregisterConnectorOutcomeCallable UnregisterConnectorCallable(const Model::UnregisterConnectorRequest& request) const;

        /**
         * An Async wrapper for UnregisterConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnregisterConnectorAsync(const Model::UnregisterConnectorRequest& request, const UnregisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a tag from the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UntagResource">AWS
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
         * <p> Updates a given connector profile associated with your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateConnectorProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorProfileOutcome UpdateConnectorProfile(const Model::UpdateConnectorProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorProfileOutcomeCallable UpdateConnectorProfileCallable(const Model::UpdateConnectorProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectorProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorProfileAsync(const Model::UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateConnectorRegistrationOutcomeCallable UpdateConnectorRegistrationCallable(const Model::UpdateConnectorRegistrationRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectorRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorRegistrationAsync(const Model::UpdateConnectorRegistrationRequest& request, const UpdateConnectorRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an existing flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const Model::UpdateFlowRequest& request) const;

        /**
         * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowAsync(const Model::UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
