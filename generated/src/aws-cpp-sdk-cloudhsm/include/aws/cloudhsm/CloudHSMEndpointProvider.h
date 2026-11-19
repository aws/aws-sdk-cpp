/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSMClientConfiguration.h>
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudHSM {
namespace Endpoint {
using CloudHSMClientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudHSMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDHSM_API CloudHSMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudHSMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudHSMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudHSMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudHSMClientConfiguration& config);
};

/**
 * The type for the CloudHSM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudHSMEndpointProviderBase =
    EndpointProviderBase<CloudHSMClientConfiguration, CloudHSMBuiltInParameters, CloudHSMClientContextParameters>;

using CloudHSMDefaultEpProviderBase =
    BDDEndpointProvider<CloudHSMClientConfiguration, CloudHSMBuiltInParameters, CloudHSMClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudHSM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDHSM_EXTERN template class AWS_CLOUDHSM_API
    Aws::Endpoint::EndpointProviderBase<CloudHSM::Endpoint::CloudHSMClientConfiguration, CloudHSM::Endpoint::CloudHSMBuiltInParameters,
                                        CloudHSM::Endpoint::CloudHSMClientContextParameters>;

AWS_CLOUDHSM_EXTERN template class AWS_CLOUDHSM_API
    Aws::Endpoint::BDDEndpointProvider<CloudHSM::Endpoint::CloudHSMClientConfiguration, CloudHSM::Endpoint::CloudHSMBuiltInParameters,
                                       CloudHSM::Endpoint::CloudHSMClientContextParameters>;
}  // namespace Endpoint

namespace CloudHSM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDHSM_API CloudHSMEndpointProvider : public CloudHSMDefaultEpProviderBase {
 public:
  using CloudHSMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudHSMEndpointProvider();

  ~CloudHSMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudHSM
}  // namespace Aws
