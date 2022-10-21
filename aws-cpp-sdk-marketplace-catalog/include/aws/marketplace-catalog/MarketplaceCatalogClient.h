/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/MarketplaceCatalogServiceClientModel.h>

namespace Aws
{
namespace MarketplaceCatalog
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * A Callable wrapper for CancelChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelChangeSetOutcomeCallable CancelChangeSetCallable(const Model::CancelChangeSetRequest& request) const;

        /**
         * An Async wrapper for CancelChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelChangeSetAsync(const Model::CancelChangeSetRequest& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a given change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetOutcome DescribeChangeSet(const Model::DescribeChangeSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChangeSetOutcomeCallable DescribeChangeSetCallable(const Model::DescribeChangeSetRequest& request) const;

        /**
         * An Async wrapper for DescribeChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChangeSetAsync(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata and content of the entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityOutcome DescribeEntity(const Model::DescribeEntityRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntityOutcomeCallable DescribeEntityCallable(const Model::DescribeEntityRequest& request) const;

        /**
         * An Async wrapper for DescribeEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListChangeSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangeSetsOutcomeCallable ListChangeSetsCallable(const Model::ListChangeSetsRequest& request) const;

        /**
         * An Async wrapper for ListChangeSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangeSetsAsync(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the list of entities of a given type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesOutcomeCallable ListEntitiesCallable(const Model::ListEntitiesRequest& request) const;

        /**
         * An Async wrapper for ListEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * later in this topic, because it contains two changes to execute the same change
         * type (<code>AddRevisions</code>) against the same entity
         * (<code>entity-id@1)</code>.</p> <p>For more information about working with
         * change sets, see <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">
         * Working with change sets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/StartChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeSetOutcome StartChangeSet(const Model::StartChangeSetRequest& request) const;

        /**
         * A Callable wrapper for StartChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChangeSetOutcomeCallable StartChangeSetCallable(const Model::StartChangeSetRequest& request) const;

        /**
         * An Async wrapper for StartChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChangeSetAsync(const Model::StartChangeSetRequest& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceCatalog
} // namespace Aws
