/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/EC2ProtocolEndpointRules.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

namespace Aws {
namespace EC2Protocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EC2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EC2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using EC2ProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EC2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2ProtocolEndpointProviderBase =
    EndpointProviderBase<EC2ProtocolClientConfiguration, EC2ProtocolBuiltInParameters, EC2ProtocolClientContextParameters>;

using EC2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<EC2ProtocolClientConfiguration, EC2ProtocolBuiltInParameters, EC2ProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EC2PROTOCOL_API EC2ProtocolEndpointProvider : public EC2ProtocolDefaultEpProviderBase {
 public:
  using EC2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EC2ProtocolEndpointProvider()
      : EC2ProtocolDefaultEpProviderBase(Aws::EC2Protocol::EC2ProtocolEndpointRules::GetRulesBlob(),
                                         Aws::EC2Protocol::EC2ProtocolEndpointRules::RulesBlobSize) {}

  ~EC2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EC2Protocol
}  // namespace Aws
