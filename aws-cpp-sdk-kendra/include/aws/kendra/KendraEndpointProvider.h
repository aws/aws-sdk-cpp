/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kendra/KendraEndpointRules.h>


namespace Aws
{
namespace kendra
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KendraClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KendraBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KendraEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KendraEndpointProvider,
                                                                        KendraBuiltInParameters,
                                                                        KendraClientContextParameters>;


class KendraEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KendraResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KendraEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::kendra::KendraEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KendraResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KendraEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KendraEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace kendra
} // namespace Aws
