/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/CostandUsageReportServiceEndpointProvider.h>
#include <aws/cur/internal/CostandUsageReportServiceEndpointRules.h>

namespace Aws {
namespace CostandUsageReportService {
namespace Endpoint {
CostandUsageReportServiceEndpointProvider::CostandUsageReportServiceEndpointProvider()
    : CostandUsageReportServiceDefaultEpProviderBase(
          Aws::CostandUsageReportService::CostandUsageReportServiceEndpointRules::GetRulesBlob(),
          Aws::CostandUsageReportService::CostandUsageReportServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CostandUsageReportService
}  // namespace Aws
