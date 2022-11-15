/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/guardduty/GuardDutyEndpointRules.h>


namespace Aws
{
namespace GuardDuty
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GuardDutyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GuardDutyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GuardDutyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GuardDuty Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GuardDutyEndpointProviderBase =
    EndpointProviderBase<GuardDutyClientConfiguration, GuardDutyBuiltInParameters, GuardDutyClientContextParameters>;

using GuardDutyDefaultEpProviderBase =
    DefaultEndpointProvider<GuardDutyClientConfiguration, GuardDutyBuiltInParameters, GuardDutyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GUARDDUTY_API GuardDutyEndpointProvider : public GuardDutyDefaultEpProviderBase
{
public:
    using GuardDutyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GuardDutyEndpointProvider()
      : GuardDutyDefaultEpProviderBase(Aws::GuardDuty::GuardDutyEndpointRules::Rules)
    {}

    ~GuardDutyEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GuardDuty
} // namespace Aws
