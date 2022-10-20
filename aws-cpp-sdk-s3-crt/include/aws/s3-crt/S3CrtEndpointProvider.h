/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3-crt/S3CrtEndpointRules.h>


namespace Aws
{
namespace S3Crt
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

class S3CrtClientContextParameters : public Aws::Endpoint::ClientContextParameters
{
public:
    virtual ~S3CrtClientContextParameters(){};

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
using S3CrtBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class S3CrtEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<S3CrtEndpointProvider,
                                                                        S3CrtBuiltInParameters,
                                                                        S3CrtClientContextParameters>;


class S3CrtEndpointProvider : public DefaultEndpointProviderT
{
public:
    using S3CrtResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    S3CrtEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::S3Crt::S3CrtEndpointRules::Rules),
        clientConfiguration(config)
    {}

    S3CrtResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<S3CrtEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~S3CrtEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace S3Crt
} // namespace Aws
