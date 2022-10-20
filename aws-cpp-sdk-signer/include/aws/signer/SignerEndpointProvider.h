/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/signer/SignerEndpointRules.h>


namespace Aws
{
namespace signer
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SignerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SignerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SignerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SignerEndpointProvider,
                                                                        SignerBuiltInParameters,
                                                                        SignerClientContextParameters>;


class SignerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SignerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SignerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::signer::SignerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SignerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SignerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SignerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace signer
} // namespace Aws
