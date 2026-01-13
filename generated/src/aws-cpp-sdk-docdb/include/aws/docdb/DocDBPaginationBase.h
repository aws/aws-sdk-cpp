/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/docdb/model/DescribeCertificatesPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterParametersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeDBEngineVersionsPaginationTraits.h>
#include <aws/docdb/model/DescribeDBInstancesPaginationTraits.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/docdb/model/DescribeEventsPaginationTraits.h>
#include <aws/docdb/model/DescribeGlobalClustersPaginationTraits.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsPaginationTraits.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DocDB {

class DocDBClient;

template <typename DerivedClient>
class DocDBPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                    Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>
  DescribeCertificatesPaginator(const Model::DescribeCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                             Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterParameterGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParameterGroupsRequest,
                                    Pagination::DescribeDBClusterParameterGroupsPaginationTraits<DerivedClient>>
  DescribeDBClusterParameterGroupsPaginator(const Model::DescribeDBClusterParameterGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParameterGroupsRequest,
                                             Pagination::DescribeDBClusterParameterGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParametersRequest,
                                    Pagination::DescribeDBClusterParametersPaginationTraits<DerivedClient>>
  DescribeDBClusterParametersPaginator(const Model::DescribeDBClusterParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterParametersRequest,
                                             Pagination::DescribeDBClusterParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClustersRequest,
                                    Pagination::DescribeDBClustersPaginationTraits<DerivedClient>>
  DescribeDBClustersPaginator(const Model::DescribeDBClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClustersRequest,
                                             Pagination::DescribeDBClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBClusterSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterSnapshotsRequest,
                                    Pagination::DescribeDBClusterSnapshotsPaginationTraits<DerivedClient>>
  DescribeDBClusterSnapshotsPaginator(const Model::DescribeDBClusterSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBClusterSnapshotsRequest,
                                             Pagination::DescribeDBClusterSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBEngineVersionsRequest,
                                    Pagination::DescribeDBEngineVersionsPaginationTraits<DerivedClient>>
  DescribeDBEngineVersionsPaginator(const Model::DescribeDBEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBEngineVersionsRequest,
                                             Pagination::DescribeDBEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstancesRequest,
                                    Pagination::DescribeDBInstancesPaginationTraits<DerivedClient>>
  DescribeDBInstancesPaginator(const Model::DescribeDBInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBInstancesRequest,
                                             Pagination::DescribeDBInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDBSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSubnetGroupsRequest,
                                    Pagination::DescribeDBSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeDBSubnetGroupsPaginator(const Model::DescribeDBSubnetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDBSubnetGroupsRequest,
                                             Pagination::DescribeDBSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeEventSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                    Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>
  DescribeEventSubscriptionsPaginator(const Model::DescribeEventSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                             Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGlobalClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalClustersRequest,
                                    Pagination::DescribeGlobalClustersPaginationTraits<DerivedClient>>
  DescribeGlobalClustersPaginator(const Model::DescribeGlobalClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalClustersRequest,
                                             Pagination::DescribeGlobalClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrderableDBInstanceOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                    Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<DerivedClient>>
  DescribeOrderableDBInstanceOptionsPaginator(const Model::DescribeOrderableDBInstanceOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableDBInstanceOptionsRequest,
                                             Pagination::DescribeOrderableDBInstanceOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePendingMaintenanceActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                    Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>
  DescribePendingMaintenanceActionsPaginator(const Model::DescribePendingMaintenanceActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                             Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DocDB
}  // namespace Aws
