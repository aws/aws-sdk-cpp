/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/inspector/InspectorEndpointRules.h>


namespace Aws
{
namespace Inspector
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using InspectorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using InspectorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using InspectorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Inspector Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using InspectorEndpointProviderBase =
    EndpointProviderBase<InspectorClientConfiguration, InspectorBuiltInParameters, InspectorClientContextParameters>;

using InspectorDefaultEpProviderBase =
    DefaultEndpointProvider<InspectorClientConfiguration, InspectorBuiltInParameters, InspectorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTOR_API InspectorEndpointProvider : public InspectorDefaultEpProviderBase
{
public:
    using InspectorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    InspectorEndpointProvider()
      : InspectorDefaultEpProviderBase(Aws::Inspector::InspectorEndpointRules::Rules)
    {}

    ~InspectorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Inspector
} // namespace Aws
