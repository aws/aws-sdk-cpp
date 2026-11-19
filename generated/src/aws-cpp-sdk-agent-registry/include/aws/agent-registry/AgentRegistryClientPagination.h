/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryClient.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsPaginationTraits.h>
#include <aws/agent-registry/model/SearchDiscoverableRegistryRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AgentRegistry {

using ListDiscoverableRegistryRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AgentRegistryClient, Model::ListDiscoverableRegistryRecordsRequest,
                                      Pagination::ListDiscoverableRegistryRecordsPaginationTraits<AgentRegistryClient>>;
using SearchDiscoverableRegistryRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AgentRegistryClient, Model::SearchDiscoverableRegistryRecordsRequest,
                                      Pagination::SearchDiscoverableRegistryRecordsPaginationTraits<AgentRegistryClient>>;

}  // namespace AgentRegistry
}  // namespace Aws
