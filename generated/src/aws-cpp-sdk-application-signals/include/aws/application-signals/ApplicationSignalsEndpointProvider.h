/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/application-signals/ApplicationSignalsEndpointRules.h>


namespace Aws
{
namespace ApplicationSignals
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApplicationSignalsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApplicationSignalsClientConfiguration = Aws::Client::GenericClientConfiguration;
using ApplicationSignalsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApplicationSignals Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationSignalsEndpointProviderBase =
    EndpointProviderBase<ApplicationSignalsClientConfiguration, ApplicationSignalsBuiltInParameters, ApplicationSignalsClientContextParameters>;

using ApplicationSignalsDefaultEpProviderBase =
    DefaultEndpointProvider<ApplicationSignalsClientConfiguration, ApplicationSignalsBuiltInParameters, ApplicationSignalsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONSIGNALS_API ApplicationSignalsEndpointProvider : public ApplicationSignalsDefaultEpProviderBase
{
public:
    using ApplicationSignalsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApplicationSignalsEndpointProvider()
      : ApplicationSignalsDefaultEpProviderBase(Aws::ApplicationSignals::ApplicationSignalsEndpointRules::GetRulesBlob(), Aws::ApplicationSignals::ApplicationSignalsEndpointRules::RulesBlobSize)
    {}

    ~ApplicationSignalsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApplicationSignals
} // namespace Aws
