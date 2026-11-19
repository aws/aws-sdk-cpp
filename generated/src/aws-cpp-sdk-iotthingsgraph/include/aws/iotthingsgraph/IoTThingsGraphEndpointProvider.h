/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotthingsgraph/IoTThingsGraphClientConfiguration.h>
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>

namespace Aws {
namespace IoTThingsGraph {
namespace Endpoint {
using IoTThingsGraphClientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTThingsGraphClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTTHINGSGRAPH_API IoTThingsGraphBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTThingsGraphBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTThingsGraphClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTThingsGraphClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTThingsGraphClientConfiguration& config);
};

/**
 * The type for the IoTThingsGraph Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTThingsGraphEndpointProviderBase =
    EndpointProviderBase<IoTThingsGraphClientConfiguration, IoTThingsGraphBuiltInParameters, IoTThingsGraphClientContextParameters>;

using IoTThingsGraphDefaultEpProviderBase =
    BDDEndpointProvider<IoTThingsGraphClientConfiguration, IoTThingsGraphBuiltInParameters, IoTThingsGraphClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTThingsGraph

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTTHINGSGRAPH_EXTERN template class AWS_IOTTHINGSGRAPH_API Aws::Endpoint::EndpointProviderBase<
    IoTThingsGraph::Endpoint::IoTThingsGraphClientConfiguration, IoTThingsGraph::Endpoint::IoTThingsGraphBuiltInParameters,
    IoTThingsGraph::Endpoint::IoTThingsGraphClientContextParameters>;

AWS_IOTTHINGSGRAPH_EXTERN template class AWS_IOTTHINGSGRAPH_API Aws::Endpoint::BDDEndpointProvider<
    IoTThingsGraph::Endpoint::IoTThingsGraphClientConfiguration, IoTThingsGraph::Endpoint::IoTThingsGraphBuiltInParameters,
    IoTThingsGraph::Endpoint::IoTThingsGraphClientContextParameters>;
}  // namespace Endpoint

namespace IoTThingsGraph {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTTHINGSGRAPH_API IoTThingsGraphEndpointProvider : public IoTThingsGraphDefaultEpProviderBase {
 public:
  using IoTThingsGraphResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTThingsGraphEndpointProvider();

  ~IoTThingsGraphEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTThingsGraph
}  // namespace Aws
