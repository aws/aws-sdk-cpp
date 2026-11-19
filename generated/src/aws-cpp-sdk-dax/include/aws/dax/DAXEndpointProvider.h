/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/DAXClientConfiguration.h>
#include <aws/dax/DAX_EXPORTS.h>

namespace Aws {
namespace DAX {
namespace Endpoint {
using DAXClientConfiguration = Aws::DAX::DAXClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DAXClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DAX_API DAXBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DAXBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DAXClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DAXClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DAXClientConfiguration& config);
};

/**
 * The type for the DAX Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DAXEndpointProviderBase = EndpointProviderBase<DAXClientConfiguration, DAXBuiltInParameters, DAXClientContextParameters>;

using DAXDefaultEpProviderBase = BDDEndpointProvider<DAXClientConfiguration, DAXBuiltInParameters, DAXClientContextParameters>;

}  // namespace Endpoint
}  // namespace DAX

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DAX_EXTERN template class AWS_DAX_API Aws::Endpoint::EndpointProviderBase<
    DAX::Endpoint::DAXClientConfiguration, DAX::Endpoint::DAXBuiltInParameters, DAX::Endpoint::DAXClientContextParameters>;

AWS_DAX_EXTERN template class AWS_DAX_API Aws::Endpoint::BDDEndpointProvider<
    DAX::Endpoint::DAXClientConfiguration, DAX::Endpoint::DAXBuiltInParameters, DAX::Endpoint::DAXClientContextParameters>;
}  // namespace Endpoint

namespace DAX {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DAX_API DAXEndpointProvider : public DAXDefaultEpProviderBase {
 public:
  using DAXResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DAXEndpointProvider();

  ~DAXEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DAX
}  // namespace Aws
