/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/nimble/NimbleStudioEndpointRules.h>


namespace Aws
{
namespace NimbleStudio
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using NimbleStudioClientContextParameters = Aws::Endpoint::ClientContextParameters;
using NimbleStudioBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class NimbleStudioEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<NimbleStudioEndpointProvider,
                                                                        NimbleStudioBuiltInParameters,
                                                                        NimbleStudioClientContextParameters>;


class NimbleStudioEndpointProvider : public DefaultEndpointProviderT
{
public:
    using NimbleStudioResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    NimbleStudioEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::NimbleStudio::NimbleStudioEndpointRules::Rules),
        clientConfiguration(config)
    {}

    NimbleStudioResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<NimbleStudioEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~NimbleStudioEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace NimbleStudio
} // namespace Aws
