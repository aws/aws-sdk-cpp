/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/opensearch/OpenSearchServiceEndpointRules.h>


namespace Aws
{
namespace OpenSearchService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OpenSearchServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OpenSearchServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OpenSearchServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the OpenSearchService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OpenSearchServiceEndpointProviderBase =
    EndpointProviderBase<OpenSearchServiceClientConfiguration, OpenSearchServiceBuiltInParameters, OpenSearchServiceClientContextParameters>;

using OpenSearchServiceDefaultEpProviderBase =
    DefaultEndpointProvider<OpenSearchServiceClientConfiguration, OpenSearchServiceBuiltInParameters, OpenSearchServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OPENSEARCHSERVICE_API OpenSearchServiceEndpointProvider : public OpenSearchServiceDefaultEpProviderBase
{
public:
    using OpenSearchServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OpenSearchServiceEndpointProvider()
      : OpenSearchServiceDefaultEpProviderBase(Aws::OpenSearchService::OpenSearchServiceEndpointRules::Rules)
    {}

    ~OpenSearchServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace OpenSearchService
} // namespace Aws
