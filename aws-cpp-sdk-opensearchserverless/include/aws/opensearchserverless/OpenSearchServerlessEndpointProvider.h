/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/opensearchserverless/OpenSearchServerlessEndpointRules.h>


namespace Aws
{
namespace OpenSearchServerless
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OpenSearchServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OpenSearchServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OpenSearchServerlessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the OpenSearchServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OpenSearchServerlessEndpointProviderBase =
    EndpointProviderBase<OpenSearchServerlessClientConfiguration, OpenSearchServerlessBuiltInParameters, OpenSearchServerlessClientContextParameters>;

using OpenSearchServerlessDefaultEpProviderBase =
    DefaultEndpointProvider<OpenSearchServerlessClientConfiguration, OpenSearchServerlessBuiltInParameters, OpenSearchServerlessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OPENSEARCHSERVERLESS_API OpenSearchServerlessEndpointProvider : public OpenSearchServerlessDefaultEpProviderBase
{
public:
    using OpenSearchServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OpenSearchServerlessEndpointProvider()
      : OpenSearchServerlessDefaultEpProviderBase(Aws::OpenSearchServerless::OpenSearchServerlessEndpointRules::Rules)
    {}

    ~OpenSearchServerlessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace OpenSearchServerless
} // namespace Aws
