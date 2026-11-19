/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-runtime/LexRuntimeV2ClientConfiguration.h>
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>

namespace Aws {
namespace LexRuntimeV2 {
namespace Endpoint {
using LexRuntimeV2ClientConfiguration = Aws::LexRuntimeV2::LexRuntimeV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LexRuntimeV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LEXRUNTIMEV2_API LexRuntimeV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LexRuntimeV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LexRuntimeV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LexRuntimeV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LexRuntimeV2ClientConfiguration& config);
};

/**
 * The type for the LexRuntimeV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexRuntimeV2EndpointProviderBase =
    EndpointProviderBase<LexRuntimeV2ClientConfiguration, LexRuntimeV2BuiltInParameters, LexRuntimeV2ClientContextParameters>;

using LexRuntimeV2DefaultEpProviderBase =
    BDDEndpointProvider<LexRuntimeV2ClientConfiguration, LexRuntimeV2BuiltInParameters, LexRuntimeV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace LexRuntimeV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LEXRUNTIMEV2_EXTERN template class AWS_LEXRUNTIMEV2_API Aws::Endpoint::EndpointProviderBase<
    LexRuntimeV2::Endpoint::LexRuntimeV2ClientConfiguration, LexRuntimeV2::Endpoint::LexRuntimeV2BuiltInParameters,
    LexRuntimeV2::Endpoint::LexRuntimeV2ClientContextParameters>;

AWS_LEXRUNTIMEV2_EXTERN template class AWS_LEXRUNTIMEV2_API Aws::Endpoint::BDDEndpointProvider<
    LexRuntimeV2::Endpoint::LexRuntimeV2ClientConfiguration, LexRuntimeV2::Endpoint::LexRuntimeV2BuiltInParameters,
    LexRuntimeV2::Endpoint::LexRuntimeV2ClientContextParameters>;
}  // namespace Endpoint

namespace LexRuntimeV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LEXRUNTIMEV2_API LexRuntimeV2EndpointProvider : public LexRuntimeV2DefaultEpProviderBase {
 public:
  using LexRuntimeV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LexRuntimeV2EndpointProvider();

  ~LexRuntimeV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LexRuntimeV2
}  // namespace Aws
