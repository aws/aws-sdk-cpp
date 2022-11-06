/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointRules.h>


namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisAnalyticsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisAnalyticsV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisAnalyticsV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisAnalyticsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisAnalyticsV2EndpointProviderBase =
    EndpointProviderBase<KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2BuiltInParameters, KinesisAnalyticsV2ClientContextParameters>;

using KinesisAnalyticsV2DefaultEpProviderBase =
    DefaultEndpointProvider<KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2BuiltInParameters, KinesisAnalyticsV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISANALYTICSV2_API KinesisAnalyticsV2EndpointProvider : public KinesisAnalyticsV2DefaultEpProviderBase
{
public:
    using KinesisAnalyticsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisAnalyticsV2EndpointProvider()
      : KinesisAnalyticsV2DefaultEpProviderBase(Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::Rules)
    {}

    ~KinesisAnalyticsV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisAnalyticsV2
} // namespace Aws
