/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-sap/SsmSapEndpointRules.h>


namespace Aws
{
namespace SsmSap
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SsmSapClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SsmSapClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SsmSapBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SsmSap Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SsmSapEndpointProviderBase =
    EndpointProviderBase<SsmSapClientConfiguration, SsmSapBuiltInParameters, SsmSapClientContextParameters>;

using SsmSapDefaultEpProviderBase =
    DefaultEndpointProvider<SsmSapClientConfiguration, SsmSapBuiltInParameters, SsmSapClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSMSAP_API SsmSapEndpointProvider : public SsmSapDefaultEpProviderBase
{
public:
    using SsmSapResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SsmSapEndpointProvider()
      : SsmSapDefaultEpProviderBase(Aws::SsmSap::SsmSapEndpointRules::Rules)
    {}

    ~SsmSapEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SsmSap
} // namespace Aws
