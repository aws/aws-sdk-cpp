/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/cur/CostandUsageReportServiceClient.h>
#include <aws/cur/model/DescribeReportDefinitionsPaginationTraits.h>

namespace Aws {
namespace CostandUsageReportService {

using DescribeReportDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<CostandUsageReportServiceClient, Model::DescribeReportDefinitionsRequest,
                                      Pagination::DescribeReportDefinitionsPaginationTraits<CostandUsageReportServiceClient>>;

}  // namespace CostandUsageReportService
}  // namespace Aws
