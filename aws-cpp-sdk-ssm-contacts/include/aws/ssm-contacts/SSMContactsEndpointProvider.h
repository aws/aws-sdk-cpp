/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-contacts/SSMContactsEndpointRules.h>


namespace Aws
{
namespace SSMContacts
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SSMContactsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SSMContactsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SSMContactsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SSMContactsEndpointProvider,
                                                                        SSMContactsBuiltInParameters,
                                                                        SSMContactsClientContextParameters>;


class SSMContactsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SSMContactsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SSMContactsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SSMContacts::SSMContactsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SSMContactsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SSMContactsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SSMContactsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SSMContacts
} // namespace Aws
