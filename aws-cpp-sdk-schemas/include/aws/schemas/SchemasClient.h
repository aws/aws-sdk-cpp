/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/schemas/model/CreateDiscovererResult.h>
#include <aws/schemas/model/CreateRegistryResult.h>
#include <aws/schemas/model/CreateSchemaResult.h>
#include <aws/schemas/model/DescribeCodeBindingResult.h>
#include <aws/schemas/model/DescribeDiscovererResult.h>
#include <aws/schemas/model/DescribeRegistryResult.h>
#include <aws/schemas/model/DescribeSchemaResult.h>
#include <aws/schemas/model/ExportSchemaResult.h>
#include <aws/schemas/model/GetCodeBindingSourceResult.h>
#include <aws/schemas/model/GetDiscoveredSchemaResult.h>
#include <aws/schemas/model/GetResourcePolicyResult.h>
#include <aws/schemas/model/ListDiscoverersResult.h>
#include <aws/schemas/model/ListRegistriesResult.h>
#include <aws/schemas/model/ListSchemaVersionsResult.h>
#include <aws/schemas/model/ListSchemasResult.h>
#include <aws/schemas/model/ListTagsForResourceResult.h>
#include <aws/schemas/model/PutCodeBindingResult.h>
#include <aws/schemas/model/PutResourcePolicyResult.h>
#include <aws/schemas/model/SearchSchemasResult.h>
#include <aws/schemas/model/StartDiscovererResult.h>
#include <aws/schemas/model/StopDiscovererResult.h>
#include <aws/schemas/model/UpdateDiscovererResult.h>
#include <aws/schemas/model/UpdateRegistryResult.h>
#include <aws/schemas/model/UpdateSchemaResult.h>
#include <aws/core/NoResult.h>
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

namespace Schemas
{

namespace Model
{
        class CreateDiscovererRequest;
        class CreateRegistryRequest;
        class CreateSchemaRequest;
        class DeleteDiscovererRequest;
        class DeleteRegistryRequest;
        class DeleteResourcePolicyRequest;
        class DeleteSchemaRequest;
        class DeleteSchemaVersionRequest;
        class DescribeCodeBindingRequest;
        class DescribeDiscovererRequest;
        class DescribeRegistryRequest;
        class DescribeSchemaRequest;
        class ExportSchemaRequest;
        class GetCodeBindingSourceRequest;
        class GetDiscoveredSchemaRequest;
        class GetResourcePolicyRequest;
        class ListDiscoverersRequest;
        class ListRegistriesRequest;
        class ListSchemaVersionsRequest;
        class ListSchemasRequest;
        class ListTagsForResourceRequest;
        class PutCodeBindingRequest;
        class PutResourcePolicyRequest;
        class SearchSchemasRequest;
        class StartDiscovererRequest;
        class StopDiscovererRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDiscovererRequest;
        class UpdateRegistryRequest;
        class UpdateSchemaRequest;

        typedef Aws::Utils::Outcome<CreateDiscovererResult, SchemasError> CreateDiscovererOutcome;
        typedef Aws::Utils::Outcome<CreateRegistryResult, SchemasError> CreateRegistryOutcome;
        typedef Aws::Utils::Outcome<CreateSchemaResult, SchemasError> CreateSchemaOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteDiscovererOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteRegistryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteSchemaOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteSchemaVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeCodeBindingResult, SchemasError> DescribeCodeBindingOutcome;
        typedef Aws::Utils::Outcome<DescribeDiscovererResult, SchemasError> DescribeDiscovererOutcome;
        typedef Aws::Utils::Outcome<DescribeRegistryResult, SchemasError> DescribeRegistryOutcome;
        typedef Aws::Utils::Outcome<DescribeSchemaResult, SchemasError> DescribeSchemaOutcome;
        typedef Aws::Utils::Outcome<ExportSchemaResult, SchemasError> ExportSchemaOutcome;
        typedef Aws::Utils::Outcome<GetCodeBindingSourceResult, SchemasError> GetCodeBindingSourceOutcome;
        typedef Aws::Utils::Outcome<GetDiscoveredSchemaResult, SchemasError> GetDiscoveredSchemaOutcome;
        typedef Aws::Utils::Outcome<GetResourcePolicyResult, SchemasError> GetResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<ListDiscoverersResult, SchemasError> ListDiscoverersOutcome;
        typedef Aws::Utils::Outcome<ListRegistriesResult, SchemasError> ListRegistriesOutcome;
        typedef Aws::Utils::Outcome<ListSchemaVersionsResult, SchemasError> ListSchemaVersionsOutcome;
        typedef Aws::Utils::Outcome<ListSchemasResult, SchemasError> ListSchemasOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SchemasError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutCodeBindingResult, SchemasError> PutCodeBindingOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, SchemasError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<SearchSchemasResult, SchemasError> SearchSchemasOutcome;
        typedef Aws::Utils::Outcome<StartDiscovererResult, SchemasError> StartDiscovererOutcome;
        typedef Aws::Utils::Outcome<StopDiscovererResult, SchemasError> StopDiscovererOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDiscovererResult, SchemasError> UpdateDiscovererOutcome;
        typedef Aws::Utils::Outcome<UpdateRegistryResult, SchemasError> UpdateRegistryOutcome;
        typedef Aws::Utils::Outcome<UpdateSchemaResult, SchemasError> UpdateSchemaOutcome;

