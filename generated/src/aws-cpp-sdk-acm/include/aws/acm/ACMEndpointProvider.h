﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/acm/ACMEndpointRules.h>


namespace Aws
{
namespace ACM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ACMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ACMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ACMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ACM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ACMEndpointProviderBase =
    EndpointProviderBase<ACMClientConfiguration, ACMBuiltInParameters, ACMClientContextParameters>;

using ACMDefaultEpProviderBase =
    DefaultEndpointProvider<ACMClientConfiguration, ACMBuiltInParameters, ACMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ACM_API ACMEndpointProvider : public ACMDefaultEpProviderBase
{
public:
    using ACMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ACMEndpointProvider()
      : ACMDefaultEpProviderBase(Aws::ACM::ACMEndpointRules::GetRulesBlob(), Aws::ACM::ACMEndpointRules::RulesBlobSize)
    {}

    ~ACMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ACM
} // namespace Aws
