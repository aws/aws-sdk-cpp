/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediapackage/MediaPackageEndpointRules.h>


namespace Aws
{
namespace MediaPackage
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MediaPackageClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MediaPackageBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MediaPackageEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MediaPackageEndpointProvider,
                                                                        MediaPackageBuiltInParameters,
                                                                        MediaPackageClientContextParameters>;


class MediaPackageEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MediaPackageResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MediaPackageEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MediaPackage::MediaPackageEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MediaPackageResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MediaPackageEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MediaPackageEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MediaPackage
} // namespace Aws
