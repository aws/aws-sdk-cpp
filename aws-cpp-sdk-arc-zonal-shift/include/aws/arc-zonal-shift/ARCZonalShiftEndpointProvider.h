/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/arc-zonal-shift/ARCZonalShiftEndpointRules.h>


namespace Aws
{
namespace ARCZonalShift
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ARCZonalShiftClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ARCZonalShiftClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ARCZonalShiftBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ARCZonalShift Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ARCZonalShiftEndpointProviderBase =
    EndpointProviderBase<ARCZonalShiftClientConfiguration, ARCZonalShiftBuiltInParameters, ARCZonalShiftClientContextParameters>;

using ARCZonalShiftDefaultEpProviderBase =
    DefaultEndpointProvider<ARCZonalShiftClientConfiguration, ARCZonalShiftBuiltInParameters, ARCZonalShiftClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ARCZONALSHIFT_API ARCZonalShiftEndpointProvider : public ARCZonalShiftDefaultEpProviderBase
{
public:
    using ARCZonalShiftResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ARCZonalShiftEndpointProvider()
      : ARCZonalShiftDefaultEpProviderBase(Aws::ARCZonalShift::ARCZonalShiftEndpointRules::Rules)
    {}

    ~ARCZonalShiftEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ARCZonalShift
} // namespace Aws
