/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/macie/MacieEndpointRules.h>


namespace Aws
{
namespace Macie
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MacieClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MacieClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MacieBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Macie Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MacieEndpointProviderBase =
    EndpointProviderBase<MacieClientConfiguration, MacieBuiltInParameters, MacieClientContextParameters>;

using MacieDefaultEpProviderBase =
    DefaultEndpointProvider<MacieClientConfiguration, MacieBuiltInParameters, MacieClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MACIE_API MacieEndpointProvider : public MacieDefaultEpProviderBase
{
public:
    using MacieResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MacieEndpointProvider()
      : MacieDefaultEpProviderBase(Aws::Macie::MacieEndpointRules::Rules)
    {}

    ~MacieEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Macie
} // namespace Aws
