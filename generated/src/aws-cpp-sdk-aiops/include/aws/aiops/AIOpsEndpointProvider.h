/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/aiops/AIOpsEndpointRules.h>


namespace Aws
{
namespace AIOps
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AIOpsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AIOpsClientConfiguration = Aws::Client::GenericClientConfiguration;
using AIOpsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AIOps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AIOpsEndpointProviderBase =
    EndpointProviderBase<AIOpsClientConfiguration, AIOpsBuiltInParameters, AIOpsClientContextParameters>;

using AIOpsDefaultEpProviderBase =
    DefaultEndpointProvider<AIOpsClientConfiguration, AIOpsBuiltInParameters, AIOpsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AIOPS_API AIOpsEndpointProvider : public AIOpsDefaultEpProviderBase
{
public:
    using AIOpsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AIOpsEndpointProvider()
      : AIOpsDefaultEpProviderBase(Aws::AIOps::AIOpsEndpointRules::GetRulesBlob(), Aws::AIOps::AIOpsEndpointRules::RulesBlobSize)
    {}

    ~AIOpsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AIOps
} // namespace Aws
