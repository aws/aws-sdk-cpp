/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/inspector-scan/InspectorscanEndpointRules.h>


namespace Aws
{
namespace inspectorscan
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using InspectorscanClientContextParameters = Aws::Endpoint::ClientContextParameters;

using InspectorscanClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using InspectorscanBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the inspectorscan Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InspectorscanEndpointProviderBase =
    EndpointProviderBase<InspectorscanClientConfiguration, InspectorscanBuiltInParameters, InspectorscanClientContextParameters>;

using InspectorscanDefaultEpProviderBase =
    DefaultEndpointProvider<InspectorscanClientConfiguration, InspectorscanBuiltInParameters, InspectorscanClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTORSCAN_API InspectorscanEndpointProvider : public InspectorscanDefaultEpProviderBase
{
public:
    using InspectorscanResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    InspectorscanEndpointProvider()
      : InspectorscanDefaultEpProviderBase(Aws::inspectorscan::InspectorscanEndpointRules::GetRulesBlob(), Aws::inspectorscan::InspectorscanEndpointRules::RulesBlobSize)
    {}

    ~InspectorscanEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace inspectorscan
} // namespace Aws
