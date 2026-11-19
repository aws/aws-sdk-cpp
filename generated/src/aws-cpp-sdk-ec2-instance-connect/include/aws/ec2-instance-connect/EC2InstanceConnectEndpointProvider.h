/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectClientConfiguration.h>
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>

namespace Aws {
namespace EC2InstanceConnect {
namespace Endpoint {
using EC2InstanceConnectClientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EC2InstanceConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EC2InstanceConnectBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EC2InstanceConnectClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EC2InstanceConnectClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EC2InstanceConnectClientConfiguration& config);
};

/**
 * The type for the EC2InstanceConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2InstanceConnectEndpointProviderBase =
    EndpointProviderBase<EC2InstanceConnectClientConfiguration, EC2InstanceConnectBuiltInParameters,
                         EC2InstanceConnectClientContextParameters>;

using EC2InstanceConnectDefaultEpProviderBase =
    BDDEndpointProvider<EC2InstanceConnectClientConfiguration, EC2InstanceConnectBuiltInParameters,
                        EC2InstanceConnectClientContextParameters>;

}  // namespace Endpoint
}  // namespace EC2InstanceConnect

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EC2INSTANCECONNECT_EXTERN template class AWS_EC2INSTANCECONNECT_API Aws::Endpoint::EndpointProviderBase<
    EC2InstanceConnect::Endpoint::EC2InstanceConnectClientConfiguration, EC2InstanceConnect::Endpoint::EC2InstanceConnectBuiltInParameters,
    EC2InstanceConnect::Endpoint::EC2InstanceConnectClientContextParameters>;

AWS_EC2INSTANCECONNECT_EXTERN template class AWS_EC2INSTANCECONNECT_API Aws::Endpoint::BDDEndpointProvider<
    EC2InstanceConnect::Endpoint::EC2InstanceConnectClientConfiguration, EC2InstanceConnect::Endpoint::EC2InstanceConnectBuiltInParameters,
    EC2InstanceConnect::Endpoint::EC2InstanceConnectClientContextParameters>;
}  // namespace Endpoint

namespace EC2InstanceConnect {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectEndpointProvider : public EC2InstanceConnectDefaultEpProviderBase {
 public:
  using EC2InstanceConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EC2InstanceConnectEndpointProvider();

  ~EC2InstanceConnectEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EC2InstanceConnect
}  // namespace Aws
