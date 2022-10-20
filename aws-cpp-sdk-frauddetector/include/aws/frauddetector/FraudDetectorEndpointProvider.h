/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/frauddetector/FraudDetectorEndpointRules.h>


namespace Aws
{
namespace FraudDetector
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FraudDetectorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FraudDetectorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FraudDetectorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FraudDetectorEndpointProvider,
                                                                        FraudDetectorBuiltInParameters,
                                                                        FraudDetectorClientContextParameters>;


class FraudDetectorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FraudDetectorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FraudDetectorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::FraudDetector::FraudDetectorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FraudDetectorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FraudDetectorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FraudDetectorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace FraudDetector
} // namespace Aws
