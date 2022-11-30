/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/docdb-elastic/DocDBElasticEndpointRules.h>


namespace Aws
{
namespace DocDBElastic
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DocDBElasticClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DocDBElasticClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DocDBElasticBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DocDBElastic Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DocDBElasticEndpointProviderBase =
    EndpointProviderBase<DocDBElasticClientConfiguration, DocDBElasticBuiltInParameters, DocDBElasticClientContextParameters>;

using DocDBElasticDefaultEpProviderBase =
    DefaultEndpointProvider<DocDBElasticClientConfiguration, DocDBElasticBuiltInParameters, DocDBElasticClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DOCDBELASTIC_API DocDBElasticEndpointProvider : public DocDBElasticDefaultEpProviderBase
{
public:
    using DocDBElasticResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DocDBElasticEndpointProvider()
      : DocDBElasticDefaultEpProviderBase(Aws::DocDBElastic::DocDBElasticEndpointRules::Rules)
    {}

    ~DocDBElasticEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DocDBElastic
} // namespace Aws
