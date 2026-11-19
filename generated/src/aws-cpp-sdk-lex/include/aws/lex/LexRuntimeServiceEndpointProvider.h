/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex/LexRuntimeServiceClientConfiguration.h>
#include <aws/lex/LexRuntimeService_EXPORTS.h>

namespace Aws {
namespace LexRuntimeService {
namespace Endpoint {
using LexRuntimeServiceClientConfiguration = Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using LexRuntimeServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_LEXRUNTIMESERVICE_API LexRuntimeServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~LexRuntimeServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const LexRuntimeServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const LexRuntimeServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const LexRuntimeServiceClientConfiguration& config);
};

/**
 * The type for the LexRuntimeService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexRuntimeServiceEndpointProviderBase = EndpointProviderBase<LexRuntimeServiceClientConfiguration, LexRuntimeServiceBuiltInParameters,
                                                                   LexRuntimeServiceClientContextParameters>;

using LexRuntimeServiceDefaultEpProviderBase =
    BDDEndpointProvider<LexRuntimeServiceClientConfiguration, LexRuntimeServiceBuiltInParameters, LexRuntimeServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace LexRuntimeService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_LEXRUNTIMESERVICE_EXTERN template class AWS_LEXRUNTIMESERVICE_API Aws::Endpoint::EndpointProviderBase<
    LexRuntimeService::Endpoint::LexRuntimeServiceClientConfiguration, LexRuntimeService::Endpoint::LexRuntimeServiceBuiltInParameters,
    LexRuntimeService::Endpoint::LexRuntimeServiceClientContextParameters>;

AWS_LEXRUNTIMESERVICE_EXTERN template class AWS_LEXRUNTIMESERVICE_API Aws::Endpoint::BDDEndpointProvider<
    LexRuntimeService::Endpoint::LexRuntimeServiceClientConfiguration, LexRuntimeService::Endpoint::LexRuntimeServiceBuiltInParameters,
    LexRuntimeService::Endpoint::LexRuntimeServiceClientContextParameters>;
}  // namespace Endpoint

namespace LexRuntimeService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_LEXRUNTIMESERVICE_API LexRuntimeServiceEndpointProvider : public LexRuntimeServiceDefaultEpProviderBase {
 public:
  using LexRuntimeServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  LexRuntimeServiceEndpointProvider();

  ~LexRuntimeServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace LexRuntimeService
}  // namespace Aws
