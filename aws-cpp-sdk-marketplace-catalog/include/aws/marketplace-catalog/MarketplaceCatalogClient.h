/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/CancelChangeSetResult.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetResult.h>
#include <aws/marketplace-catalog/model/DescribeEntityResult.h>
#include <aws/marketplace-catalog/model/ListChangeSetsResult.h>
#include <aws/marketplace-catalog/model/ListEntitiesResult.h>
#include <aws/marketplace-catalog/model/StartChangeSetResult.h>
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

namespace MarketplaceCatalog
{

namespace Model
{
        class CancelChangeSetRequest;
        class DescribeChangeSetRequest;
        class DescribeEntityRequest;
        class ListChangeSetsRequest;
        class ListEntitiesRequest;
        class StartChangeSetRequest;

        typedef Aws::Utils::Outcome<CancelChangeSetResult, MarketplaceCatalogError> CancelChangeSetOutcome;
        typedef Aws::Utils::Outcome<DescribeChangeSetResult, MarketplaceCatalogError> DescribeChangeSetOutcome;
        typedef Aws::Utils::Outcome<DescribeEntityResult, MarketplaceCatalogError> DescribeEntityOutcome;
        typedef Aws::Utils::Outcome<ListChangeSetsResult, MarketplaceCatalogError> ListChangeSetsOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesResult, MarketplaceCatalogError> ListEntitiesOutcome;
        typedef Aws::Utils::Outcome<StartChangeSetResult, MarketplaceCatalogError> StartChangeSetOutcome;

        typedef std::future<CancelChangeSetOutcome> CancelChangeSetOutcomeCallable;
        typedef std::future<DescribeChangeSetOutcome> DescribeChangeSetOutcomeCallable;
        typedef std::future<DescribeEntityOutcome> DescribeEntityOutcomeCallable;
        typedef std::future<ListChangeSetsOutcome> ListChangeSetsOutcomeCallable;
        typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
        typedef std::future<StartChangeSetOutcome> StartChangeSetOutcomeCallable;
} // namespace Model

  class MarketplaceCatalogClient;

