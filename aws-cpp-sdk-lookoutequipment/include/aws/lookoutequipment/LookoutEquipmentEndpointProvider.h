/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutequipment/LookoutEquipmentEndpointRules.h>


namespace Aws
{
namespace LookoutEquipment
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LookoutEquipmentClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LookoutEquipmentBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LookoutEquipmentEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LookoutEquipmentEndpointProvider,
                                                                        LookoutEquipmentBuiltInParameters,
                                                                        LookoutEquipmentClientContextParameters>;


class LookoutEquipmentEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LookoutEquipmentResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LookoutEquipmentEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LookoutEquipment::LookoutEquipmentEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LookoutEquipmentResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LookoutEquipmentEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LookoutEquipmentEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LookoutEquipment
} // namespace Aws
