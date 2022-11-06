/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rds/RDSEndpointRules.h>


namespace Aws
{
namespace RDS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RDSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RDSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RDSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RDS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RDSEndpointProviderBase =
    EndpointProviderBase<RDSClientConfiguration, RDSBuiltInParameters, RDSClientContextParameters>;

using RDSDefaultEpProviderBase =
    DefaultEndpointProvider<RDSClientConfiguration, RDSBuiltInParameters, RDSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RDS_API RDSEndpointProvider : public RDSDefaultEpProviderBase
{
public:
    using RDSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RDSEndpointProvider()
      : RDSDefaultEpProviderBase(Aws::RDS::RDSEndpointRules::Rules)
    {}

    ~RDSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RDS
} // namespace Aws
