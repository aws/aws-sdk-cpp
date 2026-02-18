/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingClient.h>
#include <aws/iotsecuretunneling/model/ListTunnelsPaginationTraits.h>

namespace Aws {
namespace IoTSecureTunneling {

using ListTunnelsPaginator = Aws::Utils::Pagination::Paginator<IoTSecureTunnelingClient, Model::ListTunnelsRequest,
                                                               Pagination::ListTunnelsPaginationTraits<IoTSecureTunnelingClient>>;

}  // namespace IoTSecureTunneling
}  // namespace Aws
