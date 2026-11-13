/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneClientConfiguration.h>
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>

namespace Aws {
namespace IoTJobsDataPlane {
namespace Endpoint {
using IoTJobsDataPlaneClientConfiguration = Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IoTJobsDataPlaneClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IOTJOBSDATAPLANE_API IoTJobsDataPlaneBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IoTJobsDataPlaneBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IoTJobsDataPlaneClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IoTJobsDataPlaneClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IoTJobsDataPlaneClientConfiguration& config);
};

/**
 * The type for the IoTJobsDataPlane Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTJobsDataPlaneEndpointProviderBase =
    EndpointProviderBase<IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlaneBuiltInParameters, IoTJobsDataPlaneClientContextParameters>;

using IoTJobsDataPlaneDefaultEpProviderBase =
    BDDEndpointProvider<IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlaneBuiltInParameters, IoTJobsDataPlaneClientContextParameters>;

}  // namespace Endpoint
}  // namespace IoTJobsDataPlane

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IOTJOBSDATAPLANE_EXTERN template class AWS_IOTJOBSDATAPLANE_API Aws::Endpoint::EndpointProviderBase<
    IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneBuiltInParameters,
    IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientContextParameters>;

AWS_IOTJOBSDATAPLANE_EXTERN template class AWS_IOTJOBSDATAPLANE_API Aws::Endpoint::BDDEndpointProvider<
    IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientConfiguration, IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneBuiltInParameters,
    IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientContextParameters>;
}  // namespace Endpoint

namespace IoTJobsDataPlane {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IOTJOBSDATAPLANE_API IoTJobsDataPlaneEndpointProvider : public IoTJobsDataPlaneDefaultEpProviderBase {
 public:
  using IoTJobsDataPlaneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IoTJobsDataPlaneEndpointProvider();

  ~IoTJobsDataPlaneEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IoTJobsDataPlane
}  // namespace Aws
