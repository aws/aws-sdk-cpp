/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/model/ListApplicationsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamGroupsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsPaginationTraits.h>

namespace Aws {
namespace GameLiftStreams {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<GameLiftStreamsClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<GameLiftStreamsClient>>;
using ListStreamGroupsPaginator = Aws::Utils::Pagination::Paginator<GameLiftStreamsClient, Model::ListStreamGroupsRequest,
                                                                    Pagination::ListStreamGroupsPaginationTraits<GameLiftStreamsClient>>;
using ListStreamSessionsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftStreamsClient, Model::ListStreamSessionsRequest,
                                      Pagination::ListStreamSessionsPaginationTraits<GameLiftStreamsClient>>;
using ListStreamSessionsByAccountPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftStreamsClient, Model::ListStreamSessionsByAccountRequest,
                                      Pagination::ListStreamSessionsByAccountPaginationTraits<GameLiftStreamsClient>>;

}  // namespace GameLiftStreams
}  // namespace Aws
