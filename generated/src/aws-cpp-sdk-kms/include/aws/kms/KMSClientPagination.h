/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/model/DescribeCustomKeyStoresPaginationTraits.h>
#include <aws/kms/model/ListAliasesPaginationTraits.h>
#include <aws/kms/model/ListGrantsPaginationTraits.h>
#include <aws/kms/model/ListKeyPoliciesPaginationTraits.h>
#include <aws/kms/model/ListKeyRotationsPaginationTraits.h>
#include <aws/kms/model/ListKeysPaginationTraits.h>
#include <aws/kms/model/ListResourceTagsPaginationTraits.h>
#include <aws/kms/model/ListRetirableGrantsPaginationTraits.h>

namespace Aws {
namespace KMS {

using DescribeCustomKeyStoresPaginator = Aws::Utils::Pagination::Paginator<KMSClient, Model::DescribeCustomKeyStoresRequest,
                                                                           Pagination::DescribeCustomKeyStoresPaginationTraits<KMSClient>>;
using ListAliasesPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<KMSClient>>;
using ListGrantsPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListGrantsRequest, Pagination::ListGrantsPaginationTraits<KMSClient>>;
using ListKeyPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListKeyPoliciesRequest, Pagination::ListKeyPoliciesPaginationTraits<KMSClient>>;
using ListKeyRotationsPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListKeyRotationsRequest, Pagination::ListKeyRotationsPaginationTraits<KMSClient>>;
using ListKeysPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListKeysRequest, Pagination::ListKeysPaginationTraits<KMSClient>>;
using ListResourceTagsPaginator =
    Aws::Utils::Pagination::Paginator<KMSClient, Model::ListResourceTagsRequest, Pagination::ListResourceTagsPaginationTraits<KMSClient>>;
using ListRetirableGrantsPaginator = Aws::Utils::Pagination::Paginator<KMSClient, Model::ListRetirableGrantsRequest,
                                                                       Pagination::ListRetirableGrantsPaginationTraits<KMSClient>>;

}  // namespace KMS
}  // namespace Aws
