/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecr-public/ECRPublicEndpointRules.h>


namespace Aws
{
namespace ECRPublic
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ECRPublicClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ECRPublicClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ECRPublicBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ECRPublic Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECRPublicEndpointProviderBase =
    EndpointProviderBase<ECRPublicClientConfiguration, ECRPublicBuiltInParameters, ECRPublicClientContextParameters>;

using ECRPublicDefaultEpProviderBase =
    DefaultEndpointProvider<ECRPublicClientConfiguration, ECRPublicBuiltInParameters, ECRPublicClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ECRPUBLIC_API ECRPublicEndpointProvider : public ECRPublicDefaultEpProviderBase
{
public:
    using ECRPublicResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ECRPublicEndpointProvider()
      : ECRPublicDefaultEpProviderBase(Aws::ECRPublic::ECRPublicEndpointRules::Rules)
    {}

    ~ECRPublicEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ECRPublic
} // namespace Aws
