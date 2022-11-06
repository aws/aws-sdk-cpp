/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/m2/MainframeModernizationEndpointRules.h>


namespace Aws
{
namespace MainframeModernization
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MainframeModernizationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MainframeModernizationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MainframeModernizationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MainframeModernization Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MainframeModernizationEndpointProviderBase =
    EndpointProviderBase<MainframeModernizationClientConfiguration, MainframeModernizationBuiltInParameters, MainframeModernizationClientContextParameters>;

using MainframeModernizationDefaultEpProviderBase =
    DefaultEndpointProvider<MainframeModernizationClientConfiguration, MainframeModernizationBuiltInParameters, MainframeModernizationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MAINFRAMEMODERNIZATION_API MainframeModernizationEndpointProvider : public MainframeModernizationDefaultEpProviderBase
{
public:
    using MainframeModernizationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MainframeModernizationEndpointProvider()
      : MainframeModernizationDefaultEpProviderBase(Aws::MainframeModernization::MainframeModernizationEndpointRules::Rules)
    {}

    ~MainframeModernizationEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MainframeModernization
} // namespace Aws
