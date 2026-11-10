/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ebs/EBSClientConfiguration.h>
#include <aws/ebs/EBS_EXPORTS.h>

namespace Aws {
namespace EBS {
namespace Endpoint {
using EBSClientConfiguration = Aws::EBS::EBSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EBSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EBS_API EBSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EBSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EBSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EBSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EBSClientConfiguration& config);
};

/**
 * The type for the EBS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EBSEndpointProviderBase = EndpointProviderBase<EBSClientConfiguration, EBSBuiltInParameters, EBSClientContextParameters>;

using EBSDefaultEpProviderBase = BDDEndpointProvider<EBSClientConfiguration, EBSBuiltInParameters, EBSClientContextParameters>;

}  // namespace Endpoint
}  // namespace EBS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EBS_EXTERN template class AWS_EBS_API Aws::Endpoint::EndpointProviderBase<
    EBS::Endpoint::EBSClientConfiguration, EBS::Endpoint::EBSBuiltInParameters, EBS::Endpoint::EBSClientContextParameters>;

AWS_EBS_EXTERN template class AWS_EBS_API Aws::Endpoint::BDDEndpointProvider<
    EBS::Endpoint::EBSClientConfiguration, EBS::Endpoint::EBSBuiltInParameters, EBS::Endpoint::EBSClientContextParameters>;
}  // namespace Endpoint

namespace EBS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EBS_API EBSEndpointProvider : public EBSDefaultEpProviderBase {
 public:
  using EBSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EBSEndpointProvider();

  ~EBSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EBS
}  // namespace Aws