        typedef std::future<CreateDiscovererOutcome> CreateDiscovererOutcomeCallable;
        typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
        typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
        typedef std::future<DeleteDiscovererOutcome> DeleteDiscovererOutcomeCallable;
        typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
        typedef std::future<DeleteSchemaVersionOutcome> DeleteSchemaVersionOutcomeCallable;
        typedef std::future<DescribeCodeBindingOutcome> DescribeCodeBindingOutcomeCallable;
        typedef std::future<DescribeDiscovererOutcome> DescribeDiscovererOutcomeCallable;
        typedef std::future<DescribeRegistryOutcome> DescribeRegistryOutcomeCallable;
        typedef std::future<DescribeSchemaOutcome> DescribeSchemaOutcomeCallable;
        typedef std::future<ExportSchemaOutcome> ExportSchemaOutcomeCallable;
        typedef std::future<GetCodeBindingSourceOutcome> GetCodeBindingSourceOutcomeCallable;
        typedef std::future<GetDiscoveredSchemaOutcome> GetDiscoveredSchemaOutcomeCallable;
        typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
        typedef std::future<ListDiscoverersOutcome> ListDiscoverersOutcomeCallable;
        typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
        typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
        typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutCodeBindingOutcome> PutCodeBindingOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<SearchSchemasOutcome> SearchSchemasOutcomeCallable;
        typedef std::future<StartDiscovererOutcome> StartDiscovererOutcomeCallable;
        typedef std::future<StopDiscovererOutcome> StopDiscovererOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDiscovererOutcome> UpdateDiscovererOutcomeCallable;
        typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
        typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
} // namespace Model

  class SchemasClient;

