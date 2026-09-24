/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/eventbridgev2/model/ListEventBusesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventSourcesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListSubscribersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EventBridgeV2 {

template <typename DerivedClient>
class EventBridgeV2PaginationBase {
 public:
  /**
   * Create a paginator for ListEventBuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBusesRequest, Pagination::ListEventBusesPaginationTraits<DerivedClient>>
  ListEventBusesPaginator(const Model::ListEventBusesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventBusesRequest,
                                             Pagination::ListEventBusesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListEventSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSourcesRequest,
                                    Pagination::ListEventSourcesPaginationTraits<DerivedClient>>
  ListEventSourcesPaginator(const Model::ListEventSourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventSourcesRequest,
                                             Pagination::ListEventSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                    Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>
  ListResourcePoliciesPaginator(const Model::ListResourcePoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcePoliciesRequest,
                                             Pagination::ListResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscribers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribersRequest,
                                    Pagination::ListSubscribersPaginationTraits<DerivedClient>>
  ListSubscribersPaginator(const Model::ListSubscribersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribersRequest,
                                             Pagination::ListSubscribersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace EventBridgeV2
}  // namespace Aws
