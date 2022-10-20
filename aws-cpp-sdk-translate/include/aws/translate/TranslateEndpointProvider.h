/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/translate/TranslateEndpointRules.h>


namespace Aws
{
namespace Translate
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TranslateClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TranslateBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TranslateEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TranslateEndpointProvider,
                                                                        TranslateBuiltInParameters,
                                                                        TranslateClientContextParameters>;


class TranslateEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TranslateResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TranslateEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Translate::TranslateEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TranslateResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TranslateEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TranslateEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Translate
} // namespace Aws
