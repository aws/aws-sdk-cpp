/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/interconnect/InterconnectClient.h>
#include <aws/interconnect/model/ListAttachPointsPaginationTraits.h>
#include <aws/interconnect/model/ListConnectionsPaginationTraits.h>
#include <aws/interconnect/model/ListEnvironmentsPaginationTraits.h>

namespace Aws {
namespace Interconnect {

using ListAttachPointsPaginator = Aws::Utils::Pagination::Paginator<InterconnectClient, Model::ListAttachPointsRequest,
                                                                    Pagination::ListAttachPointsPaginationTraits<InterconnectClient>>;
using ListConnectionsPaginator = Aws::Utils::Pagination::Paginator<InterconnectClient, Model::ListConnectionsRequest,
                                                                   Pagination::ListConnectionsPaginationTraits<InterconnectClient>>;
using ListEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<InterconnectClient, Model::ListEnvironmentsRequest,
                                                                    Pagination::ListEnvironmentsPaginationTraits<InterconnectClient>>;

}  // namespace Interconnect
}  // namespace Aws
