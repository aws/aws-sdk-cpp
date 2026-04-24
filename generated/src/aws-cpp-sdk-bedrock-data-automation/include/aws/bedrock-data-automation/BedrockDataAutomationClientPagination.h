/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationClient.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryEntitiesPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryIngestionJobsPaginationTraits.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockDataAutomation {

using ListBlueprintsPaginator = Aws::Utils::Pagination::Paginator<BedrockDataAutomationClient, Model::ListBlueprintsRequest,
                                                                  Pagination::ListBlueprintsPaginationTraits<BedrockDataAutomationClient>>;
using ListDataAutomationLibrariesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockDataAutomationClient, Model::ListDataAutomationLibrariesRequest,
                                      Pagination::ListDataAutomationLibrariesPaginationTraits<BedrockDataAutomationClient>>;
using ListDataAutomationLibraryEntitiesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockDataAutomationClient, Model::ListDataAutomationLibraryEntitiesRequest,
                                      Pagination::ListDataAutomationLibraryEntitiesPaginationTraits<BedrockDataAutomationClient>>;
using ListDataAutomationLibraryIngestionJobsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockDataAutomationClient, Model::ListDataAutomationLibraryIngestionJobsRequest,
                                      Pagination::ListDataAutomationLibraryIngestionJobsPaginationTraits<BedrockDataAutomationClient>>;
using ListDataAutomationProjectsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockDataAutomationClient, Model::ListDataAutomationProjectsRequest,
                                      Pagination::ListDataAutomationProjectsPaginationTraits<BedrockDataAutomationClient>>;

}  // namespace BedrockDataAutomation
}  // namespace Aws
