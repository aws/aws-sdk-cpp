/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connectcampaigns/ConnectCampaignsEndpointRules.h>


namespace Aws
{
namespace ConnectCampaigns
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectCampaignsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectCampaignsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConnectCampaignsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectCampaigns Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCampaignsEndpointProviderBase =
    EndpointProviderBase<ConnectCampaignsClientConfiguration, ConnectCampaignsBuiltInParameters, ConnectCampaignsClientContextParameters>;

using ConnectCampaignsDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectCampaignsClientConfiguration, ConnectCampaignsBuiltInParameters, ConnectCampaignsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsEndpointProvider : public ConnectCampaignsDefaultEpProviderBase
{
public:
    using ConnectCampaignsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectCampaignsEndpointProvider()
      : ConnectCampaignsDefaultEpProviderBase(Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::Rules)
    {}

    ~ConnectCampaignsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConnectCampaigns
} // namespace Aws
