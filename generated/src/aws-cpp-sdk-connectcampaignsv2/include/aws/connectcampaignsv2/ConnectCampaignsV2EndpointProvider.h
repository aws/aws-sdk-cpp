/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2ClientConfiguration.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Endpoint {
using ConnectCampaignsV2ClientConfiguration = Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ConnectCampaignsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CONNECTCAMPAIGNSV2_API ConnectCampaignsV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ConnectCampaignsV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ConnectCampaignsV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ConnectCampaignsV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ConnectCampaignsV2ClientConfiguration& config);
};

/**
 * The type for the ConnectCampaignsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCampaignsV2EndpointProviderBase =
    EndpointProviderBase<ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2BuiltInParameters,
                         ConnectCampaignsV2ClientContextParameters>;

using ConnectCampaignsV2DefaultEpProviderBase =
    BDDEndpointProvider<ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2BuiltInParameters,
                        ConnectCampaignsV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace ConnectCampaignsV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CONNECTCAMPAIGNSV2_EXTERN template class AWS_CONNECTCAMPAIGNSV2_API Aws::Endpoint::EndpointProviderBase<
    ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2::Endpoint::ConnectCampaignsV2BuiltInParameters,
    ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientContextParameters>;

AWS_CONNECTCAMPAIGNSV2_EXTERN template class AWS_CONNECTCAMPAIGNSV2_API Aws::Endpoint::BDDEndpointProvider<
    ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2::Endpoint::ConnectCampaignsV2BuiltInParameters,
    ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientContextParameters>;
}  // namespace Endpoint

namespace ConnectCampaignsV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCAMPAIGNSV2_API ConnectCampaignsV2EndpointProvider : public ConnectCampaignsV2DefaultEpProviderBase {
 public:
  using ConnectCampaignsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ConnectCampaignsV2EndpointProvider();

  ~ConnectCampaignsV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ConnectCampaignsV2
}  // namespace Aws
