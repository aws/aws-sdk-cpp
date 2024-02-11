/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/b2bi/B2BIEndpointRules.h>


namespace Aws
{
namespace B2BI
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using B2BIClientContextParameters = Aws::Endpoint::ClientContextParameters;

using B2BIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using B2BIBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the B2BI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using B2BIEndpointProviderBase =
    EndpointProviderBase<B2BIClientConfiguration, B2BIBuiltInParameters, B2BIClientContextParameters>;

using B2BIDefaultEpProviderBase =
    DefaultEndpointProvider<B2BIClientConfiguration, B2BIBuiltInParameters, B2BIClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_B2BI_API B2BIEndpointProvider : public B2BIDefaultEpProviderBase
{
public:
    using B2BIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    B2BIEndpointProvider()
      : B2BIDefaultEpProviderBase(Aws::B2BI::B2BIEndpointRules::GetRulesBlob(), Aws::B2BI::B2BIEndpointRules::RulesBlobSize)
    {}

    ~B2BIEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace B2BI
} // namespace Aws
