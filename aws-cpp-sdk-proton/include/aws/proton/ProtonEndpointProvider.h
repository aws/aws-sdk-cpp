/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/proton/ProtonEndpointRules.h>


namespace Aws
{
namespace Proton
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ProtonClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ProtonClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ProtonBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Proton Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ProtonEndpointProviderBase =
    EndpointProviderBase<ProtonClientConfiguration, ProtonBuiltInParameters, ProtonClientContextParameters>;

using ProtonDefaultEpProviderBase =
    DefaultEndpointProvider<ProtonClientConfiguration, ProtonBuiltInParameters, ProtonClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PROTON_API ProtonEndpointProvider : public ProtonDefaultEpProviderBase
{
public:
    using ProtonResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ProtonEndpointProvider()
      : ProtonDefaultEpProviderBase(Aws::Proton::ProtonEndpointRules::Rules)
    {}

    ~ProtonEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Proton
} // namespace Aws
