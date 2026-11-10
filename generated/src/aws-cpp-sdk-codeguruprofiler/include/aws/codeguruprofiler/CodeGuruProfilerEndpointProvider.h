/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerClientConfiguration.h>
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CodeGuruProfiler {
namespace Endpoint {
using CodeGuruProfilerClientConfiguration = Aws::CodeGuruProfiler::CodeGuruProfilerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CodeGuruProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CODEGURUPROFILER_API CodeGuruProfilerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CodeGuruProfilerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CodeGuruProfilerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CodeGuruProfilerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CodeGuruProfilerClientConfiguration& config);
};

/**
 * The type for the CodeGuruProfiler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruProfilerEndpointProviderBase =
    EndpointProviderBase<CodeGuruProfilerClientConfiguration, CodeGuruProfilerBuiltInParameters, CodeGuruProfilerClientContextParameters>;

using CodeGuruProfilerDefaultEpProviderBase =
    BDDEndpointProvider<CodeGuruProfilerClientConfiguration, CodeGuruProfilerBuiltInParameters, CodeGuruProfilerClientContextParameters>;

}  // namespace Endpoint
}  // namespace CodeGuruProfiler

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CODEGURUPROFILER_EXTERN template class AWS_CODEGURUPROFILER_API Aws::Endpoint::EndpointProviderBase<
    CodeGuruProfiler::Endpoint::CodeGuruProfilerClientConfiguration, CodeGuruProfiler::Endpoint::CodeGuruProfilerBuiltInParameters,
    CodeGuruProfiler::Endpoint::CodeGuruProfilerClientContextParameters>;

AWS_CODEGURUPROFILER_EXTERN template class AWS_CODEGURUPROFILER_API Aws::Endpoint::BDDEndpointProvider<
    CodeGuruProfiler::Endpoint::CodeGuruProfilerClientConfiguration, CodeGuruProfiler::Endpoint::CodeGuruProfilerBuiltInParameters,
    CodeGuruProfiler::Endpoint::CodeGuruProfilerClientContextParameters>;
}  // namespace Endpoint

namespace CodeGuruProfiler {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUPROFILER_API CodeGuruProfilerEndpointProvider : public CodeGuruProfilerDefaultEpProviderBase {
 public:
  using CodeGuruProfilerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CodeGuruProfilerEndpointProvider();

  ~CodeGuruProfilerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CodeGuruProfiler
}  // namespace Aws
