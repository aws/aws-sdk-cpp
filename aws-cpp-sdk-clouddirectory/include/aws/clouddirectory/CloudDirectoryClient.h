/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>
#include <aws/clouddirectory/CloudDirectoryLegacyAsyncMacros.h>

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
  class AWS_CLOUDDIRECTORY_API CloudDirectoryClient : public Aws::Client::AWSJsonClient
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
         * <p>Adds a new <a>Facet</a> to an object. An object can have more than one facet
         * applied on it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AddFacetToObject">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFacetToObjectOutcome AddFacetToObject(const Model::AddFacetToObjectRequest& request) const;


        /**
         * <p>Copies the input published schema, at the specified version, into the
         * <a>Directory</a> with the same name and version as that of the published
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ApplySchema">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplySchemaOutcome ApplySchema(const Model::ApplySchemaRequest& request) const;


        /**
         * <p>Attaches an existing object to another object. An object can be accessed in
         * two ways:</p> <ol> <li> <p>Using the path</p> </li> <li> <p>Using
         * <code>ObjectIdentifier</code> </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachObject">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachObjectOutcome AttachObject(const Model::AttachObjectRequest& request) const;


        /**
         * <p>Attaches a policy object to a regular object. An object can have a limited
         * number of attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;


        /**
         * <p>Attaches the specified object to the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachToIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachToIndexOutcome AttachToIndex(const Model::AttachToIndexRequest& request) const;


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
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchReadOutcome BatchRead(const Model::BatchReadRequest& request) const;


        /**
         * <p>Performs all the write operations in a batch. Either all the operations
         * succeed or none.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWrite">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchWriteOutcome BatchWrite(const Model::BatchWriteRequest& request) const;


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
         * <p>Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in
         * development or applied schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFacetOutcome CreateFacet(const Model::CreateFacetRequest& request) const;


        /**
         * <p>Creates an index object. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.html">Indexing
         * and search</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;


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
         * <p>Creates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypedLinkFacetOutcome CreateTypedLinkFacet(const Model::CreateTypedLinkFacetRequest& request) const;


        /**
         * <p>Deletes a directory. Only disabled directories can be deleted. A deleted
         * directory cannot be undone. Exercise extreme caution when deleting
         * directories.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryOutcome DeleteDirectory(const Model::DeleteDirectoryRequest& request) const;


        /**
         * <p>Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are
         * associated with the facet will be deleted. Only development schema facets are
         * allowed deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFacetOutcome DeleteFacet(const Model::DeleteFacetRequest& request) const;


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
         * <p>Deletes a given schema. Schemas in a development and published state can only
         * be deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;


        /**
         * <p>Deletes a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypedLinkFacetOutcome DeleteTypedLinkFacet(const Model::DeleteTypedLinkFacetRequest& request) const;


        /**
         * <p>Detaches the specified object from the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachFromIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachFromIndexOutcome DetachFromIndex(const Model::DetachFromIndexRequest& request) const;


        /**
         * <p>Detaches a given object from the parent object. The object that is to be
         * detached from the parent is specified by the link name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachObjectOutcome DetachObject(const Model::DetachObjectRequest& request) const;


        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;


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
         * <p>Disables the specified directory. Disabled directories cannot be read or
         * written to. Only enabled directories can be disabled. Disabled directories may
         * be reenabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DisableDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDirectoryOutcome DisableDirectory(const Model::DisableDirectoryRequest& request) const;


        /**
         * <p>Enables the specified directory. Only disabled directories can be enabled.
         * Once enabled, the directory can then be read and written to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/EnableDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDirectoryOutcome EnableDirectory(const Model::EnableDirectoryRequest& request) const;


        /**
         * <p>Returns current applied schema version ARN, including the minor version in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetAppliedSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppliedSchemaVersionOutcome GetAppliedSchemaVersion(const Model::GetAppliedSchemaVersionRequest& request) const;


        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryOutcome GetDirectory(const Model::GetDirectoryRequest& request) const;


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
         * <p>Retrieves attributes that are associated with a typed link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetLinkAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAttributesOutcome GetLinkAttributes(const Model::GetLinkAttributesRequest& request) const;


        /**
         * <p>Retrieves attributes within a facet that are associated with an
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectAttributesOutcome GetObjectAttributes(const Model::GetObjectAttributesRequest& request) const;


        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectInformationOutcome GetObjectInformation(const Model::GetObjectInformationRequest& request) const;


        /**
         * <p>Retrieves a JSON representation of the schema. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetSchemaAsJson">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaAsJsonOutcome GetSchemaAsJson(const Model::GetSchemaAsJsonRequest& request) const;


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
         * <p>Lists schema major versions applied to a directory. If <code>SchemaArn</code>
         * is provided, lists the minor version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAppliedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppliedSchemaArnsOutcome ListAppliedSchemaArns(const Model::ListAppliedSchemaArnsRequest& request) const;


        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedIndicesOutcome ListAttachedIndices(const Model::ListAttachedIndicesRequest& request) const;


        /**
         * <p>Retrieves each Amazon Resource Name (ARN) of schemas in the development
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDevelopmentSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevelopmentSchemaArnsOutcome ListDevelopmentSchemaArns(const Model::ListDevelopmentSchemaArnsRequest& request) const;


        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDirectoriesOutcome ListDirectories(const Model::ListDirectoriesRequest& request) const;


        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetAttributesOutcome ListFacetAttributes(const Model::ListFacetAttributesRequest& request) const;


        /**
         * <p>Retrieves the names of facets that exist in a schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetNamesOutcome ListFacetNames(const Model::ListFacetNamesRequest& request) const;


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
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexOutcome ListIndex(const Model::ListIndexRequest& request) const;


        /**
         * <p>Lists the major version families of each managed schema. If a major version
         * ARN is provided as SchemaArn, the minor version revisions in that family are
         * listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListManagedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedSchemaArnsOutcome ListManagedSchemaArns(const Model::ListManagedSchemaArnsRequest& request) const;


        /**
         * <p>Lists all attributes that are associated with an object. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectAttributesOutcome ListObjectAttributes(const Model::ListObjectAttributesRequest& request) const;


        /**
         * <p>Returns a paginated list of child objects that are associated with a given
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectChildren">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectChildrenOutcome ListObjectChildren(const Model::ListObjectChildrenRequest& request) const;


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
         * <p>Lists parent objects that are associated with a given object in pagination
         * fashion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectParents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectParentsOutcome ListObjectParents(const Model::ListObjectParentsRequest& request) const;


        /**
         * <p>Returns policies attached to an object in pagination fashion.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectPoliciesOutcome ListObjectPolicies(const Model::ListObjectPoliciesRequest& request) const;


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
         * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPolicyAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyAttachmentsOutcome ListPolicyAttachments(const Model::ListPolicyAttachmentsRequest& request) const;


        /**
         * <p>Lists the major version families of each published schema. If a major version
         * ARN is provided as <code>SchemaArn</code>, the minor version revisions in that
         * family are listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPublishedSchemaArns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublishedSchemaArnsOutcome ListPublishedSchemaArns(const Model::ListPublishedSchemaArnsRequest& request) const;


        /**
         * <p>Returns tags for a resource. Tagging is currently supported only for
         * directories with a limit of 50 tags per directory. All 50 tags are returned for
         * a given directory with this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Returns a paginated list of <code>TypedLink</code> facet names for a
         * particular schema. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypedLinkFacetNamesOutcome ListTypedLinkFacetNames(const Model::ListTypedLinkFacetNamesRequest& request) const;


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
         * <p>Publishes a development schema with a major version and a recommended minor
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PublishSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishSchemaOutcome PublishSchema(const Model::PublishSchemaRequest& request) const;


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
         * <p>Removes the specified facet from the specified object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/RemoveFacetFromObject">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFacetFromObjectOutcome RemoveFacetFromObject(const Model::RemoveFacetFromObjectRequest& request) const;


        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>An API operation for removing tags from a resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates a given typed link’s attributes. Attributes to be updated must not
         * contribute to the typed link’s identity, as defined by its
         * <code>IdentityAttributeOrder</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateLinkAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkAttributesOutcome UpdateLinkAttributes(const Model::UpdateLinkAttributesRequest& request) const;


        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateObjectAttributesOutcome UpdateObjectAttributes(const Model::UpdateObjectAttributesRequest& request) const;


        /**
         * <p>Updates the schema name with a new name. Only development schema names can be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;


        /**
         * <p>Updates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateTypedLinkFacet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTypedLinkFacetOutcome UpdateTypedLinkFacet(const Model::UpdateTypedLinkFacetRequest& request) const;


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
         * <p>Upgrades a published schema under a new minor version revision using the
         * current contents of <code>DevelopmentSchemaArn</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradePublishedSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradePublishedSchemaOutcome UpgradePublishedSchema(const Model::UpgradePublishedSchemaRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudDirectoryEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CloudDirectoryClientConfiguration& clientConfiguration);

      CloudDirectoryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudDirectoryEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudDirectory
} // namespace Aws
