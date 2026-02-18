/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/emr-containers/model/ListJobRunsPaginationTraits.h>
#include <aws/emr-containers/model/ListJobTemplatesPaginationTraits.h>
#include <aws/emr-containers/model/ListManagedEndpointsPaginationTraits.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/emr-containers/model/ListVirtualClustersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EMRContainers {

class EMRContainersClient;

template <typename DerivedClient>
class EMRContainersPaginationBase {
 public:
  /**
   * Create a paginator for ListJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DerivedClient>>
  ListJobRunsPaginator(const Model::ListJobRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest,
                                             Pagination::ListJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListJobTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                    Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>
  ListJobTemplatesPaginator(const Model::ListJobTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                             Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListManagedEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedEndpointsRequest,
                                    Pagination::ListManagedEndpointsPaginationTraits<DerivedClient>>
  ListManagedEndpointsPaginator(const Model::ListManagedEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedEndpointsRequest,
                                             Pagination::ListManagedEndpointsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListVirtualClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualClustersRequest,
                                    Pagination::ListVirtualClustersPaginationTraits<DerivedClient>>
  ListVirtualClustersPaginator(const Model::ListVirtualClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualClustersRequest,
                                             Pagination::ListVirtualClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EMRContainers
}  // namespace Aws
