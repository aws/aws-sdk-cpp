/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/translate/TranslateEndpointRules.h>


namespace Aws
{
namespace Translate
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TranslateClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TranslateClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using TranslateBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Translate Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TranslateEndpointProviderBase =
    EndpointProviderBase<TranslateClientConfiguration, TranslateBuiltInParameters, TranslateClientContextParameters>;

using TranslateDefaultEpProviderBase =
    DefaultEndpointProvider<TranslateClientConfiguration, TranslateBuiltInParameters, TranslateClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSLATE_API TranslateEndpointProvider : public TranslateDefaultEpProviderBase
{
public:
    using TranslateResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TranslateEndpointProvider()
      : TranslateDefaultEpProviderBase(Aws::Translate::TranslateEndpointRules::Rules)
    {}

    ~TranslateEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Translate
} // namespace Aws
