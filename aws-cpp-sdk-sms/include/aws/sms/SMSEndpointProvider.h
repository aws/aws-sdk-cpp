/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sms/SMSEndpointRules.h>


namespace Aws
{
namespace SMS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SMSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SMSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SMSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SMSEndpointProvider,
                                                                        SMSBuiltInParameters,
                                                                        SMSClientContextParameters>;


class SMSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SMSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SMSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SMS::SMSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SMSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SMSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SMSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SMS
} // namespace Aws
