/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9ClientConfiguration.h>
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Cloud9 {
namespace Endpoint {
using Cloud9ClientConfiguration = Aws::Cloud9::Cloud9ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using Cloud9ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUD9_API Cloud9BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~Cloud9BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const Cloud9ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const Cloud9ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const Cloud9ClientConfiguration& config);
};

/**
 * The type for the Cloud9 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Cloud9EndpointProviderBase = EndpointProviderBase<Cloud9ClientConfiguration, Cloud9BuiltInParameters, Cloud9ClientContextParameters>;

using Cloud9DefaultEpProviderBase = BDDEndpointProvider<Cloud9ClientConfiguration, Cloud9BuiltInParameters, Cloud9ClientContextParameters>;

}  // namespace Endpoint
}  // namespace Cloud9

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUD9_EXTERN template class AWS_CLOUD9_API
    Aws::Endpoint::EndpointProviderBase<Cloud9::Endpoint::Cloud9ClientConfiguration, Cloud9::Endpoint::Cloud9BuiltInParameters,
                                        Cloud9::Endpoint::Cloud9ClientContextParameters>;

AWS_CLOUD9_EXTERN template class AWS_CLOUD9_API
    Aws::Endpoint::BDDEndpointProvider<Cloud9::Endpoint::Cloud9ClientConfiguration, Cloud9::Endpoint::Cloud9BuiltInParameters,
                                       Cloud9::Endpoint::Cloud9ClientContextParameters>;
}  // namespace Endpoint

namespace Cloud9 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUD9_API Cloud9EndpointProvider : public Cloud9DefaultEpProviderBase {
 public:
  using Cloud9ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  Cloud9EndpointProvider();

  ~Cloud9EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Cloud9
}  // namespace Aws
