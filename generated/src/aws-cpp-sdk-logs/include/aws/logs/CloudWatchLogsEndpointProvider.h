/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/logs/CloudWatchLogsEndpointRules.h>


namespace Aws
{
namespace CloudWatchLogs
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudWatchLogsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchLogsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudWatchLogsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatchLogs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchLogsEndpointProviderBase =
    EndpointProviderBase<CloudWatchLogsClientConfiguration, CloudWatchLogsBuiltInParameters, CloudWatchLogsClientContextParameters>;

using CloudWatchLogsDefaultEpProviderBase =
    DefaultEndpointProvider<CloudWatchLogsClientConfiguration, CloudWatchLogsBuiltInParameters, CloudWatchLogsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHLOGS_API CloudWatchLogsEndpointProvider : public CloudWatchLogsDefaultEpProviderBase
{
public:
    using CloudWatchLogsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudWatchLogsEndpointProvider()
      : CloudWatchLogsDefaultEpProviderBase(Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::GetRulesBlob(), Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::RulesBlobSize)
    {}

    ~CloudWatchLogsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudWatchLogs
} // namespace Aws
