/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/LexModelsV2ClientConfiguration.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Endpoint {
using LexModelsV2ClientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LexModelsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LEXMODELSV2_API LexModelsV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LexModelsV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LexModelsV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LexModelsV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LexModelsV2ClientConfiguration& config);
};

/**
 * The type for the LexModelsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexModelsV2EndpointProviderBase =
    EndpointProviderBase<LexModelsV2ClientConfiguration, LexModelsV2BuiltInParameters, LexModelsV2ClientContextParameters>;

using LexModelsV2DefaultEpProviderBase =
    BDDEndpointProvider<LexModelsV2ClientConfiguration, LexModelsV2BuiltInParameters, LexModelsV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace LexModelsV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LEXMODELSV2_EXTERN template class AWS_LEXMODELSV2_API Aws::Endpoint::EndpointProviderBase<
    LexModelsV2::Endpoint::LexModelsV2ClientConfiguration, LexModelsV2::Endpoint::LexModelsV2BuiltInParameters,
    LexModelsV2::Endpoint::LexModelsV2ClientContextParameters>;

AWS_LEXMODELSV2_EXTERN template class AWS_LEXMODELSV2_API Aws::Endpoint::BDDEndpointProvider<
    LexModelsV2::Endpoint::LexModelsV2ClientConfiguration, LexModelsV2::Endpoint::LexModelsV2BuiltInParameters,
    LexModelsV2::Endpoint::LexModelsV2ClientContextParameters>;
}  // namespace Endpoint

namespace LexModelsV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LEXMODELSV2_API LexModelsV2EndpointProvider : public LexModelsV2DefaultEpProviderBase {
 public:
  using LexModelsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LexModelsV2EndpointProvider();

  ~LexModelsV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LexModelsV2
}  // namespace Aws
