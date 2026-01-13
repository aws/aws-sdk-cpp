/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/model/ListJobsPaginationTraits.h>
#include <aws/glacier/model/ListMultipartUploadsPaginationTraits.h>
#include <aws/glacier/model/ListPartsPaginationTraits.h>
#include <aws/glacier/model/ListVaultsPaginationTraits.h>

namespace Aws {
namespace Glacier {

using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<GlacierClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<GlacierClient>>;
using ListMultipartUploadsPaginator = Aws::Utils::Pagination::Paginator<GlacierClient, Model::ListMultipartUploadsRequest,
                                                                        Pagination::ListMultipartUploadsPaginationTraits<GlacierClient>>;
using ListPartsPaginator =
    Aws::Utils::Pagination::Paginator<GlacierClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<GlacierClient>>;
using ListVaultsPaginator =
    Aws::Utils::Pagination::Paginator<GlacierClient, Model::ListVaultsRequest, Pagination::ListVaultsPaginationTraits<GlacierClient>>;

}  // namespace Glacier
}  // namespace Aws
