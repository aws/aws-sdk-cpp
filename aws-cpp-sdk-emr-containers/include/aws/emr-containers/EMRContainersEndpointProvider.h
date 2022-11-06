/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/emr-containers/EMRContainersEndpointRules.h>


namespace Aws
{
namespace EMRContainers
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EMRContainersClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EMRContainersClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EMRContainersBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EMRContainers Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMRContainersEndpointProviderBase =
    EndpointProviderBase<EMRContainersClientConfiguration, EMRContainersBuiltInParameters, EMRContainersClientContextParameters>;

using EMRContainersDefaultEpProviderBase =
    DefaultEndpointProvider<EMRContainersClientConfiguration, EMRContainersBuiltInParameters, EMRContainersClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_EMRCONTAINERS_API EMRContainersEndpointProvider : public EMRContainersDefaultEpProviderBase
{
public:
    using EMRContainersResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EMRContainersEndpointProvider()
      : EMRContainersDefaultEpProviderBase(Aws::EMRContainers::EMRContainersEndpointRules::Rules)
    {}

    ~EMRContainersEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EMRContainers
} // namespace Aws
