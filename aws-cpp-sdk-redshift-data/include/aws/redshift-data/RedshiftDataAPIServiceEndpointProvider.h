/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/redshift-data/RedshiftDataAPIServiceEndpointRules.h>


namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RedshiftDataAPIServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RedshiftDataAPIServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RedshiftDataAPIServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RedshiftDataAPIService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RedshiftDataAPIServiceEndpointProviderBase =
    EndpointProviderBase<RedshiftDataAPIServiceClientConfiguration, RedshiftDataAPIServiceBuiltInParameters, RedshiftDataAPIServiceClientContextParameters>;

using RedshiftDataAPIServiceDefaultEpProviderBase =
    DefaultEndpointProvider<RedshiftDataAPIServiceClientConfiguration, RedshiftDataAPIServiceBuiltInParameters, RedshiftDataAPIServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceEndpointProvider : public RedshiftDataAPIServiceDefaultEpProviderBase
{
public:
    using RedshiftDataAPIServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RedshiftDataAPIServiceEndpointProvider()
      : RedshiftDataAPIServiceDefaultEpProviderBase(Aws::RedshiftDataAPIService::RedshiftDataAPIServiceEndpointRules::Rules)
    {}

    ~RedshiftDataAPIServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RedshiftDataAPIService
} // namespace Aws
