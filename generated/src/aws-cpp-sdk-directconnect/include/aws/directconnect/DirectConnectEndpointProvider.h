/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnectClientConfiguration.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Endpoint {
using DirectConnectClientConfiguration = Aws::DirectConnect::DirectConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DirectConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DIRECTCONNECT_API DirectConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DirectConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DirectConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DirectConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DirectConnectClientConfiguration& config);
};

/**
 * The type for the DirectConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DirectConnectEndpointProviderBase =
    EndpointProviderBase<DirectConnectClientConfiguration, DirectConnectBuiltInParameters, DirectConnectClientContextParameters>;

using DirectConnectDefaultEpProviderBase =
    BDDEndpointProvider<DirectConnectClientConfiguration, DirectConnectBuiltInParameters, DirectConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace DirectConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DIRECTCONNECT_EXTERN template class AWS_DIRECTCONNECT_API Aws::Endpoint::EndpointProviderBase<
    DirectConnect::Endpoint::DirectConnectClientConfiguration, DirectConnect::Endpoint::DirectConnectBuiltInParameters,
    DirectConnect::Endpoint::DirectConnectClientContextParameters>;

AWS_DIRECTCONNECT_EXTERN template class AWS_DIRECTCONNECT_API Aws::Endpoint::BDDEndpointProvider<
    DirectConnect::Endpoint::DirectConnectClientConfiguration, DirectConnect::Endpoint::DirectConnectBuiltInParameters,
    DirectConnect::Endpoint::DirectConnectClientContextParameters>;
}  // namespace Endpoint

namespace DirectConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DIRECTCONNECT_API DirectConnectEndpointProvider : public DirectConnectDefaultEpProviderBase {
 public:
  using DirectConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DirectConnectEndpointProvider();

  ~DirectConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DirectConnect
}  // namespace Aws
