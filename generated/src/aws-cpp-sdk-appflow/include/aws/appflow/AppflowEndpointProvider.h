/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowClientConfiguration.h>
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Appflow {
namespace Endpoint {
using AppflowClientConfiguration = Aws::Appflow::AppflowClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AppflowClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APPFLOW_API AppflowBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AppflowBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AppflowClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AppflowClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AppflowClientConfiguration& config);
};

/**
 * The type for the Appflow Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppflowEndpointProviderBase =
    EndpointProviderBase<AppflowClientConfiguration, AppflowBuiltInParameters, AppflowClientContextParameters>;

using AppflowDefaultEpProviderBase =
    BDDEndpointProvider<AppflowClientConfiguration, AppflowBuiltInParameters, AppflowClientContextParameters>;

}  // namespace Endpoint
}  // namespace Appflow

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APPFLOW_EXTERN template class AWS_APPFLOW_API
    Aws::Endpoint::EndpointProviderBase<Appflow::Endpoint::AppflowClientConfiguration, Appflow::Endpoint::AppflowBuiltInParameters,
                                        Appflow::Endpoint::AppflowClientContextParameters>;

AWS_APPFLOW_EXTERN template class AWS_APPFLOW_API
    Aws::Endpoint::BDDEndpointProvider<Appflow::Endpoint::AppflowClientConfiguration, Appflow::Endpoint::AppflowBuiltInParameters,
                                       Appflow::Endpoint::AppflowClientContextParameters>;
}  // namespace Endpoint

namespace Appflow {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APPFLOW_API AppflowEndpointProvider : public AppflowDefaultEpProviderBase {
 public:
  using AppflowResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AppflowEndpointProvider();

  ~AppflowEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Appflow
}  // namespace Aws
