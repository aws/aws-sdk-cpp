/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/securitylake/SecurityLakeEndpointRules.h>


namespace Aws
{
namespace SecurityLake
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SecurityLakeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SecurityLakeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SecurityLakeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SecurityLake Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityLakeEndpointProviderBase =
    EndpointProviderBase<SecurityLakeClientConfiguration, SecurityLakeBuiltInParameters, SecurityLakeClientContextParameters>;

using SecurityLakeDefaultEpProviderBase =
    DefaultEndpointProvider<SecurityLakeClientConfiguration, SecurityLakeBuiltInParameters, SecurityLakeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYLAKE_API SecurityLakeEndpointProvider : public SecurityLakeDefaultEpProviderBase
{
public:
    using SecurityLakeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SecurityLakeEndpointProvider()
      : SecurityLakeDefaultEpProviderBase(Aws::SecurityLake::SecurityLakeEndpointRules::Rules)
    {}

    ~SecurityLakeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SecurityLake
} // namespace Aws
