/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appflow/model/CreateConnectorProfileResult.h>
#include <aws/appflow/model/CreateFlowResult.h>
#include <aws/appflow/model/DeleteConnectorProfileResult.h>
#include <aws/appflow/model/DeleteFlowResult.h>
#include <aws/appflow/model/DescribeConnectorEntityResult.h>
#include <aws/appflow/model/DescribeConnectorProfilesResult.h>
#include <aws/appflow/model/DescribeConnectorsResult.h>
#include <aws/appflow/model/DescribeFlowResult.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsResult.h>
#include <aws/appflow/model/ListConnectorEntitiesResult.h>
#include <aws/appflow/model/ListFlowsResult.h>
#include <aws/appflow/model/ListTagsForResourceResult.h>
#include <aws/appflow/model/StartFlowResult.h>
#include <aws/appflow/model/StopFlowResult.h>
#include <aws/appflow/model/TagResourceResult.h>
#include <aws/appflow/model/UntagResourceResult.h>
#include <aws/appflow/model/UpdateConnectorProfileResult.h>
#include <aws/appflow/model/UpdateFlowResult.h>
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

namespace Appflow
{

namespace Model
{
        class CreateConnectorProfileRequest;
        class CreateFlowRequest;
        class DeleteConnectorProfileRequest;
        class DeleteFlowRequest;
        class DescribeConnectorEntityRequest;
        class DescribeConnectorProfilesRequest;
        class DescribeConnectorsRequest;
        class DescribeFlowRequest;
        class DescribeFlowExecutionRecordsRequest;
        class ListConnectorEntitiesRequest;
        class ListFlowsRequest;
        class ListTagsForResourceRequest;
        class StartFlowRequest;
        class StopFlowRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateConnectorProfileRequest;
        class UpdateFlowRequest;

        typedef Aws::Utils::Outcome<CreateConnectorProfileResult, AppflowError> CreateConnectorProfileOutcome;
        typedef Aws::Utils::Outcome<CreateFlowResult, AppflowError> CreateFlowOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectorProfileResult, AppflowError> DeleteConnectorProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteFlowResult, AppflowError> DeleteFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectorEntityResult, AppflowError> DescribeConnectorEntityOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectorProfilesResult, AppflowError> DescribeConnectorProfilesOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectorsResult, AppflowError> DescribeConnectorsOutcome;
        typedef Aws::Utils::Outcome<DescribeFlowResult, AppflowError> DescribeFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeFlowExecutionRecordsResult, AppflowError> DescribeFlowExecutionRecordsOutcome;
        typedef Aws::Utils::Outcome<ListConnectorEntitiesResult, AppflowError> ListConnectorEntitiesOutcome;
        typedef Aws::Utils::Outcome<ListFlowsResult, AppflowError> ListFlowsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppflowError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartFlowResult, AppflowError> StartFlowOutcome;
        typedef Aws::Utils::Outcome<StopFlowResult, AppflowError> StopFlowOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppflowError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppflowError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectorProfileResult, AppflowError> UpdateConnectorProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowResult, AppflowError> UpdateFlowOutcome;

        typedef std::future<CreateConnectorProfileOutcome> CreateConnectorProfileOutcomeCallable;
        typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
        typedef std::future<DeleteConnectorProfileOutcome> DeleteConnectorProfileOutcomeCallable;
        typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
        typedef std::future<DescribeConnectorEntityOutcome> DescribeConnectorEntityOutcomeCallable;
        typedef std::future<DescribeConnectorProfilesOutcome> DescribeConnectorProfilesOutcomeCallable;
        typedef std::future<DescribeConnectorsOutcome> DescribeConnectorsOutcomeCallable;
        typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
        typedef std::future<DescribeFlowExecutionRecordsOutcome> DescribeFlowExecutionRecordsOutcomeCallable;
        typedef std::future<ListConnectorEntitiesOutcome> ListConnectorEntitiesOutcomeCallable;
        typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
        typedef std::future<StopFlowOutcome> StopFlowOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateConnectorProfileOutcome> UpdateConnectorProfileOutcomeCallable;
        typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
} // namespace Model

  class AppflowClient;

