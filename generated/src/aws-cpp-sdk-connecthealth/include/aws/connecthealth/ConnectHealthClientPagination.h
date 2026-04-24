/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthClient.h>
#include <aws/connecthealth/model/ListDomainsPaginationTraits.h>
#include <aws/connecthealth/model/ListSubscriptionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ConnectHealth {

using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<ConnectHealthClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<ConnectHealthClient>>;
using ListSubscriptionsPaginator = Aws::Utils::Pagination::Paginator<ConnectHealthClient, Model::ListSubscriptionsRequest,
                                                                     Pagination::ListSubscriptionsPaginationTraits<ConnectHealthClient>>;

}  // namespace ConnectHealth
}  // namespace Aws
