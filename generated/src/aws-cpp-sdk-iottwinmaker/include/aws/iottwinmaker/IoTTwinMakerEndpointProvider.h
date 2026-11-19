/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/IoTTwinMakerClientConfiguration.h>
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>

namespace Aws {
namespace IoTTwinMaker {
namespace Endpoint {
using IoTTwinMakerClientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTTwinMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTTWINMAKER_API IoTTwinMakerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTTwinMakerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTTwinMakerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTTwinMakerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTTwinMakerClientConfiguration& config);
};

/**
 * The type for the IoTTwinMaker Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTTwinMakerEndpointProviderBase =
    EndpointProviderBase<IoTTwinMakerClientConfiguration, IoTTwinMakerBuiltInParameters, IoTTwinMakerClientContextParameters>;

using IoTTwinMakerDefaultEpProviderBase =
    BDDEndpointProvider<IoTTwinMakerClientConfiguration, IoTTwinMakerBuiltInParameters, IoTTwinMakerClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTTwinMaker

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTTWINMAKER_EXTERN template class AWS_IOTTWINMAKER_API Aws::Endpoint::EndpointProviderBase<
    IoTTwinMaker::Endpoint::IoTTwinMakerClientConfiguration, IoTTwinMaker::Endpoint::IoTTwinMakerBuiltInParameters,
    IoTTwinMaker::Endpoint::IoTTwinMakerClientContextParameters>;

AWS_IOTTWINMAKER_EXTERN template class AWS_IOTTWINMAKER_API Aws::Endpoint::BDDEndpointProvider<
    IoTTwinMaker::Endpoint::IoTTwinMakerClientConfiguration, IoTTwinMaker::Endpoint::IoTTwinMakerBuiltInParameters,
    IoTTwinMaker::Endpoint::IoTTwinMakerClientContextParameters>;
}  // namespace Endpoint

namespace IoTTwinMaker {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTTWINMAKER_API IoTTwinMakerEndpointProvider : public IoTTwinMakerDefaultEpProviderBase {
 public:
  using IoTTwinMakerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTTwinMakerEndpointProvider();

  ~IoTTwinMakerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTTwinMaker
}  // namespace Aws
