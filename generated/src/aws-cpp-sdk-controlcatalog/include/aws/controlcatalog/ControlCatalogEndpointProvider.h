/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/controlcatalog/ControlCatalogEndpointRules.h>


namespace Aws
{
namespace ControlCatalog
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ControlCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ControlCatalogClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ControlCatalogBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ControlCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ControlCatalogEndpointProviderBase =
    EndpointProviderBase<ControlCatalogClientConfiguration, ControlCatalogBuiltInParameters, ControlCatalogClientContextParameters>;

using ControlCatalogDefaultEpProviderBase =
    DefaultEndpointProvider<ControlCatalogClientConfiguration, ControlCatalogBuiltInParameters, ControlCatalogClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONTROLCATALOG_API ControlCatalogEndpointProvider : public ControlCatalogDefaultEpProviderBase
{
public:
    using ControlCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ControlCatalogEndpointProvider()
      : ControlCatalogDefaultEpProviderBase(Aws::ControlCatalog::ControlCatalogEndpointRules::GetRulesBlob(), Aws::ControlCatalog::ControlCatalogEndpointRules::RulesBlobSize)
    {}

    ~ControlCatalogEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ControlCatalog
} // namespace Aws
