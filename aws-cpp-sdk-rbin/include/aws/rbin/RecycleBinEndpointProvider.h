/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rbin/RecycleBinEndpointRules.h>


namespace Aws
{
namespace RecycleBin
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RecycleBinClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RecycleBinClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RecycleBinBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RecycleBin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RecycleBinEndpointProviderBase =
    EndpointProviderBase<RecycleBinClientConfiguration, RecycleBinBuiltInParameters, RecycleBinClientContextParameters>;

using RecycleBinDefaultEpProviderBase =
    DefaultEndpointProvider<RecycleBinClientConfiguration, RecycleBinBuiltInParameters, RecycleBinClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RECYCLEBIN_API RecycleBinEndpointProvider : public RecycleBinDefaultEpProviderBase
{
public:
    using RecycleBinResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RecycleBinEndpointProvider()
      : RecycleBinDefaultEpProviderBase(Aws::RecycleBin::RecycleBinEndpointRules::Rules)
    {}

    ~RecycleBinEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RecycleBin
} // namespace Aws
