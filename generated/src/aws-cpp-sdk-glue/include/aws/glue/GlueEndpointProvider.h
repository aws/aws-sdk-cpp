/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueClientConfiguration.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Endpoint {
using GlueClientConfiguration = Aws::Glue::GlueClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using GlueClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_GLUE_API GlueBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~GlueBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const GlueClientConfiguration& config);
  virtual void SetFromClientConfiguration(const GlueClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const GlueClientConfiguration& config);
};

/**
 * The type for the Glue Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlueEndpointProviderBase = EndpointProviderBase<GlueClientConfiguration, GlueBuiltInParameters, GlueClientContextParameters>;

using GlueDefaultEpProviderBase = BDDEndpointProvider<GlueClientConfiguration, GlueBuiltInParameters, GlueClientContextParameters>;

}  // namespace Endpoint
}  // namespace Glue

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_GLUE_EXTERN template class AWS_GLUE_API Aws::Endpoint::EndpointProviderBase<
    Glue::Endpoint::GlueClientConfiguration, Glue::Endpoint::GlueBuiltInParameters, Glue::Endpoint::GlueClientContextParameters>;

AWS_GLUE_EXTERN template class AWS_GLUE_API Aws::Endpoint::BDDEndpointProvider<
    Glue::Endpoint::GlueClientConfiguration, Glue::Endpoint::GlueBuiltInParameters, Glue::Endpoint::GlueClientContextParameters>;
}  // namespace Endpoint

namespace Glue {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_GLUE_API GlueEndpointProvider : public GlueDefaultEpProviderBase {
 public:
  using GlueResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  GlueEndpointProvider();

  ~GlueEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Glue
}  // namespace Aws
