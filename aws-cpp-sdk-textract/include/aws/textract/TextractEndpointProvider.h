/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/textract/TextractEndpointRules.h>


namespace Aws
{
namespace Textract
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TextractClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TextractClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using TextractBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Textract Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TextractEndpointProviderBase =
    EndpointProviderBase<TextractClientConfiguration, TextractBuiltInParameters, TextractClientContextParameters>;

using TextractDefaultEpProviderBase =
    DefaultEndpointProvider<TextractClientConfiguration, TextractBuiltInParameters, TextractClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TEXTRACT_API TextractEndpointProvider : public TextractDefaultEpProviderBase
{
public:
    using TextractResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TextractEndpointProvider()
      : TextractDefaultEpProviderBase(Aws::Textract::TextractEndpointRules::Rules)
    {}

    ~TextractEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Textract
} // namespace Aws
