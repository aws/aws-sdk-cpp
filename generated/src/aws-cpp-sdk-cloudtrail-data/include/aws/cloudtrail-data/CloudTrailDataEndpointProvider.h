/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailDataClientConfiguration.h>
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudTrailData {
namespace Endpoint {
using CloudTrailDataClientConfiguration = Aws::CloudTrailData::CloudTrailDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudTrailDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDTRAILDATA_API CloudTrailDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudTrailDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudTrailDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudTrailDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudTrailDataClientConfiguration& config);
};

/**
 * The type for the CloudTrailData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudTrailDataEndpointProviderBase =
    EndpointProviderBase<CloudTrailDataClientConfiguration, CloudTrailDataBuiltInParameters, CloudTrailDataClientContextParameters>;

using CloudTrailDataDefaultEpProviderBase =
    BDDEndpointProvider<CloudTrailDataClientConfiguration, CloudTrailDataBuiltInParameters, CloudTrailDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudTrailData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDTRAILDATA_EXTERN template class AWS_CLOUDTRAILDATA_API Aws::Endpoint::EndpointProviderBase<
    CloudTrailData::Endpoint::CloudTrailDataClientConfiguration, CloudTrailData::Endpoint::CloudTrailDataBuiltInParameters,
    CloudTrailData::Endpoint::CloudTrailDataClientContextParameters>;

AWS_CLOUDTRAILDATA_EXTERN template class AWS_CLOUDTRAILDATA_API Aws::Endpoint::BDDEndpointProvider<
    CloudTrailData::Endpoint::CloudTrailDataClientConfiguration, CloudTrailData::Endpoint::CloudTrailDataBuiltInParameters,
    CloudTrailData::Endpoint::CloudTrailDataClientContextParameters>;
}  // namespace Endpoint

namespace CloudTrailData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDTRAILDATA_API CloudTrailDataEndpointProvider : public CloudTrailDataDefaultEpProviderBase {
 public:
  using CloudTrailDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudTrailDataEndpointProvider();

  ~CloudTrailDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudTrailData
}  // namespace Aws
