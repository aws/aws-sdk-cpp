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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration(),
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG),
                             const Aws::CloudDirectory::CloudDirectoryClientConfiguration& clientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudDirectoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<CloudDirectoryEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudDirectoryEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AddFacetToObjectOutcomeCallable AddFacetToObjectCallable(const Model::AddFacetToObjectRequest& request) const;

        /**
         * An Async wrapper for AddFacetToObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFacetToObjectAsync(const Model::AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ApplySchemaOutcomeCallable ApplySchemaCallable(const Model::ApplySchemaRequest& request) const;

        /**
         * An Async wrapper for ApplySchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplySchemaAsync(const Model::ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AttachObjectOutcomeCallable AttachObjectCallable(const Model::AttachObjectRequest& request) const;

        /**
         * An Async wrapper for AttachObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachObjectAsync(const Model::AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * An Async wrapper for AttachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AttachToIndexOutcomeCallable AttachToIndexCallable(const Model::AttachToIndexRequest& request) const;

        /**
         * An Async wrapper for AttachToIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachToIndexAsync(const Model::AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AttachTypedLinkOutcomeCallable AttachTypedLinkCallable(const Model::AttachTypedLinkRequest& request) const;

        /**
         * An Async wrapper for AttachTypedLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachTypedLinkAsync(const Model::AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchReadOutcome BatchRead(const Model::BatchReadRequest& request) const;

        /**
         * A Callable wrapper for BatchRead that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchReadOutcomeCallable BatchReadCallable(const Model::BatchReadRequest& request) const;

        /**
         * An Async wrapper for BatchRead that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchReadAsync(const Model::BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchWriteOutcomeCallable BatchWriteCallable(const Model::BatchWriteRequest& request) const;

        /**
         * An Async wrapper for BatchWrite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchWriteAsync(const Model::BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const Model::CreateDirectoryRequest& request) const;

        /**
         * An Async wrapper for CreateDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryAsync(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFacetOutcomeCallable CreateFacetCallable(const Model::CreateFacetRequest& request) const;

        /**
         * An Async wrapper for CreateFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFacetAsync(const Model::CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request) const;

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateObjectOutcomeCallable CreateObjectCallable(const Model::CreateObjectRequest& request) const;

        /**
         * An Async wrapper for CreateObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateObjectAsync(const Model::CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateTypedLinkFacetOutcomeCallable CreateTypedLinkFacetCallable(const Model::CreateTypedLinkFacetRequest& request) const;

        /**
         * An Async wrapper for CreateTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTypedLinkFacetAsync(const Model::CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;

        /**
         * An Async wrapper for DeleteDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryAsync(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteFacetOutcomeCallable DeleteFacetCallable(const Model::DeleteFacetRequest& request) const;

        /**
         * An Async wrapper for DeleteFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFacetAsync(const Model::DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * An Async wrapper for DeleteObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTypedLinkFacetOutcomeCallable DeleteTypedLinkFacetCallable(const Model::DeleteTypedLinkFacetRequest& request) const;

        /**
         * An Async wrapper for DeleteTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTypedLinkFacetAsync(const Model::DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DetachFromIndexOutcomeCallable DetachFromIndexCallable(const Model::DetachFromIndexRequest& request) const;

        /**
         * An Async wrapper for DetachFromIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachFromIndexAsync(const Model::DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DetachObjectOutcomeCallable DetachObjectCallable(const Model::DetachObjectRequest& request) const;

        /**
         * An Async wrapper for DetachObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachObjectAsync(const Model::DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * An Async wrapper for DetachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DetachTypedLinkOutcomeCallable DetachTypedLinkCallable(const Model::DetachTypedLinkRequest& request) const;

        /**
         * An Async wrapper for DetachTypedLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachTypedLinkAsync(const Model::DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisableDirectoryOutcomeCallable DisableDirectoryCallable(const Model::DisableDirectoryRequest& request) const;

        /**
         * An Async wrapper for DisableDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableDirectoryAsync(const Model::DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::EnableDirectoryOutcomeCallable EnableDirectoryCallable(const Model::EnableDirectoryRequest& request) const;

        /**
         * An Async wrapper for EnableDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDirectoryAsync(const Model::EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAppliedSchemaVersionOutcomeCallable GetAppliedSchemaVersionCallable(const Model::GetAppliedSchemaVersionRequest& request) const;

        /**
         * An Async wrapper for GetAppliedSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppliedSchemaVersionAsync(const Model::GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryOutcome GetDirectory(const Model::GetDirectoryRequest& request) const;

        /**
         * A Callable wrapper for GetDirectory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDirectoryOutcomeCallable GetDirectoryCallable(const Model::GetDirectoryRequest& request) const;

        /**
         * An Async wrapper for GetDirectory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDirectoryAsync(const Model::GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetFacetOutcomeCallable GetFacetCallable(const Model::GetFacetRequest& request) const;

        /**
         * An Async wrapper for GetFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFacetAsync(const Model::GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLinkAttributesOutcomeCallable GetLinkAttributesCallable(const Model::GetLinkAttributesRequest& request) const;

        /**
         * An Async wrapper for GetLinkAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLinkAttributesAsync(const Model::GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetObjectAttributesOutcomeCallable GetObjectAttributesCallable(const Model::GetObjectAttributesRequest& request) const;

        /**
         * An Async wrapper for GetObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAttributesAsync(const Model::GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectInformationOutcome GetObjectInformation(const Model::GetObjectInformationRequest& request) const;

        /**
         * A Callable wrapper for GetObjectInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectInformationOutcomeCallable GetObjectInformationCallable(const Model::GetObjectInformationRequest& request) const;

        /**
         * An Async wrapper for GetObjectInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectInformationAsync(const Model::GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSchemaAsJsonOutcomeCallable GetSchemaAsJsonCallable(const Model::GetSchemaAsJsonRequest& request) const;

        /**
         * An Async wrapper for GetSchemaAsJson that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaAsJsonAsync(const Model::GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTypedLinkFacetInformationOutcomeCallable GetTypedLinkFacetInformationCallable(const Model::GetTypedLinkFacetInformationRequest& request) const;

        /**
         * An Async wrapper for GetTypedLinkFacetInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTypedLinkFacetInformationAsync(const Model::GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAppliedSchemaArnsOutcomeCallable ListAppliedSchemaArnsCallable(const Model::ListAppliedSchemaArnsRequest& request) const;

        /**
         * An Async wrapper for ListAppliedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppliedSchemaArnsAsync(const Model::ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedIndicesOutcome ListAttachedIndices(const Model::ListAttachedIndicesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedIndices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedIndicesOutcomeCallable ListAttachedIndicesCallable(const Model::ListAttachedIndicesRequest& request) const;

        /**
         * An Async wrapper for ListAttachedIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedIndicesAsync(const Model::ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDevelopmentSchemaArnsOutcomeCallable ListDevelopmentSchemaArnsCallable(const Model::ListDevelopmentSchemaArnsRequest& request) const;

        /**
         * An Async wrapper for ListDevelopmentSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevelopmentSchemaArnsAsync(const Model::ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDirectoriesOutcome ListDirectories(const Model::ListDirectoriesRequest& request) const;

        /**
         * A Callable wrapper for ListDirectories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDirectoriesOutcomeCallable ListDirectoriesCallable(const Model::ListDirectoriesRequest& request) const;

        /**
         * An Async wrapper for ListDirectories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDirectoriesAsync(const Model::ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetAttributesOutcome ListFacetAttributes(const Model::ListFacetAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListFacetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFacetAttributesOutcomeCallable ListFacetAttributesCallable(const Model::ListFacetAttributesRequest& request) const;

        /**
         * An Async wrapper for ListFacetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFacetAttributesAsync(const Model::ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListFacetNamesOutcomeCallable ListFacetNamesCallable(const Model::ListFacetNamesRequest& request) const;

        /**
         * An Async wrapper for ListFacetNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFacetNamesAsync(const Model::ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListIncomingTypedLinksOutcomeCallable ListIncomingTypedLinksCallable(const Model::ListIncomingTypedLinksRequest& request) const;

        /**
         * An Async wrapper for ListIncomingTypedLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIncomingTypedLinksAsync(const Model::ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexOutcome ListIndex(const Model::ListIndexRequest& request) const;

        /**
         * A Callable wrapper for ListIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndexOutcomeCallable ListIndexCallable(const Model::ListIndexRequest& request) const;

        /**
         * An Async wrapper for ListIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndexAsync(const Model::ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListManagedSchemaArnsOutcomeCallable ListManagedSchemaArnsCallable(const Model::ListManagedSchemaArnsRequest& request) const;

        /**
         * An Async wrapper for ListManagedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedSchemaArnsAsync(const Model::ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObjectAttributesOutcomeCallable ListObjectAttributesCallable(const Model::ListObjectAttributesRequest& request) const;

        /**
         * An Async wrapper for ListObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectAttributesAsync(const Model::ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObjectChildrenOutcomeCallable ListObjectChildrenCallable(const Model::ListObjectChildrenRequest& request) const;

        /**
         * An Async wrapper for ListObjectChildren that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectChildrenAsync(const Model::ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObjectParentPathsOutcomeCallable ListObjectParentPathsCallable(const Model::ListObjectParentPathsRequest& request) const;

        /**
         * An Async wrapper for ListObjectParentPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectParentPathsAsync(const Model::ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObjectParentsOutcomeCallable ListObjectParentsCallable(const Model::ListObjectParentsRequest& request) const;

        /**
         * An Async wrapper for ListObjectParents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectParentsAsync(const Model::ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObjectPoliciesOutcomeCallable ListObjectPoliciesCallable(const Model::ListObjectPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListObjectPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectPoliciesAsync(const Model::ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListOutgoingTypedLinksOutcomeCallable ListOutgoingTypedLinksCallable(const Model::ListOutgoingTypedLinksRequest& request) const;

        /**
         * An Async wrapper for ListOutgoingTypedLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutgoingTypedLinksAsync(const Model::ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPolicyAttachmentsOutcomeCallable ListPolicyAttachmentsCallable(const Model::ListPolicyAttachmentsRequest& request) const;

        /**
         * An Async wrapper for ListPolicyAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyAttachmentsAsync(const Model::ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPublishedSchemaArnsOutcomeCallable ListPublishedSchemaArnsCallable(const Model::ListPublishedSchemaArnsRequest& request) const;

        /**
         * An Async wrapper for ListPublishedSchemaArns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublishedSchemaArnsAsync(const Model::ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTypedLinkFacetAttributesOutcomeCallable ListTypedLinkFacetAttributesCallable(const Model::ListTypedLinkFacetAttributesRequest& request) const;

        /**
         * An Async wrapper for ListTypedLinkFacetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypedLinkFacetAttributesAsync(const Model::ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTypedLinkFacetNamesOutcomeCallable ListTypedLinkFacetNamesCallable(const Model::ListTypedLinkFacetNamesRequest& request) const;

        /**
         * An Async wrapper for ListTypedLinkFacetNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypedLinkFacetNamesAsync(const Model::ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::LookupPolicyOutcomeCallable LookupPolicyCallable(const Model::LookupPolicyRequest& request) const;

        /**
         * An Async wrapper for LookupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupPolicyAsync(const Model::LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PublishSchemaOutcomeCallable PublishSchemaCallable(const Model::PublishSchemaRequest& request) const;

        /**
         * An Async wrapper for PublishSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishSchemaAsync(const Model::PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutSchemaFromJsonOutcomeCallable PutSchemaFromJsonCallable(const Model::PutSchemaFromJsonRequest& request) const;

        /**
         * An Async wrapper for PutSchemaFromJson that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSchemaFromJsonAsync(const Model::PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveFacetFromObjectOutcomeCallable RemoveFacetFromObjectCallable(const Model::RemoveFacetFromObjectRequest& request) const;

        /**
         * An Async wrapper for RemoveFacetFromObject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFacetFromObjectAsync(const Model::RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
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
         * <p>An API operation for removing tags from a resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UntagResource">AWS
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
        virtual Model::UpdateFacetOutcomeCallable UpdateFacetCallable(const Model::UpdateFacetRequest& request) const;

        /**
         * An Async wrapper for UpdateFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFacetAsync(const Model::UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateLinkAttributesOutcomeCallable UpdateLinkAttributesCallable(const Model::UpdateLinkAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateLinkAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLinkAttributesAsync(const Model::UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateObjectAttributesOutcome UpdateObjectAttributes(const Model::UpdateObjectAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateObjectAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateObjectAttributesOutcomeCallable UpdateObjectAttributesCallable(const Model::UpdateObjectAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateObjectAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateObjectAttributesAsync(const Model::UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateTypedLinkFacetOutcomeCallable UpdateTypedLinkFacetCallable(const Model::UpdateTypedLinkFacetRequest& request) const;

        /**
         * An Async wrapper for UpdateTypedLinkFacet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTypedLinkFacetAsync(const Model::UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpgradeAppliedSchemaOutcomeCallable UpgradeAppliedSchemaCallable(const Model::UpgradeAppliedSchemaRequest& request) const;

        /**
         * An Async wrapper for UpgradeAppliedSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradeAppliedSchemaAsync(const Model::UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpgradePublishedSchemaOutcomeCallable UpgradePublishedSchemaCallable(const Model::UpgradePublishedSchemaRequest& request) const;

        /**
         * An Async wrapper for UpgradePublishedSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradePublishedSchemaAsync(const Model::UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
