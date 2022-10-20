/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/panorama/PanoramaEndpointRules.h>


namespace Aws
{
namespace Panorama
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PanoramaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PanoramaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PanoramaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PanoramaEndpointProvider,
                                                                        PanoramaBuiltInParameters,
                                                                        PanoramaClientContextParameters>;


class PanoramaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PanoramaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PanoramaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Panorama::PanoramaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PanoramaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PanoramaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PanoramaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Panorama
} // namespace Aws
