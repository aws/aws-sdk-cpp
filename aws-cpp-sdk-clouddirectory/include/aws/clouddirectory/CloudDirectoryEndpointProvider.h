/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/clouddirectory/CloudDirectoryEndpointRules.h>


namespace Aws
{
namespace CloudDirectory
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudDirectoryClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudDirectoryBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudDirectoryEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudDirectoryEndpointProvider,
                                                                        CloudDirectoryBuiltInParameters,
                                                                        CloudDirectoryClientContextParameters>;


class CloudDirectoryEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudDirectoryResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudDirectoryEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudDirectory::CloudDirectoryEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudDirectoryResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudDirectoryEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudDirectoryEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudDirectory
} // namespace Aws
