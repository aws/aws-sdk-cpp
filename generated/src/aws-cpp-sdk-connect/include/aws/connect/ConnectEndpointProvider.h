/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectClientConfiguration.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Connect {
namespace Endpoint {
using ConnectClientConfiguration = Aws::Connect::ConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECT_API ConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectClientConfiguration& config);
};

/**
 * The type for the Connect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectEndpointProviderBase =
    EndpointProviderBase<ConnectClientConfiguration, ConnectBuiltInParameters, ConnectClientContextParameters>;

using ConnectDefaultEpProviderBase =
    BDDEndpointProvider<ConnectClientConfiguration, ConnectBuiltInParameters, ConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace Connect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECT_EXTERN template class AWS_CONNECT_API
    Aws::Endpoint::EndpointProviderBase<Connect::Endpoint::ConnectClientConfiguration, Connect::Endpoint::ConnectBuiltInParameters,
                                        Connect::Endpoint::ConnectClientContextParameters>;

AWS_CONNECT_EXTERN template class AWS_CONNECT_API
    Aws::Endpoint::BDDEndpointProvider<Connect::Endpoint::ConnectClientConfiguration, Connect::Endpoint::ConnectBuiltInParameters,
                                       Connect::Endpoint::ConnectClientContextParameters>;
}  // namespace Endpoint

namespace Connect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECT_API ConnectEndpointProvider : public ConnectDefaultEpProviderBase {
 public:
  using ConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectEndpointProvider();

  ~ConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Connect
}  // namespace Aws
