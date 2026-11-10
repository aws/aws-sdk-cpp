/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormationClientConfiguration.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Endpoint {
using LakeFormationClientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LakeFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAKEFORMATION_API LakeFormationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LakeFormationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LakeFormationClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LakeFormationClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LakeFormationClientConfiguration& config);
};

/**
 * The type for the LakeFormation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LakeFormationEndpointProviderBase =
    EndpointProviderBase<LakeFormationClientConfiguration, LakeFormationBuiltInParameters, LakeFormationClientContextParameters>;

using LakeFormationDefaultEpProviderBase =
    BDDEndpointProvider<LakeFormationClientConfiguration, LakeFormationBuiltInParameters, LakeFormationClientContextParameters>;

}  // namespace Endpoint
}  // namespace LakeFormation

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAKEFORMATION_EXTERN template class AWS_LAKEFORMATION_API Aws::Endpoint::EndpointProviderBase<
    LakeFormation::Endpoint::LakeFormationClientConfiguration, LakeFormation::Endpoint::LakeFormationBuiltInParameters,
    LakeFormation::Endpoint::LakeFormationClientContextParameters>;

AWS_LAKEFORMATION_EXTERN template class AWS_LAKEFORMATION_API Aws::Endpoint::BDDEndpointProvider<
    LakeFormation::Endpoint::LakeFormationClientConfiguration, LakeFormation::Endpoint::LakeFormationBuiltInParameters,
    LakeFormation::Endpoint::LakeFormationClientContextParameters>;
}  // namespace Endpoint

namespace LakeFormation {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAKEFORMATION_API LakeFormationEndpointProvider : public LakeFormationDefaultEpProviderBase {
 public:
  using LakeFormationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LakeFormationEndpointProvider();

  ~LakeFormationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LakeFormation
}  // namespace Aws
