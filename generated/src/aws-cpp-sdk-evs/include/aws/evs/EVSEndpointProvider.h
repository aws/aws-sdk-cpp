/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/evs/EVSEndpointRules.h>


namespace Aws
{
namespace EVS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EVSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EVSClientConfiguration = Aws::Client::GenericClientConfiguration;
using EVSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EVS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EVSEndpointProviderBase =
    EndpointProviderBase<EVSClientConfiguration, EVSBuiltInParameters, EVSClientContextParameters>;

using EVSDefaultEpProviderBase =
    DefaultEndpointProvider<EVSClientConfiguration, EVSBuiltInParameters, EVSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EVS_API EVSEndpointProvider : public EVSDefaultEpProviderBase
{
public:
    using EVSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EVSEndpointProvider()
      : EVSDefaultEpProviderBase(Aws::EVS::EVSEndpointRules::GetRulesBlob(), Aws::EVS::EVSEndpointRules::RulesBlobSize)
    {}

    ~EVSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EVS
} // namespace Aws
