/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/apprunner/model/DescribeCustomDomainsPaginationTraits.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListConnectionsPaginationTraits.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsPaginationTraits.h>
#include <aws/apprunner/model/ListOperationsPaginationTraits.h>
#include <aws/apprunner/model/ListServicesForAutoScalingConfigurationPaginationTraits.h>
#include <aws/apprunner/model/ListServicesPaginationTraits.h>
#include <aws/apprunner/model/ListVpcConnectorsPaginationTraits.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppRunner {

template <typename DerivedClient>
class AppRunnerPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCustomDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomDomainsRequest,
                                    Pagination::DescribeCustomDomainsPaginationTraits<DerivedClient>>
  DescribeCustomDomainsPaginator(const Model::DescribeCustomDomainsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCustomDomainsRequest,
                                             Pagination::DescribeCustomDomainsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutoScalingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoScalingConfigurationsRequest,
                                    Pagination::ListAutoScalingConfigurationsPaginationTraits<DerivedClient>>
  ListAutoScalingConfigurationsPaginator(const Model::ListAutoScalingConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutoScalingConfigurationsRequest,
                                             Pagination::ListAutoScalingConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                    Pagination::ListConnectionsPaginationTraits<DerivedClient>>
  ListConnectionsPaginator(const Model::ListConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                             Pagination::ListConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListObservabilityConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObservabilityConfigurationsRequest,
                                    Pagination::ListObservabilityConfigurationsPaginationTraits<DerivedClient>>
  ListObservabilityConfigurationsPaginator(const Model::ListObservabilityConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObservabilityConfigurationsRequest,
                                             Pagination::ListObservabilityConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest, Pagination::ListOperationsPaginationTraits<DerivedClient>>
  ListOperationsPaginator(const Model::ListOperationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest,
                                             Pagination::ListOperationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListServicesForAutoScalingConfiguration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesForAutoScalingConfigurationRequest,
                                    Pagination::ListServicesForAutoScalingConfigurationPaginationTraits<DerivedClient>>
  ListServicesForAutoScalingConfigurationPaginator(const Model::ListServicesForAutoScalingConfigurationRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesForAutoScalingConfigurationRequest,
                                             Pagination::ListServicesForAutoScalingConfigurationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVpcConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcConnectorsRequest,
                                    Pagination::ListVpcConnectorsPaginationTraits<DerivedClient>>
  ListVpcConnectorsPaginator(const Model::ListVpcConnectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcConnectorsRequest,
                                             Pagination::ListVpcConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVpcIngressConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcIngressConnectionsRequest,
                                    Pagination::ListVpcIngressConnectionsPaginationTraits<DerivedClient>>
  ListVpcIngressConnectionsPaginator(const Model::ListVpcIngressConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcIngressConnectionsRequest,
                                             Pagination::ListVpcIngressConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppRunner
}  // namespace Aws
