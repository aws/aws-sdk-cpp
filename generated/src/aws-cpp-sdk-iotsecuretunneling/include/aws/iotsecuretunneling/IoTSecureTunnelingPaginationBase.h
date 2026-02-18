/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotsecuretunneling/model/ListTunnelsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingClient;

template <typename DerivedClient>
class IoTSecureTunnelingPaginationBase {
 public:
  /**
   * Create a paginator for ListTunnels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTunnelsRequest, Pagination::ListTunnelsPaginationTraits<DerivedClient>>
  ListTunnelsPaginator(const Model::ListTunnelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTunnelsRequest,
                                             Pagination::ListTunnelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace IoTSecureTunneling
}  // namespace Aws
