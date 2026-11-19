/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWiseClientConfiguration.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Endpoint {
using IoTSiteWiseClientConfiguration = Aws::IoTSiteWise::IoTSiteWiseClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTSiteWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTSITEWISE_API IoTSiteWiseBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTSiteWiseBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTSiteWiseClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTSiteWiseClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTSiteWiseClientConfiguration& config);
};

/**
 * The type for the IoTSiteWise Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTSiteWiseEndpointProviderBase =
    EndpointProviderBase<IoTSiteWiseClientConfiguration, IoTSiteWiseBuiltInParameters, IoTSiteWiseClientContextParameters>;

using IoTSiteWiseDefaultEpProviderBase =
    BDDEndpointProvider<IoTSiteWiseClientConfiguration, IoTSiteWiseBuiltInParameters, IoTSiteWiseClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTSiteWise

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTSITEWISE_EXTERN template class AWS_IOTSITEWISE_API Aws::Endpoint::EndpointProviderBase<
    IoTSiteWise::Endpoint::IoTSiteWiseClientConfiguration, IoTSiteWise::Endpoint::IoTSiteWiseBuiltInParameters,
    IoTSiteWise::Endpoint::IoTSiteWiseClientContextParameters>;

AWS_IOTSITEWISE_EXTERN template class AWS_IOTSITEWISE_API Aws::Endpoint::BDDEndpointProvider<
    IoTSiteWise::Endpoint::IoTSiteWiseClientConfiguration, IoTSiteWise::Endpoint::IoTSiteWiseBuiltInParameters,
    IoTSiteWise::Endpoint::IoTSiteWiseClientContextParameters>;
}  // namespace Endpoint

namespace IoTSiteWise {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTSITEWISE_API IoTSiteWiseEndpointProvider : public IoTSiteWiseDefaultEpProviderBase {
 public:
  using IoTSiteWiseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTSiteWiseEndpointProvider();

  ~IoTSiteWiseEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTSiteWise
}  // namespace Aws
