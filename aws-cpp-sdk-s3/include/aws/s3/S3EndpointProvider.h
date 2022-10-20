/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3/S3EndpointRules.h>


namespace Aws
{
namespace S3
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

class S3ClientContextParameters : public Aws::Endpoint::ClientContextParameters
{
public:
    virtual ~S3ClientContextParameters(){};

    /**
    * Forces this client to use path-style addressing for buckets.
    */
    void SetForcePathStyle(bool value);
    const ClientContextParameters::EndpointParameter& GetForcePathStyle() const;

    /**
    * Disables this client's usage of Multi-Region Access Points.
    */
    void SetDisableMultiRegionAccessPoints(bool value);
    const ClientContextParameters::EndpointParameter& GetDisableMultiRegionAccessPoints() const;

    /**
    * Enables this client to use an ARN's region when constructing an endpoint instead of the client's configured region.
    */
    void SetUseArnRegion(bool value);
    const ClientContextParameters::EndpointParameter& GetUseArnRegion() const;

    /**
    * Enables this client to use S3 Transfer Acceleration endpoints.
    */
    void SetAccelerate(bool value);
    const ClientContextParameters::EndpointParameter& GetAccelerate() const;
};
using S3BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class S3EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<S3EndpointProvider,
                                                                        S3BuiltInParameters,
                                                                        S3ClientContextParameters>;


class S3EndpointProvider : public DefaultEndpointProviderT
{
public:
    using S3ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    S3EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::S3::S3EndpointRules::Rules),
        clientConfiguration(config)
    {}

    S3ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<S3EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~S3EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace S3
} // namespace Aws
