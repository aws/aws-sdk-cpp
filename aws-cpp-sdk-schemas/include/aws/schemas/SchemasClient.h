/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/schemas/SchemasServiceClientModel.h>

namespace Aws
{
namespace Schemas
{
  /**
   * <p>Amazon EventBridge Schema Registry</p>
   */
  class AWS_SCHEMAS_API SchemasClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SchemasClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration(),
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchemasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchemasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SchemasClient();

        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiscovererOutcome CreateDiscoverer(const Model::CreateDiscovererRequest& request) const;

        /**
         * A Callable wrapper for CreateDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiscovererOutcomeCallable CreateDiscovererCallable(const Model::CreateDiscovererRequest& request) const;

        /**
         * An Async wrapper for CreateDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiscovererAsync(const Model::CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const Model::CreateRegistryRequest& request) const;

        /**
         * An Async wrapper for CreateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiscovererOutcome DeleteDiscoverer(const Model::DeleteDiscovererRequest& request) const;

        /**
         * A Callable wrapper for DeleteDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiscovererOutcomeCallable DeleteDiscovererCallable(const Model::DeleteDiscovererRequest& request) const;

        /**
         * An Async wrapper for DeleteDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDiscovererAsync(const Model::DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const Model::DeleteRegistryRequest& request) const;

        /**
         * An Async wrapper for DeleteRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionOutcome DeleteSchemaVersion(const Model::DeleteSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaVersionOutcomeCallable DeleteSchemaVersionCallable(const Model::DeleteSchemaVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaVersionAsync(const Model::DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeBindingOutcome DescribeCodeBinding(const Model::DescribeCodeBindingRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeBinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeBindingOutcomeCallable DescribeCodeBindingCallable(const Model::DescribeCodeBindingRequest& request) const;

        /**
         * An Async wrapper for DescribeCodeBinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeBindingAsync(const Model::DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDiscovererOutcome DescribeDiscoverer(const Model::DescribeDiscovererRequest& request) const;

        /**
         * A Callable wrapper for DescribeDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDiscovererOutcomeCallable DescribeDiscovererCallable(const Model::DescribeDiscovererRequest& request) const;

        /**
         * An Async wrapper for DescribeDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDiscovererAsync(const Model::DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegistryOutcomeCallable DescribeRegistryCallable(const Model::DescribeRegistryRequest& request) const;

        /**
         * An Async wrapper for DescribeRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegistryAsync(const Model::DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemaOutcomeCallable DescribeSchemaCallable(const Model::DescribeSchemaRequest& request) const;

        /**
         * An Async wrapper for DescribeSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemaAsync(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ExportSchemaOutcome ExportSchema(const Model::ExportSchemaRequest& request) const;

        /**
         * A Callable wrapper for ExportSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportSchemaOutcomeCallable ExportSchemaCallable(const Model::ExportSchemaRequest& request) const;

        /**
         * An Async wrapper for ExportSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportSchemaAsync(const Model::ExportSchemaRequest& request, const ExportSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeBindingSourceOutcome GetCodeBindingSource(const Model::GetCodeBindingSourceRequest& request) const;

        /**
         * A Callable wrapper for GetCodeBindingSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCodeBindingSourceOutcomeCallable GetCodeBindingSourceCallable(const Model::GetCodeBindingSourceRequest& request) const;

        /**
         * An Async wrapper for GetCodeBindingSource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetDiscoveredSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoveredSchemaOutcomeCallable GetDiscoveredSchemaCallable(const Model::GetDiscoveredSchemaRequest& request) const;

        /**
         * An Async wrapper for GetDiscoveredSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoverersOutcome ListDiscoverers(const Model::ListDiscoverersRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoverers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDiscoverersOutcomeCallable ListDiscoverersCallable(const Model::ListDiscoverersRequest& request) const;

        /**
         * An Async wrapper for ListDiscoverers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDiscoverersAsync(const Model::ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;

        /**
         * A Callable wrapper for ListRegistries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const Model::ListRegistriesRequest& request) const;

        /**
         * An Async wrapper for ListRegistries that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListSchemaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * An Async wrapper for ListSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaVersionsAsync(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
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
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCodeBindingOutcome PutCodeBinding(const Model::PutCodeBindingRequest& request) const;

        /**
         * A Callable wrapper for PutCodeBinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCodeBindingOutcomeCallable PutCodeBindingCallable(const Model::PutCodeBindingRequest& request) const;

        /**
         * An Async wrapper for PutCodeBinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCodeBindingAsync(const Model::PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSchemasOutcome SearchSchemas(const Model::SearchSchemasRequest& request) const;

        /**
         * A Callable wrapper for SearchSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSchemasOutcomeCallable SearchSchemasCallable(const Model::SearchSchemasRequest& request) const;

        /**
         * An Async wrapper for SearchSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSchemasAsync(const Model::SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDiscovererOutcome StartDiscoverer(const Model::StartDiscovererRequest& request) const;

        /**
         * A Callable wrapper for StartDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDiscovererOutcomeCallable StartDiscovererCallable(const Model::StartDiscovererRequest& request) const;

        /**
         * An Async wrapper for StartDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDiscovererAsync(const Model::StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDiscovererOutcome StopDiscoverer(const Model::StopDiscovererRequest& request) const;

        /**
         * A Callable wrapper for StopDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDiscovererOutcomeCallable StopDiscovererCallable(const Model::StopDiscovererRequest& request) const;

        /**
         * An Async wrapper for StopDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDiscovererAsync(const Model::StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
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
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
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
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDiscovererOutcome UpdateDiscoverer(const Model::UpdateDiscovererRequest& request) const;

        /**
         * A Callable wrapper for UpdateDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDiscovererOutcomeCallable UpdateDiscovererCallable(const Model::UpdateDiscovererRequest& request) const;

        /**
         * An Async wrapper for UpdateDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDiscovererAsync(const Model::UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const Model::UpdateRegistryRequest& request) const;

        /**
         * An Async wrapper for UpdateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SchemasEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SchemasClient>;
      void init(const SchemasClientConfiguration& clientConfiguration);

      SchemasClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SchemasEndpointProviderBase> m_endpointProvider;
  };

} // namespace Schemas
} // namespace Aws
