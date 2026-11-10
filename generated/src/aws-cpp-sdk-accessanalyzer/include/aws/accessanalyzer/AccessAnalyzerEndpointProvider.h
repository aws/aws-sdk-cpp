/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerClientConfiguration.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Endpoint {
using AccessAnalyzerClientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AccessAnalyzerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ACCESSANALYZER_API AccessAnalyzerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AccessAnalyzerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AccessAnalyzerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AccessAnalyzerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AccessAnalyzerClientConfiguration& config);
};

/**
 * The type for the AccessAnalyzer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccessAnalyzerEndpointProviderBase =
    EndpointProviderBase<AccessAnalyzerClientConfiguration, AccessAnalyzerBuiltInParameters, AccessAnalyzerClientContextParameters>;

using AccessAnalyzerDefaultEpProviderBase =
    BDDEndpointProvider<AccessAnalyzerClientConfiguration, AccessAnalyzerBuiltInParameters, AccessAnalyzerClientContextParameters>;

}  // namespace Endpoint
}  // namespace AccessAnalyzer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ACCESSANALYZER_EXTERN template class AWS_ACCESSANALYZER_API Aws::Endpoint::EndpointProviderBase<
    AccessAnalyzer::Endpoint::AccessAnalyzerClientConfiguration, AccessAnalyzer::Endpoint::AccessAnalyzerBuiltInParameters,
    AccessAnalyzer::Endpoint::AccessAnalyzerClientContextParameters>;

AWS_ACCESSANALYZER_EXTERN template class AWS_ACCESSANALYZER_API Aws::Endpoint::BDDEndpointProvider<
    AccessAnalyzer::Endpoint::AccessAnalyzerClientConfiguration, AccessAnalyzer::Endpoint::AccessAnalyzerBuiltInParameters,
    AccessAnalyzer::Endpoint::AccessAnalyzerClientContextParameters>;
}  // namespace Endpoint

namespace AccessAnalyzer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ACCESSANALYZER_API AccessAnalyzerEndpointProvider : public AccessAnalyzerDefaultEpProviderBase {
 public:
  using AccessAnalyzerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AccessAnalyzerEndpointProvider();

  ~AccessAnalyzerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AccessAnalyzer
}  // namespace Aws
