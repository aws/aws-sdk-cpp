/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/HealthLakeClientConfiguration.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Endpoint {
using HealthLakeClientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using HealthLakeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_HEALTHLAKE_API HealthLakeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~HealthLakeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const HealthLakeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const HealthLakeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const HealthLakeClientConfiguration& config);
};

/**
 * The type for the HealthLake Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using HealthLakeEndpointProviderBase =
    EndpointProviderBase<HealthLakeClientConfiguration, HealthLakeBuiltInParameters, HealthLakeClientContextParameters>;

using HealthLakeDefaultEpProviderBase =
    BDDEndpointProvider<HealthLakeClientConfiguration, HealthLakeBuiltInParameters, HealthLakeClientContextParameters>;

}  // namespace Endpoint
}  // namespace HealthLake

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_HEALTHLAKE_EXTERN template class AWS_HEALTHLAKE_API Aws::Endpoint::EndpointProviderBase<
    HealthLake::Endpoint::HealthLakeClientConfiguration, HealthLake::Endpoint::HealthLakeBuiltInParameters,
    HealthLake::Endpoint::HealthLakeClientContextParameters>;

AWS_HEALTHLAKE_EXTERN template class AWS_HEALTHLAKE_API Aws::Endpoint::BDDEndpointProvider<
    HealthLake::Endpoint::HealthLakeClientConfiguration, HealthLake::Endpoint::HealthLakeBuiltInParameters,
    HealthLake::Endpoint::HealthLakeClientContextParameters>;
}  // namespace Endpoint

namespace HealthLake {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_HEALTHLAKE_API HealthLakeEndpointProvider : public HealthLakeDefaultEpProviderBase {
 public:
  using HealthLakeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  HealthLakeEndpointProvider();

  ~HealthLakeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace HealthLake
}  // namespace Aws
