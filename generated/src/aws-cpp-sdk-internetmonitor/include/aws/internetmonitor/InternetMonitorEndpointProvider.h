/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/internetmonitor/InternetMonitorEndpointRules.h>


namespace Aws
{
namespace InternetMonitor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using InternetMonitorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using InternetMonitorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using InternetMonitorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the InternetMonitor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InternetMonitorEndpointProviderBase =
    EndpointProviderBase<InternetMonitorClientConfiguration, InternetMonitorBuiltInParameters, InternetMonitorClientContextParameters>;

using InternetMonitorDefaultEpProviderBase =
    DefaultEndpointProvider<InternetMonitorClientConfiguration, InternetMonitorBuiltInParameters, InternetMonitorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INTERNETMONITOR_API InternetMonitorEndpointProvider : public InternetMonitorDefaultEpProviderBase
{
public:
    using InternetMonitorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    InternetMonitorEndpointProvider()
      : InternetMonitorDefaultEpProviderBase(Aws::InternetMonitor::InternetMonitorEndpointRules::GetRulesBlob(), Aws::InternetMonitor::InternetMonitorEndpointRules::RulesBlobSize)
    {}

    ~InternetMonitorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace InternetMonitor
} // namespace Aws
