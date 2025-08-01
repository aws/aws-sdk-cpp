/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/arc-region-switch/ARCRegionswitchEndpointRules.h>


namespace Aws
{
namespace ARCRegionswitch
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ARCRegionswitchClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ARCRegionswitchClientConfiguration = Aws::Client::GenericClientConfiguration;
using ARCRegionswitchBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ARCRegionswitch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ARCRegionswitchEndpointProviderBase =
    EndpointProviderBase<ARCRegionswitchClientConfiguration, ARCRegionswitchBuiltInParameters, ARCRegionswitchClientContextParameters>;

using ARCRegionswitchDefaultEpProviderBase =
    DefaultEndpointProvider<ARCRegionswitchClientConfiguration, ARCRegionswitchBuiltInParameters, ARCRegionswitchClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ARCREGIONSWITCH_API ARCRegionswitchEndpointProvider : public ARCRegionswitchDefaultEpProviderBase
{
public:
    using ARCRegionswitchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ARCRegionswitchEndpointProvider()
      : ARCRegionswitchDefaultEpProviderBase(Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::GetRulesBlob(), Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::RulesBlobSize)
    {}

    ~ARCRegionswitchEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ARCRegionswitch
} // namespace Aws
