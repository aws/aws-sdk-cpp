/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/license-manager/LicenseManagerEndpointRules.h>


namespace Aws
{
namespace LicenseManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LicenseManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LicenseManagerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LicenseManagerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LicenseManagerEndpointProvider,
                                                                        LicenseManagerBuiltInParameters,
                                                                        LicenseManagerClientContextParameters>;


class LicenseManagerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LicenseManagerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LicenseManagerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LicenseManager::LicenseManagerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LicenseManagerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LicenseManagerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LicenseManagerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LicenseManager
} // namespace Aws
