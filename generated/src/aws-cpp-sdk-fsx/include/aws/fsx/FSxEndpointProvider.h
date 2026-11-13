/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSxClientConfiguration.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Endpoint {
using FSxClientConfiguration = Aws::FSx::FSxClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FSxClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FSX_API FSxBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FSxBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FSxClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FSxClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FSxClientConfiguration& config);
};

/**
 * The type for the FSx Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FSxEndpointProviderBase = EndpointProviderBase<FSxClientConfiguration, FSxBuiltInParameters, FSxClientContextParameters>;

using FSxDefaultEpProviderBase = BDDEndpointProvider<FSxClientConfiguration, FSxBuiltInParameters, FSxClientContextParameters>;

}  // namespace Endpoint
}  // namespace FSx

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FSX_EXTERN template class AWS_FSX_API Aws::Endpoint::EndpointProviderBase<
    FSx::Endpoint::FSxClientConfiguration, FSx::Endpoint::FSxBuiltInParameters, FSx::Endpoint::FSxClientContextParameters>;

AWS_FSX_EXTERN template class AWS_FSX_API Aws::Endpoint::BDDEndpointProvider<
    FSx::Endpoint::FSxClientConfiguration, FSx::Endpoint::FSxBuiltInParameters, FSx::Endpoint::FSxClientContextParameters>;
}  // namespace Endpoint

namespace FSx {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FSX_API FSxEndpointProvider : public FSxDefaultEpProviderBase {
 public:
  using FSxResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FSxEndpointProvider();

  ~FSxEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace FSx
}  // namespace Aws
