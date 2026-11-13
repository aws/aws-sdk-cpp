/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsightsClientConfiguration.h>
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApplicationInsights {
namespace Endpoint {
using ApplicationInsightsClientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationInsightsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApplicationInsightsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApplicationInsightsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApplicationInsightsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApplicationInsightsClientConfiguration& config);
};

/**
 * The type for the ApplicationInsights Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationInsightsEndpointProviderBase =
    EndpointProviderBase<ApplicationInsightsClientConfiguration, ApplicationInsightsBuiltInParameters,
                         ApplicationInsightsClientContextParameters>;

using ApplicationInsightsDefaultEpProviderBase =
    BDDEndpointProvider<ApplicationInsightsClientConfiguration, ApplicationInsightsBuiltInParameters,
                        ApplicationInsightsClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApplicationInsights

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPLICATIONINSIGHTS_EXTERN template class AWS_APPLICATIONINSIGHTS_API
    Aws::Endpoint::EndpointProviderBase<ApplicationInsights::Endpoint::ApplicationInsightsClientConfiguration,
                                        ApplicationInsights::Endpoint::ApplicationInsightsBuiltInParameters,
                                        ApplicationInsights::Endpoint::ApplicationInsightsClientContextParameters>;

AWS_APPLICATIONINSIGHTS_EXTERN template class AWS_APPLICATIONINSIGHTS_API
    Aws::Endpoint::BDDEndpointProvider<ApplicationInsights::Endpoint::ApplicationInsightsClientConfiguration,
                                       ApplicationInsights::Endpoint::ApplicationInsightsBuiltInParameters,
                                       ApplicationInsights::Endpoint::ApplicationInsightsClientContextParameters>;
}  // namespace Endpoint

namespace ApplicationInsights {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsEndpointProvider : public ApplicationInsightsDefaultEpProviderBase {
 public:
  using ApplicationInsightsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationInsightsEndpointProvider();

  ~ApplicationInsightsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationInsights
}  // namespace Aws
