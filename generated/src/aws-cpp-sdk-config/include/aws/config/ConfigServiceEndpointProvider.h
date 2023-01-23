/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/config/ConfigServiceEndpointRules.h>


namespace Aws
{
namespace ConfigService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ConfigServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ConfigServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ConfigServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ConfigService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ConfigServiceEndpointProviderBase =
    EndpointProviderBase<ConfigServiceClientConfiguration, ConfigServiceBuiltInParameters, ConfigServiceClientContextParameters>;

using ConfigServiceDefaultEpProviderBase =
    DefaultEndpointProvider<ConfigServiceClientConfiguration, ConfigServiceBuiltInParameters, ConfigServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONFIGSERVICE_API ConfigServiceEndpointProvider : public ConfigServiceDefaultEpProviderBase
{
public:
    using ConfigServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ConfigServiceEndpointProvider()
      : ConfigServiceDefaultEpProviderBase(Aws::ConfigService::ConfigServiceEndpointRules::GetRulesBlob(), Aws::ConfigService::ConfigServiceEndpointRules::RulesBlobSize)
    {}

    ~ConfigServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ConfigService
} // namespace Aws
