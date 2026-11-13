/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesClientConfiguration.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectCases {
namespace Endpoint {
using ConnectCasesClientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectCasesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTCASES_API ConnectCasesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectCasesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectCasesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectCasesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectCasesClientConfiguration& config);
};

/**
 * The type for the ConnectCases Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCasesEndpointProviderBase =
    EndpointProviderBase<ConnectCasesClientConfiguration, ConnectCasesBuiltInParameters, ConnectCasesClientContextParameters>;

using ConnectCasesDefaultEpProviderBase =
    BDDEndpointProvider<ConnectCasesClientConfiguration, ConnectCasesBuiltInParameters, ConnectCasesClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectCases

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTCASES_EXTERN template class AWS_CONNECTCASES_API Aws::Endpoint::EndpointProviderBase<
    ConnectCases::Endpoint::ConnectCasesClientConfiguration, ConnectCases::Endpoint::ConnectCasesBuiltInParameters,
    ConnectCases::Endpoint::ConnectCasesClientContextParameters>;

AWS_CONNECTCASES_EXTERN template class AWS_CONNECTCASES_API Aws::Endpoint::BDDEndpointProvider<
    ConnectCases::Endpoint::ConnectCasesClientConfiguration, ConnectCases::Endpoint::ConnectCasesBuiltInParameters,
    ConnectCases::Endpoint::ConnectCasesClientContextParameters>;
}  // namespace Endpoint

namespace ConnectCases {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCASES_API ConnectCasesEndpointProvider : public ConnectCasesDefaultEpProviderBase {
 public:
  using ConnectCasesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectCasesEndpointProvider();

  ~ConnectCasesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectCases
}  // namespace Aws
