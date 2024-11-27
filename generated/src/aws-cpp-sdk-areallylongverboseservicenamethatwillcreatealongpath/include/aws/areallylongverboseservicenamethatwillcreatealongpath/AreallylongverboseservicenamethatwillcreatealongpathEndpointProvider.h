/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/areallylongverboseservicenamethatwillcreatealongpath/Areallylongverboseservicenamethatwillcreatealongpath_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/areallylongverboseservicenamethatwillcreatealongpath/AreallylongverboseservicenamethatwillcreatealongpathEndpointRules.h>


namespace Aws
{
namespace areallylongverboseservicenamethatwillcreatealongpath
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AreallylongverboseservicenamethatwillcreatealongpathClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration = Aws::Client::GenericClientConfiguration;
using AreallylongverboseservicenamethatwillcreatealongpathBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the areallylongverboseservicenamethatwillcreatealongpath Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase =
    EndpointProviderBase<AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration, AreallylongverboseservicenamethatwillcreatealongpathBuiltInParameters, AreallylongverboseservicenamethatwillcreatealongpathClientContextParameters>;

using AreallylongverboseservicenamethatwillcreatealongpathDefaultEpProviderBase =
    DefaultEndpointProvider<AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration, AreallylongverboseservicenamethatwillcreatealongpathBuiltInParameters, AreallylongverboseservicenamethatwillcreatealongpathClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AREALLYLONGVERBOSESERVICENAMETHATWILLCREATEALONGPATH_API AreallylongverboseservicenamethatwillcreatealongpathEndpointProvider : public AreallylongverboseservicenamethatwillcreatealongpathDefaultEpProviderBase
{
public:
    using AreallylongverboseservicenamethatwillcreatealongpathResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AreallylongverboseservicenamethatwillcreatealongpathEndpointProvider()
      : AreallylongverboseservicenamethatwillcreatealongpathDefaultEpProviderBase(Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathEndpointRules::GetRulesBlob(), Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathEndpointRules::RulesBlobSize)
    {}

    ~AreallylongverboseservicenamethatwillcreatealongpathEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace areallylongverboseservicenamethatwillcreatealongpath
} // namespace Aws
