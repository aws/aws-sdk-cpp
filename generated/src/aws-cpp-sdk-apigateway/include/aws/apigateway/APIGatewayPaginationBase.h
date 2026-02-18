/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/apigateway/model/GetApiKeysPaginationTraits.h>
#include <aws/apigateway/model/GetBasePathMappingsPaginationTraits.h>
#include <aws/apigateway/model/GetClientCertificatesPaginationTraits.h>
#include <aws/apigateway/model/GetDeploymentsPaginationTraits.h>
#include <aws/apigateway/model/GetDomainNamesPaginationTraits.h>
#include <aws/apigateway/model/GetModelsPaginationTraits.h>
#include <aws/apigateway/model/GetResourcesPaginationTraits.h>
#include <aws/apigateway/model/GetRestApisPaginationTraits.h>
#include <aws/apigateway/model/GetUsagePaginationTraits.h>
#include <aws/apigateway/model/GetUsagePlanKeysPaginationTraits.h>
#include <aws/apigateway/model/GetUsagePlansPaginationTraits.h>
#include <aws/apigateway/model/GetVpcLinksPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace APIGateway {

class APIGatewayClient;

template <typename DerivedClient>
class APIGatewayPaginationBase {
 public:
  /**
   * Create a paginator for GetApiKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetApiKeysRequest, Pagination::GetApiKeysPaginationTraits<DerivedClient>>
  GetApiKeysPaginator(const Model::GetApiKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetApiKeysRequest,
                                             Pagination::GetApiKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for GetBasePathMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBasePathMappingsRequest,
                                    Pagination::GetBasePathMappingsPaginationTraits<DerivedClient>>
  GetBasePathMappingsPaginator(const Model::GetBasePathMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBasePathMappingsRequest,
                                             Pagination::GetBasePathMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetClientCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClientCertificatesRequest,
                                    Pagination::GetClientCertificatesPaginationTraits<DerivedClient>>
  GetClientCertificatesPaginator(const Model::GetClientCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClientCertificatesRequest,
                                             Pagination::GetClientCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDeploymentsRequest, Pagination::GetDeploymentsPaginationTraits<DerivedClient>>
  GetDeploymentsPaginator(const Model::GetDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDeploymentsRequest,
                                             Pagination::GetDeploymentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetDomainNames operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDomainNamesRequest, Pagination::GetDomainNamesPaginationTraits<DerivedClient>>
  GetDomainNamesPaginator(const Model::GetDomainNamesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDomainNamesRequest,
                                             Pagination::GetDomainNamesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetModelsRequest, Pagination::GetModelsPaginationTraits<DerivedClient>>
  GetModelsPaginator(const Model::GetModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetModelsRequest, Pagination::GetModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesRequest, Pagination::GetResourcesPaginationTraits<DerivedClient>>
  GetResourcesPaginator(const Model::GetResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesRequest,
                                             Pagination::GetResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetRestApis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRestApisRequest, Pagination::GetRestApisPaginationTraits<DerivedClient>>
  GetRestApisPaginator(const Model::GetRestApisRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRestApisRequest,
                                             Pagination::GetRestApisPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetUsage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsageRequest, Pagination::GetUsagePaginationTraits<DerivedClient>>
  GetUsagePaginator(const Model::GetUsageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsageRequest, Pagination::GetUsagePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetUsagePlanKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsagePlanKeysRequest,
                                    Pagination::GetUsagePlanKeysPaginationTraits<DerivedClient>>
  GetUsagePlanKeysPaginator(const Model::GetUsagePlanKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsagePlanKeysRequest,
                                             Pagination::GetUsagePlanKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetUsagePlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsagePlansRequest, Pagination::GetUsagePlansPaginationTraits<DerivedClient>>
  GetUsagePlansPaginator(const Model::GetUsagePlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsagePlansRequest,
                                             Pagination::GetUsagePlansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetVpcLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVpcLinksRequest, Pagination::GetVpcLinksPaginationTraits<DerivedClient>>
  GetVpcLinksPaginator(const Model::GetVpcLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVpcLinksRequest,
                                             Pagination::GetVpcLinksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace APIGateway
}  // namespace Aws
