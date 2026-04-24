/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/backup-gateway/model/ListGatewaysPaginationTraits.h>
#include <aws/backup-gateway/model/ListHypervisorsPaginationTraits.h>
#include <aws/backup-gateway/model/ListVirtualMachinesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BackupGateway {

class BackupGatewayClient;

template <typename DerivedClient>
class BackupGatewayPaginationBase {
 public:
  /**
   * Create a paginator for ListGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest, Pagination::ListGatewaysPaginationTraits<DerivedClient>>
  ListGatewaysPaginator(const Model::ListGatewaysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest,
                                             Pagination::ListGatewaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListHypervisors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHypervisorsRequest,
                                    Pagination::ListHypervisorsPaginationTraits<DerivedClient>>
  ListHypervisorsPaginator(const Model::ListHypervisorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHypervisorsRequest,
                                             Pagination::ListHypervisorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListVirtualMachines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualMachinesRequest,
                                    Pagination::ListVirtualMachinesPaginationTraits<DerivedClient>>
  ListVirtualMachinesPaginator(const Model::ListVirtualMachinesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualMachinesRequest,
                                             Pagination::ListVirtualMachinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BackupGateway
}  // namespace Aws
