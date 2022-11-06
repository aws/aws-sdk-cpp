/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/service-quotas/ServiceQuotasEndpointRules.h>


namespace Aws
{
namespace ServiceQuotas
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ServiceQuotasClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ServiceQuotasClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ServiceQuotasBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ServiceQuotas Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ServiceQuotasEndpointProviderBase =
    EndpointProviderBase<ServiceQuotasClientConfiguration, ServiceQuotasBuiltInParameters, ServiceQuotasClientContextParameters>;

using ServiceQuotasDefaultEpProviderBase =
    DefaultEndpointProvider<ServiceQuotasClientConfiguration, ServiceQuotasBuiltInParameters, ServiceQuotasClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SERVICEQUOTAS_API ServiceQuotasEndpointProvider : public ServiceQuotasDefaultEpProviderBase
{
public:
    using ServiceQuotasResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ServiceQuotasEndpointProvider()
      : ServiceQuotasDefaultEpProviderBase(Aws::ServiceQuotas::ServiceQuotasEndpointRules::Rules)
    {}

    ~ServiceQuotasEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ServiceQuotas
} // namespace Aws
