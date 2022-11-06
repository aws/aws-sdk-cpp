/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rds-data/RDSDataServiceEndpointRules.h>


namespace Aws
{
namespace RDSDataService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RDSDataServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RDSDataServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RDSDataServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RDSDataService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RDSDataServiceEndpointProviderBase =
    EndpointProviderBase<RDSDataServiceClientConfiguration, RDSDataServiceBuiltInParameters, RDSDataServiceClientContextParameters>;

using RDSDataServiceDefaultEpProviderBase =
    DefaultEndpointProvider<RDSDataServiceClientConfiguration, RDSDataServiceBuiltInParameters, RDSDataServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RDSDATASERVICE_API RDSDataServiceEndpointProvider : public RDSDataServiceDefaultEpProviderBase
{
public:
    using RDSDataServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RDSDataServiceEndpointProvider()
      : RDSDataServiceDefaultEpProviderBase(Aws::RDSDataService::RDSDataServiceEndpointRules::Rules)
    {}

    ~RDSDataServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RDSDataService
} // namespace Aws
