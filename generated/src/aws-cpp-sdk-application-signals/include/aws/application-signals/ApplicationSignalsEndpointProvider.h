/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsClientConfiguration.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApplicationSignals {
namespace Endpoint {
using ApplicationSignalsClientConfiguration = Aws::ApplicationSignals::ApplicationSignalsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApplicationSignalsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPLICATIONSIGNALS_API ApplicationSignalsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApplicationSignalsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApplicationSignalsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApplicationSignalsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApplicationSignalsClientConfiguration& config);
};

/**
 * The type for the ApplicationSignals Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationSignalsEndpointProviderBase =
    EndpointProviderBase<ApplicationSignalsClientConfiguration, ApplicationSignalsBuiltInParameters,
                         ApplicationSignalsClientContextParameters>;

using ApplicationSignalsDefaultEpProviderBase =
    BDDEndpointProvider<ApplicationSignalsClientConfiguration, ApplicationSignalsBuiltInParameters,
                        ApplicationSignalsClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApplicationSignals

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPLICATIONSIGNALS_EXTERN template class AWS_APPLICATIONSIGNALS_API Aws::Endpoint::EndpointProviderBase<
    ApplicationSignals::Endpoint::ApplicationSignalsClientConfiguration, ApplicationSignals::Endpoint::ApplicationSignalsBuiltInParameters,
    ApplicationSignals::Endpoint::ApplicationSignalsClientContextParameters>;

AWS_APPLICATIONSIGNALS_EXTERN template class AWS_APPLICATIONSIGNALS_API Aws::Endpoint::BDDEndpointProvider<
    ApplicationSignals::Endpoint::ApplicationSignalsClientConfiguration, ApplicationSignals::Endpoint::ApplicationSignalsBuiltInParameters,
    ApplicationSignals::Endpoint::ApplicationSignalsClientContextParameters>;
}  // namespace Endpoint

namespace ApplicationSignals {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONSIGNALS_API ApplicationSignalsEndpointProvider : public ApplicationSignalsDefaultEpProviderBase {
 public:
  using ApplicationSignalsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApplicationSignalsEndpointProvider();

  ~ApplicationSignalsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApplicationSignals
}  // namespace Aws
