/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/finspace-data/FinSpaceDataEndpointRules.h>


namespace Aws
{
namespace FinSpaceData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FinSpaceDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FinSpaceDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FinSpaceDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FinSpaceData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FinSpaceDataEndpointProviderBase =
    EndpointProviderBase<FinSpaceDataClientConfiguration, FinSpaceDataBuiltInParameters, FinSpaceDataClientContextParameters>;

using FinSpaceDataDefaultEpProviderBase =
    DefaultEndpointProvider<FinSpaceDataClientConfiguration, FinSpaceDataBuiltInParameters, FinSpaceDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FINSPACEDATA_API FinSpaceDataEndpointProvider : public FinSpaceDataDefaultEpProviderBase
{
public:
    using FinSpaceDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FinSpaceDataEndpointProvider()
      : FinSpaceDataDefaultEpProviderBase(Aws::FinSpaceData::FinSpaceDataEndpointRules::Rules)
    {}

    ~FinSpaceDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FinSpaceData
} // namespace Aws
