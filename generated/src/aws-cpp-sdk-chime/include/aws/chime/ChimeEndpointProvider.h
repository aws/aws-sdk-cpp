/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/ChimeClientConfiguration.h>
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Chime {
namespace Endpoint {
using ChimeClientConfiguration = Aws::Chime::ChimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ChimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CHIME_API ChimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ChimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ChimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ChimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ChimeClientConfiguration& config);
};

/**
 * The type for the Chime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeEndpointProviderBase = EndpointProviderBase<ChimeClientConfiguration, ChimeBuiltInParameters, ChimeClientContextParameters>;

using ChimeDefaultEpProviderBase = BDDEndpointProvider<ChimeClientConfiguration, ChimeBuiltInParameters, ChimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace Chime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CHIME_EXTERN template class AWS_CHIME_API Aws::Endpoint::EndpointProviderBase<
    Chime::Endpoint::ChimeClientConfiguration, Chime::Endpoint::ChimeBuiltInParameters, Chime::Endpoint::ChimeClientContextParameters>;

AWS_CHIME_EXTERN template class AWS_CHIME_API Aws::Endpoint::BDDEndpointProvider<
    Chime::Endpoint::ChimeClientConfiguration, Chime::Endpoint::ChimeBuiltInParameters, Chime::Endpoint::ChimeClientContextParameters>;
}  // namespace Endpoint

namespace Chime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CHIME_API ChimeEndpointProvider : public ChimeDefaultEpProviderBase {
 public:
  using ChimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ChimeEndpointProvider();

  ~ChimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Chime
}  // namespace Aws
