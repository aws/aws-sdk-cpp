/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3outposts/S3OutpostsEndpointRules.h>


namespace Aws
{
namespace S3Outposts
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using S3OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using S3OutpostsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class S3OutpostsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<S3OutpostsEndpointProvider,
                                                                        S3OutpostsBuiltInParameters,
                                                                        S3OutpostsClientContextParameters>;


class S3OutpostsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using S3OutpostsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    S3OutpostsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::S3Outposts::S3OutpostsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    S3OutpostsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<S3OutpostsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~S3OutpostsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace S3Outposts
} // namespace Aws
