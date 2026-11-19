/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOpsClientConfiguration.h>
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AIOps {
namespace Endpoint {
using AIOpsClientConfiguration = Aws::AIOps::AIOpsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AIOpsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AIOPS_API AIOpsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AIOpsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AIOpsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AIOpsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AIOpsClientConfiguration& config);
};

/**
 * The type for the AIOps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AIOpsEndpointProviderBase = EndpointProviderBase<AIOpsClientConfiguration, AIOpsBuiltInParameters, AIOpsClientContextParameters>;

using AIOpsDefaultEpProviderBase = BDDEndpointProvider<AIOpsClientConfiguration, AIOpsBuiltInParameters, AIOpsClientContextParameters>;

}  // namespace Endpoint
}  // namespace AIOps

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AIOPS_EXTERN template class AWS_AIOPS_API Aws::Endpoint::EndpointProviderBase<
    AIOps::Endpoint::AIOpsClientConfiguration, AIOps::Endpoint::AIOpsBuiltInParameters, AIOps::Endpoint::AIOpsClientContextParameters>;

AWS_AIOPS_EXTERN template class AWS_AIOPS_API Aws::Endpoint::BDDEndpointProvider<
    AIOps::Endpoint::AIOpsClientConfiguration, AIOps::Endpoint::AIOpsBuiltInParameters, AIOps::Endpoint::AIOpsClientContextParameters>;
}  // namespace Endpoint

namespace AIOps {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AIOPS_API AIOpsEndpointProvider : public AIOpsDefaultEpProviderBase {
 public:
  using AIOpsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AIOpsEndpointProvider();

  ~AIOpsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AIOps
}  // namespace Aws
