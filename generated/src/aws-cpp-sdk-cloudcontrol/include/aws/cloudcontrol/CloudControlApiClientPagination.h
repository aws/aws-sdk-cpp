/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiClient.h>
#include <aws/cloudcontrol/model/ListResourceRequestsPaginationTraits.h>
#include <aws/cloudcontrol/model/ListResourcesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CloudControlApi {

using ListResourceRequestsPaginator =
    Aws::Utils::Pagination::Paginator<CloudControlApiClient, Model::ListResourceRequestsRequest,
                                      Pagination::ListResourceRequestsPaginationTraits<CloudControlApiClient>>;
using ListResourcesPaginator = Aws::Utils::Pagination::Paginator<CloudControlApiClient, Model::ListResourcesRequest,
                                                                 Pagination::ListResourcesPaginationTraits<CloudControlApiClient>>;

}  // namespace CloudControlApi
}  // namespace Aws
