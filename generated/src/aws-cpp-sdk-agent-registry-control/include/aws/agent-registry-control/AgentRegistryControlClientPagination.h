/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlClient.h>
#include <aws/agent-registry-control/model/ListPublisherAssociationsPaginationTraits.h>
#include <aws/agent-registry-control/model/ListPublishersPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistriesPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AgentRegistryControl {

using ListPublisherAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListPublisherAssociationsRequest,
                                      Pagination::ListPublisherAssociationsPaginationTraits<AgentRegistryControlClient>>;
using ListPublishersPaginator = Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListPublishersRequest,
                                                                  Pagination::ListPublishersPaginationTraits<AgentRegistryControlClient>>;
using ListRegistriesPaginator = Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListRegistriesRequest,
                                                                  Pagination::ListRegistriesPaginationTraits<AgentRegistryControlClient>>;
using ListRegistryRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AgentRegistryControlClient, Model::ListRegistryRecordsRequest,
                                      Pagination::ListRegistryRecordsPaginationTraits<AgentRegistryControlClient>>;

}  // namespace AgentRegistryControl
}  // namespace Aws
