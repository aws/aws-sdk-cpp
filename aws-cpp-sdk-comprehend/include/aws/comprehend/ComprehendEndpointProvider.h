/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/comprehend/ComprehendEndpointRules.h>


namespace Aws
{
namespace Comprehend
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ComprehendClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ComprehendClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ComprehendBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Comprehend Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComprehendEndpointProviderBase =
    EndpointProviderBase<ComprehendClientConfiguration, ComprehendBuiltInParameters, ComprehendClientContextParameters>;

using ComprehendDefaultEpProviderBase =
    DefaultEndpointProvider<ComprehendClientConfiguration, ComprehendBuiltInParameters, ComprehendClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COMPREHEND_API ComprehendEndpointProvider : public ComprehendDefaultEpProviderBase
{
public:
    using ComprehendResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ComprehendEndpointProvider()
      : ComprehendDefaultEpProviderBase(Aws::Comprehend::ComprehendEndpointRules::Rules)
    {}

    ~ComprehendEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Comprehend
} // namespace Aws
