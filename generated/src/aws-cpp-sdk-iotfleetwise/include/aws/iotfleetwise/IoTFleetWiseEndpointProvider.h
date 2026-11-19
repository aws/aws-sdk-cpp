/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/IoTFleetWiseClientConfiguration.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

namespace Aws {
namespace IoTFleetWise {
namespace Endpoint {
using IoTFleetWiseClientConfiguration = Aws::IoTFleetWise::IoTFleetWiseClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTFleetWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTFLEETWISE_API IoTFleetWiseBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTFleetWiseBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTFleetWiseClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTFleetWiseClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTFleetWiseClientConfiguration& config);
};

/**
 * The type for the IoTFleetWise Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTFleetWiseEndpointProviderBase =
    EndpointProviderBase<IoTFleetWiseClientConfiguration, IoTFleetWiseBuiltInParameters, IoTFleetWiseClientContextParameters>;

using IoTFleetWiseDefaultEpProviderBase =
    BDDEndpointProvider<IoTFleetWiseClientConfiguration, IoTFleetWiseBuiltInParameters, IoTFleetWiseClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTFleetWise

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTFLEETWISE_EXTERN template class AWS_IOTFLEETWISE_API Aws::Endpoint::EndpointProviderBase<
    IoTFleetWise::Endpoint::IoTFleetWiseClientConfiguration, IoTFleetWise::Endpoint::IoTFleetWiseBuiltInParameters,
    IoTFleetWise::Endpoint::IoTFleetWiseClientContextParameters>;

AWS_IOTFLEETWISE_EXTERN template class AWS_IOTFLEETWISE_API Aws::Endpoint::BDDEndpointProvider<
    IoTFleetWise::Endpoint::IoTFleetWiseClientConfiguration, IoTFleetWise::Endpoint::IoTFleetWiseBuiltInParameters,
    IoTFleetWise::Endpoint::IoTFleetWiseClientContextParameters>;
}  // namespace Endpoint

namespace IoTFleetWise {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTFLEETWISE_API IoTFleetWiseEndpointProvider : public IoTFleetWiseDefaultEpProviderBase {
 public:
  using IoTFleetWiseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTFleetWiseEndpointProvider();

  ~IoTFleetWiseEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTFleetWise
}  // namespace Aws
