/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/HealthClientConfiguration.h>
#include <aws/health/Health_EXPORTS.h>

namespace Aws {
namespace Health {
namespace Endpoint {
using HealthClientConfiguration = Aws::Health::HealthClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using HealthClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_HEALTH_API HealthBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~HealthBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const HealthClientConfiguration& config);
  virtual void SetFromClientConfiguration(const HealthClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const HealthClientConfiguration& config);
};

/**
 * The type for the Health Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using HealthEndpointProviderBase = EndpointProviderBase<HealthClientConfiguration, HealthBuiltInParameters, HealthClientContextParameters>;

using HealthDefaultEpProviderBase = BDDEndpointProvider<HealthClientConfiguration, HealthBuiltInParameters, HealthClientContextParameters>;

}  // namespace Endpoint
}  // namespace Health

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_HEALTH_EXTERN template class AWS_HEALTH_API
    Aws::Endpoint::EndpointProviderBase<Health::Endpoint::HealthClientConfiguration, Health::Endpoint::HealthBuiltInParameters,
                                        Health::Endpoint::HealthClientContextParameters>;

AWS_HEALTH_EXTERN template class AWS_HEALTH_API
    Aws::Endpoint::BDDEndpointProvider<Health::Endpoint::HealthClientConfiguration, Health::Endpoint::HealthBuiltInParameters,
                                       Health::Endpoint::HealthClientContextParameters>;
}  // namespace Endpoint

namespace Health {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_HEALTH_API HealthEndpointProvider : public HealthDefaultEpProviderBase {
 public:
  using HealthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  HealthEndpointProvider();

  ~HealthEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Health
}  // namespace Aws
