/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLensClientConfiguration.h>
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectContactLens {
namespace Endpoint {
using ConnectContactLensClientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectContactLensClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTCONTACTLENS_API ConnectContactLensBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectContactLensBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectContactLensClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectContactLensClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectContactLensClientConfiguration& config);
};

/**
 * The type for the ConnectContactLens Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectContactLensEndpointProviderBase =
    EndpointProviderBase<ConnectContactLensClientConfiguration, ConnectContactLensBuiltInParameters,
                         ConnectContactLensClientContextParameters>;

using ConnectContactLensDefaultEpProviderBase =
    BDDEndpointProvider<ConnectContactLensClientConfiguration, ConnectContactLensBuiltInParameters,
                        ConnectContactLensClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectContactLens

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTCONTACTLENS_EXTERN template class AWS_CONNECTCONTACTLENS_API Aws::Endpoint::EndpointProviderBase<
    ConnectContactLens::Endpoint::ConnectContactLensClientConfiguration, ConnectContactLens::Endpoint::ConnectContactLensBuiltInParameters,
    ConnectContactLens::Endpoint::ConnectContactLensClientContextParameters>;

AWS_CONNECTCONTACTLENS_EXTERN template class AWS_CONNECTCONTACTLENS_API Aws::Endpoint::BDDEndpointProvider<
    ConnectContactLens::Endpoint::ConnectContactLensClientConfiguration, ConnectContactLens::Endpoint::ConnectContactLensBuiltInParameters,
    ConnectContactLens::Endpoint::ConnectContactLensClientContextParameters>;
}  // namespace Endpoint

namespace ConnectContactLens {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCONTACTLENS_API ConnectContactLensEndpointProvider : public ConnectContactLensDefaultEpProviderBase {
 public:
  using ConnectContactLensResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectContactLensEndpointProvider();

  ~ConnectContactLensEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectContactLens
}  // namespace Aws
