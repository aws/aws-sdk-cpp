/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/auditmanager/AuditManagerEndpointRules.h>


namespace Aws
{
namespace AuditManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AuditManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AuditManagerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AuditManagerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AuditManagerEndpointProvider,
                                                                        AuditManagerBuiltInParameters,
                                                                        AuditManagerClientContextParameters>;


class AuditManagerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AuditManagerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AuditManagerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AuditManager::AuditManagerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AuditManagerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AuditManagerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AuditManagerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AuditManager
} // namespace Aws
