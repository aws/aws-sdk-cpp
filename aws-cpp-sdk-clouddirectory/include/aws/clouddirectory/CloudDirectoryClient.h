/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace CloudDirectory
{

namespace Model
{
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

        typedef Aws::Utils::Outcome<AddFacetToObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> AddFacetToObjectOutcome;
        typedef Aws::Utils::Outcome<ApplySchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> ApplySchemaOutcome;
        typedef Aws::Utils::Outcome<AttachObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> AttachObjectOutcome;
        typedef Aws::Utils::Outcome<AttachPolicyResult, Aws::Client::AWSError<CloudDirectoryErrors>> AttachPolicyOutcome;
        typedef Aws::Utils::Outcome<AttachToIndexResult, Aws::Client::AWSError<CloudDirectoryErrors>> AttachToIndexOutcome;
        typedef Aws::Utils::Outcome<AttachTypedLinkResult, Aws::Client::AWSError<CloudDirectoryErrors>> AttachTypedLinkOutcome;
        typedef Aws::Utils::Outcome<BatchReadResult, Aws::Client::AWSError<CloudDirectoryErrors>> BatchReadOutcome;
        typedef Aws::Utils::Outcome<BatchWriteResult, Aws::Client::AWSError<CloudDirectoryErrors>> BatchWriteOutcome;
        typedef Aws::Utils::Outcome<CreateDirectoryResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateDirectoryOutcome;
        typedef Aws::Utils::Outcome<CreateFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateFacetOutcome;
        typedef Aws::Utils::Outcome<CreateIndexResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateIndexOutcome;
        typedef Aws::Utils::Outcome<CreateObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateObjectOutcome;
        typedef Aws::Utils::Outcome<CreateSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateSchemaOutcome;
        typedef Aws::Utils::Outcome<CreateTypedLinkFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> CreateTypedLinkFacetOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectoryResult, Aws::Client::AWSError<CloudDirectoryErrors>> DeleteDirectoryOutcome;
        typedef Aws::Utils::Outcome<DeleteFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> DeleteFacetOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> DeleteObjectOutcome;
        typedef Aws::Utils::Outcome<DeleteSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> DeleteSchemaOutcome;
        typedef Aws::Utils::Outcome<DeleteTypedLinkFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> DeleteTypedLinkFacetOutcome;
        typedef Aws::Utils::Outcome<DetachFromIndexResult, Aws::Client::AWSError<CloudDirectoryErrors>> DetachFromIndexOutcome;
        typedef Aws::Utils::Outcome<DetachObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> DetachObjectOutcome;
        typedef Aws::Utils::Outcome<DetachPolicyResult, Aws::Client::AWSError<CloudDirectoryErrors>> DetachPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudDirectoryErrors>> DetachTypedLinkOutcome;
        typedef Aws::Utils::Outcome<DisableDirectoryResult, Aws::Client::AWSError<CloudDirectoryErrors>> DisableDirectoryOutcome;
        typedef Aws::Utils::Outcome<EnableDirectoryResult, Aws::Client::AWSError<CloudDirectoryErrors>> EnableDirectoryOutcome;
        typedef Aws::Utils::Outcome<GetAppliedSchemaVersionResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetAppliedSchemaVersionOutcome;
        typedef Aws::Utils::Outcome<GetDirectoryResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetDirectoryOutcome;
        typedef Aws::Utils::Outcome<GetFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetFacetOutcome;
        typedef Aws::Utils::Outcome<GetLinkAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetLinkAttributesOutcome;
        typedef Aws::Utils::Outcome<GetObjectAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetObjectAttributesOutcome;
        typedef Aws::Utils::Outcome<GetObjectInformationResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetObjectInformationOutcome;
        typedef Aws::Utils::Outcome<GetSchemaAsJsonResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetSchemaAsJsonOutcome;
        typedef Aws::Utils::Outcome<GetTypedLinkFacetInformationResult, Aws::Client::AWSError<CloudDirectoryErrors>> GetTypedLinkFacetInformationOutcome;
        typedef Aws::Utils::Outcome<ListAppliedSchemaArnsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListAppliedSchemaArnsOutcome;
        typedef Aws::Utils::Outcome<ListAttachedIndicesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListAttachedIndicesOutcome;
        typedef Aws::Utils::Outcome<ListDevelopmentSchemaArnsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListDevelopmentSchemaArnsOutcome;
        typedef Aws::Utils::Outcome<ListDirectoriesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListDirectoriesOutcome;
        typedef Aws::Utils::Outcome<ListFacetAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListFacetAttributesOutcome;
        typedef Aws::Utils::Outcome<ListFacetNamesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListFacetNamesOutcome;
        typedef Aws::Utils::Outcome<ListIncomingTypedLinksResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListIncomingTypedLinksOutcome;
        typedef Aws::Utils::Outcome<ListIndexResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListIndexOutcome;
        typedef Aws::Utils::Outcome<ListManagedSchemaArnsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListManagedSchemaArnsOutcome;
        typedef Aws::Utils::Outcome<ListObjectAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListObjectAttributesOutcome;
        typedef Aws::Utils::Outcome<ListObjectChildrenResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListObjectChildrenOutcome;
        typedef Aws::Utils::Outcome<ListObjectParentPathsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListObjectParentPathsOutcome;
        typedef Aws::Utils::Outcome<ListObjectParentsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListObjectParentsOutcome;
        typedef Aws::Utils::Outcome<ListObjectPoliciesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListObjectPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListOutgoingTypedLinksResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListOutgoingTypedLinksOutcome;
        typedef Aws::Utils::Outcome<ListPolicyAttachmentsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListPolicyAttachmentsOutcome;
        typedef Aws::Utils::Outcome<ListPublishedSchemaArnsResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListPublishedSchemaArnsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTypedLinkFacetAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListTypedLinkFacetAttributesOutcome;
        typedef Aws::Utils::Outcome<ListTypedLinkFacetNamesResult, Aws::Client::AWSError<CloudDirectoryErrors>> ListTypedLinkFacetNamesOutcome;
        typedef Aws::Utils::Outcome<LookupPolicyResult, Aws::Client::AWSError<CloudDirectoryErrors>> LookupPolicyOutcome;
        typedef Aws::Utils::Outcome<PublishSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> PublishSchemaOutcome;
        typedef Aws::Utils::Outcome<PutSchemaFromJsonResult, Aws::Client::AWSError<CloudDirectoryErrors>> PutSchemaFromJsonOutcome;
        typedef Aws::Utils::Outcome<RemoveFacetFromObjectResult, Aws::Client::AWSError<CloudDirectoryErrors>> RemoveFacetFromObjectOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CloudDirectoryErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CloudDirectoryErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpdateFacetOutcome;
        typedef Aws::Utils::Outcome<UpdateLinkAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpdateLinkAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateObjectAttributesResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpdateObjectAttributesOutcome;
        typedef Aws::Utils::Outcome<UpdateSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpdateSchemaOutcome;
        typedef Aws::Utils::Outcome<UpdateTypedLinkFacetResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpdateTypedLinkFacetOutcome;
        typedef Aws::Utils::Outcome<UpgradeAppliedSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpgradeAppliedSchemaOutcome;
        typedef Aws::Utils::Outcome<UpgradePublishedSchemaResult, Aws::Client::AWSError<CloudDirectoryErrors>> UpgradePublishedSchemaOutcome;

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
} // namespace Model

  class CloudDirectoryClient;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudDirectoryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudDirectoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudDirectoryClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudDirectory"; }


        /**
         * <p>Adds a new <a>Facet</a> to an object. An object can have more than one facet
         * applied on it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AddFacetToObject">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFacetToObjectOutcome AddFacetToObject(const Model::AddFacetToObjectRequest& request) const;

        /**
         * <p>Adds a new <a>Facet</a> to an object. An object can have more than one facet
         * applied on it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AddFacetToObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFacetToObjectOutcomeCallable AddFacetToObjectCallable(const Model::AddFacetToObjectRequest& request) const;

        /**
         * <p>Adds a new <a>Facet</a> to an object. An object can have more than one facet
         * applied on it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AddFacetToObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Copies the input published schema, at the specified version, into the
         * <a>Directory</a> with the same name and version as that of the published
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ApplySchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplySchemaOutcomeCallable ApplySchemaCallable(const Model::ApplySchemaRequest& request) const;

        /**
         * <p>Copies the input published schema, at the specified version, into the
         * <a>Directory</a> with the same name and version as that of the published
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ApplySchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches an existing object to another object. An object can be accessed in
         * two ways:</p> <ol> <li> <p>Using the path</p> </li> <li> <p>Using
         * <code>ObjectIdentifier</code> </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachObjectOutcomeCallable AttachObjectCallable(const Model::AttachObjectRequest& request) const;

        /**
         * <p>Attaches an existing object to another object. An object can be accessed in
         * two ways:</p> <ol> <li> <p>Using the path</p> </li> <li> <p>Using
         * <code>ObjectIdentifier</code> </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches a policy object to a regular object. An object can have a limited
         * number of attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy object to a regular object. An object can have a limited
         * number of attached policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches the specified object to the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachToIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachToIndexOutcomeCallable AttachToIndexCallable(const Model::AttachToIndexRequest& request) const;

        /**
         * <p>Attaches the specified object to the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachToIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches a typed link to a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachTypedLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachTypedLinkOutcomeCallable AttachTypedLinkCallable(const Model::AttachTypedLinkRequest& request) const;

        /**
         * <p>Attaches a typed link to a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/AttachTypedLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachTypedLinkAsync(const Model::AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchReadOutcome BatchRead(const Model::BatchReadRequest& request) const;

        /**
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchReadOutcomeCallable BatchReadCallable(const Model::BatchReadRequest& request) const;

        /**
         * <p>Performs all the read operations in a batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchRead">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Performs all the write operations in a batch. Either all the operations
         * succeed or none.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWrite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchWriteOutcomeCallable BatchWriteCallable(const Model::BatchWriteRequest& request) const;

        /**
         * <p>Performs all the write operations in a batch. Either all the operations
         * succeed or none.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWrite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a <a>Directory</a> by copying the published schema into the
         * directory. A directory cannot be created without a schema.</p> <p>You can also
         * quickly create a directory using a managed schema, called the
         * <code>QuickStartSchema</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_managed.html">Managed
         * Schema</a> in the <i>Amazon Cloud Directory Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const Model::CreateDirectoryRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in
         * development or applied schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFacetOutcomeCallable CreateFacetCallable(const Model::CreateFacetRequest& request) const;

        /**
         * <p>Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in
         * development or applied schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an index object. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.html">Indexing
         * and search</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request) const;

        /**
         * <p>Creates an index object. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/indexing_search.html">Indexing
         * and search</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an object in a <a>Directory</a>. Additionally attaches the object to
         * a parent, if a parent reference and <code>LinkName</code> is specified. An
         * object is simply a collection of <a>Facet</a> attributes. You can also use this
         * API call to create a policy object, if the facet from which you create the
         * object is a policy facet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateObjectOutcomeCallable CreateObjectCallable(const Model::CreateObjectRequest& request) const;

        /**
         * <p>Creates an object in a <a>Directory</a>. Additionally attaches the object to
         * a parent, if a parent reference and <code>LinkName</code> is specified. An
         * object is simply a collection of <a>Facet</a> attributes. You can also use this
         * API call to create a policy object, if the facet from which you create the
         * object is a policy facet. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTypedLinkFacetOutcomeCallable CreateTypedLinkFacetCallable(const Model::CreateTypedLinkFacetRequest& request) const;

        /**
         * <p>Creates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/CreateTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a directory. Only disabled directories can be deleted. A deleted
         * directory cannot be undone. Exercise extreme caution when deleting
         * directories.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;

        /**
         * <p>Deletes a directory. Only disabled directories can be deleted. A deleted
         * directory cannot be undone. Exercise extreme caution when deleting
         * directories.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are
         * associated with the facet will be deleted. Only development schema facets are
         * allowed deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFacetOutcomeCallable DeleteFacetCallable(const Model::DeleteFacetRequest& request) const;

        /**
         * <p>Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are
         * associated with the facet will be deleted. Only development schema facets are
         * allowed deletion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes an object and its associated attributes. Only objects with no
         * children and no parents can be deleted. The maximum number of attributes that
         * can be deleted during an object deletion is 30. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
         * Cloud Directory Limits</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * <p>Deletes an object and its associated attributes. Only objects with no
         * children and no parents can be deleted. The maximum number of attributes that
         * can be deleted during an object deletion is 30. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/limits.html">Amazon
         * Cloud Directory Limits</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a given schema. Schemas in a development and published state can only
         * be deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Deletes a given schema. Schemas in a development and published state can only
         * be deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTypedLinkFacetOutcomeCallable DeleteTypedLinkFacetCallable(const Model::DeleteTypedLinkFacetRequest& request) const;

        /**
         * <p>Deletes a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DeleteTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detaches the specified object from the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachFromIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachFromIndexOutcomeCallable DetachFromIndexCallable(const Model::DetachFromIndexRequest& request) const;

        /**
         * <p>Detaches the specified object from the specified index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachFromIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detaches a given object from the parent object. The object that is to be
         * detached from the parent is specified by the link name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachObjectOutcomeCallable DetachObjectCallable(const Model::DetachObjectRequest& request) const;

        /**
         * <p>Detaches a given object from the parent object. The object that is to be
         * detached from the parent is specified by the link name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachObjectAsync(const Model::DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detaches a typed link from a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachTypedLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachTypedLinkOutcomeCallable DetachTypedLinkCallable(const Model::DetachTypedLinkRequest& request) const;

        /**
         * <p>Detaches a typed link from a specified source and target object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DetachTypedLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disables the specified directory. Disabled directories cannot be read or
         * written to. Only enabled directories can be disabled. Disabled directories may
         * be reenabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DisableDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableDirectoryOutcomeCallable DisableDirectoryCallable(const Model::DisableDirectoryRequest& request) const;

        /**
         * <p>Disables the specified directory. Disabled directories cannot be read or
         * written to. Only enabled directories can be disabled. Disabled directories may
         * be reenabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/DisableDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Enables the specified directory. Only disabled directories can be enabled.
         * Once enabled, the directory can then be read and written to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/EnableDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableDirectoryOutcomeCallable EnableDirectoryCallable(const Model::EnableDirectoryRequest& request) const;

        /**
         * <p>Enables the specified directory. Only disabled directories can be enabled.
         * Once enabled, the directory can then be read and written to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/EnableDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns current applied schema version ARN, including the minor version in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetAppliedSchemaVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppliedSchemaVersionOutcomeCallable GetAppliedSchemaVersionCallable(const Model::GetAppliedSchemaVersionRequest& request) const;

        /**
         * <p>Returns current applied schema version ARN, including the minor version in
         * use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetAppliedSchemaVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppliedSchemaVersionAsync(const Model::GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryOutcome GetDirectory(const Model::GetDirectoryRequest& request) const;

        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDirectoryOutcomeCallable GetDirectoryCallable(const Model::GetDirectoryRequest& request) const;

        /**
         * <p>Retrieves metadata about a directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets details of the <a>Facet</a>, such as facet name, attributes,
         * <a>Rule</a>s, or <code>ObjectType</code>. You can call this on all kinds of
         * schema facets -- published, development, or applied.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFacetOutcomeCallable GetFacetCallable(const Model::GetFacetRequest& request) const;

        /**
         * <p>Gets details of the <a>Facet</a>, such as facet name, attributes,
         * <a>Rule</a>s, or <code>ObjectType</code>. You can call this on all kinds of
         * schema facets -- published, development, or applied.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves attributes that are associated with a typed link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetLinkAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLinkAttributesOutcomeCallable GetLinkAttributesCallable(const Model::GetLinkAttributesRequest& request) const;

        /**
         * <p>Retrieves attributes that are associated with a typed link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetLinkAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves attributes within a facet that are associated with an
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectAttributesOutcomeCallable GetObjectAttributesCallable(const Model::GetObjectAttributesRequest& request) const;

        /**
         * <p>Retrieves attributes within a facet that are associated with an
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAttributesAsync(const Model::GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectInformationOutcome GetObjectInformation(const Model::GetObjectInformationRequest& request) const;

        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectInformationOutcomeCallable GetObjectInformationCallable(const Model::GetObjectInformationRequest& request) const;

        /**
         * <p>Retrieves metadata about an object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetObjectInformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a JSON representation of the schema. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetSchemaAsJson">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaAsJsonOutcomeCallable GetSchemaAsJsonCallable(const Model::GetSchemaAsJsonRequest& request) const;

        /**
         * <p>Retrieves a JSON representation of the schema. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetSchemaAsJson">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the identity attribute order for a specific <a>TypedLinkFacet</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetTypedLinkFacetInformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTypedLinkFacetInformationOutcomeCallable GetTypedLinkFacetInformationCallable(const Model::GetTypedLinkFacetInformationRequest& request) const;

        /**
         * <p>Returns the identity attribute order for a specific <a>TypedLinkFacet</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/GetTypedLinkFacetInformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists schema major versions applied to a directory. If <code>SchemaArn</code>
         * is provided, lists the minor version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAppliedSchemaArns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppliedSchemaArnsOutcomeCallable ListAppliedSchemaArnsCallable(const Model::ListAppliedSchemaArnsRequest& request) const;

        /**
         * <p>Lists schema major versions applied to a directory. If <code>SchemaArn</code>
         * is provided, lists the minor version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAppliedSchemaArns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppliedSchemaArnsAsync(const Model::ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedIndicesOutcome ListAttachedIndices(const Model::ListAttachedIndicesRequest& request) const;

        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedIndicesOutcomeCallable ListAttachedIndicesCallable(const Model::ListAttachedIndicesRequest& request) const;

        /**
         * <p>Lists indices attached to the specified object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListAttachedIndices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves each Amazon Resource Name (ARN) of schemas in the development
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDevelopmentSchemaArns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevelopmentSchemaArnsOutcomeCallable ListDevelopmentSchemaArnsCallable(const Model::ListDevelopmentSchemaArnsRequest& request) const;

        /**
         * <p>Retrieves each Amazon Resource Name (ARN) of schemas in the development
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDevelopmentSchemaArns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevelopmentSchemaArnsAsync(const Model::ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDirectoriesOutcome ListDirectories(const Model::ListDirectoriesRequest& request) const;

        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDirectoriesOutcomeCallable ListDirectoriesCallable(const Model::ListDirectoriesRequest& request) const;

        /**
         * <p>Lists directories created within an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListDirectories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDirectoriesAsync(const Model::ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFacetAttributesOutcome ListFacetAttributes(const Model::ListFacetAttributesRequest& request) const;

        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFacetAttributesOutcomeCallable ListFacetAttributesCallable(const Model::ListFacetAttributesRequest& request) const;

        /**
         * <p>Retrieves attributes attached to the facet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the names of facets that exist in a schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFacetNamesOutcomeCallable ListFacetNamesCallable(const Model::ListFacetNamesRequest& request) const;

        /**
         * <p>Retrieves the names of facets that exist in a schema.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListFacetNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIncomingTypedLinks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIncomingTypedLinksOutcomeCallable ListIncomingTypedLinksCallable(const Model::ListIncomingTypedLinksRequest& request) const;

        /**
         * <p>Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIncomingTypedLinks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIncomingTypedLinksAsync(const Model::ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndexOutcome ListIndex(const Model::ListIndexRequest& request) const;

        /**
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndexOutcomeCallable ListIndexCallable(const Model::ListIndexRequest& request) const;

        /**
         * <p>Lists objects attached to the specified index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the major version families of each managed schema. If a major version
         * ARN is provided as SchemaArn, the minor version revisions in that family are
         * listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListManagedSchemaArns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedSchemaArnsOutcomeCallable ListManagedSchemaArnsCallable(const Model::ListManagedSchemaArnsRequest& request) const;

        /**
         * <p>Lists the major version families of each managed schema. If a major version
         * ARN is provided as SchemaArn, the minor version revisions in that family are
         * listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListManagedSchemaArns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all attributes that are associated with an object. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectAttributesOutcomeCallable ListObjectAttributesCallable(const Model::ListObjectAttributesRequest& request) const;

        /**
         * <p>Lists all attributes that are associated with an object. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a paginated list of child objects that are associated with a given
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectChildren">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectChildrenOutcomeCallable ListObjectChildrenCallable(const Model::ListObjectChildrenRequest& request) const;

        /**
         * <p>Returns a paginated list of child objects that are associated with a given
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectChildren">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectParentPathsOutcomeCallable ListObjectParentPathsCallable(const Model::ListObjectParentPathsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists parent objects that are associated with a given object in pagination
         * fashion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectParents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectParentsOutcomeCallable ListObjectParentsCallable(const Model::ListObjectParentsRequest& request) const;

        /**
         * <p>Lists parent objects that are associated with a given object in pagination
         * fashion.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectParents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns policies attached to an object in pagination fashion.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectPoliciesOutcomeCallable ListObjectPoliciesCallable(const Model::ListObjectPoliciesRequest& request) const;

        /**
         * <p>Returns policies attached to an object in pagination fashion.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListObjectPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListOutgoingTypedLinks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutgoingTypedLinksOutcomeCallable ListOutgoingTypedLinksCallable(const Model::ListOutgoingTypedLinksRequest& request) const;

        /**
         * <p>Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a>
         * information for an object. It also supports filtering by typed link facet and
         * identity attributes. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListOutgoingTypedLinks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPolicyAttachments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyAttachmentsOutcomeCallable ListPolicyAttachmentsCallable(const Model::ListPolicyAttachmentsRequest& request) const;

        /**
         * <p>Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPolicyAttachments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the major version families of each published schema. If a major version
         * ARN is provided as <code>SchemaArn</code>, the minor version revisions in that
         * family are listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPublishedSchemaArns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublishedSchemaArnsOutcomeCallable ListPublishedSchemaArnsCallable(const Model::ListPublishedSchemaArnsRequest& request) const;

        /**
         * <p>Lists the major version families of each published schema. If a major version
         * ARN is provided as <code>SchemaArn</code>, the minor version revisions in that
         * family are listed instead.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListPublishedSchemaArns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns tags for a resource. Tagging is currently supported only for
         * directories with a limit of 50 tags per directory. All 50 tags are returned for
         * a given directory with this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns tags for a resource. Tagging is currently supported only for
         * directories with a limit of 50 tags per directory. All 50 tags are returned for
         * a given directory with this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a paginated list of all attribute definitions for a particular
         * <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypedLinkFacetAttributesOutcomeCallable ListTypedLinkFacetAttributesCallable(const Model::ListTypedLinkFacetAttributesRequest& request) const;

        /**
         * <p>Returns a paginated list of all attribute definitions for a particular
         * <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a paginated list of <code>TypedLink</code> facet names for a
         * particular schema. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypedLinkFacetNamesOutcomeCallable ListTypedLinkFacetNamesCallable(const Model::ListTypedLinkFacetNamesRequest& request) const;

        /**
         * <p>Returns a paginated list of <code>TypedLink</code> facet names for a
         * particular schema. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ListTypedLinkFacetNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupPolicyOutcomeCallable LookupPolicyCallable(const Model::LookupPolicyRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Publishes a development schema with a major version and a recommended minor
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PublishSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishSchemaOutcomeCallable PublishSchemaCallable(const Model::PublishSchemaRequest& request) const;

        /**
         * <p>Publishes a development schema with a major version and a recommended minor
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PublishSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows a schema to be updated using JSON upload. Only available for
         * development schemas. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PutSchemaFromJson">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSchemaFromJsonOutcomeCallable PutSchemaFromJsonCallable(const Model::PutSchemaFromJsonRequest& request) const;

        /**
         * <p>Allows a schema to be updated using JSON upload. Only available for
         * development schemas. See <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_jsonformat.html#schemas_json">JSON
         * Schema Format</a> for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/PutSchemaFromJson">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the specified facet from the specified object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/RemoveFacetFromObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFacetFromObjectOutcomeCallable RemoveFacetFromObjectCallable(const Model::RemoveFacetFromObjectRequest& request) const;

        /**
         * <p>Removes the specified facet from the specified object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/RemoveFacetFromObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFacetFromObjectAsync(const Model::RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>An API operation for adding tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>An API operation for removing tags from a resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>An API operation for removing tags from a resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Does the following:</p> <ol> <li> <p>Adds new <code>Attributes</code>,
         * <code>Rules</code>, or <code>ObjectTypes</code>.</p> </li> <li> <p>Updates
         * existing <code>Attributes</code>, <code>Rules</code>, or
         * <code>ObjectTypes</code>.</p> </li> <li> <p>Deletes existing
         * <code>Attributes</code>, <code>Rules</code>, or <code>ObjectTypes</code>.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFacetOutcomeCallable UpdateFacetCallable(const Model::UpdateFacetRequest& request) const;

        /**
         * <p>Does the following:</p> <ol> <li> <p>Adds new <code>Attributes</code>,
         * <code>Rules</code>, or <code>ObjectTypes</code>.</p> </li> <li> <p>Updates
         * existing <code>Attributes</code>, <code>Rules</code>, or
         * <code>ObjectTypes</code>.</p> </li> <li> <p>Deletes existing
         * <code>Attributes</code>, <code>Rules</code>, or <code>ObjectTypes</code>.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a given typed link’s attributes. Attributes to be updated must not
         * contribute to the typed link’s identity, as defined by its
         * <code>IdentityAttributeOrder</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateLinkAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLinkAttributesOutcomeCallable UpdateLinkAttributesCallable(const Model::UpdateLinkAttributesRequest& request) const;

        /**
         * <p>Updates a given typed link’s attributes. Attributes to be updated must not
         * contribute to the typed link’s identity, as defined by its
         * <code>IdentityAttributeOrder</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateLinkAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLinkAttributesAsync(const Model::UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateObjectAttributesOutcome UpdateObjectAttributes(const Model::UpdateObjectAttributesRequest& request) const;

        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateObjectAttributesOutcomeCallable UpdateObjectAttributesCallable(const Model::UpdateObjectAttributesRequest& request) const;

        /**
         * <p>Updates a given object's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateObjectAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the schema name with a new name. Only development schema names can be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * <p>Updates the schema name with a new name. Only development schema names can be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTypedLinkFacetOutcomeCallable UpdateTypedLinkFacetCallable(const Model::UpdateTypedLinkFacetRequest& request) const;

        /**
         * <p>Updates a <a>TypedLinkFacet</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
         * Links</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpdateTypedLinkFacet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Upgrades a single directory in-place using the
         * <code>PublishedSchemaArn</code> with schema updates found in
         * <code>MinorVersion</code>. Backwards-compatible minor version upgrades are
         * instantaneously available for readers on all objects in the directory. Note:
         * This is a synchronous API call and upgrades only one schema on a given directory
         * per call. To upgrade multiple directories from one schema, you would need to
         * call this API on each directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradeAppliedSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradeAppliedSchemaOutcomeCallable UpgradeAppliedSchemaCallable(const Model::UpgradeAppliedSchemaRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Upgrades a published schema under a new minor version revision using the
         * current contents of <code>DevelopmentSchemaArn</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradePublishedSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradePublishedSchemaOutcomeCallable UpgradePublishedSchemaCallable(const Model::UpgradePublishedSchemaRequest& request) const;

        /**
         * <p>Upgrades a published schema under a new minor version revision using the
         * current contents of <code>DevelopmentSchemaArn</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/UpgradePublishedSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradePublishedSchemaAsync(const Model::UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddFacetToObjectAsyncHelper(const Model::AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplySchemaAsyncHelper(const Model::ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachObjectAsyncHelper(const Model::AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachPolicyAsyncHelper(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachToIndexAsyncHelper(const Model::AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachTypedLinkAsyncHelper(const Model::AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchReadAsyncHelper(const Model::BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchWriteAsyncHelper(const Model::BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectoryAsyncHelper(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFacetAsyncHelper(const Model::CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIndexAsyncHelper(const Model::CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateObjectAsyncHelper(const Model::CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSchemaAsyncHelper(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTypedLinkFacetAsyncHelper(const Model::CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectoryAsyncHelper(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFacetAsyncHelper(const Model::DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectAsyncHelper(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaAsyncHelper(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTypedLinkFacetAsyncHelper(const Model::DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachFromIndexAsyncHelper(const Model::DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachObjectAsyncHelper(const Model::DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachPolicyAsyncHelper(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachTypedLinkAsyncHelper(const Model::DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableDirectoryAsyncHelper(const Model::DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableDirectoryAsyncHelper(const Model::EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppliedSchemaVersionAsyncHelper(const Model::GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDirectoryAsyncHelper(const Model::GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFacetAsyncHelper(const Model::GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLinkAttributesAsyncHelper(const Model::GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAttributesAsyncHelper(const Model::GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectInformationAsyncHelper(const Model::GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaAsJsonAsyncHelper(const Model::GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTypedLinkFacetInformationAsyncHelper(const Model::GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppliedSchemaArnsAsyncHelper(const Model::ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedIndicesAsyncHelper(const Model::ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevelopmentSchemaArnsAsyncHelper(const Model::ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDirectoriesAsyncHelper(const Model::ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFacetAttributesAsyncHelper(const Model::ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFacetNamesAsyncHelper(const Model::ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIncomingTypedLinksAsyncHelper(const Model::ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIndexAsyncHelper(const Model::ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListManagedSchemaArnsAsyncHelper(const Model::ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectAttributesAsyncHelper(const Model::ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectChildrenAsyncHelper(const Model::ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectParentPathsAsyncHelper(const Model::ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectParentsAsyncHelper(const Model::ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectPoliciesAsyncHelper(const Model::ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOutgoingTypedLinksAsyncHelper(const Model::ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPolicyAttachmentsAsyncHelper(const Model::ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublishedSchemaArnsAsyncHelper(const Model::ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTypedLinkFacetAttributesAsyncHelper(const Model::ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTypedLinkFacetNamesAsyncHelper(const Model::ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LookupPolicyAsyncHelper(const Model::LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishSchemaAsyncHelper(const Model::PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSchemaFromJsonAsyncHelper(const Model::PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFacetFromObjectAsyncHelper(const Model::RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFacetAsyncHelper(const Model::UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLinkAttributesAsyncHelper(const Model::UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateObjectAttributesAsyncHelper(const Model::UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSchemaAsyncHelper(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTypedLinkFacetAsyncHelper(const Model::UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpgradeAppliedSchemaAsyncHelper(const Model::UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpgradePublishedSchemaAsyncHelper(const Model::UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudDirectory
} // namespace Aws
