/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/GlueDataBrewClientConfiguration.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Endpoint {
using GlueDataBrewClientConfiguration = Aws::GlueDataBrew::GlueDataBrewClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GlueDataBrewClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GLUEDATABREW_API GlueDataBrewBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GlueDataBrewBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GlueDataBrewClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GlueDataBrewClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GlueDataBrewClientConfiguration& config);
};

/**
 * The type for the GlueDataBrew Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlueDataBrewEndpointProviderBase =
    EndpointProviderBase<GlueDataBrewClientConfiguration, GlueDataBrewBuiltInParameters, GlueDataBrewClientContextParameters>;

using GlueDataBrewDefaultEpProviderBase =
    BDDEndpointProvider<GlueDataBrewClientConfiguration, GlueDataBrewBuiltInParameters, GlueDataBrewClientContextParameters>;

}  // namespace Endpoint
}  // namespace GlueDataBrew

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GLUEDATABREW_EXTERN template class AWS_GLUEDATABREW_API Aws::Endpoint::EndpointProviderBase<
    GlueDataBrew::Endpoint::GlueDataBrewClientConfiguration, GlueDataBrew::Endpoint::GlueDataBrewBuiltInParameters,
    GlueDataBrew::Endpoint::GlueDataBrewClientContextParameters>;

AWS_GLUEDATABREW_EXTERN template class AWS_GLUEDATABREW_API Aws::Endpoint::BDDEndpointProvider<
    GlueDataBrew::Endpoint::GlueDataBrewClientConfiguration, GlueDataBrew::Endpoint::GlueDataBrewBuiltInParameters,
    GlueDataBrew::Endpoint::GlueDataBrewClientContextParameters>;
}  // namespace Endpoint

namespace GlueDataBrew {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GLUEDATABREW_API GlueDataBrewEndpointProvider : public GlueDataBrewDefaultEpProviderBase {
 public:
  using GlueDataBrewResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GlueDataBrewEndpointProvider();

  ~GlueDataBrewEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace GlueDataBrew
}  // namespace Aws
