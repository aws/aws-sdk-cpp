/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot1click-projects/IoT1ClickProjectsEndpointRules.h>


namespace Aws
{
namespace IoT1ClickProjects
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoT1ClickProjectsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoT1ClickProjectsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoT1ClickProjectsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoT1ClickProjects Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoT1ClickProjectsEndpointProviderBase =
    EndpointProviderBase<IoT1ClickProjectsClientConfiguration, IoT1ClickProjectsBuiltInParameters, IoT1ClickProjectsClientContextParameters>;

using IoT1ClickProjectsDefaultEpProviderBase =
    DefaultEndpointProvider<IoT1ClickProjectsClientConfiguration, IoT1ClickProjectsBuiltInParameters, IoT1ClickProjectsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOT1CLICKPROJECTS_API IoT1ClickProjectsEndpointProvider : public IoT1ClickProjectsDefaultEpProviderBase
{
public:
    using IoT1ClickProjectsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoT1ClickProjectsEndpointProvider()
      : IoT1ClickProjectsDefaultEpProviderBase(Aws::IoT1ClickProjects::IoT1ClickProjectsEndpointRules::Rules)
    {}

    ~IoT1ClickProjectsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoT1ClickProjects
} // namespace Aws
