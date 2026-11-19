/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2ClientConfiguration.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Endpoint {
using EC2ClientConfiguration = Aws::EC2::EC2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EC2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EC2_API EC2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EC2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EC2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EC2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EC2ClientConfiguration& config);
};

/**
 * The type for the EC2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EC2EndpointProviderBase = EndpointProviderBase<EC2ClientConfiguration, EC2BuiltInParameters, EC2ClientContextParameters>;

using EC2DefaultEpProviderBase = BDDEndpointProvider<EC2ClientConfiguration, EC2BuiltInParameters, EC2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace EC2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EC2_EXTERN template class AWS_EC2_API Aws::Endpoint::EndpointProviderBase<
    EC2::Endpoint::EC2ClientConfiguration, EC2::Endpoint::EC2BuiltInParameters, EC2::Endpoint::EC2ClientContextParameters>;

AWS_EC2_EXTERN template class AWS_EC2_API Aws::Endpoint::BDDEndpointProvider<
    EC2::Endpoint::EC2ClientConfiguration, EC2::Endpoint::EC2BuiltInParameters, EC2::Endpoint::EC2ClientContextParameters>;
}  // namespace Endpoint

namespace EC2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EC2_API EC2EndpointProvider : public EC2DefaultEpProviderBase {
 public:
  using EC2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EC2EndpointProvider();

  ~EC2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EC2
}  // namespace Aws
