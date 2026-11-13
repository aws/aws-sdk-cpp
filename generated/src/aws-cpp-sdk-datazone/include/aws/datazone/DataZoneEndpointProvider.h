/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneClientConfiguration.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Endpoint {
using DataZoneClientConfiguration = Aws::DataZone::DataZoneClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DataZoneClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DATAZONE_API DataZoneBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DataZoneBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DataZoneClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DataZoneClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DataZoneClientConfiguration& config);
};

/**
 * The type for the DataZone Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataZoneEndpointProviderBase =
    EndpointProviderBase<DataZoneClientConfiguration, DataZoneBuiltInParameters, DataZoneClientContextParameters>;

using DataZoneDefaultEpProviderBase =
    BDDEndpointProvider<DataZoneClientConfiguration, DataZoneBuiltInParameters, DataZoneClientContextParameters>;

}  // namespace Endpoint
}  // namespace DataZone

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DATAZONE_EXTERN template class AWS_DATAZONE_API
    Aws::Endpoint::EndpointProviderBase<DataZone::Endpoint::DataZoneClientConfiguration, DataZone::Endpoint::DataZoneBuiltInParameters,
                                        DataZone::Endpoint::DataZoneClientContextParameters>;

AWS_DATAZONE_EXTERN template class AWS_DATAZONE_API
    Aws::Endpoint::BDDEndpointProvider<DataZone::Endpoint::DataZoneClientConfiguration, DataZone::Endpoint::DataZoneBuiltInParameters,
                                       DataZone::Endpoint::DataZoneClientContextParameters>;
}  // namespace Endpoint

namespace DataZone {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DATAZONE_API DataZoneEndpointProvider : public DataZoneDefaultEpProviderBase {
 public:
  using DataZoneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DataZoneEndpointProvider();

  ~DataZoneEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DataZone
}  // namespace Aws
