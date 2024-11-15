/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connectcampaignsv2/ConnectCampaignsV2EndpointRules.h>


namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectCampaignsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectCampaignsV2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using ConnectCampaignsV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectCampaignsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCampaignsV2EndpointProviderBase =
    EndpointProviderBase<ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2BuiltInParameters, ConnectCampaignsV2ClientContextParameters>;

using ConnectCampaignsV2DefaultEpProviderBase =
    DefaultEndpointProvider<ConnectCampaignsV2ClientConfiguration, ConnectCampaignsV2BuiltInParameters, ConnectCampaignsV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCAMPAIGNSV2_API ConnectCampaignsV2EndpointProvider : public ConnectCampaignsV2DefaultEpProviderBase
{
public:
    using ConnectCampaignsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectCampaignsV2EndpointProvider()
      : ConnectCampaignsV2DefaultEpProviderBase(Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::GetRulesBlob(), Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::RulesBlobSize)
    {}

    ~ConnectCampaignsV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConnectCampaignsV2
} // namespace Aws
