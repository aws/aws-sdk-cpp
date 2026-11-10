/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActionsClientConfiguration.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BCMRecommendedActions {
namespace Endpoint {
using BCMRecommendedActionsClientConfiguration = Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BCMRecommendedActionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BCMRECOMMENDEDACTIONS_API BCMRecommendedActionsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BCMRecommendedActionsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BCMRecommendedActionsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BCMRecommendedActionsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BCMRecommendedActionsClientConfiguration& config);
};

/**
 * The type for the BCMRecommendedActions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMRecommendedActionsEndpointProviderBase =
    EndpointProviderBase<BCMRecommendedActionsClientConfiguration, BCMRecommendedActionsBuiltInParameters,
                         BCMRecommendedActionsClientContextParameters>;

using BCMRecommendedActionsDefaultEpProviderBase =
    BDDEndpointProvider<BCMRecommendedActionsClientConfiguration, BCMRecommendedActionsBuiltInParameters,
                        BCMRecommendedActionsClientContextParameters>;

}  // namespace Endpoint
}  // namespace BCMRecommendedActions

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BCMRECOMMENDEDACTIONS_EXTERN template class AWS_BCMRECOMMENDEDACTIONS_API
    Aws::Endpoint::EndpointProviderBase<BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientConfiguration,
                                        BCMRecommendedActions::Endpoint::BCMRecommendedActionsBuiltInParameters,
                                        BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientContextParameters>;

AWS_BCMRECOMMENDEDACTIONS_EXTERN template class AWS_BCMRECOMMENDEDACTIONS_API
    Aws::Endpoint::BDDEndpointProvider<BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientConfiguration,
                                       BCMRecommendedActions::Endpoint::BCMRecommendedActionsBuiltInParameters,
                                       BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientContextParameters>;
}  // namespace Endpoint

namespace BCMRecommendedActions {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BCMRECOMMENDEDACTIONS_API BCMRecommendedActionsEndpointProvider : public BCMRecommendedActionsDefaultEpProviderBase {
 public:
  using BCMRecommendedActionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BCMRecommendedActionsEndpointProvider();

  ~BCMRecommendedActionsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BCMRecommendedActions
}  // namespace Aws
