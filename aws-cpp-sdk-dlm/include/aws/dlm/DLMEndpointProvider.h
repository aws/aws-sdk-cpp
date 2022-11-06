/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dlm/DLMEndpointRules.h>


namespace Aws
{
namespace DLM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DLMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DLMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DLMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DLM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DLMEndpointProviderBase =
    EndpointProviderBase<DLMClientConfiguration, DLMBuiltInParameters, DLMClientContextParameters>;

using DLMDefaultEpProviderBase =
    DefaultEndpointProvider<DLMClientConfiguration, DLMBuiltInParameters, DLMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DLM_API DLMEndpointProvider : public DLMDefaultEpProviderBase
{
public:
    using DLMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DLMEndpointProvider()
      : DLMDefaultEpProviderBase(Aws::DLM::DLMEndpointRules::Rules)
    {}

    ~DLMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DLM
} // namespace Aws
