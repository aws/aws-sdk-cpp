/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/gamelift/GameLiftClient.h>
#include <aws/gamelift/model/DescribeFleetAttributesPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetCapacityPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetEventsPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetLocationAttributesPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetUtilizationPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameServerInstancesPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameSessionsPaginationTraits.h>
#include <aws/gamelift/model/DescribeInstancesPaginationTraits.h>
#include <aws/gamelift/model/DescribeMatchmakingConfigurationsPaginationTraits.h>
#include <aws/gamelift/model/DescribeMatchmakingRuleSetsPaginationTraits.h>
#include <aws/gamelift/model/DescribePlayerSessionsPaginationTraits.h>
#include <aws/gamelift/model/DescribeScalingPoliciesPaginationTraits.h>
#include <aws/gamelift/model/ListAliasesPaginationTraits.h>
#include <aws/gamelift/model/ListBuildsPaginationTraits.h>
#include <aws/gamelift/model/ListComputePaginationTraits.h>
#include <aws/gamelift/model/ListContainerFleetsPaginationTraits.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionVersionsPaginationTraits.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionsPaginationTraits.h>
#include <aws/gamelift/model/ListFleetDeploymentsPaginationTraits.h>
#include <aws/gamelift/model/ListFleetsPaginationTraits.h>
#include <aws/gamelift/model/ListGameServerGroupsPaginationTraits.h>
#include <aws/gamelift/model/ListGameServersPaginationTraits.h>
#include <aws/gamelift/model/ListLocationsPaginationTraits.h>
#include <aws/gamelift/model/ListScriptsPaginationTraits.h>
#include <aws/gamelift/model/SearchGameSessionsPaginationTraits.h>

namespace Aws {
namespace GameLift {

using DescribeFleetAttributesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeFleetAttributesRequest,
                                      Pagination::DescribeFleetAttributesPaginationTraits<GameLiftClient>>;
using DescribeFleetCapacityPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeFleetCapacityRequest,
                                                                         Pagination::DescribeFleetCapacityPaginationTraits<GameLiftClient>>;
using DescribeFleetEventsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeFleetEventsRequest,
                                                                       Pagination::DescribeFleetEventsPaginationTraits<GameLiftClient>>;
using DescribeFleetLocationAttributesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeFleetLocationAttributesRequest,
                                      Pagination::DescribeFleetLocationAttributesPaginationTraits<GameLiftClient>>;
using DescribeFleetUtilizationPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeFleetUtilizationRequest,
                                      Pagination::DescribeFleetUtilizationPaginationTraits<GameLiftClient>>;
using DescribeGameServerInstancesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeGameServerInstancesRequest,
                                      Pagination::DescribeGameServerInstancesPaginationTraits<GameLiftClient>>;
using DescribeGameSessionDetailsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeGameSessionDetailsRequest,
                                      Pagination::DescribeGameSessionDetailsPaginationTraits<GameLiftClient>>;
using DescribeGameSessionQueuesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeGameSessionQueuesRequest,
                                      Pagination::DescribeGameSessionQueuesPaginationTraits<GameLiftClient>>;
using DescribeGameSessionsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeGameSessionsRequest,
                                                                        Pagination::DescribeGameSessionsPaginationTraits<GameLiftClient>>;
using DescribeInstancesPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeInstancesRequest,
                                                                     Pagination::DescribeInstancesPaginationTraits<GameLiftClient>>;
using DescribeMatchmakingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeMatchmakingConfigurationsRequest,
                                      Pagination::DescribeMatchmakingConfigurationsPaginationTraits<GameLiftClient>>;
using DescribeMatchmakingRuleSetsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeMatchmakingRuleSetsRequest,
                                      Pagination::DescribeMatchmakingRuleSetsPaginationTraits<GameLiftClient>>;
using DescribePlayerSessionsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribePlayerSessionsRequest,
                                      Pagination::DescribePlayerSessionsPaginationTraits<GameLiftClient>>;
using DescribeScalingPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::DescribeScalingPoliciesRequest,
                                      Pagination::DescribeScalingPoliciesPaginationTraits<GameLiftClient>>;
using ListAliasesPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<GameLiftClient>>;
using ListBuildsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListBuildsRequest, Pagination::ListBuildsPaginationTraits<GameLiftClient>>;
using ListComputePaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListComputeRequest, Pagination::ListComputePaginationTraits<GameLiftClient>>;
using ListContainerFleetsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListContainerFleetsRequest,
                                                                       Pagination::ListContainerFleetsPaginationTraits<GameLiftClient>>;
using ListContainerGroupDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListContainerGroupDefinitionsRequest,
                                      Pagination::ListContainerGroupDefinitionsPaginationTraits<GameLiftClient>>;
using ListContainerGroupDefinitionVersionsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListContainerGroupDefinitionVersionsRequest,
                                      Pagination::ListContainerGroupDefinitionVersionsPaginationTraits<GameLiftClient>>;
using ListFleetDeploymentsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListFleetDeploymentsRequest,
                                                                        Pagination::ListFleetDeploymentsPaginationTraits<GameLiftClient>>;
using ListFleetsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<GameLiftClient>>;
using ListGameServerGroupsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListGameServerGroupsRequest,
                                                                        Pagination::ListGameServerGroupsPaginationTraits<GameLiftClient>>;
using ListGameServersPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListGameServersRequest,
                                                                   Pagination::ListGameServersPaginationTraits<GameLiftClient>>;
using ListLocationsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListLocationsRequest,
                                                                 Pagination::ListLocationsPaginationTraits<GameLiftClient>>;
using ListScriptsPaginator =
    Aws::Utils::Pagination::Paginator<GameLiftClient, Model::ListScriptsRequest, Pagination::ListScriptsPaginationTraits<GameLiftClient>>;
using SearchGameSessionsPaginator = Aws::Utils::Pagination::Paginator<GameLiftClient, Model::SearchGameSessionsRequest,
                                                                      Pagination::SearchGameSessionsPaginationTraits<GameLiftClient>>;

}  // namespace GameLift
}  // namespace Aws
