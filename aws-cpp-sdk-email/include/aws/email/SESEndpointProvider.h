/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/email/SESEndpointRules.h>


namespace Aws
{
namespace SES
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SESClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SESClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SESBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SES Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SESEndpointProviderBase =
    EndpointProviderBase<SESClientConfiguration, SESBuiltInParameters, SESClientContextParameters>;

using SESDefaultEpProviderBase =
    DefaultEndpointProvider<SESClientConfiguration, SESBuiltInParameters, SESClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SES_API SESEndpointProvider : public SESDefaultEpProviderBase
{
public:
    using SESResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SESEndpointProvider()
      : SESDefaultEpProviderBase(Aws::SES::SESEndpointRules::Rules)
    {}

    ~SESEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SES
} // namespace Aws
