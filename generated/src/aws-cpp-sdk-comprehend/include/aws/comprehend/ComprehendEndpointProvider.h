/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendClientConfiguration.h>
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Comprehend {
namespace Endpoint {
using ComprehendClientConfiguration = Aws::Comprehend::ComprehendClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ComprehendClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COMPREHEND_API ComprehendBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ComprehendBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ComprehendClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ComprehendClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ComprehendClientConfiguration& config);
};

/**
 * The type for the Comprehend Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComprehendEndpointProviderBase =
    EndpointProviderBase<ComprehendClientConfiguration, ComprehendBuiltInParameters, ComprehendClientContextParameters>;

using ComprehendDefaultEpProviderBase =
    BDDEndpointProvider<ComprehendClientConfiguration, ComprehendBuiltInParameters, ComprehendClientContextParameters>;

}  // namespace Endpoint
}  // namespace Comprehend

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COMPREHEND_EXTERN template class AWS_COMPREHEND_API Aws::Endpoint::EndpointProviderBase<
    Comprehend::Endpoint::ComprehendClientConfiguration, Comprehend::Endpoint::ComprehendBuiltInParameters,
    Comprehend::Endpoint::ComprehendClientContextParameters>;

AWS_COMPREHEND_EXTERN template class AWS_COMPREHEND_API Aws::Endpoint::BDDEndpointProvider<
    Comprehend::Endpoint::ComprehendClientConfiguration, Comprehend::Endpoint::ComprehendBuiltInParameters,
    Comprehend::Endpoint::ComprehendClientContextParameters>;
}  // namespace Endpoint

namespace Comprehend {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COMPREHEND_API ComprehendEndpointProvider : public ComprehendDefaultEpProviderBase {
 public:
  using ComprehendResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ComprehendEndpointProvider();

  ~ComprehendEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Comprehend
}  // namespace Aws
