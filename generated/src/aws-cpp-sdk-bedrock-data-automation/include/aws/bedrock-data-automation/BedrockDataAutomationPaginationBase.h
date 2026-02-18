/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-data-automation/model/ListBlueprintsPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockDataAutomation {

class BedrockDataAutomationClient;

template <typename DerivedClient>
class BedrockDataAutomationPaginationBase {
 public:
  /**
   * Create a paginator for ListBlueprints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest, Pagination::ListBlueprintsPaginationTraits<DerivedClient>>
  ListBlueprintsPaginator(const Model::ListBlueprintsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest,
                                             Pagination::ListBlueprintsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDataAutomationProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataAutomationProjectsRequest,
                                    Pagination::ListDataAutomationProjectsPaginationTraits<DerivedClient>>
  ListDataAutomationProjectsPaginator(const Model::ListDataAutomationProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataAutomationProjectsRequest,
                                             Pagination::ListDataAutomationProjectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BedrockDataAutomation
}  // namespace Aws
