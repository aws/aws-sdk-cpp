/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/agent-registry-control/model/ListPublisherAssociationsPaginationTraits.h>
#include <aws/agent-registry-control/model/ListPublishersPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistriesPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AgentRegistryControl {

template <typename DerivedClient>
class AgentRegistryControlPaginationBase {
 public:
  /**
   * Create a paginator for ListPublisherAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublisherAssociationsRequest,
                                    Pagination::ListPublisherAssociationsPaginationTraits<DerivedClient>>
  ListPublisherAssociationsPaginator(const Model::ListPublisherAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublisherAssociationsRequest,
                                             Pagination::ListPublisherAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPublishers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishersRequest, Pagination::ListPublishersPaginationTraits<DerivedClient>>
  ListPublishersPaginator(const Model::ListPublishersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishersRequest,
                                             Pagination::ListPublishersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListRegistries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest, Pagination::ListRegistriesPaginationTraits<DerivedClient>>
  ListRegistriesPaginator(const Model::ListRegistriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest,
                                             Pagination::ListRegistriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListRegistryRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistryRecordsRequest,
                                    Pagination::ListRegistryRecordsPaginationTraits<DerivedClient>>
  ListRegistryRecordsPaginator(const Model::ListRegistryRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistryRecordsRequest,
                                             Pagination::ListRegistryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AgentRegistryControl
}  // namespace Aws
