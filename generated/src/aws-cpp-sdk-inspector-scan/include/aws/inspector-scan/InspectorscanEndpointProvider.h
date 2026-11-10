/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector-scan/InspectorscanClientConfiguration.h>
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>

namespace Aws {
namespace inspectorscan {
namespace Endpoint {
using InspectorscanClientConfiguration = Aws::inspectorscan::InspectorscanClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using InspectorscanClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_INSPECTORSCAN_API InspectorscanBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~InspectorscanBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const InspectorscanClientConfiguration& config);
  virtual void SetFromClientConfiguration(const InspectorscanClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const InspectorscanClientConfiguration& config);
};

/**
 * The type for the inspectorscan Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InspectorscanEndpointProviderBase =
    EndpointProviderBase<InspectorscanClientConfiguration, InspectorscanBuiltInParameters, InspectorscanClientContextParameters>;

using InspectorscanDefaultEpProviderBase =
    BDDEndpointProvider<InspectorscanClientConfiguration, InspectorscanBuiltInParameters, InspectorscanClientContextParameters>;

}  // namespace Endpoint
}  // namespace inspectorscan

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_INSPECTORSCAN_EXTERN template class AWS_INSPECTORSCAN_API Aws::Endpoint::EndpointProviderBase<
    inspectorscan::Endpoint::InspectorscanClientConfiguration, inspectorscan::Endpoint::InspectorscanBuiltInParameters,
    inspectorscan::Endpoint::InspectorscanClientContextParameters>;

AWS_INSPECTORSCAN_EXTERN template class AWS_INSPECTORSCAN_API Aws::Endpoint::BDDEndpointProvider<
    inspectorscan::Endpoint::InspectorscanClientConfiguration, inspectorscan::Endpoint::InspectorscanBuiltInParameters,
    inspectorscan::Endpoint::InspectorscanClientContextParameters>;
}  // namespace Endpoint

namespace inspectorscan {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTORSCAN_API InspectorscanEndpointProvider : public InspectorscanDefaultEpProviderBase {
 public:
  using InspectorscanResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  InspectorscanEndpointProvider();

  ~InspectorscanEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace inspectorscan
}  // namespace Aws
