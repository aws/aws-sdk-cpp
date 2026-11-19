/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumClientConfiguration.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Continuum {
namespace Endpoint {
using ContinuumClientConfiguration = Aws::Continuum::ContinuumClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ContinuumClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONTINUUM_API ContinuumBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ContinuumBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ContinuumClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ContinuumClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ContinuumClientConfiguration& config);
};

/**
 * The type for the Continuum Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ContinuumEndpointProviderBase =
    EndpointProviderBase<ContinuumClientConfiguration, ContinuumBuiltInParameters, ContinuumClientContextParameters>;

using ContinuumDefaultEpProviderBase =
    BDDEndpointProvider<ContinuumClientConfiguration, ContinuumBuiltInParameters, ContinuumClientContextParameters>;

}  // namespace Endpoint
}  // namespace Continuum

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONTINUUM_EXTERN template class AWS_CONTINUUM_API
    Aws::Endpoint::EndpointProviderBase<Continuum::Endpoint::ContinuumClientConfiguration, Continuum::Endpoint::ContinuumBuiltInParameters,
                                        Continuum::Endpoint::ContinuumClientContextParameters>;

AWS_CONTINUUM_EXTERN template class AWS_CONTINUUM_API
    Aws::Endpoint::BDDEndpointProvider<Continuum::Endpoint::ContinuumClientConfiguration, Continuum::Endpoint::ContinuumBuiltInParameters,
                                       Continuum::Endpoint::ContinuumClientContextParameters>;
}  // namespace Endpoint

namespace Continuum {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONTINUUM_API ContinuumEndpointProvider : public ContinuumDefaultEpProviderBase {
 public:
  using ContinuumResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ContinuumEndpointProvider();

  ~ContinuumEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Continuum
}  // namespace Aws
