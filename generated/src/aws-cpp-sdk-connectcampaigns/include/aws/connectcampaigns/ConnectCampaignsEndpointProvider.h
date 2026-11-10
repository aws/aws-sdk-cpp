/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaignsClientConfiguration.h>
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectCampaigns {
namespace Endpoint {
using ConnectCampaignsClientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectCampaignsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectCampaignsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectCampaignsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectCampaignsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectCampaignsClientConfiguration& config);
};

/**
 * The type for the ConnectCampaigns Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCampaignsEndpointProviderBase =
    EndpointProviderBase<ConnectCampaignsClientConfiguration, ConnectCampaignsBuiltInParameters, ConnectCampaignsClientContextParameters>;

using ConnectCampaignsDefaultEpProviderBase =
    BDDEndpointProvider<ConnectCampaignsClientConfiguration, ConnectCampaignsBuiltInParameters, ConnectCampaignsClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectCampaigns

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTCAMPAIGNS_EXTERN template class AWS_CONNECTCAMPAIGNS_API Aws::Endpoint::EndpointProviderBase<
    ConnectCampaigns::Endpoint::ConnectCampaignsClientConfiguration, ConnectCampaigns::Endpoint::ConnectCampaignsBuiltInParameters,
    ConnectCampaigns::Endpoint::ConnectCampaignsClientContextParameters>;

AWS_CONNECTCAMPAIGNS_EXTERN template class AWS_CONNECTCAMPAIGNS_API Aws::Endpoint::BDDEndpointProvider<
    ConnectCampaigns::Endpoint::ConnectCampaignsClientConfiguration, ConnectCampaigns::Endpoint::ConnectCampaignsBuiltInParameters,
    ConnectCampaigns::Endpoint::ConnectCampaignsClientContextParameters>;
}  // namespace Endpoint

namespace ConnectCampaigns {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsEndpointProvider : public ConnectCampaignsDefaultEpProviderBase {
 public:
  using ConnectCampaignsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectCampaignsEndpointProvider();

  ~ConnectCampaignsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectCampaigns
}  // namespace Aws
