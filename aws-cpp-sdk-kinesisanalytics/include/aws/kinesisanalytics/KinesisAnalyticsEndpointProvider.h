/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisanalytics/KinesisAnalyticsEndpointRules.h>


namespace Aws
{
namespace KinesisAnalytics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisAnalyticsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisAnalytics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisAnalyticsEndpointProviderBase =
    EndpointProviderBase<KinesisAnalyticsClientConfiguration, KinesisAnalyticsBuiltInParameters, KinesisAnalyticsClientContextParameters>;

using KinesisAnalyticsDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisAnalyticsClientConfiguration, KinesisAnalyticsBuiltInParameters, KinesisAnalyticsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISANALYTICS_API KinesisAnalyticsEndpointProvider : public KinesisAnalyticsDefaultEpProviderBase
{
public:
    using KinesisAnalyticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisAnalyticsEndpointProvider()
      : KinesisAnalyticsDefaultEpProviderBase(Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::Rules)
    {}

    ~KinesisAnalyticsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisAnalytics
} // namespace Aws
