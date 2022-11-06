/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wellarchitected/WellArchitectedEndpointRules.h>


namespace Aws
{
namespace WellArchitected
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WellArchitectedClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WellArchitectedClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WellArchitectedBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WellArchitected Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WellArchitectedEndpointProviderBase =
    EndpointProviderBase<WellArchitectedClientConfiguration, WellArchitectedBuiltInParameters, WellArchitectedClientContextParameters>;

using WellArchitectedDefaultEpProviderBase =
    DefaultEndpointProvider<WellArchitectedClientConfiguration, WellArchitectedBuiltInParameters, WellArchitectedClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WELLARCHITECTED_API WellArchitectedEndpointProvider : public WellArchitectedDefaultEpProviderBase
{
public:
    using WellArchitectedResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WellArchitectedEndpointProvider()
      : WellArchitectedDefaultEpProviderBase(Aws::WellArchitected::WellArchitectedEndpointRules::Rules)
    {}

    ~WellArchitectedEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WellArchitected
} // namespace Aws
