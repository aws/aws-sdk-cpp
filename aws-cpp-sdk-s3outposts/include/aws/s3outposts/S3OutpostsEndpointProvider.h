/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3outposts/S3OutpostsEndpointRules.h>


namespace Aws
{
namespace S3Outposts
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using S3OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using S3OutpostsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using S3OutpostsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the S3Outposts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3OutpostsEndpointProviderBase =
    EndpointProviderBase<S3OutpostsClientConfiguration, S3OutpostsBuiltInParameters, S3OutpostsClientContextParameters>;

using S3OutpostsDefaultEpProviderBase =
    DefaultEndpointProvider<S3OutpostsClientConfiguration, S3OutpostsBuiltInParameters, S3OutpostsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_S3OUTPOSTS_API S3OutpostsEndpointProvider : public S3OutpostsDefaultEpProviderBase
{
public:
    using S3OutpostsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    S3OutpostsEndpointProvider()
      : S3OutpostsDefaultEpProviderBase(Aws::S3Outposts::S3OutpostsEndpointRules::Rules)
    {}

    ~S3OutpostsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace S3Outposts
} // namespace Aws