    typedef std::function<void(const SchemasClient*, const Model::CreateDiscovererRequest&, const Model::CreateDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::CreateRegistryRequest&, const Model::CreateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteDiscovererRequest&, const Model::DeleteDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteRegistryRequest&, const Model::DeleteRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteSchemaVersionRequest&, const Model::DeleteSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeCodeBindingRequest&, const Model::DescribeCodeBindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeBindingResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeDiscovererRequest&, const Model::DescribeDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeRegistryRequest&, const Model::DescribeRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeSchemaRequest&, const Model::DescribeSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ExportSchemaRequest&, const Model::ExportSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetCodeBindingSourceRequest&, Model::GetCodeBindingSourceOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeBindingSourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetDiscoveredSchemaRequest&, const Model::GetDiscoveredSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoveredSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListDiscoverersRequest&, const Model::ListDiscoverersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoverersResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegistriesResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::PutCodeBindingRequest&, const Model::PutCodeBindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCodeBindingResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::SearchSchemasRequest&, const Model::SearchSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSchemasResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::StartDiscovererRequest&, const Model::StartDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::StopDiscovererRequest&, const Model::StopDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateDiscovererRequest&, const Model::UpdateDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;

  /**
   * <p>Amazon EventBridge Schema Registry</p>
   */
  class AWS_SCHEMAS_API SchemasClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchemasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SchemasClient();


        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiscovererOutcome CreateDiscoverer(const Model::CreateDiscovererRequest& request) const;

        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiscovererOutcomeCallable CreateDiscovererCallable(const Model::CreateDiscovererRequest& request) const;

        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiscovererAsync(const Model::CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const Model::CreateRegistryRequest& request) const;

        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegistryAsync(const Model::CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a schema definition.</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates a schema definition.</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates a schema definition.</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiscovererOutcome DeleteDiscoverer(const Model::DeleteDiscovererRequest& request) const;

        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiscovererOutcomeCallable DeleteDiscovererCallable(const Model::DeleteDiscovererRequest& request) const;

        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDiscovererAsync(const Model::DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const Model::DeleteRegistryRequest& request) const;

        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistryAsync(const Model::DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the resource-based policy attached to the specified
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Delete the resource-based policy attached to the specified
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Delete the resource-based policy attached to the specified
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionOutcome DeleteSchemaVersion(const Model::DeleteSchemaVersionRequest& request) const;

        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaVersionOutcomeCallable DeleteSchemaVersionCallable(const Model::DeleteSchemaVersionRequest& request) const;

        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaVersionAsync(const Model::DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeBindingOutcome DescribeCodeBinding(const Model::DescribeCodeBindingRequest& request) const;

        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeBindingOutcomeCallable DescribeCodeBindingCallable(const Model::DescribeCodeBindingRequest& request) const;

        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeBindingAsync(const Model::DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDiscovererOutcome DescribeDiscoverer(const Model::DescribeDiscovererRequest& request) const;

        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDiscovererOutcomeCallable DescribeDiscovererCallable(const Model::DescribeDiscovererRequest& request) const;

        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDiscovererAsync(const Model::DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;

        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegistryOutcomeCallable DescribeRegistryCallable(const Model::DescribeRegistryRequest& request) const;

        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegistryAsync(const Model::DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;

        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemaOutcomeCallable DescribeSchemaCallable(const Model::DescribeSchemaRequest& request) const;

        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemaAsync(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ExportSchemaOutcome ExportSchema(const Model::ExportSchemaRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportSchemaOutcomeCallable ExportSchemaCallable(const Model::ExportSchemaRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportSchemaAsync(const Model::ExportSchemaRequest& request, const ExportSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeBindingSourceOutcome GetCodeBindingSource(const Model::GetCodeBindingSourceRequest& request) const;

        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCodeBindingSourceOutcomeCallable GetCodeBindingSourceCallable(const Model::GetCodeBindingSourceRequest& request) const;

        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCodeBindingSourceAsync(const Model::GetCodeBindingSourceRequest& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the discovered schema that was generated based on sampled
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetDiscoveredSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoveredSchemaOutcome GetDiscoveredSchema(const Model::GetDiscoveredSchemaRequest& request) const;

        /**
         * <p>Get the discovered schema that was generated based on sampled
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetDiscoveredSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoveredSchemaOutcomeCallable GetDiscoveredSchemaCallable(const Model::GetDiscoveredSchemaRequest& request) const;

        /**
         * <p>Get the discovered schema that was generated based on sampled
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetDiscoveredSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiscoveredSchemaAsync(const Model::GetDiscoveredSchemaRequest& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource-based policy attached to a given
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves the resource-based policy attached to a given
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves the resource-based policy attached to a given
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoverersOutcome ListDiscoverers(const Model::ListDiscoverersRequest& request) const;

        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDiscoverersOutcomeCallable ListDiscoverersCallable(const Model::ListDiscoverersRequest& request) const;

        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDiscoverersAsync(const Model::ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;

        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const Model::ListRegistriesRequest& request) const;

        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegistriesAsync(const Model::ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of the schema versions and related information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * <p>Provides a list of the schema versions and related information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemaVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * <p>Provides a list of the schema versions and related information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemaVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaVersionsAsync(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCodeBindingOutcome PutCodeBinding(const Model::PutCodeBindingRequest& request) const;

        /**
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCodeBindingOutcomeCallable PutCodeBindingCallable(const Model::PutCodeBindingRequest& request) const;

        /**
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCodeBindingAsync(const Model::PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSchemasOutcome SearchSchemas(const Model::SearchSchemasRequest& request) const;

        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSchemasOutcomeCallable SearchSchemasCallable(const Model::SearchSchemasRequest& request) const;

        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSchemasAsync(const Model::SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDiscovererOutcome StartDiscoverer(const Model::StartDiscovererRequest& request) const;

        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDiscovererOutcomeCallable StartDiscovererCallable(const Model::StartDiscovererRequest& request) const;

        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDiscovererAsync(const Model::StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDiscovererOutcome StopDiscoverer(const Model::StopDiscovererRequest& request) const;

        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDiscovererOutcomeCallable StopDiscovererCallable(const Model::StopDiscovererRequest& request) const;

        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDiscovererAsync(const Model::StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDiscovererOutcome UpdateDiscoverer(const Model::UpdateDiscovererRequest& request) const;

        /**
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDiscovererOutcomeCallable UpdateDiscovererCallable(const Model::UpdateDiscovererRequest& request) const;

        /**
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDiscovererAsync(const Model::UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const Model::UpdateRegistryRequest& request) const;

        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegistryAsync(const Model::UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the schema definition</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;

        /**
         * <p>Updates the schema definition</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * <p>Updates the schema definition</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDiscovererAsyncHelper(const Model::CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRegistryAsyncHelper(const Model::CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSchemaAsyncHelper(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDiscovererAsyncHelper(const Model::DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegistryAsyncHelper(const Model::DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaAsyncHelper(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaVersionAsyncHelper(const Model::DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCodeBindingAsyncHelper(const Model::DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDiscovererAsyncHelper(const Model::DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRegistryAsyncHelper(const Model::DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSchemaAsyncHelper(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportSchemaAsyncHelper(const Model::ExportSchemaRequest& request, const ExportSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCodeBindingSourceAsyncHelper(const Model::GetCodeBindingSourceRequest& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiscoveredSchemaAsyncHelper(const Model::GetDiscoveredSchemaRequest& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDiscoverersAsyncHelper(const Model::ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegistriesAsyncHelper(const Model::ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemaVersionsAsyncHelper(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemasAsyncHelper(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutCodeBindingAsyncHelper(const Model::PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSchemasAsyncHelper(const Model::SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDiscovererAsyncHelper(const Model::StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDiscovererAsyncHelper(const Model::StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDiscovererAsyncHelper(const Model::UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegistryAsyncHelper(const Model::UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSchemaAsyncHelper(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Schemas
} // namespace Aws
