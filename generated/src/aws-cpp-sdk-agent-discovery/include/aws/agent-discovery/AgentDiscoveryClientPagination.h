/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscoveryClient.h>
#include <aws/agent-discovery/model/SearchPublicRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AgentDiscovery {

using SearchPublicRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AgentDiscoveryClient, Model::SearchPublicRecordsRequest,
                                      Pagination::SearchPublicRecordsPaginationTraits<AgentDiscoveryClient>>;

}  // namespace AgentDiscovery
}  // namespace Aws
