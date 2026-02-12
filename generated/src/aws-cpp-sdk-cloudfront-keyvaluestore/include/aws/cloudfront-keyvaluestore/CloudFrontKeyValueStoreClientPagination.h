/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClient.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CloudFrontKeyValueStore {

using ListKeysPaginator = Aws::Utils::Pagination::Paginator<CloudFrontKeyValueStoreClient, Model::ListKeysRequest,
                                                            Pagination::ListKeysPaginationTraits<CloudFrontKeyValueStoreClient>>;

}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
