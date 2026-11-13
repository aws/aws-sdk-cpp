/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthClientConfiguration.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectHealth {
namespace Endpoint {
using ConnectHealthClientConfiguration = Aws::ConnectHealth::ConnectHealthClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectHealthClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTHEALTH_API ConnectHealthBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectHealthBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectHealthClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectHealthClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectHealthClientConfiguration& config);
};

/**
 * The type for the ConnectHealth Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectHealthEndpointProviderBase =
    EndpointProviderBase<ConnectHealthClientConfiguration, ConnectHealthBuiltInParameters, ConnectHealthClientContextParameters>;

using ConnectHealthDefaultEpProviderBase =
    BDDEndpointProvider<ConnectHealthClientConfiguration, ConnectHealthBuiltInParameters, ConnectHealthClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectHealth

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTHEALTH_EXTERN template class AWS_CONNECTHEALTH_API Aws::Endpoint::EndpointProviderBase<
    ConnectHealth::Endpoint::ConnectHealthClientConfiguration, ConnectHealth::Endpoint::ConnectHealthBuiltInParameters,
    ConnectHealth::Endpoint::ConnectHealthClientContextParameters>;

AWS_CONNECTHEALTH_EXTERN template class AWS_CONNECTHEALTH_API Aws::Endpoint::BDDEndpointProvider<
    ConnectHealth::Endpoint::ConnectHealthClientConfiguration, ConnectHealth::Endpoint::ConnectHealthBuiltInParameters,
    ConnectHealth::Endpoint::ConnectHealthClientContextParameters>;
}  // namespace Endpoint

namespace ConnectHealth {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTHEALTH_API ConnectHealthEndpointProvider : public ConnectHealthDefaultEpProviderBase {
 public:
  using ConnectHealthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectHealthEndpointProvider();

  ~ConnectHealthEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectHealth
}  // namespace Aws
