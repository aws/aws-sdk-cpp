/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/b2bi/model/ListCapabilitiesPaginationTraits.h>
#include <aws/b2bi/model/ListPartnershipsPaginationTraits.h>
#include <aws/b2bi/model/ListProfilesPaginationTraits.h>
#include <aws/b2bi/model/ListTransformersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace B2BI {

class B2BIClient;

template <typename DerivedClient>
class B2BIPaginationBase {
 public:
  /**
   * Create a paginator for ListCapabilities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapabilitiesRequest,
                                    Pagination::ListCapabilitiesPaginationTraits<DerivedClient>>
  ListCapabilitiesPaginator(const Model::ListCapabilitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapabilitiesRequest,
                                             Pagination::ListCapabilitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPartnerships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnershipsRequest,
                                    Pagination::ListPartnershipsPaginationTraits<DerivedClient>>
  ListPartnershipsPaginator(const Model::ListPartnershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnershipsRequest,
                                             Pagination::ListPartnershipsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<DerivedClient>>
  ListProfilesPaginator(const Model::ListProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest,
                                             Pagination::ListProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTransformers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransformersRequest,
                                    Pagination::ListTransformersPaginationTraits<DerivedClient>>
  ListTransformersPaginator(const Model::ListTransformersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransformersRequest,
                                             Pagination::ListTransformersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace B2BI
}  // namespace Aws
