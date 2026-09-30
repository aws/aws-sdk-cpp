/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/eventbridgev2/EventBridgeV2Client.h>
#include <aws/eventbridgev2/model/ListEventBusesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventSourcesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListSubscribersPaginationTraits.h>

namespace Aws {
namespace EventBridgeV2 {

using ListEventBusesPaginator = Aws::Utils::Pagination::Paginator<EventBridgeV2Client, Model::ListEventBusesRequest,
                                                                  Pagination::ListEventBusesPaginationTraits<EventBridgeV2Client>>;
using ListEventSourcesPaginator = Aws::Utils::Pagination::Paginator<EventBridgeV2Client, Model::ListEventSourcesRequest,
                                                                    Pagination::ListEventSourcesPaginationTraits<EventBridgeV2Client>>;
using ListResourcePoliciesPaginator =
    Aws::Utils::Pagination::Paginator<EventBridgeV2Client, Model::ListResourcePoliciesRequest,
                                      Pagination::ListResourcePoliciesPaginationTraits<EventBridgeV2Client>>;
using ListSubscribersPaginator = Aws::Utils::Pagination::Paginator<EventBridgeV2Client, Model::ListSubscribersRequest,
                                                                   Pagination::ListSubscribersPaginationTraits<EventBridgeV2Client>>;

}  // namespace EventBridgeV2
}  // namespace Aws
