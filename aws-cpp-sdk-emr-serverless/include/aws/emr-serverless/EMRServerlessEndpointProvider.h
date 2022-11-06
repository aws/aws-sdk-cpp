/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/emr-serverless/EMRServerlessEndpointRules.h>


namespace Aws
{
namespace EMRServerless
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EMRServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EMRServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EMRServerlessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EMRServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMRServerlessEndpointProviderBase =
    EndpointProviderBase<EMRServerlessClientConfiguration, EMRServerlessBuiltInParameters, EMRServerlessClientContextParameters>;

using EMRServerlessDefaultEpProviderBase =
    DefaultEndpointProvider<EMRServerlessClientConfiguration, EMRServerlessBuiltInParameters, EMRServerlessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EMRSERVERLESS_API EMRServerlessEndpointProvider : public EMRServerlessDefaultEpProviderBase
{
public:
    using EMRServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EMRServerlessEndpointProvider()
      : EMRServerlessDefaultEpProviderBase(Aws::EMRServerless::EMRServerlessEndpointRules::Rules)
    {}

    ~EMRServerlessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EMRServerless
} // namespace Aws
