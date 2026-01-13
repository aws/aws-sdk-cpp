/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListClustersPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstancesPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStepsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudiosPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EMR {

class EMRClient;

template <typename DerivedClient>
class EMRPaginationBase {
 public:
  /**
   * Create a paginator for ListBootstrapActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBootstrapActionsRequest,
                                    Pagination::ListBootstrapActionsPaginationTraits<DerivedClient>>
  ListBootstrapActionsPaginator(const Model::ListBootstrapActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBootstrapActionsRequest,
                                             Pagination::ListBootstrapActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListInstanceFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceFleetsRequest,
                                    Pagination::ListInstanceFleetsPaginationTraits<DerivedClient>>
  ListInstanceFleetsPaginator(const Model::ListInstanceFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceFleetsRequest,
                                             Pagination::ListInstanceFleetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceGroupsRequest,
                                    Pagination::ListInstanceGroupsPaginationTraits<DerivedClient>>
  ListInstanceGroupsPaginator(const Model::ListInstanceGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceGroupsRequest,
                                             Pagination::ListInstanceGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<DerivedClient>>
  ListInstancesPaginator(const Model::ListInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest,
                                             Pagination::ListInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListNotebookExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookExecutionsRequest,
                                    Pagination::ListNotebookExecutionsPaginationTraits<DerivedClient>>
  ListNotebookExecutionsPaginator(const Model::ListNotebookExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotebookExecutionsRequest,
                                             Pagination::ListNotebookExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReleaseLabels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReleaseLabelsRequest,
                                    Pagination::ListReleaseLabelsPaginationTraits<DerivedClient>>
  ListReleaseLabelsPaginator(const Model::ListReleaseLabelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReleaseLabelsRequest,
                                             Pagination::ListReleaseLabelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityConfigurationsRequest,
                                    Pagination::ListSecurityConfigurationsPaginationTraits<DerivedClient>>
  ListSecurityConfigurationsPaginator(const Model::ListSecurityConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityConfigurationsRequest,
                                             Pagination::ListSecurityConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<DerivedClient>>
  ListStepsPaginator(const Model::ListStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStudios operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudiosRequest, Pagination::ListStudiosPaginationTraits<DerivedClient>>
  ListStudiosPaginator(const Model::ListStudiosRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudiosRequest,
                                             Pagination::ListStudiosPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListStudioSessionMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudioSessionMappingsRequest,
                                    Pagination::ListStudioSessionMappingsPaginationTraits<DerivedClient>>
  ListStudioSessionMappingsPaginator(const Model::ListStudioSessionMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStudioSessionMappingsRequest,
                                             Pagination::ListStudioSessionMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSupportedInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportedInstanceTypesRequest,
                                    Pagination::ListSupportedInstanceTypesPaginationTraits<DerivedClient>>
  ListSupportedInstanceTypesPaginator(const Model::ListSupportedInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportedInstanceTypesRequest,
                                             Pagination::ListSupportedInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EMR
}  // namespace Aws
