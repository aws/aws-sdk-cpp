/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotsitewise/IoTSiteWiseEndpointRules.h>


namespace Aws
{
namespace IoTSiteWise
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTSiteWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTSiteWiseClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTSiteWiseBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTSiteWise Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTSiteWiseEndpointProviderBase =
    EndpointProviderBase<IoTSiteWiseClientConfiguration, IoTSiteWiseBuiltInParameters, IoTSiteWiseClientContextParameters>;

using IoTSiteWiseDefaultEpProviderBase =
    DefaultEndpointProvider<IoTSiteWiseClientConfiguration, IoTSiteWiseBuiltInParameters, IoTSiteWiseClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTSITEWISE_API IoTSiteWiseEndpointProvider : public IoTSiteWiseDefaultEpProviderBase
{
public:
    using IoTSiteWiseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTSiteWiseEndpointProvider()
      : IoTSiteWiseDefaultEpProviderBase(Aws::IoTSiteWise::IoTSiteWiseEndpointRules::Rules)
    {}

    ~IoTSiteWiseEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTSiteWise
} // namespace Aws
