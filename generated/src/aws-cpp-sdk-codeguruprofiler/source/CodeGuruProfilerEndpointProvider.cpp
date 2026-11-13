/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <aws/codeguruprofiler/internal/CodeGuruProfilerEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEGURUPROFILER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeGuruProfiler::Endpoint::CodeGuruProfilerClientConfiguration,
                                                   CodeGuruProfiler::Endpoint::CodeGuruProfilerBuiltInParameters,
                                                   CodeGuruProfiler::Endpoint::CodeGuruProfilerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeGuruProfiler::Endpoint::CodeGuruProfilerClientConfiguration,
                                                  CodeGuruProfiler::Endpoint::CodeGuruProfilerBuiltInParameters,
                                                  CodeGuruProfiler::Endpoint::CodeGuruProfilerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeGuruProfiler {
namespace Endpoint {
CodeGuruProfilerEndpointProvider::CodeGuruProfilerEndpointProvider()
    : CodeGuruProfilerDefaultEpProviderBase(Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::RulesBlobSize) {}

void CodeGuruProfilerBuiltInParameters::SetFromClientConfiguration(const CodeGuruProfilerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeGuruProfilerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeGuruProfilerBuiltInParameters::SetFromClientConfiguration(const CodeGuruProfilerClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeGuruProfilerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeGuruProfilerBuiltInParameters::SetServiceSpecificParameters(const CodeGuruProfilerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeGuruProfiler
}  // namespace Aws
