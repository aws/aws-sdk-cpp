/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/GreengrassV2ClientConfiguration.h>
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>

namespace Aws {
namespace GreengrassV2 {
namespace Endpoint {
using GreengrassV2ClientConfiguration = Aws::GreengrassV2::GreengrassV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GreengrassV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GREENGRASSV2_API GreengrassV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GreengrassV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GreengrassV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GreengrassV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GreengrassV2ClientConfiguration& config);
};

/**
 * The type for the GreengrassV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GreengrassV2EndpointProviderBase =
    EndpointProviderBase<GreengrassV2ClientConfiguration, GreengrassV2BuiltInParameters, GreengrassV2ClientContextParameters>;

using GreengrassV2DefaultEpProviderBase =
    BDDEndpointProvider<GreengrassV2ClientConfiguration, GreengrassV2BuiltInParameters, GreengrassV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace GreengrassV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GREENGRASSV2_EXTERN template class AWS_GREENGRASSV2_API Aws::Endpoint::EndpointProviderBase<
    GreengrassV2::Endpoint::GreengrassV2ClientConfiguration, GreengrassV2::Endpoint::GreengrassV2BuiltInParameters,
    GreengrassV2::Endpoint::GreengrassV2ClientContextParameters>;

AWS_GREENGRASSV2_EXTERN template class AWS_GREENGRASSV2_API Aws::Endpoint::BDDEndpointProvider<
    GreengrassV2::Endpoint::GreengrassV2ClientConfiguration, GreengrassV2::Endpoint::GreengrassV2BuiltInParameters,
    GreengrassV2::Endpoint::GreengrassV2ClientContextParameters>;
}  // namespace Endpoint

namespace GreengrassV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GREENGRASSV2_API GreengrassV2EndpointProvider : public GreengrassV2DefaultEpProviderBase {
 public:
  using GreengrassV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GreengrassV2EndpointProvider();

  ~GreengrassV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GreengrassV2
}  // namespace Aws
