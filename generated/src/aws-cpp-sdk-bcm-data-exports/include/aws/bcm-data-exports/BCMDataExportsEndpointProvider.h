/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bcm-data-exports/BCMDataExportsEndpointRules.h>


namespace Aws
{
namespace BCMDataExports
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BCMDataExportsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BCMDataExportsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BCMDataExportsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BCMDataExports Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMDataExportsEndpointProviderBase =
    EndpointProviderBase<BCMDataExportsClientConfiguration, BCMDataExportsBuiltInParameters, BCMDataExportsClientContextParameters>;

using BCMDataExportsDefaultEpProviderBase =
    DefaultEndpointProvider<BCMDataExportsClientConfiguration, BCMDataExportsBuiltInParameters, BCMDataExportsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BCMDATAEXPORTS_API BCMDataExportsEndpointProvider : public BCMDataExportsDefaultEpProviderBase
{
public:
    using BCMDataExportsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BCMDataExportsEndpointProvider()
      : BCMDataExportsDefaultEpProviderBase(Aws::BCMDataExports::BCMDataExportsEndpointRules::GetRulesBlob(), Aws::BCMDataExports::BCMDataExportsEndpointRules::RulesBlobSize)
    {}

    ~BCMDataExportsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BCMDataExports
} // namespace Aws
