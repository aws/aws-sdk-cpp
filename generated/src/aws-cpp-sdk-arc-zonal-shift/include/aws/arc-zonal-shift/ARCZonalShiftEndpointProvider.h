/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftClientConfiguration.h>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ARCZonalShift {
namespace Endpoint {
using ARCZonalShiftClientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ARCZonalShiftClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ARCZONALSHIFT_API ARCZonalShiftBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ARCZonalShiftBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ARCZonalShiftClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ARCZonalShiftClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ARCZonalShiftClientConfiguration& config);
};

/**
 * The type for the ARCZonalShift Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ARCZonalShiftEndpointProviderBase =
    EndpointProviderBase<ARCZonalShiftClientConfiguration, ARCZonalShiftBuiltInParameters, ARCZonalShiftClientContextParameters>;

using ARCZonalShiftDefaultEpProviderBase =
    BDDEndpointProvider<ARCZonalShiftClientConfiguration, ARCZonalShiftBuiltInParameters, ARCZonalShiftClientContextParameters>;

}  // namespace Endpoint
}  // namespace ARCZonalShift

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ARCZONALSHIFT_EXTERN template class AWS_ARCZONALSHIFT_API Aws::Endpoint::EndpointProviderBase<
    ARCZonalShift::Endpoint::ARCZonalShiftClientConfiguration, ARCZonalShift::Endpoint::ARCZonalShiftBuiltInParameters,
    ARCZonalShift::Endpoint::ARCZonalShiftClientContextParameters>;

AWS_ARCZONALSHIFT_EXTERN template class AWS_ARCZONALSHIFT_API Aws::Endpoint::BDDEndpointProvider<
    ARCZonalShift::Endpoint::ARCZonalShiftClientConfiguration, ARCZonalShift::Endpoint::ARCZonalShiftBuiltInParameters,
    ARCZonalShift::Endpoint::ARCZonalShiftClientContextParameters>;
}  // namespace Endpoint

namespace ARCZonalShift {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ARCZONALSHIFT_API ARCZonalShiftEndpointProvider : public ARCZonalShiftDefaultEpProviderBase {
 public:
  using ARCZonalShiftResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ARCZonalShiftEndpointProvider();

  ~ARCZonalShiftEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ARCZonalShift
}  // namespace Aws
