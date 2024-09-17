/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecr/ECREndpointRules.h>


namespace Aws
{
namespace ECR
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ECRClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ECRClientConfiguration = Aws::Client::GenericClientConfiguration;
using ECRBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ECR Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECREndpointProviderBase =
    EndpointProviderBase<ECRClientConfiguration, ECRBuiltInParameters, ECRClientContextParameters>;

using ECRDefaultEpProviderBase =
    DefaultEndpointProvider<ECRClientConfiguration, ECRBuiltInParameters, ECRClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ECR_API ECREndpointProvider : public ECRDefaultEpProviderBase
{
public:
    using ECRResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ECREndpointProvider()
      : ECRDefaultEpProviderBase(Aws::ECR::ECREndpointRules::GetRulesBlob(), Aws::ECR::ECREndpointRules::RulesBlobSize)
    {}

    ~ECREndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ECR
} // namespace Aws
