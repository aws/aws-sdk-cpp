/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kms/KMSEndpointRules.h>


namespace Aws
{
namespace KMS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KMSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KMSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KMSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KMSEndpointProvider,
                                                                        KMSBuiltInParameters,
                                                                        KMSClientContextParameters>;


class KMSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KMSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KMSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KMS::KMSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KMSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KMSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KMSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KMS
} // namespace Aws
