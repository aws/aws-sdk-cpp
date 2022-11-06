/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticmapreduce/EMREndpointRules.h>


namespace Aws
{
namespace EMR
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EMRClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EMRClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EMRBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EMR Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMREndpointProviderBase =
    EndpointProviderBase<EMRClientConfiguration, EMRBuiltInParameters, EMRClientContextParameters>;

using EMRDefaultEpProviderBase =
    DefaultEndpointProvider<EMRClientConfiguration, EMRBuiltInParameters, EMRClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EMR_API EMREndpointProvider : public EMRDefaultEpProviderBase
{
public:
    using EMRResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EMREndpointProvider()
      : EMRDefaultEpProviderBase(Aws::EMR::EMREndpointRules::Rules)
    {}

    ~EMREndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EMR
} // namespace Aws
