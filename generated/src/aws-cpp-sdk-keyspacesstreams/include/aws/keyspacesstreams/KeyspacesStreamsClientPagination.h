/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/keyspacesstreams/KeyspacesStreamsClient.h>
#include <aws/keyspacesstreams/model/GetStreamPaginationTraits.h>
#include <aws/keyspacesstreams/model/ListStreamsPaginationTraits.h>

namespace Aws {
namespace KeyspacesStreams {

using GetStreamPaginator = Aws::Utils::Pagination::Paginator<KeyspacesStreamsClient, Model::GetStreamRequest,
                                                             Pagination::GetStreamPaginationTraits<KeyspacesStreamsClient>>;
using ListStreamsPaginator = Aws::Utils::Pagination::Paginator<KeyspacesStreamsClient, Model::ListStreamsRequest,
                                                               Pagination::ListStreamsPaginationTraits<KeyspacesStreamsClient>>;

}  // namespace KeyspacesStreams
}  // namespace Aws
