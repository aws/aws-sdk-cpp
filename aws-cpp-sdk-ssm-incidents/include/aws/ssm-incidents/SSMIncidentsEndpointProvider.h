/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-incidents/SSMIncidentsEndpointRules.h>


namespace Aws
{
namespace SSMIncidents
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSMIncidentsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSMIncidentsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSMIncidentsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSMIncidents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMIncidentsEndpointProviderBase =
    EndpointProviderBase<SSMIncidentsClientConfiguration, SSMIncidentsBuiltInParameters, SSMIncidentsClientContextParameters>;

using SSMIncidentsDefaultEpProviderBase =
    DefaultEndpointProvider<SSMIncidentsClientConfiguration, SSMIncidentsBuiltInParameters, SSMIncidentsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSMINCIDENTS_API SSMIncidentsEndpointProvider : public SSMIncidentsDefaultEpProviderBase
{
public:
    using SSMIncidentsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSMIncidentsEndpointProvider()
      : SSMIncidentsDefaultEpProviderBase(Aws::SSMIncidents::SSMIncidentsEndpointRules::Rules)
    {}

    ~SSMIncidentsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSMIncidents
} // namespace Aws
