/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointRules.h>


namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTJobsDataPlaneClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTJobsDataPlaneBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTJobsDataPlaneEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTJobsDataPlaneEndpointProvider,
                                                                        IoTJobsDataPlaneBuiltInParameters,
                                                                        IoTJobsDataPlaneClientContextParameters>;


class IoTJobsDataPlaneEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTJobsDataPlaneResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTJobsDataPlaneEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTJobsDataPlaneResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTJobsDataPlaneEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTJobsDataPlaneEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTJobsDataPlane
} // namespace Aws
