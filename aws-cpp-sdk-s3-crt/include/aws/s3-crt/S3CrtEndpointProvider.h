/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3CrtClientConfiguration.h>
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
using S3CrtClientConfiguration = Aws::S3Crt::S3CrtClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

class AWS_S3CRT_API S3CrtClientContextParameters : public Aws::Endpoint::ClientContextParameters
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

class AWS_S3CRT_API S3CrtBuiltInParameters : public Aws::Endpoint::BuiltInParameters
{
public:
    virtual ~S3CrtBuiltInParameters(){};
    using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
    virtual void SetFromClientConfiguration(const S3CrtClientConfiguration& config);
};

/**
 * The type for the S3Crt Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3CrtEndpointProviderBase =
    EndpointProviderBase<S3CrtClientConfiguration, S3CrtBuiltInParameters, S3CrtClientContextParameters>;

using S3CrtDefaultEpProviderBase =
    DefaultEndpointProvider<S3CrtClientConfiguration, S3CrtBuiltInParameters, S3CrtClientContextParameters>;

} // namespace Endpoint
} // namespace S3Crt

namespace Endpoint
{
/**
 * Export endpoint provider symbols from DLL
 */
template class AWS_S3CRT_API
    Aws::Endpoint::EndpointProviderBase<S3Crt::Endpoint::S3CrtClientConfiguration, S3Crt::Endpoint::S3CrtBuiltInParameters, S3Crt::Endpoint::S3CrtClientContextParameters>;

template class AWS_S3CRT_API
    Aws::Endpoint::DefaultEndpointProvider<S3Crt::Endpoint::S3CrtClientConfiguration, S3Crt::Endpoint::S3CrtBuiltInParameters, S3Crt::Endpoint::S3CrtClientContextParameters>;
} // namespace Endpoint

namespace S3Crt
{
namespace Endpoint
{
/**
 * Default endpoint provider used for this service
 */
class AWS_S3CRT_API S3CrtEndpointProvider : public S3CrtDefaultEpProviderBase
{
public:
    using S3CrtResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    S3CrtEndpointProvider()
      : S3CrtDefaultEpProviderBase(Aws::S3Crt::S3CrtEndpointRules::Rules)
    {}

    ~S3CrtEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace S3Crt
} // namespace Aws
