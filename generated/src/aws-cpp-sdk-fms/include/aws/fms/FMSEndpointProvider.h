/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/FMSClientConfiguration.h>
#include <aws/fms/FMS_EXPORTS.h>

namespace Aws {
namespace FMS {
namespace Endpoint {
using FMSClientConfiguration = Aws::FMS::FMSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FMSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FMS_API FMSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FMSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FMSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FMSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FMSClientConfiguration& config);
};

/**
 * The type for the FMS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FMSEndpointProviderBase = EndpointProviderBase<FMSClientConfiguration, FMSBuiltInParameters, FMSClientContextParameters>;

using FMSDefaultEpProviderBase = BDDEndpointProvider<FMSClientConfiguration, FMSBuiltInParameters, FMSClientContextParameters>;

}  // namespace Endpoint
}  // namespace FMS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FMS_EXTERN template class AWS_FMS_API Aws::Endpoint::EndpointProviderBase<
    FMS::Endpoint::FMSClientConfiguration, FMS::Endpoint::FMSBuiltInParameters, FMS::Endpoint::FMSClientContextParameters>;

AWS_FMS_EXTERN template class AWS_FMS_API Aws::Endpoint::BDDEndpointProvider<
    FMS::Endpoint::FMSClientConfiguration, FMS::Endpoint::FMSBuiltInParameters, FMS::Endpoint::FMSClientContextParameters>;
}  // namespace Endpoint

namespace FMS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FMS_API FMSEndpointProvider : public FMSDefaultEpProviderBase {
 public:
  using FMSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FMSEndpointProvider();

  ~FMSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace FMS
}  // namespace Aws
