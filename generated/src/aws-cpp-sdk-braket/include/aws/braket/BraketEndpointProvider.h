/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketClientConfiguration.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Braket {
namespace Endpoint {
using BraketClientConfiguration = Aws::Braket::BraketClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BraketClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BRAKET_API BraketBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BraketBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BraketClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BraketClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BraketClientConfiguration& config);
};

/**
 * The type for the Braket Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BraketEndpointProviderBase = EndpointProviderBase<BraketClientConfiguration, BraketBuiltInParameters, BraketClientContextParameters>;

using BraketDefaultEpProviderBase = BDDEndpointProvider<BraketClientConfiguration, BraketBuiltInParameters, BraketClientContextParameters>;

}  // namespace Endpoint
}  // namespace Braket

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BRAKET_EXTERN template class AWS_BRAKET_API
    Aws::Endpoint::EndpointProviderBase<Braket::Endpoint::BraketClientConfiguration, Braket::Endpoint::BraketBuiltInParameters,
                                        Braket::Endpoint::BraketClientContextParameters>;

AWS_BRAKET_EXTERN template class AWS_BRAKET_API
    Aws::Endpoint::BDDEndpointProvider<Braket::Endpoint::BraketClientConfiguration, Braket::Endpoint::BraketBuiltInParameters,
                                       Braket::Endpoint::BraketClientContextParameters>;
}  // namespace Endpoint

namespace Braket {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BRAKET_API BraketEndpointProvider : public BraketDefaultEpProviderBase {
 public:
  using BraketResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BraketEndpointProvider();

  ~BraketEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Braket
}  // namespace Aws
