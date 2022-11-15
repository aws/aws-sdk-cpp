/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/datapipeline/DataPipelineEndpointRules.h>


namespace Aws
{
namespace DataPipeline
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DataPipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DataPipelineClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DataPipelineBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DataPipeline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DataPipelineEndpointProviderBase =
    EndpointProviderBase<DataPipelineClientConfiguration, DataPipelineBuiltInParameters, DataPipelineClientContextParameters>;

using DataPipelineDefaultEpProviderBase =
    DefaultEndpointProvider<DataPipelineClientConfiguration, DataPipelineBuiltInParameters, DataPipelineClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DATAPIPELINE_API DataPipelineEndpointProvider : public DataPipelineDefaultEpProviderBase
{
public:
    using DataPipelineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DataPipelineEndpointProvider()
      : DataPipelineDefaultEpProviderBase(Aws::DataPipeline::DataPipelineEndpointRules::Rules)
    {}

    ~DataPipelineEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DataPipeline
} // namespace Aws
