/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm/SSMEndpointRules.h>


namespace Aws
{
namespace SSM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SSMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMEndpointProviderBase =
    EndpointProviderBase<SSMClientConfiguration, SSMBuiltInParameters, SSMClientContextParameters>;

using SSMDefaultEpProviderBase =
    DefaultEndpointProvider<SSMClientConfiguration, SSMBuiltInParameters, SSMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSM_API SSMEndpointProvider : public SSMDefaultEpProviderBase
{
public:
    using SSMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSMEndpointProvider()
      : SSMDefaultEpProviderBase(Aws::SSM::SSMEndpointRules::GetRulesBlob(), Aws::SSM::SSMEndpointRules::RulesBlobSize)
    {}

    ~SSMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSM
} // namespace Aws
