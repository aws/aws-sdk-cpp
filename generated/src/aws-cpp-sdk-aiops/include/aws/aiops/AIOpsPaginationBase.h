/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/aiops/model/ListInvestigationGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AIOps {

class AIOpsClient;

template <typename DerivedClient>
class AIOpsPaginationBase {
 public:
  /**
   * Create a paginator for ListInvestigationGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvestigationGroupsRequest,
                                    Pagination::ListInvestigationGroupsPaginationTraits<DerivedClient>>
  ListInvestigationGroupsPaginator(const Model::ListInvestigationGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvestigationGroupsRequest,
                                             Pagination::ListInvestigationGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AIOps
}  // namespace Aws
