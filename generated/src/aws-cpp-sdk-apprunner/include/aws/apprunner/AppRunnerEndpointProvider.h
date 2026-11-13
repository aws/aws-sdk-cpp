/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerClientConfiguration.h>
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AppRunner {
namespace Endpoint {
using AppRunnerClientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppRunnerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPRUNNER_API AppRunnerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppRunnerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppRunnerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppRunnerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppRunnerClientConfiguration& config);
};

/**
 * The type for the AppRunner Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppRunnerEndpointProviderBase =
    EndpointProviderBase<AppRunnerClientConfiguration, AppRunnerBuiltInParameters, AppRunnerClientContextParameters>;

using AppRunnerDefaultEpProviderBase =
    BDDEndpointProvider<AppRunnerClientConfiguration, AppRunnerBuiltInParameters, AppRunnerClientContextParameters>;

}  // namespace Endpoint
}  // namespace AppRunner

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPRUNNER_EXTERN template class AWS_APPRUNNER_API
    Aws::Endpoint::EndpointProviderBase<AppRunner::Endpoint::AppRunnerClientConfiguration, AppRunner::Endpoint::AppRunnerBuiltInParameters,
                                        AppRunner::Endpoint::AppRunnerClientContextParameters>;

AWS_APPRUNNER_EXTERN template class AWS_APPRUNNER_API
    Aws::Endpoint::BDDEndpointProvider<AppRunner::Endpoint::AppRunnerClientConfiguration, AppRunner::Endpoint::AppRunnerBuiltInParameters,
                                       AppRunner::Endpoint::AppRunnerClientContextParameters>;
}  // namespace Endpoint

namespace AppRunner {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPRUNNER_API AppRunnerEndpointProvider : public AppRunnerDefaultEpProviderBase {
 public:
  using AppRunnerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppRunnerEndpointProvider();

  ~AppRunnerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AppRunner
}  // namespace Aws