    typedef std::function<void(const AppflowClient*, const Model::CreateConnectorProfileRequest&, const Model::CreateConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DeleteConnectorProfileRequest&, const Model::DeleteConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorEntityRequest&, const Model::DescribeConnectorEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorEntityResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorProfilesRequest&, const Model::DescribeConnectorProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorProfilesResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeConnectorsRequest&, const Model::DescribeConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeFlowRequest&, const Model::DescribeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::DescribeFlowExecutionRecordsRequest&, const Model::DescribeFlowExecutionRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowExecutionRecordsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListConnectorEntitiesRequest&, const Model::ListConnectorEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorEntitiesResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::StartFlowRequest&, const Model::StartFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::StopFlowRequest&, const Model::StopFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UpdateConnectorProfileRequest&, const Model::UpdateConnectorProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorProfileResponseReceivedHandler;
    typedef std::function<void(const AppflowClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;

  /**
   * <p>Welcome to the Amazon AppFlow API reference. This guide is for developers who
   * need detailed information about the Amazon AppFlow API operations, data types,
   * and errors. </p> <p>Amazon AppFlow is a fully managed integration service that
   * enables you to securely transfer data between software as a service (SaaS)
   * applications like Salesforce, Marketo, Slack, and ServiceNow, and AWS services
   * like Amazon S3 and Amazon Redshift. </p> <p>Use the following links to get
   * started on the Amazon AppFlow API:</p> <ul> <li> <p> <a
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
  class AWS_APPFLOW_API AppflowClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppflowClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppflowClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppflowClient();


        /**
         * <p> Creates a new connector profile associated with your AWS account. There is a
         * soft quota of 100 connector profiles per AWS account. If you need more connector
         * profiles than this quota allows, you can submit a request to the Amazon AppFlow
         * team through the Amazon AppFlow support channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateConnectorProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorProfileOutcome CreateConnectorProfile(const Model::CreateConnectorProfileRequest& request) const;

        /**
         * <p> Creates a new connector profile associated with your AWS account. There is a
         * soft quota of 100 connector profiles per AWS account. If you need more connector
         * profiles than this quota allows, you can submit a request to the Amazon AppFlow
         * team through the Amazon AppFlow support channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateConnectorProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectorProfileOutcomeCallable CreateConnectorProfileCallable(const Model::CreateConnectorProfileRequest& request) const;

        /**
         * <p> Creates a new connector profile associated with your AWS account. There is a
         * soft quota of 100 connector profiles per AWS account. If you need more connector
         * profiles than this quota allows, you can submit a request to the Amazon AppFlow
         * team through the Amazon AppFlow support channel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateConnectorProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Enables your application to create a new flow using Amazon AppFlow. You must
         * create a connector profile before calling this API. Please note that the Request
         * Syntax below shows syntax for multiple destinations, however, you can only
         * transfer data to one item in this list at a time. Amazon AppFlow does not
         * currently support flows to multiple destinations at once. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request) const;

        /**
         * <p> Enables your application to create a new flow using Amazon AppFlow. You must
         * create a connector profile before calling this API. Please note that the Request
         * Syntax below shows syntax for multiple destinations, however, you can only
         * transfer data to one item in this list at a time. Amazon AppFlow does not
         * currently support flows to multiple destinations at once. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CreateFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Enables you to delete an existing connector profile. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteConnectorProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectorProfileOutcomeCallable DeleteConnectorProfileCallable(const Model::DeleteConnectorProfileRequest& request) const;

        /**
         * <p> Enables you to delete an existing connector profile. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteConnectorProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Enables your application to delete an existing flow. Before deleting the
         * flow, Amazon AppFlow validates the request by checking the flow configuration
         * and status. You can delete flows one at a time. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const Model::DeleteFlowRequest& request) const;

        /**
         * <p> Enables your application to delete an existing flow. Before deleting the
         * flow, Amazon AppFlow validates the request by checking the flow configuration
         * and status. You can delete flows one at a time. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DeleteFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Provides details regarding the entity used with the connector, with a
         * description of the data model for each entity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorEntityOutcome DescribeConnectorEntity(const Model::DescribeConnectorEntityRequest& request) const;

        /**
         * <p> Provides details regarding the entity used with the connector, with a
         * description of the data model for each entity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorEntity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectorEntityOutcomeCallable DescribeConnectorEntityCallable(const Model::DescribeConnectorEntityRequest& request) const;

        /**
         * <p> Provides details regarding the entity used with the connector, with a
         * description of the data model for each entity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorEntity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Returns a list of <code>connector-profile</code> details matching the
         * provided <code>connector-profile</code> names and <code>connector-types</code>.
         * Both input lists are optional, and you can use them to filter the result. </p>
         * <p>If no names or <code>connector-types</code> are provided, returns all
         * connector profiles in a paginated form. If there is no match, this operation
         * returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectorProfilesOutcomeCallable DescribeConnectorProfilesCallable(const Model::DescribeConnectorProfilesRequest& request) const;

        /**
         * <p> Returns a list of <code>connector-profile</code> details matching the
         * provided <code>connector-profile</code> names and <code>connector-types</code>.
         * Both input lists are optional, and you can use them to filter the result. </p>
         * <p>If no names or <code>connector-types</code> are provided, returns all
         * connector profiles in a paginated form. If there is no match, this operation
         * returns an empty list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectorProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Describes the connectors vended by Amazon AppFlow for specified connector
         * types. If you don't specify a connector type, this operation describes all
         * connectors vended by Amazon AppFlow. If there are more connectors than can be
         * returned in one page, the response contains a <code>nextToken</code> object,
         * which can be be passed in to the next call to the
         * <code>DescribeConnectors</code> API operation to retrieve the next page.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeConnectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectorsOutcomeCallable DescribeConnectorsCallable(const Model::DescribeConnectorsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorsAsync(const Model::DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Provides a description of the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

        /**
         * <p> Provides a description of the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request) const;

        /**
         * <p> Provides a description of the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Fetches the execution history of the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlowExecutionRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowExecutionRecordsOutcome DescribeFlowExecutionRecords(const Model::DescribeFlowExecutionRecordsRequest& request) const;

        /**
         * <p> Fetches the execution history of the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlowExecutionRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowExecutionRecordsOutcomeCallable DescribeFlowExecutionRecordsCallable(const Model::DescribeFlowExecutionRecordsRequest& request) const;

        /**
         * <p> Fetches the execution history of the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DescribeFlowExecutionRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Returns the list of available connector entities supported by Amazon
         * AppFlow. For example, you can query Salesforce for <i>Account</i> and
         * <i>Opportunity</i> entities, or query ServiceNow for the <i>Incident</i> entity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListConnectorEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectorEntitiesOutcomeCallable ListConnectorEntitiesCallable(const Model::ListConnectorEntitiesRequest& request) const;

        /**
         * <p> Returns the list of available connector entities supported by Amazon
         * AppFlow. For example, you can query Salesforce for <i>Account</i> and
         * <i>Opportunity</i> entities, or query ServiceNow for the <i>Incident</i> entity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListConnectorEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorEntitiesAsync(const Model::ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists all of the flows associated with your account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request) const;

        /**
         * <p> Lists all of the flows associated with your account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListFlows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowsOutcomeCallable ListFlowsCallable(const Model::ListFlowsRequest& request) const;

        /**
         * <p> Lists all of the flows associated with your account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListFlows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Retrieves the tags that are associated with a specified flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Retrieves the tags that are associated with a specified flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Activates an existing flow. For on-demand flows, this operation runs the
         * flow immediately. For schedule and event-triggered flows, this operation
         * activates the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StartFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

        /**
         * <p> Activates an existing flow. For on-demand flows, this operation runs the
         * flow immediately. For schedule and event-triggered flows, this operation
         * activates the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StartFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request) const;

        /**
         * <p> Activates an existing flow. For on-demand flows, this operation runs the
         * flow immediately. For schedule and event-triggered flows, this operation
         * activates the flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StartFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Deactivates the existing flow. For on-demand flows, this operation returns
         * an <code>unsupportedOperationException</code> error message. For schedule and
         * event-triggered flows, this operation deactivates the flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StopFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFlowOutcomeCallable StopFlowCallable(const Model::StopFlowRequest& request) const;

        /**
         * <p> Deactivates the existing flow. For on-demand flows, this operation returns
         * an <code>unsupportedOperationException</code> error message. For schedule and
         * event-triggered flows, this operation deactivates the flow. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/StopFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFlowAsync(const Model::StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Applies a tag to the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p> Applies a tag to the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Applies a tag to the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a tag from the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Removes a tag from the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Removes a tag from the specified flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Updates a given connector profile associated with your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateConnectorProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorProfileOutcomeCallable UpdateConnectorProfileCallable(const Model::UpdateConnectorProfileRequest& request) const;

        /**
         * <p> Updates a given connector profile associated with your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateConnectorProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorProfileAsync(const Model::UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an existing flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * <p> Updates an existing flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const Model::UpdateFlowRequest& request) const;

        /**
         * <p> Updates an existing flow. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpdateFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowAsync(const Model::UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateConnectorProfileAsyncHelper(const Model::CreateConnectorProfileRequest& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFlowAsyncHelper(const Model::CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectorProfileAsyncHelper(const Model::DeleteConnectorProfileRequest& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFlowAsyncHelper(const Model::DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectorEntityAsyncHelper(const Model::DescribeConnectorEntityRequest& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectorProfilesAsyncHelper(const Model::DescribeConnectorProfilesRequest& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectorsAsyncHelper(const Model::DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFlowAsyncHelper(const Model::DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFlowExecutionRecordsAsyncHelper(const Model::DescribeFlowExecutionRecordsRequest& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectorEntitiesAsyncHelper(const Model::ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFlowsAsyncHelper(const Model::ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFlowAsyncHelper(const Model::StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopFlowAsyncHelper(const Model::StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectorProfileAsyncHelper(const Model::UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowAsyncHelper(const Model::UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Appflow
} // namespace Aws
