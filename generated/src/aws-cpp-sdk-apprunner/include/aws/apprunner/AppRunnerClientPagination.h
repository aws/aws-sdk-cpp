/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerClient.h>
#include <aws/apprunner/model/DescribeCustomDomainsPaginationTraits.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListConnectionsPaginationTraits.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListOperationsPaginationTraits.h>
#include <aws/apprunner/model/ListServicesForAutoScalingConfigurationPaginationTraits.h>
#include <aws/apprunner/model/ListServicesPaginationTraits.h>
#include <aws/apprunner/model/ListVpcConnectorsPaginationTraits.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppRunner {

using DescribeCustomDomainsPaginator =
    Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::DescribeCustomDomainsRequest,
                                      Pagination::DescribeCustomDomainsPaginationTraits<AppRunnerClient>>;
using ListAutoScalingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListAutoScalingConfigurationsRequest,
                                      Pagination::ListAutoScalingConfigurationsPaginationTraits<AppRunnerClient>>;
using ListConnectionsPaginator = Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListConnectionsRequest,
                                                                   Pagination::ListConnectionsPaginationTraits<AppRunnerClient>>;
using ListObservabilityConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListObservabilityConfigurationsRequest,
                                      Pagination::ListObservabilityConfigurationsPaginationTraits<AppRunnerClient>>;
using ListOperationsPaginator = Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListOperationsRequest,
                                                                  Pagination::ListOperationsPaginationTraits<AppRunnerClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<AppRunnerClient>>;
using ListServicesForAutoScalingConfigurationPaginator =
    Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListServicesForAutoScalingConfigurationRequest,
                                      Pagination::ListServicesForAutoScalingConfigurationPaginationTraits<AppRunnerClient>>;
using ListVpcConnectorsPaginator = Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListVpcConnectorsRequest,
                                                                     Pagination::ListVpcConnectorsPaginationTraits<AppRunnerClient>>;
using ListVpcIngressConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<AppRunnerClient, Model::ListVpcIngressConnectionsRequest,
                                      Pagination::ListVpcIngressConnectionsPaginationTraits<AppRunnerClient>>;

}  // namespace AppRunner
}  // namespace Aws
