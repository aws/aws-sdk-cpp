/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/freetier/FreeTierEndpointRules.h>


namespace Aws
{
namespace FreeTier
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FreeTierClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FreeTierClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FreeTierBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FreeTier Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FreeTierEndpointProviderBase =
    EndpointProviderBase<FreeTierClientConfiguration, FreeTierBuiltInParameters, FreeTierClientContextParameters>;

using FreeTierDefaultEpProviderBase =
    DefaultEndpointProvider<FreeTierClientConfiguration, FreeTierBuiltInParameters, FreeTierClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FREETIER_API FreeTierEndpointProvider : public FreeTierDefaultEpProviderBase
{
public:
    using FreeTierResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FreeTierEndpointProvider()
      : FreeTierDefaultEpProviderBase(Aws::FreeTier::FreeTierEndpointRules::GetRulesBlob(), Aws::FreeTier::FreeTierEndpointRules::RulesBlobSize)
    {}

    ~FreeTierEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FreeTier
} // namespace Aws
