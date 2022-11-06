/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fms/FMSEndpointRules.h>


namespace Aws
{
namespace FMS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FMSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FMSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FMSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FMS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FMSEndpointProviderBase =
    EndpointProviderBase<FMSClientConfiguration, FMSBuiltInParameters, FMSClientContextParameters>;

using FMSDefaultEpProviderBase =
    DefaultEndpointProvider<FMSClientConfiguration, FMSBuiltInParameters, FMSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FMS_API FMSEndpointProvider : public FMSDefaultEpProviderBase
{
public:
    using FMSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FMSEndpointProvider()
      : FMSDefaultEpProviderBase(Aws::FMS::FMSEndpointRules::Rules)
    {}

    ~FMSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FMS
} // namespace Aws
