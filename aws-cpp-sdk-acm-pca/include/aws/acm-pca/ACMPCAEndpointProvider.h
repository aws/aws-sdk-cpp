/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/acm-pca/ACMPCAEndpointRules.h>


namespace Aws
{
namespace ACMPCA
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ACMPCAClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ACMPCAClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ACMPCABuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ACMPCA Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ACMPCAEndpointProviderBase =
    EndpointProviderBase<ACMPCAClientConfiguration, ACMPCABuiltInParameters, ACMPCAClientContextParameters>;

using ACMPCADefaultEpProviderBase =
    DefaultEndpointProvider<ACMPCAClientConfiguration, ACMPCABuiltInParameters, ACMPCAClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ACMPCA_API ACMPCAEndpointProvider : public ACMPCADefaultEpProviderBase
{
public:
    using ACMPCAResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ACMPCAEndpointProvider()
      : ACMPCADefaultEpProviderBase(Aws::ACMPCA::ACMPCAEndpointRules::Rules)
    {}

    ~ACMPCAEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ACMPCA
} // namespace Aws
