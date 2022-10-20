/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fms/FMSEndpointRules.h>


namespace Aws
{
namespace FMS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FMSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FMSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FMSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FMSEndpointProvider,
                                                                        FMSBuiltInParameters,
                                                                        FMSClientContextParameters>;


class FMSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FMSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FMSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::FMS::FMSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FMSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FMSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FMSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace FMS
} // namespace Aws
