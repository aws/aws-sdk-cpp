/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/drs/model/DescribeJobLogItemsPaginationTraits.h>
#include <aws/drs/model/DescribeJobsPaginationTraits.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoveryInstancesPaginationTraits.h>
#include <aws/drs/model/DescribeRecoverySnapshotsPaginationTraits.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesPaginationTraits.h>
#include <aws/drs/model/DescribeSourceNetworksPaginationTraits.h>
#include <aws/drs/model/DescribeSourceServersPaginationTraits.h>
#include <aws/drs/model/ListExtensibleSourceServersPaginationTraits.h>
#include <aws/drs/model/ListLaunchActionsPaginationTraits.h>
#include <aws/drs/model/ListStagingAccountsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace drs {

class DrsClient;

template <typename DerivedClient>
class DrsPaginationBase {
 public:
  /**
   * Create a paginator for DescribeJobLogItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                    Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>
  DescribeJobLogItemsPaginator(const Model::DescribeJobLogItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobLogItemsRequest,
                                             Pagination::DescribeJobLogItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobsRequest, Pagination::DescribeJobsPaginationTraits<DerivedClient>>
  DescribeJobsPaginator(const Model::DescribeJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobsRequest,
                                             Pagination::DescribeJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeLaunchConfigurationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                    Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<DerivedClient>>
  DescribeLaunchConfigurationTemplatesPaginator(const Model::DescribeLaunchConfigurationTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationTemplatesRequest,
                                             Pagination::DescribeLaunchConfigurationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRecoveryInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecoveryInstancesRequest,
                                    Pagination::DescribeRecoveryInstancesPaginationTraits<DerivedClient>>
  DescribeRecoveryInstancesPaginator(const Model::DescribeRecoveryInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecoveryInstancesRequest,
                                             Pagination::DescribeRecoveryInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRecoverySnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecoverySnapshotsRequest,
                                    Pagination::DescribeRecoverySnapshotsPaginationTraits<DerivedClient>>
  DescribeRecoverySnapshotsPaginator(const Model::DescribeRecoverySnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecoverySnapshotsRequest,
                                             Pagination::DescribeRecoverySnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationConfigurationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                    Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<DerivedClient>>
  DescribeReplicationConfigurationTemplatesPaginator(const Model::DescribeReplicationConfigurationTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigurationTemplatesRequest,
                                             Pagination::DescribeReplicationConfigurationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSourceNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceNetworksRequest,
                                    Pagination::DescribeSourceNetworksPaginationTraits<DerivedClient>>
  DescribeSourceNetworksPaginator(const Model::DescribeSourceNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceNetworksRequest,
                                             Pagination::DescribeSourceNetworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSourceServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceServersRequest,
                                    Pagination::DescribeSourceServersPaginationTraits<DerivedClient>>
  DescribeSourceServersPaginator(const Model::DescribeSourceServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSourceServersRequest,
                                             Pagination::DescribeSourceServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExtensibleSourceServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensibleSourceServersRequest,
                                    Pagination::ListExtensibleSourceServersPaginationTraits<DerivedClient>>
  ListExtensibleSourceServersPaginator(const Model::ListExtensibleSourceServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensibleSourceServersRequest,
                                             Pagination::ListExtensibleSourceServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLaunchActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLaunchActionsRequest,
                                    Pagination::ListLaunchActionsPaginationTraits<DerivedClient>>
  ListLaunchActionsPaginator(const Model::ListLaunchActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLaunchActionsRequest,
                                             Pagination::ListLaunchActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStagingAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStagingAccountsRequest,
                                    Pagination::ListStagingAccountsPaginationTraits<DerivedClient>>
  ListStagingAccountsPaginator(const Model::ListStagingAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStagingAccountsRequest,
                                             Pagination::ListStagingAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace drs
}  // namespace Aws
