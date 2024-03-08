/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>

namespace Aws
{
namespace CloudDirectory
{
  /**
   * <fullname>Amazon Cloud Directory</fullname> <p>Amazon Cloud Directory is a
   * component of the AWS Directory Service that simplifies the development and
   * management of cloud-scale web, mobile, and IoT applications. This guide
   * describes the Cloud Directory operations that you can call programmatically and
   * includes detailed information on data types and errors. For information about
   * Cloud Directory features, see <a
   * href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and
   * the <a
   * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon
   * Cloud Directory Developer Guide</a>.</p>
   */
  class AWS_CLOUDDIRECTORY_API CloudDirectoryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudDirectoryClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudDirectoryClientConfiguration ClientConfigurationType;
      typedef CloudDirectoryEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration(),
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudDirectoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudDirectoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudDirectoryClient();

        /**
         * <p>Adds a new <a>Facet</a> to an object. An object can have more than one facet
         * applied on it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AddFacetToObject">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFacetToObjectOutcome AddFacetToObject(const Model::AddFacetToObjectRequest& request) const;

        /**
         * A Callable wrapper for AddFacetToObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddFacetToObjectRequestT = Model::AddFacetToObjectRequest>
        Model::AddFacetToObjectOutcomeCallable AddFacetToObjectCallable(const AddFacetToObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::AddFacetToObject, request);
        }

        /**
         * An Async wrapper for AddFacetToObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddFacetToObjectRequestT = Model::AddFacetToObjectRequest>
        void AddFacetToObjectAsync(const AddFacetToObjectRequestT& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::AddFacetToObject, request, handler, context);
        }

        /**
         * <p>Copies the input published schema, at the specified version, into the
         * <a>Directory</a> with the same name and version as that of the published
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ApplySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplySchemaOutcome ApplySchema(const Model::ApplySchemaRequest& request) const;

        /**
         * A Callable wrapper for ApplySchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplySchemaRequestT = Model::ApplySchemaRequest>
        Model::ApplySchemaOutcomeCallable ApplySchemaCallable(const ApplySchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ApplySchema, request);
        }

        /**
         * An Async wrapper for ApplySchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplySchemaRequestT = Model::ApplySchemaRequest>
        void ApplySchemaAsync(const ApplySchemaRequestT& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ApplySchema, request, handler, context);
        }

        /**
         * <p>Attaches an existing object to another object. An object can be accessed in
         * two ways:</p> <ol> <li> <p>Using the path</p> </li> <li> <p>Using
         * <code>ObjectIdentifier</code> </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachObject">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachObjectOutcome AttachObject(const Model::AttachObjectRequest& request) const;

        /**
         * A Callable wrapper for AttachObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachObjectRequestT = Model::AttachObjectRequest>
        Model::AttachObjectOutcomeCallable AttachObjectCallable(const AttachObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::AttachObject, request);
        }

        /**
         * An Async wrapper for AttachObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachObjectRequestT = Model::AttachObjectRequest>
        void AttachObjectAsync(const AttachObjectRequestT& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::AttachObject, request, handler, context);
        }

        /**
         * <p>Attaches a policy object to a regular object. An object can have a limited
         * number of attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const AttachPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::AttachPolicy, request);
        }

        /**
         * An Async wrapper for AttachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        void AttachPolicyAsync(const AttachPolicyRequestT& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::AttachPolicy, request, handler, context);
        }

        /**
         * <p>Attaches the specified object to the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachToIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachToIndexOutcome AttachToIndex(const Model::AttachToIndexRequest& request) const;

        /**
         * A Callable wrapper for AttachToIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachToIndexRequestT = Model::AttachToIndexRequest>
        Model::AttachToIndexOutcomeCallable AttachToIndexCallable(const AttachToIndexRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::AttachToIndex, request);
        }

        /**
         * An Async wrapper for AttachToIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachToIndexRequestT = Model::AttachToIndexRequest>
        void AttachToIndexAsync(const AttachToIndexRequestT& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::AttachToIndex, request, handler, context);
        }

        /**
         * <p>Attaches a typed link to a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachTypedLink">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachTypedLinkOutcome AttachTypedLink(const Model::AttachTypedLinkRequest& request) const;

        /**
         * A Callable wrapper for AttachTypedLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachTypedLinkRequestT = Model::AttachTypedLinkRequest>
        Model::AttachTypedLinkOutcomeCallable AttachTypedLinkCallable(const AttachTypedLinkRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::AttachTypedLink, request);
        }

        /**
         * An Async wrapper for AttachTypedLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachTypedLinkRequestT = Model::AttachTypedLinkRequest>
        void AttachTypedLinkAsync(const AttachTypedLinkRequestT& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::AttachTypedLink, request, handler, context);
        }

        /**
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchReadOutcome BatchRead(const Model::BatchReadRequest& request) const;

        /**
         * A Callable wrapper for BatchRead that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchReadRequestT = Model::BatchReadRequest>
        Model::BatchReadOutcomeCallable BatchReadCallable(const BatchReadRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::BatchRead, request);
        }

        /**
         * An Async wrapper for BatchRead that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchReadRequestT = Model::BatchReadRequest>
        void BatchReadAsync(const BatchReadRequestT& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::BatchRead, request, handler, context);
        }

        /**
         * <p>Performs all the write operations in a batch. Either all the operations
         * succeed or none.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWrite">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchWriteOutcome BatchWrite(const Model::BatchWriteRequest& request) const;

        /**
         * A Callable wrapper for BatchWrite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchWriteRequestT = Model::BatchWriteRequest>
        Model::BatchWriteOutcomeCallable BatchWriteCallable(const BatchWriteRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::BatchWrite, request);
        }

        /**
         * An Async wrapper for BatchWrite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchWriteRequestT = Model::BatchWriteRequest>
        void BatchWriteAsync(const BatchWriteRequestT& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::BatchWrite, request, handler, context);
        }

        /**
         * <p>Creates a <a>Directory</a> by copying the published schema into the
         * directory. A directory cannot be created without a schema.</p> <p>You can also
         * quickly create a directory using a managed schema, called the
         * <code>QuickStartSchema</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_managed.html">Managed
         * Schema</a> in the <i>Amazon Cloud Directory Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryOutcome CreateDirectory(const Model::CreateDirectoryRequest& request) const;

        /**
         * A Callable wrapper for CreateDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDirectoryRequestT = Model::CreateDirectoryRequest>
        Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const CreateDirectoryRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateDirectory, request);
        }

        /**
         * An Async wrapper for CreateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDirectoryRequestT = Model::CreateDirectoryRequest>
        void CreateDirectoryAsync(const CreateDirectoryRequestT& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateDirectory, request, handler, context);
        }

        /**
         * <p>Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in
         * development or applied schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFacetOutcome CreateFacet(const Model::CreateFacetRequest& request) const;

        /**
         * A Callable wrapper for CreateFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFacetRequestT = Model::CreateFacetRequest>
        Model::CreateFacetOutcomeCallable CreateFacetCallable(const CreateFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateFacet, request);
        }

        /**
         * An Async wrapper for CreateFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFacetRequestT = Model::CreateFacetRequest>
        void CreateFacetAsync(const CreateFacetRequestT& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateFacet, request, handler, context);
        }

        /**
         * <p>Creates an index object. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.html">Indexing
         * and search</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * A Callable wrapper for CreateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        Model::CreateIndexOutcomeCallable CreateIndexCallable(const CreateIndexRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateIndex, request);
        }

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        void CreateIndexAsync(const CreateIndexRequestT& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateIndex, request, handler, context);
        }

        /**
         * <p>Creates an object in a <a>Directory</a>. Additionally attaches the object to
         * a parent, if a parent reference and <code>LinkName</code> is specified. An
         * object is simply a collection of <a>Facet</a> attributes. You can also use this
         * API call to create a policy object, if the facet from which you create the
         * object is a policy facet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateObject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateObjectOutcome CreateObject(const Model::CreateObjectRequest& request) const;

        /**
         * A Callable wrapper for CreateObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateObjectRequestT = Model::CreateObjectRequest>
        Model::CreateObjectOutcomeCallable CreateObjectCallable(const CreateObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateObject, request);
        }

        /**
         * An Async wrapper for CreateObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateObjectRequestT = Model::CreateObjectRequest>
        void CreateObjectAsync(const CreateObjectRequestT& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateObject, request, handler, context);
        }

        /**
         * <p>Creates a new schema in a development state. A schema can exist in three
         * phases:</p> <ul> <li> <p> <i>Development:</i> This is a mutable phase of the
         * schema. All new schemas are in the development phase. Once the schema is
         * finalized, it can be published.</p> </li> <li> <p> <i>Published:</i> Published
         * schemas are immutable and have a version associated with them.</p> </li> <li>
         * <p> <i>Applied:</i> Applied schemas are mutable in a way that allows you to add
         * new schema facets. You can also add new, nonrequired attributes to existing
         * schema facets. You can apply only published schemas to directories. </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * A Callable wrapper for CreateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const CreateSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateSchema, request);
        }

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        void CreateSchemaAsync(const CreateSchemaRequestT& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateSchema, request, handler, context);
        }

        /**
         * <p>Creates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypedLinkFacetOutcome CreateTypedLinkFacet(const Model::CreateTypedLinkFacetRequest& request) const;

        /**
         * A Callable wrapper for CreateTypedLinkFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTypedLinkFacetRequestT = Model::CreateTypedLinkFacetRequest>
        Model::CreateTypedLinkFacetOutcomeCallable CreateTypedLinkFacetCallable(const CreateTypedLinkFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::CreateTypedLinkFacet, request);
        }

        /**
         * An Async wrapper for CreateTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTypedLinkFacetRequestT = Model::CreateTypedLinkFacetRequest>
        void CreateTypedLinkFacetAsync(const CreateTypedLinkFacetRequestT& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::CreateTypedLinkFacet, request, handler, context);
        }

        /**
         * <p>Deletes a directory. Only disabled directories can be deleted. A deleted
         * directory cannot be undone. Exercise extreme caution when deleting
         * directories.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryOutcome DeleteDirectory(const Model::DeleteDirectoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDirectoryRequestT = Model::DeleteDirectoryRequest>
        Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const DeleteDirectoryRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DeleteDirectory, request);
        }

        /**
         * An Async wrapper for DeleteDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDirectoryRequestT = Model::DeleteDirectoryRequest>
        void DeleteDirectoryAsync(const DeleteDirectoryRequestT& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DeleteDirectory, request, handler, context);
        }

        /**
         * <p>Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are
         * associated with the facet will be deleted. Only development schema facets are
         * allowed deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFacetOutcome DeleteFacet(const Model::DeleteFacetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFacetRequestT = Model::DeleteFacetRequest>
        Model::DeleteFacetOutcomeCallable DeleteFacetCallable(const DeleteFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DeleteFacet, request);
        }

        /**
         * An Async wrapper for DeleteFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFacetRequestT = Model::DeleteFacetRequest>
        void DeleteFacetAsync(const DeleteFacetRequestT& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DeleteFacet, request, handler, context);
        }

        /**
         * <p>Deletes an object and its associated attributes. Only objects with no
         * children and no parents can be deleted. The maximum number of attributes that
         * can be deleted during an object deletion is 30. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
         * Cloud Directory Limits</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteObjectRequestT = Model::DeleteObjectRequest>
        Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const DeleteObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DeleteObject, request);
        }

        /**
         * An Async wrapper for DeleteObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteObjectRequestT = Model::DeleteObjectRequest>
        void DeleteObjectAsync(const DeleteObjectRequestT& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DeleteObject, request, handler, context);
        }

        /**
         * <p>Deletes a given schema. Schemas in a development and published state can only
         * be deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const DeleteSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DeleteSchema, request);
        }

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        void DeleteSchemaAsync(const DeleteSchemaRequestT& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DeleteSchema, request, handler, context);
        }

        /**
         * <p>Deletes a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypedLinkFacetOutcome DeleteTypedLinkFacet(const Model::DeleteTypedLinkFacetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTypedLinkFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTypedLinkFacetRequestT = Model::DeleteTypedLinkFacetRequest>
        Model::DeleteTypedLinkFacetOutcomeCallable DeleteTypedLinkFacetCallable(const DeleteTypedLinkFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DeleteTypedLinkFacet, request);
        }

        /**
         * An Async wrapper for DeleteTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTypedLinkFacetRequestT = Model::DeleteTypedLinkFacetRequest>
        void DeleteTypedLinkFacetAsync(const DeleteTypedLinkFacetRequestT& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DeleteTypedLinkFacet, request, handler, context);
        }

        /**
         * <p>Detaches the specified object from the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachFromIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachFromIndexOutcome DetachFromIndex(const Model::DetachFromIndexRequest& request) const;

        /**
         * A Callable wrapper for DetachFromIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachFromIndexRequestT = Model::DetachFromIndexRequest>
        Model::DetachFromIndexOutcomeCallable DetachFromIndexCallable(const DetachFromIndexRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DetachFromIndex, request);
        }

        /**
         * An Async wrapper for DetachFromIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachFromIndexRequestT = Model::DetachFromIndexRequest>
        void DetachFromIndexAsync(const DetachFromIndexRequestT& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DetachFromIndex, request, handler, context);
        }

        /**
         * <p>Detaches a given object from the parent object. The object that is to be
         * detached from the parent is specified by the link name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachObjectOutcome DetachObject(const Model::DetachObjectRequest& request) const;

        /**
         * A Callable wrapper for DetachObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachObjectRequestT = Model::DetachObjectRequest>
        Model::DetachObjectOutcomeCallable DetachObjectCallable(const DetachObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DetachObject, request);
        }

        /**
         * An Async wrapper for DetachObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachObjectRequestT = Model::DetachObjectRequest>
        void DetachObjectAsync(const DetachObjectRequestT& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DetachObject, request, handler, context);
        }

        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const DetachPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DetachPolicy, request);
        }

        /**
         * An Async wrapper for DetachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        void DetachPolicyAsync(const DetachPolicyRequestT& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DetachPolicy, request, handler, context);
        }

        /**
         * <p>Detaches a typed link from a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachTypedLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachTypedLinkOutcome DetachTypedLink(const Model::DetachTypedLinkRequest& request) const;

        /**
         * A Callable wrapper for DetachTypedLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachTypedLinkRequestT = Model::DetachTypedLinkRequest>
        Model::DetachTypedLinkOutcomeCallable DetachTypedLinkCallable(const DetachTypedLinkRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DetachTypedLink, request);
        }

        /**
         * An Async wrapper for DetachTypedLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachTypedLinkRequestT = Model::DetachTypedLinkRequest>
        void DetachTypedLinkAsync(const DetachTypedLinkRequestT& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DetachTypedLink, request, handler, context);
        }

        /**
         * <p>Disables the specified directory. Disabled directories cannot be read or
         * written to. Only enabled directories can be disabled. Disabled directories may
         * be reenabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DisableDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDirectoryOutcome DisableDirectory(const Model::DisableDirectoryRequest& request) const;

        /**
         * A Callable wrapper for DisableDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableDirectoryRequestT = Model::DisableDirectoryRequest>
        Model::DisableDirectoryOutcomeCallable DisableDirectoryCallable(const DisableDirectoryRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::DisableDirectory, request);
        }

        /**
         * An Async wrapper for DisableDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableDirectoryRequestT = Model::DisableDirectoryRequest>
        void DisableDirectoryAsync(const DisableDirectoryRequestT& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::DisableDirectory, request, handler, context);
        }

        /**
         * <p>Enables the specified directory. Only disabled directories can be enabled.
         * Once enabled, the directory can then be read and written to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/EnableDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDirectoryOutcome EnableDirectory(const Model::EnableDirectoryRequest& request) const;

        /**
         * A Callable wrapper for EnableDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableDirectoryRequestT = Model::EnableDirectoryRequest>
        Model::EnableDirectoryOutcomeCallable EnableDirectoryCallable(const EnableDirectoryRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::EnableDirectory, request);
        }

        /**
         * An Async wrapper for EnableDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableDirectoryRequestT = Model::EnableDirectoryRequest>
        void EnableDirectoryAsync(const EnableDirectoryRequestT& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::EnableDirectory, request, handler, context);
        }

        /**
         * <p>Returns current applied schema version ARN, including the minor version in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetAppliedSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppliedSchemaVersionOutcome GetAppliedSchemaVersion(const Model::GetAppliedSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for GetAppliedSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppliedSchemaVersionRequestT = Model::GetAppliedSchemaVersionRequest>
        Model::GetAppliedSchemaVersionOutcomeCallable GetAppliedSchemaVersionCallable(const GetAppliedSchemaVersionRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetAppliedSchemaVersion, request);
        }

        /**
         * An Async wrapper for GetAppliedSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppliedSchemaVersionRequestT = Model::GetAppliedSchemaVersionRequest>
        void GetAppliedSchemaVersionAsync(const GetAppliedSchemaVersionRequestT& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetAppliedSchemaVersion, request, handler, context);
        }

        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryOutcome GetDirectory(const Model::GetDirectoryRequest& request) const;

        /**
         * A Callable wrapper for GetDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDirectoryRequestT = Model::GetDirectoryRequest>
        Model::GetDirectoryOutcomeCallable GetDirectoryCallable(const GetDirectoryRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetDirectory, request);
        }

        /**
         * An Async wrapper for GetDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDirectoryRequestT = Model::GetDirectoryRequest>
        void GetDirectoryAsync(const GetDirectoryRequestT& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetDirectory, request, handler, context);
        }

        /**
         * <p>Gets details of the <a>Facet</a>, such as facet name, attributes,
         * <a>Rule</a>s, or <code>ObjectType</code>. You can call this on all kinds of
         * schema facets -- published, development, or applied.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFacetOutcome GetFacet(const Model::GetFacetRequest& request) const;

        /**
         * A Callable wrapper for GetFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFacetRequestT = Model::GetFacetRequest>
        Model::GetFacetOutcomeCallable GetFacetCallable(const GetFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetFacet, request);
        }

        /**
         * An Async wrapper for GetFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFacetRequestT = Model::GetFacetRequest>
        void GetFacetAsync(const GetFacetRequestT& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetFacet, request, handler, context);
        }

        /**
         * <p>Retrieves attributes that are associated with a typed link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetLinkAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAttributesOutcome GetLinkAttributes(const Model::GetLinkAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetLinkAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinkAttributesRequestT = Model::GetLinkAttributesRequest>
        Model::GetLinkAttributesOutcomeCallable GetLinkAttributesCallable(const GetLinkAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetLinkAttributes, request);
        }

        /**
         * An Async wrapper for GetLinkAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinkAttributesRequestT = Model::GetLinkAttributesRequest>
        void GetLinkAttributesAsync(const GetLinkAttributesRequestT& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetLinkAttributes, request, handler, context);
        }

        /**
         * <p>Retrieves attributes within a facet that are associated with an
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectAttributesOutcome GetObjectAttributes(const Model::GetObjectAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetObjectAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetObjectAttributesRequestT = Model::GetObjectAttributesRequest>
        Model::GetObjectAttributesOutcomeCallable GetObjectAttributesCallable(const GetObjectAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetObjectAttributes, request);
        }

        /**
         * An Async wrapper for GetObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetObjectAttributesRequestT = Model::GetObjectAttributesRequest>
        void GetObjectAttributesAsync(const GetObjectAttributesRequestT& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetObjectAttributes, request, handler, context);
        }

        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectInformationOutcome GetObjectInformation(const Model::GetObjectInformationRequest& request) const;

        /**
         * A Callable wrapper for GetObjectInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetObjectInformationRequestT = Model::GetObjectInformationRequest>
        Model::GetObjectInformationOutcomeCallable GetObjectInformationCallable(const GetObjectInformationRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetObjectInformation, request);
        }

        /**
         * An Async wrapper for GetObjectInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetObjectInformationRequestT = Model::GetObjectInformationRequest>
        void GetObjectInformationAsync(const GetObjectInformationRequestT& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetObjectInformation, request, handler, context);
        }

        /**
         * <p>Retrieves a JSON representation of the schema. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetSchemaAsJson">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaAsJsonOutcome GetSchemaAsJson(const Model::GetSchemaAsJsonRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaAsJson that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaAsJsonRequestT = Model::GetSchemaAsJsonRequest>
        Model::GetSchemaAsJsonOutcomeCallable GetSchemaAsJsonCallable(const GetSchemaAsJsonRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetSchemaAsJson, request);
        }

        /**
         * An Async wrapper for GetSchemaAsJson that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaAsJsonRequestT = Model::GetSchemaAsJsonRequest>
        void GetSchemaAsJsonAsync(const GetSchemaAsJsonRequestT& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetSchemaAsJson, request, handler, context);
        }

        /**
         * <p>Returns the identity attribute order for a specific <a>TypedLinkFacet</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetTypedLinkFacetInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTypedLinkFacetInformationOutcome GetTypedLinkFacetInformation(const Model::GetTypedLinkFacetInformationRequest& request) const;

        /**
         * A Callable wrapper for GetTypedLinkFacetInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTypedLinkFacetInformationRequestT = Model::GetTypedLinkFacetInformationRequest>
        Model::GetTypedLinkFacetInformationOutcomeCallable GetTypedLinkFacetInformationCallable(const GetTypedLinkFacetInformationRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::GetTypedLinkFacetInformation, request);
        }

        /**
         * An Async wrapper for GetTypedLinkFacetInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTypedLinkFacetInformationRequestT = Model::GetTypedLinkFacetInformationRequest>
        void GetTypedLinkFacetInformationAsync(const GetTypedLinkFacetInformationRequestT& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::GetTypedLinkFacetInformation, request, handler, context);
        }

        /**
         * <p>Lists schema major versions applied to a directory. If <code>SchemaArn</code>
         * is provided, lists the minor version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAppliedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppliedSchemaArnsOutcome ListAppliedSchemaArns(const Model::ListAppliedSchemaArnsRequest& request) const;

        /**
         * A Callable wrapper for ListAppliedSchemaArns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppliedSchemaArnsRequestT = Model::ListAppliedSchemaArnsRequest>
        Model::ListAppliedSchemaArnsOutcomeCallable ListAppliedSchemaArnsCallable(const ListAppliedSchemaArnsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListAppliedSchemaArns, request);
        }

        /**
         * An Async wrapper for ListAppliedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppliedSchemaArnsRequestT = Model::ListAppliedSchemaArnsRequest>
        void ListAppliedSchemaArnsAsync(const ListAppliedSchemaArnsRequestT& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListAppliedSchemaArns, request, handler, context);
        }

        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedIndicesOutcome ListAttachedIndices(const Model::ListAttachedIndicesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedIndices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttachedIndicesRequestT = Model::ListAttachedIndicesRequest>
        Model::ListAttachedIndicesOutcomeCallable ListAttachedIndicesCallable(const ListAttachedIndicesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListAttachedIndices, request);
        }

        /**
         * An Async wrapper for ListAttachedIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttachedIndicesRequestT = Model::ListAttachedIndicesRequest>
        void ListAttachedIndicesAsync(const ListAttachedIndicesRequestT& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListAttachedIndices, request, handler, context);
        }

        /**
         * <p>Retrieves each Amazon Resource Name (ARN) of schemas in the development
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDevelopmentSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevelopmentSchemaArnsOutcome ListDevelopmentSchemaArns(const Model::ListDevelopmentSchemaArnsRequest& request) const;

        /**
         * A Callable wrapper for ListDevelopmentSchemaArns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevelopmentSchemaArnsRequestT = Model::ListDevelopmentSchemaArnsRequest>
        Model::ListDevelopmentSchemaArnsOutcomeCallable ListDevelopmentSchemaArnsCallable(const ListDevelopmentSchemaArnsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListDevelopmentSchemaArns, request);
        }

        /**
         * An Async wrapper for ListDevelopmentSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevelopmentSchemaArnsRequestT = Model::ListDevelopmentSchemaArnsRequest>
        void ListDevelopmentSchemaArnsAsync(const ListDevelopmentSchemaArnsRequestT& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListDevelopmentSchemaArns, request, handler, context);
        }

        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDirectoriesOutcome ListDirectories(const Model::ListDirectoriesRequest& request) const;

        /**
         * A Callable wrapper for ListDirectories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDirectoriesRequestT = Model::ListDirectoriesRequest>
        Model::ListDirectoriesOutcomeCallable ListDirectoriesCallable(const ListDirectoriesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListDirectories, request);
        }

        /**
         * An Async wrapper for ListDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDirectoriesRequestT = Model::ListDirectoriesRequest>
        void ListDirectoriesAsync(const ListDirectoriesRequestT& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListDirectories, request, handler, context);
        }

        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetAttributesOutcome ListFacetAttributes(const Model::ListFacetAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListFacetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFacetAttributesRequestT = Model::ListFacetAttributesRequest>
        Model::ListFacetAttributesOutcomeCallable ListFacetAttributesCallable(const ListFacetAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListFacetAttributes, request);
        }

        /**
         * An Async wrapper for ListFacetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFacetAttributesRequestT = Model::ListFacetAttributesRequest>
        void ListFacetAttributesAsync(const ListFacetAttributesRequestT& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListFacetAttributes, request, handler, context);
        }

        /**
         * <p>Retrieves the names of facets that exist in a schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetNamesOutcome ListFacetNames(const Model::ListFacetNamesRequest& request) const;

        /**
         * A Callable wrapper for ListFacetNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFacetNamesRequestT = Model::ListFacetNamesRequest>
        Model::ListFacetNamesOutcomeCallable ListFacetNamesCallable(const ListFacetNamesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListFacetNames, request);
        }

        /**
         * An Async wrapper for ListFacetNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFacetNamesRequestT = Model::ListFacetNamesRequest>
        void ListFacetNamesAsync(const ListFacetNamesRequestT& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListFacetNames, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIncomingTypedLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIncomingTypedLinksOutcome ListIncomingTypedLinks(const Model::ListIncomingTypedLinksRequest& request) const;

        /**
         * A Callable wrapper for ListIncomingTypedLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIncomingTypedLinksRequestT = Model::ListIncomingTypedLinksRequest>
        Model::ListIncomingTypedLinksOutcomeCallable ListIncomingTypedLinksCallable(const ListIncomingTypedLinksRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListIncomingTypedLinks, request);
        }

        /**
         * An Async wrapper for ListIncomingTypedLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIncomingTypedLinksRequestT = Model::ListIncomingTypedLinksRequest>
        void ListIncomingTypedLinksAsync(const ListIncomingTypedLinksRequestT& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListIncomingTypedLinks, request, handler, context);
        }

        /**
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexOutcome ListIndex(const Model::ListIndexRequest& request) const;

        /**
         * A Callable wrapper for ListIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIndexRequestT = Model::ListIndexRequest>
        Model::ListIndexOutcomeCallable ListIndexCallable(const ListIndexRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListIndex, request);
        }

        /**
         * An Async wrapper for ListIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndexRequestT = Model::ListIndexRequest>
        void ListIndexAsync(const ListIndexRequestT& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListIndex, request, handler, context);
        }

        /**
         * <p>Lists the major version families of each managed schema. If a major version
         * ARN is provided as SchemaArn, the minor version revisions in that family are
         * listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListManagedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedSchemaArnsOutcome ListManagedSchemaArns(const Model::ListManagedSchemaArnsRequest& request) const;

        /**
         * A Callable wrapper for ListManagedSchemaArns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedSchemaArnsRequestT = Model::ListManagedSchemaArnsRequest>
        Model::ListManagedSchemaArnsOutcomeCallable ListManagedSchemaArnsCallable(const ListManagedSchemaArnsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListManagedSchemaArns, request);
        }

        /**
         * An Async wrapper for ListManagedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedSchemaArnsRequestT = Model::ListManagedSchemaArnsRequest>
        void ListManagedSchemaArnsAsync(const ListManagedSchemaArnsRequestT& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListManagedSchemaArns, request, handler, context);
        }

        /**
         * <p>Lists all attributes that are associated with an object. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectAttributesOutcome ListObjectAttributes(const Model::ListObjectAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListObjectAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectAttributesRequestT = Model::ListObjectAttributesRequest>
        Model::ListObjectAttributesOutcomeCallable ListObjectAttributesCallable(const ListObjectAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListObjectAttributes, request);
        }

        /**
         * An Async wrapper for ListObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectAttributesRequestT = Model::ListObjectAttributesRequest>
        void ListObjectAttributesAsync(const ListObjectAttributesRequestT& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListObjectAttributes, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of child objects that are associated with a given
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectChildren">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectChildrenOutcome ListObjectChildren(const Model::ListObjectChildrenRequest& request) const;

        /**
         * A Callable wrapper for ListObjectChildren that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectChildrenRequestT = Model::ListObjectChildrenRequest>
        Model::ListObjectChildrenOutcomeCallable ListObjectChildrenCallable(const ListObjectChildrenRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListObjectChildren, request);
        }

        /**
         * An Async wrapper for ListObjectChildren that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectChildrenRequestT = Model::ListObjectChildrenRequest>
        void ListObjectChildrenAsync(const ListObjectChildrenRequestT& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListObjectChildren, request, handler, context);
        }

        /**
         * <p>Retrieves all available parent paths for any object type such as node, leaf
         * node, policy node, and index node objects. For more information about objects,
         * see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directorystructure.html">Directory
         * Structure</a>.</p> <p>Use this API to evaluate all parents for an object. The
         * call returns all objects from the root of the directory up to the requested
         * object. The API returns the number of paths based on user-defined
         * <code>MaxResults</code>, in case there are multiple paths to the parent. The
         * order of the paths and nodes returned is consistent among multiple API calls
         * unless the objects are deleted or moved. Paths not leading to the directory root
         * are ignored from the target object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectParentPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectParentPathsOutcome ListObjectParentPaths(const Model::ListObjectParentPathsRequest& request) const;

        /**
         * A Callable wrapper for ListObjectParentPaths that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectParentPathsRequestT = Model::ListObjectParentPathsRequest>
        Model::ListObjectParentPathsOutcomeCallable ListObjectParentPathsCallable(const ListObjectParentPathsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListObjectParentPaths, request);
        }

        /**
         * An Async wrapper for ListObjectParentPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectParentPathsRequestT = Model::ListObjectParentPathsRequest>
        void ListObjectParentPathsAsync(const ListObjectParentPathsRequestT& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListObjectParentPaths, request, handler, context);
        }

        /**
         * <p>Lists parent objects that are associated with a given object in pagination
         * fashion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectParents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectParentsOutcome ListObjectParents(const Model::ListObjectParentsRequest& request) const;

        /**
         * A Callable wrapper for ListObjectParents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectParentsRequestT = Model::ListObjectParentsRequest>
        Model::ListObjectParentsOutcomeCallable ListObjectParentsCallable(const ListObjectParentsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListObjectParents, request);
        }

        /**
         * An Async wrapper for ListObjectParents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectParentsRequestT = Model::ListObjectParentsRequest>
        void ListObjectParentsAsync(const ListObjectParentsRequestT& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListObjectParents, request, handler, context);
        }

        /**
         * <p>Returns policies attached to an object in pagination fashion.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectPoliciesOutcome ListObjectPolicies(const Model::ListObjectPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListObjectPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObjectPoliciesRequestT = Model::ListObjectPoliciesRequest>
        Model::ListObjectPoliciesOutcomeCallable ListObjectPoliciesCallable(const ListObjectPoliciesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListObjectPolicies, request);
        }

        /**
         * An Async wrapper for ListObjectPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObjectPoliciesRequestT = Model::ListObjectPoliciesRequest>
        void ListObjectPoliciesAsync(const ListObjectPoliciesRequestT& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListObjectPolicies, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListOutgoingTypedLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutgoingTypedLinksOutcome ListOutgoingTypedLinks(const Model::ListOutgoingTypedLinksRequest& request) const;

        /**
         * A Callable wrapper for ListOutgoingTypedLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOutgoingTypedLinksRequestT = Model::ListOutgoingTypedLinksRequest>
        Model::ListOutgoingTypedLinksOutcomeCallable ListOutgoingTypedLinksCallable(const ListOutgoingTypedLinksRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListOutgoingTypedLinks, request);
        }

        /**
         * An Async wrapper for ListOutgoingTypedLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOutgoingTypedLinksRequestT = Model::ListOutgoingTypedLinksRequest>
        void ListOutgoingTypedLinksAsync(const ListOutgoingTypedLinksRequestT& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListOutgoingTypedLinks, request, handler, context);
        }

        /**
         * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPolicyAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyAttachmentsOutcome ListPolicyAttachments(const Model::ListPolicyAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyAttachmentsRequestT = Model::ListPolicyAttachmentsRequest>
        Model::ListPolicyAttachmentsOutcomeCallable ListPolicyAttachmentsCallable(const ListPolicyAttachmentsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListPolicyAttachments, request);
        }

        /**
         * An Async wrapper for ListPolicyAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyAttachmentsRequestT = Model::ListPolicyAttachmentsRequest>
        void ListPolicyAttachmentsAsync(const ListPolicyAttachmentsRequestT& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListPolicyAttachments, request, handler, context);
        }

        /**
         * <p>Lists the major version families of each published schema. If a major version
         * ARN is provided as <code>SchemaArn</code>, the minor version revisions in that
         * family are listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPublishedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublishedSchemaArnsOutcome ListPublishedSchemaArns(const Model::ListPublishedSchemaArnsRequest& request) const;

        /**
         * A Callable wrapper for ListPublishedSchemaArns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPublishedSchemaArnsRequestT = Model::ListPublishedSchemaArnsRequest>
        Model::ListPublishedSchemaArnsOutcomeCallable ListPublishedSchemaArnsCallable(const ListPublishedSchemaArnsRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListPublishedSchemaArns, request);
        }

        /**
         * An Async wrapper for ListPublishedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPublishedSchemaArnsRequestT = Model::ListPublishedSchemaArnsRequest>
        void ListPublishedSchemaArnsAsync(const ListPublishedSchemaArnsRequestT& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListPublishedSchemaArns, request, handler, context);
        }

        /**
         * <p>Returns tags for a resource. Tagging is currently supported only for
         * directories with a limit of 50 tags per directory. All 50 tags are returned for
         * a given directory with this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all attribute definitions for a particular
         * <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypedLinkFacetAttributesOutcome ListTypedLinkFacetAttributes(const Model::ListTypedLinkFacetAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListTypedLinkFacetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTypedLinkFacetAttributesRequestT = Model::ListTypedLinkFacetAttributesRequest>
        Model::ListTypedLinkFacetAttributesOutcomeCallable ListTypedLinkFacetAttributesCallable(const ListTypedLinkFacetAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListTypedLinkFacetAttributes, request);
        }

        /**
         * An Async wrapper for ListTypedLinkFacetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTypedLinkFacetAttributesRequestT = Model::ListTypedLinkFacetAttributesRequest>
        void ListTypedLinkFacetAttributesAsync(const ListTypedLinkFacetAttributesRequestT& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListTypedLinkFacetAttributes, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of <code>TypedLink</code> facet names for a
         * particular schema. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypedLinkFacetNamesOutcome ListTypedLinkFacetNames(const Model::ListTypedLinkFacetNamesRequest& request) const;

        /**
         * A Callable wrapper for ListTypedLinkFacetNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTypedLinkFacetNamesRequestT = Model::ListTypedLinkFacetNamesRequest>
        Model::ListTypedLinkFacetNamesOutcomeCallable ListTypedLinkFacetNamesCallable(const ListTypedLinkFacetNamesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::ListTypedLinkFacetNames, request);
        }

        /**
         * An Async wrapper for ListTypedLinkFacetNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTypedLinkFacetNamesRequestT = Model::ListTypedLinkFacetNamesRequest>
        void ListTypedLinkFacetNamesAsync(const ListTypedLinkFacetNamesRequestT& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::ListTypedLinkFacetNames, request, handler, context);
        }

        /**
         * <p>Lists all policies from the root of the <a>Directory</a> to the object
         * specified. If there are no policies present, an empty list is returned. If
         * policies are present, and if some objects don't have the policies attached, it
         * returns the <code>ObjectIdentifier</code> for such objects. If policies are
         * present, it returns <code>ObjectIdentifier</code>, <code>policyId</code>, and
         * <code>policyType</code>. Paths that don't lead to the root from the target
         * object are ignored. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/LookupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupPolicyOutcome LookupPolicy(const Model::LookupPolicyRequest& request) const;

        /**
         * A Callable wrapper for LookupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LookupPolicyRequestT = Model::LookupPolicyRequest>
        Model::LookupPolicyOutcomeCallable LookupPolicyCallable(const LookupPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::LookupPolicy, request);
        }

        /**
         * An Async wrapper for LookupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LookupPolicyRequestT = Model::LookupPolicyRequest>
        void LookupPolicyAsync(const LookupPolicyRequestT& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::LookupPolicy, request, handler, context);
        }

        /**
         * <p>Publishes a development schema with a major version and a recommended minor
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PublishSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishSchemaOutcome PublishSchema(const Model::PublishSchemaRequest& request) const;

        /**
         * A Callable wrapper for PublishSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishSchemaRequestT = Model::PublishSchemaRequest>
        Model::PublishSchemaOutcomeCallable PublishSchemaCallable(const PublishSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::PublishSchema, request);
        }

        /**
         * An Async wrapper for PublishSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishSchemaRequestT = Model::PublishSchemaRequest>
        void PublishSchemaAsync(const PublishSchemaRequestT& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::PublishSchema, request, handler, context);
        }

        /**
         * <p>Allows a schema to be updated using JSON upload. Only available for
         * development schemas. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PutSchemaFromJson">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSchemaFromJsonOutcome PutSchemaFromJson(const Model::PutSchemaFromJsonRequest& request) const;

        /**
         * A Callable wrapper for PutSchemaFromJson that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSchemaFromJsonRequestT = Model::PutSchemaFromJsonRequest>
        Model::PutSchemaFromJsonOutcomeCallable PutSchemaFromJsonCallable(const PutSchemaFromJsonRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::PutSchemaFromJson, request);
        }

        /**
         * An Async wrapper for PutSchemaFromJson that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSchemaFromJsonRequestT = Model::PutSchemaFromJsonRequest>
        void PutSchemaFromJsonAsync(const PutSchemaFromJsonRequestT& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::PutSchemaFromJson, request, handler, context);
        }

        /**
         * <p>Removes the specified facet from the specified object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/RemoveFacetFromObject">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFacetFromObjectOutcome RemoveFacetFromObject(const Model::RemoveFacetFromObjectRequest& request) const;

        /**
         * A Callable wrapper for RemoveFacetFromObject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFacetFromObjectRequestT = Model::RemoveFacetFromObjectRequest>
        Model::RemoveFacetFromObjectOutcomeCallable RemoveFacetFromObjectCallable(const RemoveFacetFromObjectRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::RemoveFacetFromObject, request);
        }

        /**
         * An Async wrapper for RemoveFacetFromObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFacetFromObjectRequestT = Model::RemoveFacetFromObjectRequest>
        void RemoveFacetFromObjectAsync(const RemoveFacetFromObjectRequestT& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::RemoveFacetFromObject, request, handler, context);
        }

        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::TagResource, request, handler, context);
        }

        /**
         * <p>An API operation for removing tags from a resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Does the following:</p> <ol> <li> <p>Adds new <code>Attributes</code>,
         * <code>Rules</code>, or <code>ObjectTypes</code>.</p> </li> <li> <p>Updates
         * existing <code>Attributes</code>, <code>Rules</code>, or
         * <code>ObjectTypes</code>.</p> </li> <li> <p>Deletes existing
         * <code>Attributes</code>, <code>Rules</code>, or <code>ObjectTypes</code>.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFacetOutcome UpdateFacet(const Model::UpdateFacetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFacetRequestT = Model::UpdateFacetRequest>
        Model::UpdateFacetOutcomeCallable UpdateFacetCallable(const UpdateFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpdateFacet, request);
        }

        /**
         * An Async wrapper for UpdateFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFacetRequestT = Model::UpdateFacetRequest>
        void UpdateFacetAsync(const UpdateFacetRequestT& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpdateFacet, request, handler, context);
        }

        /**
         * <p>Updates a given typed link’s attributes. Attributes to be updated must not
         * contribute to the typed link’s identity, as defined by its
         * <code>IdentityAttributeOrder</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateLinkAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkAttributesOutcome UpdateLinkAttributes(const Model::UpdateLinkAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateLinkAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLinkAttributesRequestT = Model::UpdateLinkAttributesRequest>
        Model::UpdateLinkAttributesOutcomeCallable UpdateLinkAttributesCallable(const UpdateLinkAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpdateLinkAttributes, request);
        }

        /**
         * An Async wrapper for UpdateLinkAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLinkAttributesRequestT = Model::UpdateLinkAttributesRequest>
        void UpdateLinkAttributesAsync(const UpdateLinkAttributesRequestT& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpdateLinkAttributes, request, handler, context);
        }

        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateObjectAttributesOutcome UpdateObjectAttributes(const Model::UpdateObjectAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateObjectAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateObjectAttributesRequestT = Model::UpdateObjectAttributesRequest>
        Model::UpdateObjectAttributesOutcomeCallable UpdateObjectAttributesCallable(const UpdateObjectAttributesRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpdateObjectAttributes, request);
        }

        /**
         * An Async wrapper for UpdateObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateObjectAttributesRequestT = Model::UpdateObjectAttributesRequest>
        void UpdateObjectAttributesAsync(const UpdateObjectAttributesRequestT& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpdateObjectAttributes, request, handler, context);
        }

        /**
         * <p>Updates the schema name with a new name. Only development schema names can be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const UpdateSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpdateSchema, request);
        }

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        void UpdateSchemaAsync(const UpdateSchemaRequestT& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpdateSchema, request, handler, context);
        }

        /**
         * <p>Updates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypedLinkFacetOutcome UpdateTypedLinkFacet(const Model::UpdateTypedLinkFacetRequest& request) const;

        /**
         * A Callable wrapper for UpdateTypedLinkFacet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTypedLinkFacetRequestT = Model::UpdateTypedLinkFacetRequest>
        Model::UpdateTypedLinkFacetOutcomeCallable UpdateTypedLinkFacetCallable(const UpdateTypedLinkFacetRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpdateTypedLinkFacet, request);
        }

        /**
         * An Async wrapper for UpdateTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTypedLinkFacetRequestT = Model::UpdateTypedLinkFacetRequest>
        void UpdateTypedLinkFacetAsync(const UpdateTypedLinkFacetRequestT& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpdateTypedLinkFacet, request, handler, context);
        }

        /**
         * <p>Upgrades a single directory in-place using the
         * <code>PublishedSchemaArn</code> with schema updates found in
         * <code>MinorVersion</code>. Backwards-compatible minor version upgrades are
         * instantaneously available for readers on all objects in the directory. Note:
         * This is a synchronous API call and upgrades only one schema on a given directory
         * per call. To upgrade multiple directories from one schema, you would need to
         * call this API on each directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradeAppliedSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeAppliedSchemaOutcome UpgradeAppliedSchema(const Model::UpgradeAppliedSchemaRequest& request) const;

        /**
         * A Callable wrapper for UpgradeAppliedSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradeAppliedSchemaRequestT = Model::UpgradeAppliedSchemaRequest>
        Model::UpgradeAppliedSchemaOutcomeCallable UpgradeAppliedSchemaCallable(const UpgradeAppliedSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpgradeAppliedSchema, request);
        }

        /**
         * An Async wrapper for UpgradeAppliedSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeAppliedSchemaRequestT = Model::UpgradeAppliedSchemaRequest>
        void UpgradeAppliedSchemaAsync(const UpgradeAppliedSchemaRequestT& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpgradeAppliedSchema, request, handler, context);
        }

        /**
         * <p>Upgrades a published schema under a new minor version revision using the
         * current contents of <code>DevelopmentSchemaArn</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradePublishedSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradePublishedSchemaOutcome UpgradePublishedSchema(const Model::UpgradePublishedSchemaRequest& request) const;

        /**
         * A Callable wrapper for UpgradePublishedSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradePublishedSchemaRequestT = Model::UpgradePublishedSchemaRequest>
        Model::UpgradePublishedSchemaOutcomeCallable UpgradePublishedSchemaCallable(const UpgradePublishedSchemaRequestT& request) const
        {
            return SubmitCallable(&CloudDirectoryClient::UpgradePublishedSchema, request);
        }

        /**
         * An Async wrapper for UpgradePublishedSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradePublishedSchemaRequestT = Model::UpgradePublishedSchemaRequest>
        void UpgradePublishedSchemaAsync(const UpgradePublishedSchemaRequestT& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudDirectoryClient::UpgradePublishedSchema, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudDirectoryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudDirectoryClient>;
      void init(const CloudDirectoryClientConfiguration& clientConfiguration);

      CloudDirectoryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudDirectoryEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudDirectory
} // namespace Aws
