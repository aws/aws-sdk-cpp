/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/json-rpc-10/JSONRPC10ClientConfiguration.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
namespace Endpoint {
using JSONRPC10ClientConfiguration = Aws::JSONRPC10::JSONRPC10ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using JSONRPC10ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_JSONRPC10_API JSONRPC10BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~JSONRPC10BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const JSONRPC10ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const JSONRPC10ClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the JSONRPC10 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using JSONRPC10EndpointProviderBase =
    EndpointProviderBase<JSONRPC10ClientConfiguration, JSONRPC10BuiltInParameters, JSONRPC10ClientContextParameters>;

using JSONRPC10DefaultEpProviderBase =
    DefaultEndpointProvider<JSONRPC10ClientConfiguration, JSONRPC10BuiltInParameters, JSONRPC10ClientContextParameters>;

}  // namespace Endpoint
}  // namespace JSONRPC10

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_JSONRPC10_EXTERN template class AWS_JSONRPC10_API
    Aws::Endpoint::EndpointProviderBase<JSONRPC10::Endpoint::JSONRPC10ClientConfiguration, JSONRPC10::Endpoint::JSONRPC10BuiltInParameters,
                                        JSONRPC10::Endpoint::JSONRPC10ClientContextParameters>;

AWS_JSONRPC10_EXTERN template class AWS_JSONRPC10_API Aws::Endpoint::DefaultEndpointProvider<
    JSONRPC10::Endpoint::JSONRPC10ClientConfiguration, JSONRPC10::Endpoint::JSONRPC10BuiltInParameters,
    JSONRPC10::Endpoint::JSONRPC10ClientContextParameters>;
}  // namespace Endpoint

namespace JSONRPC10 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_JSONRPC10_API JSONRPC10EndpointProvider : public JSONRPC10DefaultEpProviderBase {
 public:
  using JSONRPC10ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  JSONRPC10EndpointProvider();

  ~JSONRPC10EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace JSONRPC10
}  // namespace Aws
