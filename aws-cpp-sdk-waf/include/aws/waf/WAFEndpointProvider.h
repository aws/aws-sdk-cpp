/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/waf/WAFEndpointRules.h>


namespace Aws
{
namespace WAF
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WAFClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WAFClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WAFBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WAF Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFEndpointProviderBase =
    EndpointProviderBase<WAFClientConfiguration, WAFBuiltInParameters, WAFClientContextParameters>;

using WAFDefaultEpProviderBase =
    DefaultEndpointProvider<WAFClientConfiguration, WAFBuiltInParameters, WAFClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WAF_API WAFEndpointProvider : public WAFDefaultEpProviderBase
{
public:
    using WAFResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WAFEndpointProvider()
      : WAFDefaultEpProviderBase(Aws::WAF::WAFEndpointRules::Rules)
    {}

    ~WAFEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WAF
} // namespace Aws
