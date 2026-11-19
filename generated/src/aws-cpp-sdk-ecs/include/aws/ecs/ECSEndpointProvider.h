/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSClientConfiguration.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Endpoint {
using ECSClientConfiguration = Aws::ECS::ECSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ECSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ECS_API ECSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ECSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ECSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ECSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ECSClientConfiguration& config);
};

/**
 * The type for the ECS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECSEndpointProviderBase = EndpointProviderBase<ECSClientConfiguration, ECSBuiltInParameters, ECSClientContextParameters>;

using ECSDefaultEpProviderBase = BDDEndpointProvider<ECSClientConfiguration, ECSBuiltInParameters, ECSClientContextParameters>;

}  // namespace Endpoint
}  // namespace ECS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ECS_EXTERN template class AWS_ECS_API Aws::Endpoint::EndpointProviderBase<
    ECS::Endpoint::ECSClientConfiguration, ECS::Endpoint::ECSBuiltInParameters, ECS::Endpoint::ECSClientContextParameters>;

AWS_ECS_EXTERN template class AWS_ECS_API Aws::Endpoint::BDDEndpointProvider<
    ECS::Endpoint::ECSClientConfiguration, ECS::Endpoint::ECSBuiltInParameters, ECS::Endpoint::ECSClientContextParameters>;
}  // namespace Endpoint

namespace ECS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ECS_API ECSEndpointProvider : public ECSDefaultEpProviderBase {
 public:
  using ECSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ECSEndpointProvider();

  ~ECSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ECS
}  // namespace Aws
