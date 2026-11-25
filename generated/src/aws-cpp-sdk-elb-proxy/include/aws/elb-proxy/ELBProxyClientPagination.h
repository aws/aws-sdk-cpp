/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elb-proxy/ELBProxyClient.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxiesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyUpdatesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyVersionsPaginationTraits.h>

namespace Aws {
namespace ELBProxy {

using ListCertificateAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<ELBProxyClient, Model::ListCertificateAssociationsRequest,
                                      Pagination::ListCertificateAssociationsPaginationTraits<ELBProxyClient>>;
using ListProxiesPaginator =
    Aws::Utils::Pagination::Paginator<ELBProxyClient, Model::ListProxiesRequest, Pagination::ListProxiesPaginationTraits<ELBProxyClient>>;
using ListProxyUpdatesPaginator = Aws::Utils::Pagination::Paginator<ELBProxyClient, Model::ListProxyUpdatesRequest,
                                                                    Pagination::ListProxyUpdatesPaginationTraits<ELBProxyClient>>;
using ListProxyVersionsPaginator = Aws::Utils::Pagination::Paginator<ELBProxyClient, Model::ListProxyVersionsRequest,
                                                                     Pagination::ListProxyVersionsPaginationTraits<ELBProxyClient>>;

}  // namespace ELBProxy
}  // namespace Aws
