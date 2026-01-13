/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryClient.h>
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

namespace Aws {
namespace CloudDirectory {

using ListAppliedSchemaArnsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListAppliedSchemaArnsRequest,
                                      Pagination::ListAppliedSchemaArnsPaginationTraits<CloudDirectoryClient>>;
using ListAttachedIndicesPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListAttachedIndicesRequest,
                                      Pagination::ListAttachedIndicesPaginationTraits<CloudDirectoryClient>>;
using ListDevelopmentSchemaArnsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListDevelopmentSchemaArnsRequest,
                                      Pagination::ListDevelopmentSchemaArnsPaginationTraits<CloudDirectoryClient>>;
using ListDirectoriesPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListDirectoriesRequest,
                                                                   Pagination::ListDirectoriesPaginationTraits<CloudDirectoryClient>>;
using ListFacetAttributesPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListFacetAttributesRequest,
                                      Pagination::ListFacetAttributesPaginationTraits<CloudDirectoryClient>>;
using ListFacetNamesPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListFacetNamesRequest,
                                                                  Pagination::ListFacetNamesPaginationTraits<CloudDirectoryClient>>;
using ListIndexPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListIndexRequest,
                                                             Pagination::ListIndexPaginationTraits<CloudDirectoryClient>>;
using ListManagedSchemaArnsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListManagedSchemaArnsRequest,
                                      Pagination::ListManagedSchemaArnsPaginationTraits<CloudDirectoryClient>>;
using ListObjectAttributesPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListObjectAttributesRequest,
                                      Pagination::ListObjectAttributesPaginationTraits<CloudDirectoryClient>>;
using ListObjectChildrenPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListObjectChildrenRequest,
                                                                      Pagination::ListObjectChildrenPaginationTraits<CloudDirectoryClient>>;
using ListObjectParentPathsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListObjectParentPathsRequest,
                                      Pagination::ListObjectParentPathsPaginationTraits<CloudDirectoryClient>>;
using ListObjectParentsPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListObjectParentsRequest,
                                                                     Pagination::ListObjectParentsPaginationTraits<CloudDirectoryClient>>;
using ListObjectPoliciesPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListObjectPoliciesRequest,
                                                                      Pagination::ListObjectPoliciesPaginationTraits<CloudDirectoryClient>>;
using ListPolicyAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListPolicyAttachmentsRequest,
                                      Pagination::ListPolicyAttachmentsPaginationTraits<CloudDirectoryClient>>;
using ListPublishedSchemaArnsPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListPublishedSchemaArnsRequest,
                                      Pagination::ListPublishedSchemaArnsPaginationTraits<CloudDirectoryClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<CloudDirectoryClient>>;
using ListTypedLinkFacetAttributesPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListTypedLinkFacetAttributesRequest,
                                      Pagination::ListTypedLinkFacetAttributesPaginationTraits<CloudDirectoryClient>>;
using ListTypedLinkFacetNamesPaginator =
    Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::ListTypedLinkFacetNamesRequest,
                                      Pagination::ListTypedLinkFacetNamesPaginationTraits<CloudDirectoryClient>>;
using LookupPolicyPaginator = Aws::Utils::Pagination::Paginator<CloudDirectoryClient, Model::LookupPolicyRequest,
                                                                Pagination::LookupPolicyPaginationTraits<CloudDirectoryClient>>;

}  // namespace CloudDirectory
}  // namespace Aws
