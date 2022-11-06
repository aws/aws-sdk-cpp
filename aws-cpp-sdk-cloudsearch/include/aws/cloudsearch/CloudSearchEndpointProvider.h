/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudsearch/CloudSearchEndpointRules.h>


namespace Aws
{
namespace CloudSearch
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudSearchClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudSearchClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudSearchBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudSearch Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudSearchEndpointProviderBase =
    EndpointProviderBase<CloudSearchClientConfiguration, CloudSearchBuiltInParameters, CloudSearchClientContextParameters>;

using CloudSearchDefaultEpProviderBase =
    DefaultEndpointProvider<CloudSearchClientConfiguration, CloudSearchBuiltInParameters, CloudSearchClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDSEARCH_API CloudSearchEndpointProvider : public CloudSearchDefaultEpProviderBase
{
public:
    using CloudSearchResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudSearchEndpointProvider()
      : CloudSearchDefaultEpProviderBase(Aws::CloudSearch::CloudSearchEndpointRules::Rules)
    {}

    ~CloudSearchEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudSearch
} // namespace Aws
