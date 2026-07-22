/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/AccessAnalyzerEndpointProvider.h>
#include <aws/accessanalyzer/internal/AccessAnalyzerEndpointRules.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Endpoint {
AccessAnalyzerEndpointProvider::AccessAnalyzerEndpointProvider()
    : AccessAnalyzerDefaultEpProviderBase(Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::GetRulesBlob(),
                                          Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AccessAnalyzer
}  // namespace Aws
