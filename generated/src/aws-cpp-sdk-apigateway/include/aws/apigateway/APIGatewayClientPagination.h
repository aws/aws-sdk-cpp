/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayClient.h>
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

namespace Aws {
namespace APIGateway {

using GetApiKeysPaginator =
    Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetApiKeysRequest, Pagination::GetApiKeysPaginationTraits<APIGatewayClient>>;
using GetBasePathMappingsPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetBasePathMappingsRequest,
                                                                       Pagination::GetBasePathMappingsPaginationTraits<APIGatewayClient>>;
using GetClientCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetClientCertificatesRequest,
                                      Pagination::GetClientCertificatesPaginationTraits<APIGatewayClient>>;
using GetDeploymentsPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetDeploymentsRequest,
                                                                  Pagination::GetDeploymentsPaginationTraits<APIGatewayClient>>;
using GetDomainNamesPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetDomainNamesRequest,
                                                                  Pagination::GetDomainNamesPaginationTraits<APIGatewayClient>>;
using GetModelsPaginator =
    Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetModelsRequest, Pagination::GetModelsPaginationTraits<APIGatewayClient>>;
using GetResourcesPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetResourcesRequest,
                                                                Pagination::GetResourcesPaginationTraits<APIGatewayClient>>;
using GetRestApisPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetRestApisRequest,
                                                               Pagination::GetRestApisPaginationTraits<APIGatewayClient>>;
using GetUsagePaginator =
    Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetUsageRequest, Pagination::GetUsagePaginationTraits<APIGatewayClient>>;
using GetUsagePlanKeysPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetUsagePlanKeysRequest,
                                                                    Pagination::GetUsagePlanKeysPaginationTraits<APIGatewayClient>>;
using GetUsagePlansPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetUsagePlansRequest,
                                                                 Pagination::GetUsagePlansPaginationTraits<APIGatewayClient>>;
using GetVpcLinksPaginator = Aws::Utils::Pagination::Paginator<APIGatewayClient, Model::GetVpcLinksRequest,
                                                               Pagination::GetVpcLinksPaginationTraits<APIGatewayClient>>;

}  // namespace APIGateway
}  // namespace Aws
