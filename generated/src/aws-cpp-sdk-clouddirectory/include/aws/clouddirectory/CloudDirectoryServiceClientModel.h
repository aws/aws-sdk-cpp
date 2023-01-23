/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/clouddirectory/CloudDirectoryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/clouddirectory/CloudDirectoryEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudDirectoryClient header */
#include <aws/clouddirectory/model/AddFacetToObjectResult.h>
#include <aws/clouddirectory/model/ApplySchemaResult.h>
#include <aws/clouddirectory/model/AttachObjectResult.h>
#include <aws/clouddirectory/model/AttachPolicyResult.h>
#include <aws/clouddirectory/model/AttachToIndexResult.h>
#include <aws/clouddirectory/model/AttachTypedLinkResult.h>
#include <aws/clouddirectory/model/BatchReadResult.h>
#include <aws/clouddirectory/model/BatchWriteResult.h>
#include <aws/clouddirectory/model/CreateDirectoryResult.h>
#include <aws/clouddirectory/model/CreateFacetResult.h>
#include <aws/clouddirectory/model/CreateIndexResult.h>
#include <aws/clouddirectory/model/CreateObjectResult.h>
#include <aws/clouddirectory/model/CreateSchemaResult.h>
#include <aws/clouddirectory/model/CreateTypedLinkFacetResult.h>
#include <aws/clouddirectory/model/DeleteDirectoryResult.h>
#include <aws/clouddirectory/model/DeleteFacetResult.h>
#include <aws/clouddirectory/model/DeleteObjectResult.h>
#include <aws/clouddirectory/model/DeleteSchemaResult.h>
#include <aws/clouddirectory/model/DeleteTypedLinkFacetResult.h>
#include <aws/clouddirectory/model/DetachFromIndexResult.h>
#include <aws/clouddirectory/model/DetachObjectResult.h>
#include <aws/clouddirectory/model/DetachPolicyResult.h>
#include <aws/clouddirectory/model/DisableDirectoryResult.h>
#include <aws/clouddirectory/model/EnableDirectoryResult.h>
#include <aws/clouddirectory/model/GetAppliedSchemaVersionResult.h>
#include <aws/clouddirectory/model/GetDirectoryResult.h>
#include <aws/clouddirectory/model/GetFacetResult.h>
#include <aws/clouddirectory/model/GetLinkAttributesResult.h>
#include <aws/clouddirectory/model/GetObjectAttributesResult.h>
#include <aws/clouddirectory/model/GetObjectInformationResult.h>
#include <aws/clouddirectory/model/GetSchemaAsJsonResult.h>
#include <aws/clouddirectory/model/GetTypedLinkFacetInformationResult.h>
#include <aws/clouddirectory/model/ListAppliedSchemaArnsResult.h>
#include <aws/clouddirectory/model/ListAttachedIndicesResult.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsResult.h>
#include <aws/clouddirectory/model/ListDirectoriesResult.h>
#include <aws/clouddirectory/model/ListFacetAttributesResult.h>
#include <aws/clouddirectory/model/ListFacetNamesResult.h>
#include <aws/clouddirectory/model/ListIncomingTypedLinksResult.h>
#include <aws/clouddirectory/model/ListIndexResult.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsResult.h>
#include <aws/clouddirectory/model/ListObjectAttributesResult.h>
#include <aws/clouddirectory/model/ListObjectChildrenResult.h>
#include <aws/clouddirectory/model/ListObjectParentPathsResult.h>
#include <aws/clouddirectory/model/ListObjectParentsResult.h>
#include <aws/clouddirectory/model/ListObjectPoliciesResult.h>
#include <aws/clouddirectory/model/ListOutgoingTypedLinksResult.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsResult.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsResult.h>
#include <aws/clouddirectory/model/ListTagsForResourceResult.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesResult.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetNamesResult.h>
#include <aws/clouddirectory/model/LookupPolicyResult.h>
#include <aws/clouddirectory/model/PublishSchemaResult.h>
#include <aws/clouddirectory/model/PutSchemaFromJsonResult.h>
#include <aws/clouddirectory/model/RemoveFacetFromObjectResult.h>
#include <aws/clouddirectory/model/TagResourceResult.h>
#include <aws/clouddirectory/model/UntagResourceResult.h>
#include <aws/clouddirectory/model/UpdateFacetResult.h>
#include <aws/clouddirectory/model/UpdateLinkAttributesResult.h>
#include <aws/clouddirectory/model/UpdateObjectAttributesResult.h>
#include <aws/clouddirectory/model/UpdateSchemaResult.h>
#include <aws/clouddirectory/model/UpdateTypedLinkFacetResult.h>
#include <aws/clouddirectory/model/UpgradeAppliedSchemaResult.h>
#include <aws/clouddirectory/model/UpgradePublishedSchemaResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudDirectoryClient header */

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

  namespace CloudDirectory
  {
    using CloudDirectoryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudDirectoryEndpointProviderBase = Aws::CloudDirectory::Endpoint::CloudDirectoryEndpointProviderBase;
    using CloudDirectoryEndpointProvider = Aws::CloudDirectory::Endpoint::CloudDirectoryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudDirectoryClient header */
      class AddFacetToObjectRequest;
      class ApplySchemaRequest;
      class AttachObjectRequest;
      class AttachPolicyRequest;
      class AttachToIndexRequest;
      class AttachTypedLinkRequest;
      class BatchReadRequest;
      class BatchWriteRequest;
      class CreateDirectoryRequest;
      class CreateFacetRequest;
      class CreateIndexRequest;
      class CreateObjectRequest;
      class CreateSchemaRequest;
      class CreateTypedLinkFacetRequest;
      class DeleteDirectoryRequest;
      class DeleteFacetRequest;
      class DeleteObjectRequest;
      class DeleteSchemaRequest;
      class DeleteTypedLinkFacetRequest;
      class DetachFromIndexRequest;
      class DetachObjectRequest;
      class DetachPolicyRequest;
      class DetachTypedLinkRequest;
      class DisableDirectoryRequest;
      class EnableDirectoryRequest;
      class GetAppliedSchemaVersionRequest;
      class GetDirectoryRequest;
      class GetFacetRequest;
      class GetLinkAttributesRequest;
      class GetObjectAttributesRequest;
      class GetObjectInformationRequest;
      class GetSchemaAsJsonRequest;
      class GetTypedLinkFacetInformationRequest;
      class ListAppliedSchemaArnsRequest;
      class ListAttachedIndicesRequest;
      class ListDevelopmentSchemaArnsRequest;
      class ListDirectoriesRequest;
      class ListFacetAttributesRequest;
      class ListFacetNamesRequest;
      class ListIncomingTypedLinksRequest;
      class ListIndexRequest;
      class ListManagedSchemaArnsRequest;
      class ListObjectAttributesRequest;
      class ListObjectChildrenRequest;
      class ListObjectParentPathsRequest;
      class ListObjectParentsRequest;
      class ListObjectPoliciesRequest;
      class ListOutgoingTypedLinksRequest;
      class ListPolicyAttachmentsRequest;
      class ListPublishedSchemaArnsRequest;
      class ListTagsForResourceRequest;
      class ListTypedLinkFacetAttributesRequest;
      class ListTypedLinkFacetNamesRequest;
      class LookupPolicyRequest;
      class PublishSchemaRequest;
      class PutSchemaFromJsonRequest;
      class RemoveFacetFromObjectRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateFacetRequest;
      class UpdateLinkAttributesRequest;
      class UpdateObjectAttributesRequest;
      class UpdateSchemaRequest;
      class UpdateTypedLinkFacetRequest;
      class UpgradeAppliedSchemaRequest;
      class UpgradePublishedSchemaRequest;
      /* End of service model forward declarations required in CloudDirectoryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddFacetToObjectResult, CloudDirectoryError> AddFacetToObjectOutcome;
      typedef Aws::Utils::Outcome<ApplySchemaResult, CloudDirectoryError> ApplySchemaOutcome;
      typedef Aws::Utils::Outcome<AttachObjectResult, CloudDirectoryError> AttachObjectOutcome;
      typedef Aws::Utils::Outcome<AttachPolicyResult, CloudDirectoryError> AttachPolicyOutcome;
      typedef Aws::Utils::Outcome<AttachToIndexResult, CloudDirectoryError> AttachToIndexOutcome;
      typedef Aws::Utils::Outcome<AttachTypedLinkResult, CloudDirectoryError> AttachTypedLinkOutcome;
      typedef Aws::Utils::Outcome<BatchReadResult, CloudDirectoryError> BatchReadOutcome;
      typedef Aws::Utils::Outcome<BatchWriteResult, CloudDirectoryError> BatchWriteOutcome;
      typedef Aws::Utils::Outcome<CreateDirectoryResult, CloudDirectoryError> CreateDirectoryOutcome;
      typedef Aws::Utils::Outcome<CreateFacetResult, CloudDirectoryError> CreateFacetOutcome;
      typedef Aws::Utils::Outcome<CreateIndexResult, CloudDirectoryError> CreateIndexOutcome;
      typedef Aws::Utils::Outcome<CreateObjectResult, CloudDirectoryError> CreateObjectOutcome;
      typedef Aws::Utils::Outcome<CreateSchemaResult, CloudDirectoryError> CreateSchemaOutcome;
      typedef Aws::Utils::Outcome<CreateTypedLinkFacetResult, CloudDirectoryError> CreateTypedLinkFacetOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectoryResult, CloudDirectoryError> DeleteDirectoryOutcome;
      typedef Aws::Utils::Outcome<DeleteFacetResult, CloudDirectoryError> DeleteFacetOutcome;
      typedef Aws::Utils::Outcome<DeleteObjectResult, CloudDirectoryError> DeleteObjectOutcome;
      typedef Aws::Utils::Outcome<DeleteSchemaResult, CloudDirectoryError> DeleteSchemaOutcome;
      typedef Aws::Utils::Outcome<DeleteTypedLinkFacetResult, CloudDirectoryError> DeleteTypedLinkFacetOutcome;
      typedef Aws::Utils::Outcome<DetachFromIndexResult, CloudDirectoryError> DetachFromIndexOutcome;
      typedef Aws::Utils::Outcome<DetachObjectResult, CloudDirectoryError> DetachObjectOutcome;
      typedef Aws::Utils::Outcome<DetachPolicyResult, CloudDirectoryError> DetachPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudDirectoryError> DetachTypedLinkOutcome;
      typedef Aws::Utils::Outcome<DisableDirectoryResult, CloudDirectoryError> DisableDirectoryOutcome;
      typedef Aws::Utils::Outcome<EnableDirectoryResult, CloudDirectoryError> EnableDirectoryOutcome;
      typedef Aws::Utils::Outcome<GetAppliedSchemaVersionResult, CloudDirectoryError> GetAppliedSchemaVersionOutcome;
      typedef Aws::Utils::Outcome<GetDirectoryResult, CloudDirectoryError> GetDirectoryOutcome;
      typedef Aws::Utils::Outcome<GetFacetResult, CloudDirectoryError> GetFacetOutcome;
      typedef Aws::Utils::Outcome<GetLinkAttributesResult, CloudDirectoryError> GetLinkAttributesOutcome;
      typedef Aws::Utils::Outcome<GetObjectAttributesResult, CloudDirectoryError> GetObjectAttributesOutcome;
      typedef Aws::Utils::Outcome<GetObjectInformationResult, CloudDirectoryError> GetObjectInformationOutcome;
      typedef Aws::Utils::Outcome<GetSchemaAsJsonResult, CloudDirectoryError> GetSchemaAsJsonOutcome;
      typedef Aws::Utils::Outcome<GetTypedLinkFacetInformationResult, CloudDirectoryError> GetTypedLinkFacetInformationOutcome;
      typedef Aws::Utils::Outcome<ListAppliedSchemaArnsResult, CloudDirectoryError> ListAppliedSchemaArnsOutcome;
      typedef Aws::Utils::Outcome<ListAttachedIndicesResult, CloudDirectoryError> ListAttachedIndicesOutcome;
      typedef Aws::Utils::Outcome<ListDevelopmentSchemaArnsResult, CloudDirectoryError> ListDevelopmentSchemaArnsOutcome;
      typedef Aws::Utils::Outcome<ListDirectoriesResult, CloudDirectoryError> ListDirectoriesOutcome;
      typedef Aws::Utils::Outcome<ListFacetAttributesResult, CloudDirectoryError> ListFacetAttributesOutcome;
      typedef Aws::Utils::Outcome<ListFacetNamesResult, CloudDirectoryError> ListFacetNamesOutcome;
      typedef Aws::Utils::Outcome<ListIncomingTypedLinksResult, CloudDirectoryError> ListIncomingTypedLinksOutcome;
      typedef Aws::Utils::Outcome<ListIndexResult, CloudDirectoryError> ListIndexOutcome;
      typedef Aws::Utils::Outcome<ListManagedSchemaArnsResult, CloudDirectoryError> ListManagedSchemaArnsOutcome;
      typedef Aws::Utils::Outcome<ListObjectAttributesResult, CloudDirectoryError> ListObjectAttributesOutcome;
      typedef Aws::Utils::Outcome<ListObjectChildrenResult, CloudDirectoryError> ListObjectChildrenOutcome;
      typedef Aws::Utils::Outcome<ListObjectParentPathsResult, CloudDirectoryError> ListObjectParentPathsOutcome;
      typedef Aws::Utils::Outcome<ListObjectParentsResult, CloudDirectoryError> ListObjectParentsOutcome;
      typedef Aws::Utils::Outcome<ListObjectPoliciesResult, CloudDirectoryError> ListObjectPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListOutgoingTypedLinksResult, CloudDirectoryError> ListOutgoingTypedLinksOutcome;
      typedef Aws::Utils::Outcome<ListPolicyAttachmentsResult, CloudDirectoryError> ListPolicyAttachmentsOutcome;
      typedef Aws::Utils::Outcome<ListPublishedSchemaArnsResult, CloudDirectoryError> ListPublishedSchemaArnsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudDirectoryError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTypedLinkFacetAttributesResult, CloudDirectoryError> ListTypedLinkFacetAttributesOutcome;
      typedef Aws::Utils::Outcome<ListTypedLinkFacetNamesResult, CloudDirectoryError> ListTypedLinkFacetNamesOutcome;
      typedef Aws::Utils::Outcome<LookupPolicyResult, CloudDirectoryError> LookupPolicyOutcome;
      typedef Aws::Utils::Outcome<PublishSchemaResult, CloudDirectoryError> PublishSchemaOutcome;
      typedef Aws::Utils::Outcome<PutSchemaFromJsonResult, CloudDirectoryError> PutSchemaFromJsonOutcome;
      typedef Aws::Utils::Outcome<RemoveFacetFromObjectResult, CloudDirectoryError> RemoveFacetFromObjectOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudDirectoryError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudDirectoryError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFacetResult, CloudDirectoryError> UpdateFacetOutcome;
      typedef Aws::Utils::Outcome<UpdateLinkAttributesResult, CloudDirectoryError> UpdateLinkAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateObjectAttributesResult, CloudDirectoryError> UpdateObjectAttributesOutcome;
      typedef Aws::Utils::Outcome<UpdateSchemaResult, CloudDirectoryError> UpdateSchemaOutcome;
      typedef Aws::Utils::Outcome<UpdateTypedLinkFacetResult, CloudDirectoryError> UpdateTypedLinkFacetOutcome;
      typedef Aws::Utils::Outcome<UpgradeAppliedSchemaResult, CloudDirectoryError> UpgradeAppliedSchemaOutcome;
      typedef Aws::Utils::Outcome<UpgradePublishedSchemaResult, CloudDirectoryError> UpgradePublishedSchemaOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddFacetToObjectOutcome> AddFacetToObjectOutcomeCallable;
      typedef std::future<ApplySchemaOutcome> ApplySchemaOutcomeCallable;
      typedef std::future<AttachObjectOutcome> AttachObjectOutcomeCallable;
      typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
      typedef std::future<AttachToIndexOutcome> AttachToIndexOutcomeCallable;
      typedef std::future<AttachTypedLinkOutcome> AttachTypedLinkOutcomeCallable;
      typedef std::future<BatchReadOutcome> BatchReadOutcomeCallable;
      typedef std::future<BatchWriteOutcome> BatchWriteOutcomeCallable;
      typedef std::future<CreateDirectoryOutcome> CreateDirectoryOutcomeCallable;
      typedef std::future<CreateFacetOutcome> CreateFacetOutcomeCallable;
      typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
      typedef std::future<CreateObjectOutcome> CreateObjectOutcomeCallable;
      typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
      typedef std::future<CreateTypedLinkFacetOutcome> CreateTypedLinkFacetOutcomeCallable;
      typedef std::future<DeleteDirectoryOutcome> DeleteDirectoryOutcomeCallable;
      typedef std::future<DeleteFacetOutcome> DeleteFacetOutcomeCallable;
      typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
      typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
      typedef std::future<DeleteTypedLinkFacetOutcome> DeleteTypedLinkFacetOutcomeCallable;
      typedef std::future<DetachFromIndexOutcome> DetachFromIndexOutcomeCallable;
      typedef std::future<DetachObjectOutcome> DetachObjectOutcomeCallable;
      typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
      typedef std::future<DetachTypedLinkOutcome> DetachTypedLinkOutcomeCallable;
      typedef std::future<DisableDirectoryOutcome> DisableDirectoryOutcomeCallable;
      typedef std::future<EnableDirectoryOutcome> EnableDirectoryOutcomeCallable;
      typedef std::future<GetAppliedSchemaVersionOutcome> GetAppliedSchemaVersionOutcomeCallable;
      typedef std::future<GetDirectoryOutcome> GetDirectoryOutcomeCallable;
      typedef std::future<GetFacetOutcome> GetFacetOutcomeCallable;
      typedef std::future<GetLinkAttributesOutcome> GetLinkAttributesOutcomeCallable;
      typedef std::future<GetObjectAttributesOutcome> GetObjectAttributesOutcomeCallable;
      typedef std::future<GetObjectInformationOutcome> GetObjectInformationOutcomeCallable;
      typedef std::future<GetSchemaAsJsonOutcome> GetSchemaAsJsonOutcomeCallable;
      typedef std::future<GetTypedLinkFacetInformationOutcome> GetTypedLinkFacetInformationOutcomeCallable;
      typedef std::future<ListAppliedSchemaArnsOutcome> ListAppliedSchemaArnsOutcomeCallable;
      typedef std::future<ListAttachedIndicesOutcome> ListAttachedIndicesOutcomeCallable;
      typedef std::future<ListDevelopmentSchemaArnsOutcome> ListDevelopmentSchemaArnsOutcomeCallable;
      typedef std::future<ListDirectoriesOutcome> ListDirectoriesOutcomeCallable;
      typedef std::future<ListFacetAttributesOutcome> ListFacetAttributesOutcomeCallable;
      typedef std::future<ListFacetNamesOutcome> ListFacetNamesOutcomeCallable;
      typedef std::future<ListIncomingTypedLinksOutcome> ListIncomingTypedLinksOutcomeCallable;
      typedef std::future<ListIndexOutcome> ListIndexOutcomeCallable;
      typedef std::future<ListManagedSchemaArnsOutcome> ListManagedSchemaArnsOutcomeCallable;
      typedef std::future<ListObjectAttributesOutcome> ListObjectAttributesOutcomeCallable;
      typedef std::future<ListObjectChildrenOutcome> ListObjectChildrenOutcomeCallable;
      typedef std::future<ListObjectParentPathsOutcome> ListObjectParentPathsOutcomeCallable;
      typedef std::future<ListObjectParentsOutcome> ListObjectParentsOutcomeCallable;
      typedef std::future<ListObjectPoliciesOutcome> ListObjectPoliciesOutcomeCallable;
      typedef std::future<ListOutgoingTypedLinksOutcome> ListOutgoingTypedLinksOutcomeCallable;
      typedef std::future<ListPolicyAttachmentsOutcome> ListPolicyAttachmentsOutcomeCallable;
      typedef std::future<ListPublishedSchemaArnsOutcome> ListPublishedSchemaArnsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTypedLinkFacetAttributesOutcome> ListTypedLinkFacetAttributesOutcomeCallable;
      typedef std::future<ListTypedLinkFacetNamesOutcome> ListTypedLinkFacetNamesOutcomeCallable;
      typedef std::future<LookupPolicyOutcome> LookupPolicyOutcomeCallable;
      typedef std::future<PublishSchemaOutcome> PublishSchemaOutcomeCallable;
      typedef std::future<PutSchemaFromJsonOutcome> PutSchemaFromJsonOutcomeCallable;
      typedef std::future<RemoveFacetFromObjectOutcome> RemoveFacetFromObjectOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFacetOutcome> UpdateFacetOutcomeCallable;
      typedef std::future<UpdateLinkAttributesOutcome> UpdateLinkAttributesOutcomeCallable;
      typedef std::future<UpdateObjectAttributesOutcome> UpdateObjectAttributesOutcomeCallable;
      typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
      typedef std::future<UpdateTypedLinkFacetOutcome> UpdateTypedLinkFacetOutcomeCallable;
      typedef std::future<UpgradeAppliedSchemaOutcome> UpgradeAppliedSchemaOutcomeCallable;
      typedef std::future<UpgradePublishedSchemaOutcome> UpgradePublishedSchemaOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudDirectoryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudDirectoryClient*, const Model::AddFacetToObjectRequest&, const Model::AddFacetToObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFacetToObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ApplySchemaRequest&, const Model::ApplySchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplySchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::AttachObjectRequest&, const Model::AttachObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::AttachPolicyRequest&, const Model::AttachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::AttachToIndexRequest&, const Model::AttachToIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachToIndexResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::AttachTypedLinkRequest&, const Model::AttachTypedLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachTypedLinkResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::BatchReadRequest&, const Model::BatchReadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchReadResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::BatchWriteRequest&, const Model::BatchWriteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchWriteResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateDirectoryRequest&, const Model::CreateDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateFacetRequest&, const Model::CreateFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateObjectRequest&, const Model::CreateObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::CreateTypedLinkFacetRequest&, const Model::CreateTypedLinkFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTypedLinkFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DeleteDirectoryRequest&, const Model::DeleteDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DeleteFacetRequest&, const Model::DeleteFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DeleteTypedLinkFacetRequest&, const Model::DeleteTypedLinkFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTypedLinkFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DetachFromIndexRequest&, const Model::DetachFromIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachFromIndexResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DetachObjectRequest&, const Model::DetachObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DetachPolicyRequest&, const Model::DetachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DetachTypedLinkRequest&, const Model::DetachTypedLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachTypedLinkResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::DisableDirectoryRequest&, const Model::DisableDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDirectoryResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::EnableDirectoryRequest&, const Model::EnableDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDirectoryResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetAppliedSchemaVersionRequest&, const Model::GetAppliedSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppliedSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetDirectoryRequest&, const Model::GetDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDirectoryResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetFacetRequest&, const Model::GetFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetLinkAttributesRequest&, const Model::GetLinkAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetObjectAttributesRequest&, const Model::GetObjectAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetObjectInformationRequest&, const Model::GetObjectInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectInformationResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetSchemaAsJsonRequest&, const Model::GetSchemaAsJsonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaAsJsonResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::GetTypedLinkFacetInformationRequest&, const Model::GetTypedLinkFacetInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTypedLinkFacetInformationResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListAppliedSchemaArnsRequest&, const Model::ListAppliedSchemaArnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppliedSchemaArnsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListAttachedIndicesRequest&, const Model::ListAttachedIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedIndicesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListDevelopmentSchemaArnsRequest&, const Model::ListDevelopmentSchemaArnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevelopmentSchemaArnsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListDirectoriesRequest&, const Model::ListDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDirectoriesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListFacetAttributesRequest&, const Model::ListFacetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFacetAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListFacetNamesRequest&, const Model::ListFacetNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFacetNamesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListIncomingTypedLinksRequest&, const Model::ListIncomingTypedLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIncomingTypedLinksResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListIndexRequest&, const Model::ListIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndexResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListManagedSchemaArnsRequest&, const Model::ListManagedSchemaArnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedSchemaArnsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListObjectAttributesRequest&, const Model::ListObjectAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListObjectChildrenRequest&, const Model::ListObjectChildrenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectChildrenResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListObjectParentPathsRequest&, const Model::ListObjectParentPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectParentPathsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListObjectParentsRequest&, const Model::ListObjectParentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectParentsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListObjectPoliciesRequest&, const Model::ListObjectPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectPoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListOutgoingTypedLinksRequest&, const Model::ListOutgoingTypedLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutgoingTypedLinksResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListPolicyAttachmentsRequest&, const Model::ListPolicyAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyAttachmentsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListPublishedSchemaArnsRequest&, const Model::ListPublishedSchemaArnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublishedSchemaArnsResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListTypedLinkFacetAttributesRequest&, const Model::ListTypedLinkFacetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypedLinkFacetAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::ListTypedLinkFacetNamesRequest&, const Model::ListTypedLinkFacetNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTypedLinkFacetNamesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::LookupPolicyRequest&, const Model::LookupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::PublishSchemaRequest&, const Model::PublishSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishSchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::PutSchemaFromJsonRequest&, const Model::PutSchemaFromJsonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSchemaFromJsonResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::RemoveFacetFromObjectRequest&, const Model::RemoveFacetFromObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFacetFromObjectResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpdateFacetRequest&, const Model::UpdateFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpdateLinkAttributesRequest&, const Model::UpdateLinkAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpdateObjectAttributesRequest&, const Model::UpdateObjectAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateObjectAttributesResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpdateTypedLinkFacetRequest&, const Model::UpdateTypedLinkFacetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTypedLinkFacetResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpgradeAppliedSchemaRequest&, const Model::UpgradeAppliedSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeAppliedSchemaResponseReceivedHandler;
    typedef std::function<void(const CloudDirectoryClient*, const Model::UpgradePublishedSchemaRequest&, const Model::UpgradePublishedSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradePublishedSchemaResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudDirectory
} // namespace Aws
