/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kendra/KendraEndpointRules.h>


namespace Aws
{
namespace kendra
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KendraClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KendraClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KendraBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the kendra Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KendraEndpointProviderBase =
    EndpointProviderBase<KendraClientConfiguration, KendraBuiltInParameters, KendraClientContextParameters>;

using KendraDefaultEpProviderBase =
    DefaultEndpointProvider<KendraClientConfiguration, KendraBuiltInParameters, KendraClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KENDRA_API KendraEndpointProvider : public KendraDefaultEpProviderBase
{
public:
    using KendraResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KendraEndpointProvider()
      : KendraDefaultEpProviderBase(Aws::kendra::KendraEndpointRules::Rules)
    {}

    ~KendraEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace kendra
} // namespace Aws
