/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/imagebuilder/ImagebuilderEndpointRules.h>


namespace Aws
{
namespace imagebuilder
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ImagebuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ImagebuilderBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ImagebuilderEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ImagebuilderEndpointProvider,
                                                                        ImagebuilderBuiltInParameters,
                                                                        ImagebuilderClientContextParameters>;


class ImagebuilderEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ImagebuilderResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ImagebuilderEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::imagebuilder::ImagebuilderEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ImagebuilderResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ImagebuilderEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ImagebuilderEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace imagebuilder
} // namespace Aws
