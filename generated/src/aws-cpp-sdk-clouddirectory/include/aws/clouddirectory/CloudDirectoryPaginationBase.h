/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/clouddirectory/model/ListAppliedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListAttachedIndicesPaginationTraits.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListDirectoriesPaginationTraits.h>
#include <aws/clouddirectory/model/ListFacetAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListFacetNamesPaginationTraits.h>
#include <aws/clouddirectory/model/ListIndexPaginationTraits.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectChildrenPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectParentPathsPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectParentsPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectPoliciesPaginationTraits.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsPaginationTraits.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListTagsForResourcePaginationTraits.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetNamesPaginationTraits.h>
#include <aws/clouddirectory/model/LookupPolicyPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudDirectory {

class CloudDirectoryClient;

template <typename DerivedClient>
class CloudDirectoryPaginationBase {
 public:
  /**
   * Create a paginator for ListAppliedSchemaArns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppliedSchemaArnsRequest,
                                    Pagination::ListAppliedSchemaArnsPaginationTraits<DerivedClient>>
  ListAppliedSchemaArnsPaginator(const Model::ListAppliedSchemaArnsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppliedSchemaArnsRequest,
                                             Pagination::ListAppliedSchemaArnsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachedIndices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedIndicesRequest,
                                    Pagination::ListAttachedIndicesPaginationTraits<DerivedClient>>
  ListAttachedIndicesPaginator(const Model::ListAttachedIndicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedIndicesRequest,
                                             Pagination::ListAttachedIndicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDevelopmentSchemaArns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevelopmentSchemaArnsRequest,
                                    Pagination::ListDevelopmentSchemaArnsPaginationTraits<DerivedClient>>
  ListDevelopmentSchemaArnsPaginator(const Model::ListDevelopmentSchemaArnsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevelopmentSchemaArnsRequest,
                                             Pagination::ListDevelopmentSchemaArnsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDirectories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoriesRequest,
                                    Pagination::ListDirectoriesPaginationTraits<DerivedClient>>
  ListDirectoriesPaginator(const Model::ListDirectoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDirectoriesRequest,
                                             Pagination::ListDirectoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFacetAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacetAttributesRequest,
                                    Pagination::ListFacetAttributesPaginationTraits<DerivedClient>>
  ListFacetAttributesPaginator(const Model::ListFacetAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacetAttributesRequest,
                                             Pagination::ListFacetAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFacetNames operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacetNamesRequest, Pagination::ListFacetNamesPaginationTraits<DerivedClient>>
  ListFacetNamesPaginator(const Model::ListFacetNamesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFacetNamesRequest,
                                             Pagination::ListFacetNamesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListIndex operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexRequest, Pagination::ListIndexPaginationTraits<DerivedClient>>
  ListIndexPaginator(const Model::ListIndexRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexRequest, Pagination::ListIndexPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedSchemaArns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedSchemaArnsRequest,
                                    Pagination::ListManagedSchemaArnsPaginationTraits<DerivedClient>>
  ListManagedSchemaArnsPaginator(const Model::ListManagedSchemaArnsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedSchemaArnsRequest,
                                             Pagination::ListManagedSchemaArnsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectAttributesRequest,
                                    Pagination::ListObjectAttributesPaginationTraits<DerivedClient>>
  ListObjectAttributesPaginator(const Model::ListObjectAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectAttributesRequest,
                                             Pagination::ListObjectAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectChildren operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectChildrenRequest,
                                    Pagination::ListObjectChildrenPaginationTraits<DerivedClient>>
  ListObjectChildrenPaginator(const Model::ListObjectChildrenRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectChildrenRequest,
                                             Pagination::ListObjectChildrenPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectParentPaths operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectParentPathsRequest,
                                    Pagination::ListObjectParentPathsPaginationTraits<DerivedClient>>
  ListObjectParentPathsPaginator(const Model::ListObjectParentPathsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectParentPathsRequest,
                                             Pagination::ListObjectParentPathsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectParents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectParentsRequest,
                                    Pagination::ListObjectParentsPaginationTraits<DerivedClient>>
  ListObjectParentsPaginator(const Model::ListObjectParentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectParentsRequest,
                                             Pagination::ListObjectParentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectPoliciesRequest,
                                    Pagination::ListObjectPoliciesPaginationTraits<DerivedClient>>
  ListObjectPoliciesPaginator(const Model::ListObjectPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectPoliciesRequest,
                                             Pagination::ListObjectPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicyAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyAttachmentsRequest,
                                    Pagination::ListPolicyAttachmentsPaginationTraits<DerivedClient>>
  ListPolicyAttachmentsPaginator(const Model::ListPolicyAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyAttachmentsRequest,
                                             Pagination::ListPolicyAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPublishedSchemaArns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishedSchemaArnsRequest,
                                    Pagination::ListPublishedSchemaArnsPaginationTraits<DerivedClient>>
  ListPublishedSchemaArnsPaginator(const Model::ListPublishedSchemaArnsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishedSchemaArnsRequest,
                                             Pagination::ListPublishedSchemaArnsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypedLinkFacetAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypedLinkFacetAttributesRequest,
                                    Pagination::ListTypedLinkFacetAttributesPaginationTraits<DerivedClient>>
  ListTypedLinkFacetAttributesPaginator(const Model::ListTypedLinkFacetAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypedLinkFacetAttributesRequest,
                                             Pagination::ListTypedLinkFacetAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypedLinkFacetNames operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypedLinkFacetNamesRequest,
                                    Pagination::ListTypedLinkFacetNamesPaginationTraits<DerivedClient>>
  ListTypedLinkFacetNamesPaginator(const Model::ListTypedLinkFacetNamesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypedLinkFacetNamesRequest,
                                             Pagination::ListTypedLinkFacetNamesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for LookupPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::LookupPolicyRequest, Pagination::LookupPolicyPaginationTraits<DerivedClient>>
  LookupPolicyPaginator(const Model::LookupPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::LookupPolicyRequest,
                                             Pagination::LookupPolicyPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace CloudDirectory
}  // namespace Aws
