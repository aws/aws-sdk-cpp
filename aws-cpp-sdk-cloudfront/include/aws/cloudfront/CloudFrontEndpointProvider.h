/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudfront/CloudFrontEndpointRules.h>


namespace Aws
{
namespace CloudFront
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudFrontClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudFrontClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudFrontBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudFront Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFrontEndpointProviderBase =
    EndpointProviderBase<CloudFrontClientConfiguration, CloudFrontBuiltInParameters, CloudFrontClientContextParameters>;

using CloudFrontDefaultEpProviderBase =
    DefaultEndpointProvider<CloudFrontClientConfiguration, CloudFrontBuiltInParameters, CloudFrontClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFRONT_API CloudFrontEndpointProvider : public CloudFrontDefaultEpProviderBase
{
public:
    using CloudFrontResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudFrontEndpointProvider()
      : CloudFrontDefaultEpProviderBase(Aws::CloudFront::CloudFrontEndpointRules::Rules)
    {}

    ~CloudFrontEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudFront
} // namespace Aws
