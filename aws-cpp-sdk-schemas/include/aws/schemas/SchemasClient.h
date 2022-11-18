/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/schemas/SchemasServiceClientModel.h>
#include <aws/schemas/SchemasLegacyAsyncMacros.h>

namespace Aws
{
namespace Schemas
{
  /**
   * <p>Amazon EventBridge Schema Registry</p>
   */
  class AWS_SCHEMAS_API SchemasClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiscovererOutcome CreateDiscoverer(const Model::CreateDiscovererRequest& request) const;


        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;


        /**
         * <p>Creates a schema definition.</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;


        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiscovererOutcome DeleteDiscoverer(const Model::DeleteDiscovererRequest& request) const;


        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;


        /**
         * <p>Delete the resource-based policy attached to the specified
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;


        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionOutcome DeleteSchemaVersion(const Model::DeleteSchemaVersionRequest& request) const;


        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeBindingOutcome DescribeCodeBinding(const Model::DescribeCodeBindingRequest& request) const;


        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDiscovererOutcome DescribeDiscoverer(const Model::DescribeDiscovererRequest& request) const;


        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;


        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;


        /**
         * 
         */
        virtual Model::ExportSchemaOutcome ExportSchema(const Model::ExportSchemaRequest& request) const;


        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeBindingSourceOutcome GetCodeBindingSource(const Model::GetCodeBindingSourceRequest& request) const;


        /**
         * <p>Get the discovered schema that was generated based on sampled
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetDiscoveredSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoveredSchemaOutcome GetDiscoveredSchema(const Model::GetDiscoveredSchemaRequest& request) const;


        /**
         * <p>Retrieves the resource-based policy attached to a given
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoverersOutcome ListDiscoverers(const Model::ListDiscoverersRequest& request) const;


        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;


        /**
         * <p>Provides a list of the schema versions and related information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;


        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;


        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCodeBindingOutcome PutCodeBinding(const Model::PutCodeBindingRequest& request) const;


        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSchemasOutcome SearchSchemas(const Model::SearchSchemasRequest& request) const;


        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDiscovererOutcome StartDiscoverer(const Model::StartDiscovererRequest& request) const;


        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDiscovererOutcome StopDiscoverer(const Model::StopDiscovererRequest& request) const;


        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDiscovererOutcome UpdateDiscoverer(const Model::UpdateDiscovererRequest& request) const;


        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;


        /**
         * <p>Updates the schema definition</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SchemasEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SchemasClientConfiguration& clientConfiguration);

      SchemasClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SchemasEndpointProviderBase> m_endpointProvider;
  };

} // namespace Schemas
} // namespace Aws
