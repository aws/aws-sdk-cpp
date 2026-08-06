/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlClient.h>
#include <aws/agent-registry-control/model/ListRegistriesPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AgentRegistryControl {

using ListRegistriesPaginator = Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListRegistriesRequest,
                                                                  Pagination::ListRegistriesPaginationTraits<AgentRegistryControlClient>>;
using ListRegistryRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListRegistryRecordsRequest,
                                      Pagination::ListRegistryRecordsPaginationTraits<AgentRegistryControlClient>>;

}  // namespace AgentRegistryControl
}  // namespace Aws
