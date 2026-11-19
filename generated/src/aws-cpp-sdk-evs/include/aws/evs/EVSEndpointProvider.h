/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVSClientConfiguration.h>
#include <aws/evs/EVS_EXPORTS.h>

namespace Aws {
namespace EVS {
namespace Endpoint {
using EVSClientConfiguration = Aws::EVS::EVSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EVSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EVS_API EVSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EVSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EVSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EVSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EVSClientConfiguration& config);
};

/**
 * The type for the EVS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EVSEndpointProviderBase = EndpointProviderBase<EVSClientConfiguration, EVSBuiltInParameters, EVSClientContextParameters>;

using EVSDefaultEpProviderBase = BDDEndpointProvider<EVSClientConfiguration, EVSBuiltInParameters, EVSClientContextParameters>;

}  // namespace Endpoint
}  // namespace EVS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EVS_EXTERN template class AWS_EVS_API Aws::Endpoint::EndpointProviderBase<
    EVS::Endpoint::EVSClientConfiguration, EVS::Endpoint::EVSBuiltInParameters, EVS::Endpoint::EVSClientContextParameters>;

AWS_EVS_EXTERN template class AWS_EVS_API Aws::Endpoint::BDDEndpointProvider<
    EVS::Endpoint::EVSClientConfiguration, EVS::Endpoint::EVSBuiltInParameters, EVS::Endpoint::EVSClientContextParameters>;
}  // namespace Endpoint

namespace EVS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EVS_API EVSEndpointProvider : public EVSDefaultEpProviderBase {
 public:
  using EVSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EVSEndpointProvider();

  ~EVSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EVS
}  // namespace Aws
