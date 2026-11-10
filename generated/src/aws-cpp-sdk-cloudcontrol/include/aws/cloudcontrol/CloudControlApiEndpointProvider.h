/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiClientConfiguration.h>
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudControlApi {
namespace Endpoint {
using CloudControlApiClientConfiguration = Aws::CloudControlApi::CloudControlApiClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudControlApiClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDCONTROLAPI_API CloudControlApiBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudControlApiBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudControlApiClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudControlApiClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudControlApiClientConfiguration& config);
};

/**
 * The type for the CloudControlApi Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudControlApiEndpointProviderBase =
    EndpointProviderBase<CloudControlApiClientConfiguration, CloudControlApiBuiltInParameters, CloudControlApiClientContextParameters>;

using CloudControlApiDefaultEpProviderBase =
    BDDEndpointProvider<CloudControlApiClientConfiguration, CloudControlApiBuiltInParameters, CloudControlApiClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudControlApi

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDCONTROLAPI_EXTERN template class AWS_CLOUDCONTROLAPI_API Aws::Endpoint::EndpointProviderBase<
    CloudControlApi::Endpoint::CloudControlApiClientConfiguration, CloudControlApi::Endpoint::CloudControlApiBuiltInParameters,
    CloudControlApi::Endpoint::CloudControlApiClientContextParameters>;

AWS_CLOUDCONTROLAPI_EXTERN template class AWS_CLOUDCONTROLAPI_API Aws::Endpoint::BDDEndpointProvider<
    CloudControlApi::Endpoint::CloudControlApiClientConfiguration, CloudControlApi::Endpoint::CloudControlApiBuiltInParameters,
    CloudControlApi::Endpoint::CloudControlApiClientContextParameters>;
}  // namespace Endpoint

namespace CloudControlApi {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDCONTROLAPI_API CloudControlApiEndpointProvider : public CloudControlApiDefaultEpProviderBase {
 public:
  using CloudControlApiResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudControlApiEndpointProvider();

  ~CloudControlApiEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudControlApi
}  // namespace Aws
