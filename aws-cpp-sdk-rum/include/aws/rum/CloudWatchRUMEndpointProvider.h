/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rum/CloudWatchRUMEndpointRules.h>


namespace Aws
{
namespace CloudWatchRUM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudWatchRUMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchRUMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudWatchRUMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatchRUM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchRUMEndpointProviderBase =
    EndpointProviderBase<CloudWatchRUMClientConfiguration, CloudWatchRUMBuiltInParameters, CloudWatchRUMClientContextParameters>;

using CloudWatchRUMDefaultEpProviderBase =
    DefaultEndpointProvider<CloudWatchRUMClientConfiguration, CloudWatchRUMBuiltInParameters, CloudWatchRUMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHRUM_API CloudWatchRUMEndpointProvider : public CloudWatchRUMDefaultEpProviderBase
{
public:
    using CloudWatchRUMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudWatchRUMEndpointProvider()
      : CloudWatchRUMDefaultEpProviderBase(Aws::CloudWatchRUM::CloudWatchRUMEndpointRules::Rules)
    {}

    ~CloudWatchRUMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudWatchRUM
} // namespace Aws
