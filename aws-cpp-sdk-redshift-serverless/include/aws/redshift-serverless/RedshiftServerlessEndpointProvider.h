/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/redshift-serverless/RedshiftServerlessEndpointRules.h>


namespace Aws
{
namespace RedshiftServerless
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RedshiftServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RedshiftServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RedshiftServerlessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RedshiftServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RedshiftServerlessEndpointProviderBase =
    EndpointProviderBase<RedshiftServerlessClientConfiguration, RedshiftServerlessBuiltInParameters, RedshiftServerlessClientContextParameters>;

using RedshiftServerlessDefaultEpProviderBase =
    DefaultEndpointProvider<RedshiftServerlessClientConfiguration, RedshiftServerlessBuiltInParameters, RedshiftServerlessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessEndpointProvider : public RedshiftServerlessDefaultEpProviderBase
{
public:
    using RedshiftServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RedshiftServerlessEndpointProvider()
      : RedshiftServerlessDefaultEpProviderBase(Aws::RedshiftServerless::RedshiftServerlessEndpointRules::Rules)
    {}

    ~RedshiftServerlessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RedshiftServerless
} // namespace Aws
