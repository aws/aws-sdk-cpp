/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace GameLift {

class GameLiftClient;

template <typename DerivedClient>
class GameLiftPaginationBase {
 public:
  /**
   * Create a paginator for DescribeFleetAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAttributesRequest,
                                    Pagination::DescribeFleetAttributesPaginationTraits<DerivedClient>>
  DescribeFleetAttributesPaginator(const Model::DescribeFleetAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAttributesRequest,
                                             Pagination::DescribeFleetAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetCapacity operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetCapacityRequest,
                                    Pagination::DescribeFleetCapacityPaginationTraits<DerivedClient>>
  DescribeFleetCapacityPaginator(const Model::DescribeFleetCapacityRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetCapacityRequest,
                                             Pagination::DescribeFleetCapacityPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetEventsRequest,
                                    Pagination::DescribeFleetEventsPaginationTraits<DerivedClient>>
  DescribeFleetEventsPaginator(const Model::DescribeFleetEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetEventsRequest,
                                             Pagination::DescribeFleetEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetLocationAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetLocationAttributesRequest,
                                    Pagination::DescribeFleetLocationAttributesPaginationTraits<DerivedClient>>
  DescribeFleetLocationAttributesPaginator(const Model::DescribeFleetLocationAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetLocationAttributesRequest,
                                             Pagination::DescribeFleetLocationAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetUtilization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetUtilizationRequest,
                                    Pagination::DescribeFleetUtilizationPaginationTraits<DerivedClient>>
  DescribeFleetUtilizationPaginator(const Model::DescribeFleetUtilizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetUtilizationRequest,
                                             Pagination::DescribeFleetUtilizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGameServerInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameServerInstancesRequest,
                                    Pagination::DescribeGameServerInstancesPaginationTraits<DerivedClient>>
  DescribeGameServerInstancesPaginator(const Model::DescribeGameServerInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameServerInstancesRequest,
                                             Pagination::DescribeGameServerInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGameSessionDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionDetailsRequest,
                                    Pagination::DescribeGameSessionDetailsPaginationTraits<DerivedClient>>
  DescribeGameSessionDetailsPaginator(const Model::DescribeGameSessionDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionDetailsRequest,
                                             Pagination::DescribeGameSessionDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGameSessionQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionQueuesRequest,
                                    Pagination::DescribeGameSessionQueuesPaginationTraits<DerivedClient>>
  DescribeGameSessionQueuesPaginator(const Model::DescribeGameSessionQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionQueuesRequest,
                                             Pagination::DescribeGameSessionQueuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGameSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionsRequest,
                                    Pagination::DescribeGameSessionsPaginationTraits<DerivedClient>>
  DescribeGameSessionsPaginator(const Model::DescribeGameSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGameSessionsRequest,
                                             Pagination::DescribeGameSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancesRequest,
                                    Pagination::DescribeInstancesPaginationTraits<DerivedClient>>
  DescribeInstancesPaginator(const Model::DescribeInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancesRequest,
                                             Pagination::DescribeInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMatchmakingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMatchmakingConfigurationsRequest,
                                    Pagination::DescribeMatchmakingConfigurationsPaginationTraits<DerivedClient>>
  DescribeMatchmakingConfigurationsPaginator(const Model::DescribeMatchmakingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMatchmakingConfigurationsRequest,
                                             Pagination::DescribeMatchmakingConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMatchmakingRuleSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMatchmakingRuleSetsRequest,
                                    Pagination::DescribeMatchmakingRuleSetsPaginationTraits<DerivedClient>>
  DescribeMatchmakingRuleSetsPaginator(const Model::DescribeMatchmakingRuleSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMatchmakingRuleSetsRequest,
                                             Pagination::DescribeMatchmakingRuleSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePlayerSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePlayerSessionsRequest,
                                    Pagination::DescribePlayerSessionsPaginationTraits<DerivedClient>>
  DescribePlayerSessionsPaginator(const Model::DescribePlayerSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePlayerSessionsRequest,
                                             Pagination::DescribePlayerSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScalingPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingPoliciesRequest,
                                    Pagination::DescribeScalingPoliciesPaginationTraits<DerivedClient>>
  DescribeScalingPoliciesPaginator(const Model::DescribeScalingPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingPoliciesRequest,
                                             Pagination::DescribeScalingPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest, Pagination::ListAliasesPaginationTraits<DerivedClient>>
  ListAliasesPaginator(const Model::ListAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAliasesRequest,
                                             Pagination::ListAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListBuilds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsRequest, Pagination::ListBuildsPaginationTraits<DerivedClient>>
  ListBuildsPaginator(const Model::ListBuildsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuildsRequest,
                                             Pagination::ListBuildsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListCompute operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeRequest, Pagination::ListComputePaginationTraits<DerivedClient>>
  ListComputePaginator(const Model::ListComputeRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputeRequest,
                                             Pagination::ListComputePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListContainerFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerFleetsRequest,
                                    Pagination::ListContainerFleetsPaginationTraits<DerivedClient>>
  ListContainerFleetsPaginator(const Model::ListContainerFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerFleetsRequest,
                                             Pagination::ListContainerFleetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContainerGroupDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerGroupDefinitionsRequest,
                                    Pagination::ListContainerGroupDefinitionsPaginationTraits<DerivedClient>>
  ListContainerGroupDefinitionsPaginator(const Model::ListContainerGroupDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerGroupDefinitionsRequest,
                                             Pagination::ListContainerGroupDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContainerGroupDefinitionVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerGroupDefinitionVersionsRequest,
                                    Pagination::ListContainerGroupDefinitionVersionsPaginationTraits<DerivedClient>>
  ListContainerGroupDefinitionVersionsPaginator(const Model::ListContainerGroupDefinitionVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerGroupDefinitionVersionsRequest,
                                             Pagination::ListContainerGroupDefinitionVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleetDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetDeploymentsRequest,
                                    Pagination::ListFleetDeploymentsPaginationTraits<DerivedClient>>
  ListFleetDeploymentsPaginator(const Model::ListFleetDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetDeploymentsRequest,
                                             Pagination::ListFleetDeploymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<DerivedClient>>
  ListFleetsPaginator(const Model::ListFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest,
                                             Pagination::ListFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListGameServerGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGameServerGroupsRequest,
                                    Pagination::ListGameServerGroupsPaginationTraits<DerivedClient>>
  ListGameServerGroupsPaginator(const Model::ListGameServerGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGameServerGroupsRequest,
                                             Pagination::ListGameServerGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGameServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGameServersRequest,
                                    Pagination::ListGameServersPaginationTraits<DerivedClient>>
  ListGameServersPaginator(const Model::ListGameServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGameServersRequest,
                                             Pagination::ListGameServersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLocationsRequest, Pagination::ListLocationsPaginationTraits<DerivedClient>>
  ListLocationsPaginator(const Model::ListLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLocationsRequest,
                                             Pagination::ListLocationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListScripts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScriptsRequest, Pagination::ListScriptsPaginationTraits<DerivedClient>>
  ListScriptsPaginator(const Model::ListScriptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScriptsRequest,
                                             Pagination::ListScriptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchGameSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGameSessionsRequest,
                                    Pagination::SearchGameSessionsPaginationTraits<DerivedClient>>
  SearchGameSessionsPaginator(const Model::SearchGameSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGameSessionsRequest,
                                             Pagination::SearchGameSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace GameLift
}  // namespace Aws
