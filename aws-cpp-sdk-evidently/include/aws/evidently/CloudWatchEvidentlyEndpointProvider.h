/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/evidently/CloudWatchEvidentlyEndpointRules.h>


namespace Aws
{
namespace CloudWatchEvidently
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudWatchEvidentlyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchEvidentlyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudWatchEvidentlyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatchEvidently Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchEvidentlyEndpointProviderBase =
    EndpointProviderBase<CloudWatchEvidentlyClientConfiguration, CloudWatchEvidentlyBuiltInParameters, CloudWatchEvidentlyClientContextParameters>;

using CloudWatchEvidentlyDefaultEpProviderBase =
    DefaultEndpointProvider<CloudWatchEvidentlyClientConfiguration, CloudWatchEvidentlyBuiltInParameters, CloudWatchEvidentlyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHEVIDENTLY_API CloudWatchEvidentlyEndpointProvider : public CloudWatchEvidentlyDefaultEpProviderBase
{
public:
    using CloudWatchEvidentlyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudWatchEvidentlyEndpointProvider()
      : CloudWatchEvidentlyDefaultEpProviderBase(Aws::CloudWatchEvidently::CloudWatchEvidentlyEndpointRules::Rules)
    {}

    ~CloudWatchEvidentlyEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudWatchEvidently
} // namespace Aws
