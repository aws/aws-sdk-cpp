/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/acm-pca/ACMPCAEndpointRules.h>


namespace Aws
{
namespace ACMPCA
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ACMPCAClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ACMPCABuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ACMPCAEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ACMPCAEndpointProvider,
                                                                        ACMPCABuiltInParameters,
                                                                        ACMPCAClientContextParameters>;


class ACMPCAEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ACMPCAResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ACMPCAEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ACMPCA::ACMPCAEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ACMPCAResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ACMPCAEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ACMPCAEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ACMPCA
} // namespace Aws
