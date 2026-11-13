/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/EC2ProtocolClientConfiguration.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

namespace Aws {
namespace EC2Protocol {
namespace Endpoint {
using EC2ProtocolClientConfiguration = Aws::EC2Protocol::EC2ProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EC2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EC2PROTOCOL_API EC2ProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EC2ProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EC2ProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EC2ProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the EC2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2ProtocolEndpointProviderBase =
    EndpointProviderBase<EC2ProtocolClientConfiguration, EC2ProtocolBuiltInParameters, EC2ProtocolClientContextParameters>;

using EC2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<EC2ProtocolClientConfiguration, EC2ProtocolBuiltInParameters, EC2ProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace EC2Protocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EC2PROTOCOL_EXTERN template class AWS_EC2PROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    EC2Protocol::Endpoint::EC2ProtocolClientConfiguration, EC2Protocol::Endpoint::EC2ProtocolBuiltInParameters,
    EC2Protocol::Endpoint::EC2ProtocolClientContextParameters>;

AWS_EC2PROTOCOL_EXTERN template class AWS_EC2PROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    EC2Protocol::Endpoint::EC2ProtocolClientConfiguration, EC2Protocol::Endpoint::EC2ProtocolBuiltInParameters,
    EC2Protocol::Endpoint::EC2ProtocolClientContextParameters>;
}  // namespace Endpoint

namespace EC2Protocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EC2PROTOCOL_API EC2ProtocolEndpointProvider : public EC2ProtocolDefaultEpProviderBase {
 public:
  using EC2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EC2ProtocolEndpointProvider();

  ~EC2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EC2Protocol
}  // namespace Aws