    typedef std::function<void(const MarketplaceCatalogClient*, const Model::CancelChangeSetRequest&, const Model::CancelChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelChangeSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::DescribeChangeSetRequest&, const Model::DescribeChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChangeSetResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::DescribeEntityRequest&, const Model::DescribeEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::ListChangeSetsRequest&, const Model::ListChangeSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangeSetsResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::ListEntitiesRequest&, const Model::ListEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesResponseReceivedHandler;
    typedef std::function<void(const MarketplaceCatalogClient*, const Model::StartChangeSetRequest&, const Model::StartChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChangeSetResponseReceivedHandler;

  /**
   * <p>Catalog API actions allow you to manage your entities through list, describe,
   * and update capabilities. An entity can be a product or an offer on AWS
   * Marketplace. </p> <p>You can automate your entity update process by integrating
   * the AWS Marketplace Catalog API with your AWS Marketplace product build or
   * deployment pipelines. You can also create your own applications on top of the
   * Catalog API to manage your products on AWS Marketplace.</p>
   */
  class AWS_MARKETPLACECATALOG_API MarketplaceCatalogClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MarketplaceCatalogClient();


        /**
         * <p>Used to cancel an open change request. Must be sent before the status of the
         * request changes to <code>APPLYING</code>, the final stage of completing your
         * change request. You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/CancelChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelChangeSetOutcome CancelChangeSet(const Model::CancelChangeSetRequest& request) const;

        /**
         * <p>Used to cancel an open change request. Must be sent before the status of the
         * request changes to <code>APPLYING</code>, the final stage of completing your
         * change request. You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/CancelChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelChangeSetOutcomeCallable CancelChangeSetCallable(const Model::CancelChangeSetRequest& request) const;

        /**
         * <p>Used to cancel an open change request. Must be sent before the status of the
         * request changes to <code>APPLYING</code>, the final stage of completing your
         * change request. You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/CancelChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelChangeSetAsync(const Model::CancelChangeSetRequest& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a given change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetOutcome DescribeChangeSet(const Model::DescribeChangeSetRequest& request) const;

        /**
         * <p>Provides information about a given change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChangeSetOutcomeCallable DescribeChangeSetCallable(const Model::DescribeChangeSetRequest& request) const;

        /**
         * <p>Provides information about a given change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChangeSetAsync(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata and content of the entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityOutcome DescribeEntity(const Model::DescribeEntityRequest& request) const;

        /**
         * <p>Returns the metadata and content of the entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeEntity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntityOutcomeCallable DescribeEntityCallable(const Model::DescribeEntityRequest& request) const;

        /**
         * <p>Returns the metadata and content of the entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeEntity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntityAsync(const Model::DescribeEntityRequest& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of change sets owned by the account being used to make the
         * call. You can filter this list by providing any combination of
         * <code>entityId</code>, <code>ChangeSetName</code>, and status. If you provide
         * more than one filter, the API operation applies a logical AND between the
         * filters.</p> <p>You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListChangeSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangeSetsOutcome ListChangeSets(const Model::ListChangeSetsRequest& request) const;

        /**
         * <p>Returns the list of change sets owned by the account being used to make the
         * call. You can filter this list by providing any combination of
         * <code>entityId</code>, <code>ChangeSetName</code>, and status. If you provide
         * more than one filter, the API operation applies a logical AND between the
         * filters.</p> <p>You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListChangeSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangeSetsOutcomeCallable ListChangeSetsCallable(const Model::ListChangeSetsRequest& request) const;

        /**
         * <p>Returns the list of change sets owned by the account being used to make the
         * call. You can filter this list by providing any combination of
         * <code>entityId</code>, <code>ChangeSetName</code>, and status. If you provide
         * more than one filter, the API operation applies a logical AND between the
         * filters.</p> <p>You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListChangeSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangeSetsAsync(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the list of entities of a given type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;

        /**
         * <p>Provides the list of entities of a given type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesOutcomeCallable ListEntitiesCallable(const Model::ListEntitiesRequest& request) const;

        /**
         * <p>Provides the list of entities of a given type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesAsync(const Model::ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation allows you to request changes for your entities. Within a
         * single ChangeSet, you cannot start the same change type against the same entity
         * multiple times. Additionally, when a ChangeSet is running, all the entities
         * targeted by the different changes are locked until the ChangeSet has completed
         * (either succeeded, cancelled, or failed). If you try to start a ChangeSet
         * containing a change against an entity that is already locked, you will receive a
         * <code>ResourceInUseException</code>.</p> <p>For example, you cannot start the
         * ChangeSet described in the <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_StartChangeSet.html#API_StartChangeSet_Examples">example</a>
         * below because it contains two changes to execute the same change type
         * (<code>AddRevisions</code>) against the same entity
         * (<code>entity-id@1)</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/StartChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeSetOutcome StartChangeSet(const Model::StartChangeSetRequest& request) const;

        /**
         * <p>This operation allows you to request changes for your entities. Within a
         * single ChangeSet, you cannot start the same change type against the same entity
         * multiple times. Additionally, when a ChangeSet is running, all the entities
         * targeted by the different changes are locked until the ChangeSet has completed
         * (either succeeded, cancelled, or failed). If you try to start a ChangeSet
         * containing a change against an entity that is already locked, you will receive a
         * <code>ResourceInUseException</code>.</p> <p>For example, you cannot start the
         * ChangeSet described in the <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_StartChangeSet.html#API_StartChangeSet_Examples">example</a>
         * below because it contains two changes to execute the same change type
         * (<code>AddRevisions</code>) against the same entity
         * (<code>entity-id@1)</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/StartChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChangeSetOutcomeCallable StartChangeSetCallable(const Model::StartChangeSetRequest& request) const;

        /**
         * <p>This operation allows you to request changes for your entities. Within a
         * single ChangeSet, you cannot start the same change type against the same entity
         * multiple times. Additionally, when a ChangeSet is running, all the entities
         * targeted by the different changes are locked until the ChangeSet has completed
         * (either succeeded, cancelled, or failed). If you try to start a ChangeSet
         * containing a change against an entity that is already locked, you will receive a
         * <code>ResourceInUseException</code>.</p> <p>For example, you cannot start the
         * ChangeSet described in the <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_StartChangeSet.html#API_StartChangeSet_Examples">example</a>
         * below because it contains two changes to execute the same change type
         * (<code>AddRevisions</code>) against the same entity
         * (<code>entity-id@1)</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/StartChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChangeSetAsync(const Model::StartChangeSetRequest& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelChangeSetAsyncHelper(const Model::CancelChangeSetRequest& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChangeSetAsyncHelper(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntityAsyncHelper(const Model::DescribeEntityRequest& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChangeSetsAsyncHelper(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesAsyncHelper(const Model::ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChangeSetAsyncHelper(const Model::StartChangeSetRequest& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceCatalog
} // namespace Aws
