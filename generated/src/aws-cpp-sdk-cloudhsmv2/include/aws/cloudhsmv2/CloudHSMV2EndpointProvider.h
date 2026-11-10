/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2ClientConfiguration.h>
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudHSMV2 {
namespace Endpoint {
using CloudHSMV2ClientConfiguration = Aws::CloudHSMV2::CloudHSMV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudHSMV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDHSMV2_API CloudHSMV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudHSMV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudHSMV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudHSMV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudHSMV2ClientConfiguration& config);
};

/**
 * The type for the CloudHSMV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudHSMV2EndpointProviderBase =
    EndpointProviderBase<CloudHSMV2ClientConfiguration, CloudHSMV2BuiltInParameters, CloudHSMV2ClientContextParameters>;

using CloudHSMV2DefaultEpProviderBase =
    BDDEndpointProvider<CloudHSMV2ClientConfiguration, CloudHSMV2BuiltInParameters, CloudHSMV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudHSMV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDHSMV2_EXTERN template class AWS_CLOUDHSMV2_API Aws::Endpoint::EndpointProviderBase<
    CloudHSMV2::Endpoint::CloudHSMV2ClientConfiguration, CloudHSMV2::Endpoint::CloudHSMV2BuiltInParameters,
    CloudHSMV2::Endpoint::CloudHSMV2ClientContextParameters>;

AWS_CLOUDHSMV2_EXTERN template class AWS_CLOUDHSMV2_API Aws::Endpoint::BDDEndpointProvider<
    CloudHSMV2::Endpoint::CloudHSMV2ClientConfiguration, CloudHSMV2::Endpoint::CloudHSMV2BuiltInParameters,
    CloudHSMV2::Endpoint::CloudHSMV2ClientContextParameters>;
}  // namespace Endpoint

namespace CloudHSMV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDHSMV2_API CloudHSMV2EndpointProvider : public CloudHSMV2DefaultEpProviderBase {
 public:
  using CloudHSMV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudHSMV2EndpointProvider();

  ~CloudHSMV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudHSMV2
}  // namespace Aws
