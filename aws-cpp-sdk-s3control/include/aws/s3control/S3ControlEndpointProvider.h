/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/s3control/S3ControlEndpointRules.h>


namespace Aws
{
namespace S3Control
{
namespace Endpoint
{
using S3ControlClientConfiguration = Aws::S3Control::S3ControlClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

class AWS_S3CONTROL_API S3ControlClientContextParameters : public Aws::Endpoint::ClientContextParameters
{
public:
    virtual ~S3ControlClientContextParameters(){};

    /**
    * Enables this client to use an ARN's region when constructing an endpoint instead of the client's configured region.
    */
    void SetUseArnRegion(bool value);
    const ClientContextParameters::EndpointParameter& GetUseArnRegion() const;
};

class AWS_S3CONTROL_API S3ControlBuiltInParameters : public Aws::Endpoint::BuiltInParameters
{
public:
    virtual ~S3ControlBuiltInParameters(){};
    using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
    virtual void SetFromClientConfiguration(const S3ControlClientConfiguration& config);
};

/**
 * The type for the S3Control Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3ControlEndpointProviderBase =
    EndpointProviderBase<S3ControlClientConfiguration, S3ControlBuiltInParameters, S3ControlClientContextParameters>;

using S3ControlDefaultEpProviderBase =
    DefaultEndpointProvider<S3ControlClientConfiguration, S3ControlBuiltInParameters, S3ControlClientContextParameters>;

} // namespace Endpoint
} // namespace S3Control

namespace Endpoint
{
/**
 * Export endpoint provider symbols from DLL
 */
template class AWS_S3CONTROL_API
    Aws::Endpoint::EndpointProviderBase<S3Control::Endpoint::S3ControlClientConfiguration, S3Control::Endpoint::S3ControlBuiltInParameters, S3Control::Endpoint::S3ControlClientContextParameters>;

template class AWS_S3CONTROL_API
    Aws::Endpoint::DefaultEndpointProvider<S3Control::Endpoint::S3ControlClientConfiguration, S3Control::Endpoint::S3ControlBuiltInParameters, S3Control::Endpoint::S3ControlClientContextParameters>;
} // namespace Endpoint

namespace S3Control
{
namespace Endpoint
{
/**
 * Default endpoint provider used for this service
 */
class AWS_S3CONTROL_API S3ControlEndpointProvider : public S3ControlDefaultEpProviderBase
{
public:
    using S3ControlResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    S3ControlEndpointProvider()
      : S3ControlDefaultEpProviderBase(Aws::S3Control::S3ControlEndpointRules::Rules)
    {}

    ~S3ControlEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace S3Control
} // namespace Aws
