/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cleanroomsml/CleanRoomsMLEndpointRules.h>


namespace Aws
{
namespace CleanRoomsML
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CleanRoomsMLClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CleanRoomsMLClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CleanRoomsMLBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CleanRoomsML Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CleanRoomsMLEndpointProviderBase =
    EndpointProviderBase<CleanRoomsMLClientConfiguration, CleanRoomsMLBuiltInParameters, CleanRoomsMLClientContextParameters>;

using CleanRoomsMLDefaultEpProviderBase =
    DefaultEndpointProvider<CleanRoomsMLClientConfiguration, CleanRoomsMLBuiltInParameters, CleanRoomsMLClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLEANROOMSML_API CleanRoomsMLEndpointProvider : public CleanRoomsMLDefaultEpProviderBase
{
public:
    using CleanRoomsMLResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CleanRoomsMLEndpointProvider()
      : CleanRoomsMLDefaultEpProviderBase(Aws::CleanRoomsML::CleanRoomsMLEndpointRules::GetRulesBlob(), Aws::CleanRoomsML::CleanRoomsMLEndpointRules::RulesBlobSize)
    {}

    ~CleanRoomsMLEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CleanRoomsML
} // namespace Aws
