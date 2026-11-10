/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2ClientConfiguration.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Endpoint {
using Inspector2ClientConfiguration = Aws::Inspector2::Inspector2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Inspector2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_INSPECTOR2_API Inspector2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Inspector2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Inspector2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Inspector2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Inspector2ClientConfiguration& config);
};

/**
 * The type for the Inspector2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Inspector2EndpointProviderBase =
    EndpointProviderBase<Inspector2ClientConfiguration, Inspector2BuiltInParameters, Inspector2ClientContextParameters>;

using Inspector2DefaultEpProviderBase =
    BDDEndpointProvider<Inspector2ClientConfiguration, Inspector2BuiltInParameters, Inspector2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace Inspector2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_INSPECTOR2_EXTERN template class AWS_INSPECTOR2_API Aws::Endpoint::EndpointProviderBase<
    Inspector2::Endpoint::Inspector2ClientConfiguration, Inspector2::Endpoint::Inspector2BuiltInParameters,
    Inspector2::Endpoint::Inspector2ClientContextParameters>;

AWS_INSPECTOR2_EXTERN template class AWS_INSPECTOR2_API Aws::Endpoint::BDDEndpointProvider<
    Inspector2::Endpoint::Inspector2ClientConfiguration, Inspector2::Endpoint::Inspector2BuiltInParameters,
    Inspector2::Endpoint::Inspector2ClientContextParameters>;
}  // namespace Endpoint

namespace Inspector2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTOR2_API Inspector2EndpointProvider : public Inspector2DefaultEpProviderBase {
 public:
  using Inspector2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Inspector2EndpointProvider();

  ~Inspector2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Inspector2
}  // namespace Aws
