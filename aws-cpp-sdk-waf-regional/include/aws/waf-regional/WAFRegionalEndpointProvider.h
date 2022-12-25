/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/waf-regional/WAFRegionalEndpointRules.h>


namespace Aws
{
namespace WAFRegional
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WAFRegionalClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WAFRegionalClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WAFRegionalBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WAFRegional Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFRegionalEndpointProviderBase =
    EndpointProviderBase<WAFRegionalClientConfiguration, WAFRegionalBuiltInParameters, WAFRegionalClientContextParameters>;

using WAFRegionalDefaultEpProviderBase =
    DefaultEndpointProvider<WAFRegionalClientConfiguration, WAFRegionalBuiltInParameters, WAFRegionalClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WAFREGIONAL_API WAFRegionalEndpointProvider : public WAFRegionalDefaultEpProviderBase
{
public:
    using WAFRegionalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WAFRegionalEndpointProvider()
      : WAFRegionalDefaultEpProviderBase(Aws::WAFRegional::WAFRegionalEndpointRules::Rules)
    {}

    ~WAFRegionalEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WAFRegional
} // namespace Aws
