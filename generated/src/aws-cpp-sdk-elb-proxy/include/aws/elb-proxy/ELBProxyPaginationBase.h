/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxiesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyUpdatesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyVersionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ELBProxy {

template <typename DerivedClient>
class ELBProxyPaginationBase {
 public:
  /**
   * Create a paginator for ListCertificateAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAssociationsRequest,
                                    Pagination::ListCertificateAssociationsPaginationTraits<DerivedClient>>
  ListCertificateAssociationsPaginator(const Model::ListCertificateAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAssociationsRequest,
                                             Pagination::ListCertificateAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProxies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxiesRequest, Pagination::ListProxiesPaginationTraits<DerivedClient>>
  ListProxiesPaginator(const Model::ListProxiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxiesRequest,
                                             Pagination::ListProxiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListProxyUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyUpdatesRequest,
                                    Pagination::ListProxyUpdatesPaginationTraits<DerivedClient>>
  ListProxyUpdatesPaginator(const Model::ListProxyUpdatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyUpdatesRequest,
                                             Pagination::ListProxyUpdatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProxyVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyVersionsRequest,
                                    Pagination::ListProxyVersionsPaginationTraits<DerivedClient>>
  ListProxyVersionsPaginator(const Model::ListProxyVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProxyVersionsRequest,
                                             Pagination::ListProxyVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ELBProxy
}  // namespace Aws
