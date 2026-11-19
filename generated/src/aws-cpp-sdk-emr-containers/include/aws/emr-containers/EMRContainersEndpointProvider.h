/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/EMRContainersClientConfiguration.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

namespace Aws {
namespace EMRContainers {
namespace Endpoint {
using EMRContainersClientConfiguration = Aws::EMRContainers::EMRContainersClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EMRContainersClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EMRCONTAINERS_API EMRContainersBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EMRContainersBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EMRContainersClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EMRContainersClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EMRContainersClientConfiguration& config);
};

/**
 * The type for the EMRContainers Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMRContainersEndpointProviderBase =
    EndpointProviderBase<EMRContainersClientConfiguration, EMRContainersBuiltInParameters, EMRContainersClientContextParameters>;

using EMRContainersDefaultEpProviderBase =
    BDDEndpointProvider<EMRContainersClientConfiguration, EMRContainersBuiltInParameters, EMRContainersClientContextParameters>;

}  // namespace Endpoint
}  // namespace EMRContainers

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EMRCONTAINERS_EXTERN template class AWS_EMRCONTAINERS_API Aws::Endpoint::EndpointProviderBase<
    EMRContainers::Endpoint::EMRContainersClientConfiguration, EMRContainers::Endpoint::EMRContainersBuiltInParameters,
    EMRContainers::Endpoint::EMRContainersClientContextParameters>;

AWS_EMRCONTAINERS_EXTERN template class AWS_EMRCONTAINERS_API Aws::Endpoint::BDDEndpointProvider<
    EMRContainers::Endpoint::EMRContainersClientConfiguration, EMRContainers::Endpoint::EMRContainersBuiltInParameters,
    EMRContainers::Endpoint::EMRContainersClientContextParameters>;
}  // namespace Endpoint

namespace EMRContainers {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EMRCONTAINERS_API EMRContainersEndpointProvider : public EMRContainersDefaultEpProviderBase {
 public:
  using EMRContainersResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EMRContainersEndpointProvider();

  ~EMRContainersEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EMRContainers
}  // namespace Aws
