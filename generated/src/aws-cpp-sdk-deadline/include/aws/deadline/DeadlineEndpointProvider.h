/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/deadline/DeadlineEndpointRules.h>


namespace Aws
{
namespace deadline
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DeadlineClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DeadlineClientConfiguration = Aws::Client::GenericClientConfiguration;
using DeadlineBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the deadline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DeadlineEndpointProviderBase =
    EndpointProviderBase<DeadlineClientConfiguration, DeadlineBuiltInParameters, DeadlineClientContextParameters>;

using DeadlineDefaultEpProviderBase =
    DefaultEndpointProvider<DeadlineClientConfiguration, DeadlineBuiltInParameters, DeadlineClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DEADLINE_API DeadlineEndpointProvider : public DeadlineDefaultEpProviderBase
{
public:
    using DeadlineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DeadlineEndpointProvider()
      : DeadlineDefaultEpProviderBase(Aws::deadline::DeadlineEndpointRules::GetRulesBlob(), Aws::deadline::DeadlineEndpointRules::RulesBlobSize)
    {}

    ~DeadlineEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace deadline
} // namespace Aws
