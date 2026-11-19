/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/LaunchWizardClientConfiguration.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

namespace Aws {
namespace LaunchWizard {
namespace Endpoint {
using LaunchWizardClientConfiguration = Aws::LaunchWizard::LaunchWizardClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LaunchWizardClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LAUNCHWIZARD_API LaunchWizardBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LaunchWizardBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LaunchWizardClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LaunchWizardClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LaunchWizardClientConfiguration& config);
};

/**
 * The type for the LaunchWizard Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LaunchWizardEndpointProviderBase =
    EndpointProviderBase<LaunchWizardClientConfiguration, LaunchWizardBuiltInParameters, LaunchWizardClientContextParameters>;

using LaunchWizardDefaultEpProviderBase =
    BDDEndpointProvider<LaunchWizardClientConfiguration, LaunchWizardBuiltInParameters, LaunchWizardClientContextParameters>;

}  // namespace Endpoint
}  // namespace LaunchWizard

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LAUNCHWIZARD_EXTERN template class AWS_LAUNCHWIZARD_API Aws::Endpoint::EndpointProviderBase<
    LaunchWizard::Endpoint::LaunchWizardClientConfiguration, LaunchWizard::Endpoint::LaunchWizardBuiltInParameters,
    LaunchWizard::Endpoint::LaunchWizardClientContextParameters>;

AWS_LAUNCHWIZARD_EXTERN template class AWS_LAUNCHWIZARD_API Aws::Endpoint::BDDEndpointProvider<
    LaunchWizard::Endpoint::LaunchWizardClientConfiguration, LaunchWizard::Endpoint::LaunchWizardBuiltInParameters,
    LaunchWizard::Endpoint::LaunchWizardClientContextParameters>;
}  // namespace Endpoint

namespace LaunchWizard {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LAUNCHWIZARD_API LaunchWizardEndpointProvider : public LaunchWizardDefaultEpProviderBase {
 public:
  using LaunchWizardResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LaunchWizardEndpointProvider();

  ~LaunchWizardEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LaunchWizard
}  // namespace Aws
