/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <aws/codeguruprofiler/internal/CodeGuruProfilerEndpointRules.h>

namespace Aws {
namespace CodeGuruProfiler {
namespace Endpoint {
CodeGuruProfilerEndpointProvider::CodeGuruProfilerEndpointProvider()
    : CodeGuruProfilerDefaultEpProviderBase(Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeGuruProfiler
}  // namespace Aws
