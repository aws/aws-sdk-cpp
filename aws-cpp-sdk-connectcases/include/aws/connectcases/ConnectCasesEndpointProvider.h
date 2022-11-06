/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connectcases/ConnectCasesEndpointRules.h>


namespace Aws
{
namespace ConnectCases
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConnectCasesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConnectCasesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConnectCasesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConnectCases Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConnectCasesEndpointProviderBase =
    EndpointProviderBase<ConnectCasesClientConfiguration, ConnectCasesBuiltInParameters, ConnectCasesClientContextParameters>;

using ConnectCasesDefaultEpProviderBase =
    DefaultEndpointProvider<ConnectCasesClientConfiguration, ConnectCasesBuiltInParameters, ConnectCasesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONNECTCASES_API ConnectCasesEndpointProvider : public ConnectCasesDefaultEpProviderBase
{
public:
    using ConnectCasesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConnectCasesEndpointProvider()
      : ConnectCasesDefaultEpProviderBase(Aws::ConnectCases::ConnectCasesEndpointRules::Rules)
    {}

    ~ConnectCasesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConnectCases
} // namespace Aws
