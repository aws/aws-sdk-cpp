/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/comprehendmedical/ComprehendMedicalEndpointRules.h>


namespace Aws
{
namespace ComprehendMedical
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ComprehendMedicalClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ComprehendMedicalClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ComprehendMedicalBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ComprehendMedical Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComprehendMedicalEndpointProviderBase =
    EndpointProviderBase<ComprehendMedicalClientConfiguration, ComprehendMedicalBuiltInParameters, ComprehendMedicalClientContextParameters>;

using ComprehendMedicalDefaultEpProviderBase =
    DefaultEndpointProvider<ComprehendMedicalClientConfiguration, ComprehendMedicalBuiltInParameters, ComprehendMedicalClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COMPREHENDMEDICAL_API ComprehendMedicalEndpointProvider : public ComprehendMedicalDefaultEpProviderBase
{
public:
    using ComprehendMedicalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ComprehendMedicalEndpointProvider()
      : ComprehendMedicalDefaultEpProviderBase(Aws::ComprehendMedical::ComprehendMedicalEndpointRules::Rules)
    {}

    ~ComprehendMedicalEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ComprehendMedical
} // namespace Aws
