/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ComprehendMedicalClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ComprehendMedicalBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ComprehendMedicalEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ComprehendMedicalEndpointProvider,
                                                                        ComprehendMedicalBuiltInParameters,
                                                                        ComprehendMedicalClientContextParameters>;


class ComprehendMedicalEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ComprehendMedicalResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ComprehendMedicalEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ComprehendMedical::ComprehendMedicalEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ComprehendMedicalResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ComprehendMedicalEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ComprehendMedicalEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ComprehendMedical
} // namespace Aws
