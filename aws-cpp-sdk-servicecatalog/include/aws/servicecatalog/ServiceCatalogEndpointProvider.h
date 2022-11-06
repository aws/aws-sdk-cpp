/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicecatalog/ServiceCatalogEndpointRules.h>


namespace Aws
{
namespace ServiceCatalog
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ServiceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ServiceCatalogClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ServiceCatalogBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ServiceCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceCatalogEndpointProviderBase =
    EndpointProviderBase<ServiceCatalogClientConfiguration, ServiceCatalogBuiltInParameters, ServiceCatalogClientContextParameters>;

using ServiceCatalogDefaultEpProviderBase =
    DefaultEndpointProvider<ServiceCatalogClientConfiguration, ServiceCatalogBuiltInParameters, ServiceCatalogClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICECATALOG_API ServiceCatalogEndpointProvider : public ServiceCatalogDefaultEpProviderBase
{
public:
    using ServiceCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ServiceCatalogEndpointProvider()
      : ServiceCatalogDefaultEpProviderBase(Aws::ServiceCatalog::ServiceCatalogEndpointRules::Rules)
    {}

    ~ServiceCatalogEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ServiceCatalog
} // namespace Aws
