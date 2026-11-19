/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/LexModelBuildingServiceClientConfiguration.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Endpoint {
using LexModelBuildingServiceClientConfiguration = Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LexModelBuildingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LexModelBuildingServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LexModelBuildingServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LexModelBuildingServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LexModelBuildingServiceClientConfiguration& config);
};

/**
 * The type for the LexModelBuildingService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexModelBuildingServiceEndpointProviderBase =
    EndpointProviderBase<LexModelBuildingServiceClientConfiguration, LexModelBuildingServiceBuiltInParameters,
                         LexModelBuildingServiceClientContextParameters>;

using LexModelBuildingServiceDefaultEpProviderBase =
    BDDEndpointProvider<LexModelBuildingServiceClientConfiguration, LexModelBuildingServiceBuiltInParameters,
                        LexModelBuildingServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace LexModelBuildingService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LEXMODELBUILDINGSERVICE_EXTERN template class AWS_LEXMODELBUILDINGSERVICE_API
    Aws::Endpoint::EndpointProviderBase<LexModelBuildingService::Endpoint::LexModelBuildingServiceClientConfiguration,
                                        LexModelBuildingService::Endpoint::LexModelBuildingServiceBuiltInParameters,
                                        LexModelBuildingService::Endpoint::LexModelBuildingServiceClientContextParameters>;

AWS_LEXMODELBUILDINGSERVICE_EXTERN template class AWS_LEXMODELBUILDINGSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<LexModelBuildingService::Endpoint::LexModelBuildingServiceClientConfiguration,
                                       LexModelBuildingService::Endpoint::LexModelBuildingServiceBuiltInParameters,
                                       LexModelBuildingService::Endpoint::LexModelBuildingServiceClientContextParameters>;
}  // namespace Endpoint

namespace LexModelBuildingService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceEndpointProvider : public LexModelBuildingServiceDefaultEpProviderBase {
 public:
  using LexModelBuildingServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LexModelBuildingServiceEndpointProvider();

  ~LexModelBuildingServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LexModelBuildingService
}  // namespace Aws
