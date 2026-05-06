/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/cur/model/DescribeReportDefinitionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace CostandUsageReportService {

template <typename DerivedClient>
class CostandUsageReportServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeReportDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReportDefinitionsRequest,
                                    Pagination::DescribeReportDefinitionsPaginationTraits<DerivedClient>>
  DescribeReportDefinitionsPaginator(const Model::DescribeReportDefinitionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReportDefinitionsRequest,
                                             Pagination::DescribeReportDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CostandUsageReportService
}  // namespace Aws
