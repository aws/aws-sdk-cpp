/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudcontrol/CloudControlApiEndpointRules.h>


namespace Aws
{
namespace CloudControlApi
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudControlApiClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudControlApiClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CloudControlApiBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudControlApi Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudControlApiEndpointProviderBase =
    EndpointProviderBase<CloudControlApiClientConfiguration, CloudControlApiBuiltInParameters, CloudControlApiClientContextParameters>;

using CloudControlApiDefaultEpProviderBase =
    DefaultEndpointProvider<CloudControlApiClientConfiguration, CloudControlApiBuiltInParameters, CloudControlApiClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDCONTROLAPI_API CloudControlApiEndpointProvider : public CloudControlApiDefaultEpProviderBase
{
public:
    using CloudControlApiResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudControlApiEndpointProvider()
      : CloudControlApiDefaultEpProviderBase(Aws::CloudControlApi::CloudControlApiEndpointRules::Rules)
    {}

    ~CloudControlApiEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudControlApi
} // namespace Aws
