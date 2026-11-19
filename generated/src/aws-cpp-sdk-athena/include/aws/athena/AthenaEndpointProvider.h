/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaClientConfiguration.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Athena {
namespace Endpoint {
using AthenaClientConfiguration = Aws::Athena::AthenaClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AthenaClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ATHENA_API AthenaBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AthenaBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AthenaClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AthenaClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AthenaClientConfiguration& config);
};

/**
 * The type for the Athena Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AthenaEndpointProviderBase = EndpointProviderBase<AthenaClientConfiguration, AthenaBuiltInParameters, AthenaClientContextParameters>;

using AthenaDefaultEpProviderBase = BDDEndpointProvider<AthenaClientConfiguration, AthenaBuiltInParameters, AthenaClientContextParameters>;

}  // namespace Endpoint
}  // namespace Athena

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ATHENA_EXTERN template class AWS_ATHENA_API
    Aws::Endpoint::EndpointProviderBase<Athena::Endpoint::AthenaClientConfiguration, Athena::Endpoint::AthenaBuiltInParameters,
                                        Athena::Endpoint::AthenaClientContextParameters>;

AWS_ATHENA_EXTERN template class AWS_ATHENA_API
    Aws::Endpoint::BDDEndpointProvider<Athena::Endpoint::AthenaClientConfiguration, Athena::Endpoint::AthenaBuiltInParameters,
                                       Athena::Endpoint::AthenaClientContextParameters>;
}  // namespace Endpoint

namespace Athena {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ATHENA_API AthenaEndpointProvider : public AthenaDefaultEpProviderBase {
 public:
  using AthenaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AthenaEndpointProvider();

  ~AthenaEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Athena
}  // namespace Aws
