/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rekognition/RekognitionEndpointRules.h>


namespace Aws
{
namespace Rekognition
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RekognitionClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RekognitionBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RekognitionEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RekognitionEndpointProvider,
                                                                        RekognitionBuiltInParameters,
                                                                        RekognitionClientContextParameters>;


class RekognitionEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RekognitionResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RekognitionEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Rekognition::RekognitionEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RekognitionResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RekognitionEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RekognitionEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Rekognition
} // namespace Aws
