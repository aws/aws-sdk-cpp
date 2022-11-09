/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/swf/SWFEndpointRules.h>


namespace Aws
{
namespace SWF
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SWFClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SWFClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SWFBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SWF Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SWFEndpointProviderBase =
    EndpointProviderBase<SWFClientConfiguration, SWFBuiltInParameters, SWFClientContextParameters>;

using SWFDefaultEpProviderBase =
    DefaultEndpointProvider<SWFClientConfiguration, SWFBuiltInParameters, SWFClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SWF_API SWFEndpointProvider : public SWFDefaultEpProviderBase
{
public:
    using SWFResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SWFEndpointProvider()
      : SWFDefaultEpProviderBase(Aws::SWF::SWFEndpointRules::Rules)
    {}

    ~SWFEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SWF
} // namespace Aws
