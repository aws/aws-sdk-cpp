/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/devops-guru/DevOpsGuruEndpointRules.h>


namespace Aws
{
namespace DevOpsGuru
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DevOpsGuruClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DevOpsGuruClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DevOpsGuruBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DevOpsGuru Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DevOpsGuruEndpointProviderBase =
    EndpointProviderBase<DevOpsGuruClientConfiguration, DevOpsGuruBuiltInParameters, DevOpsGuruClientContextParameters>;

using DevOpsGuruDefaultEpProviderBase =
    DefaultEndpointProvider<DevOpsGuruClientConfiguration, DevOpsGuruBuiltInParameters, DevOpsGuruClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DEVOPSGURU_API DevOpsGuruEndpointProvider : public DevOpsGuruDefaultEpProviderBase
{
public:
    using DevOpsGuruResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DevOpsGuruEndpointProvider()
      : DevOpsGuruDefaultEpProviderBase(Aws::DevOpsGuru::DevOpsGuruEndpointRules::Rules)
    {}

    ~DevOpsGuruEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DevOpsGuru
} // namespace Aws
