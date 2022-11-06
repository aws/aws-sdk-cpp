/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudtrail/CloudTrailEndpointRules.h>


namespace Aws
{
namespace CloudTrail
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudTrailClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudTrailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudTrailBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudTrail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudTrailEndpointProviderBase =
    EndpointProviderBase<CloudTrailClientConfiguration, CloudTrailBuiltInParameters, CloudTrailClientContextParameters>;

using CloudTrailDefaultEpProviderBase =
    DefaultEndpointProvider<CloudTrailClientConfiguration, CloudTrailBuiltInParameters, CloudTrailClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDTRAIL_API CloudTrailEndpointProvider : public CloudTrailDefaultEpProviderBase
{
public:
    using CloudTrailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudTrailEndpointProvider()
      : CloudTrailDefaultEpProviderBase(Aws::CloudTrail::CloudTrailEndpointRules::Rules)
    {}

    ~CloudTrailEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudTrail
} // namespace Aws
