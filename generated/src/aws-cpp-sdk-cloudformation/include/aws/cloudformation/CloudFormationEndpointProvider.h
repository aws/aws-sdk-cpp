/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloudformation/CloudFormationEndpointRules.h>


namespace Aws
{
namespace CloudFormation
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CloudFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudFormationClientConfiguration = Aws::Client::GenericClientConfiguration;
using CloudFormationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudFormation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFormationEndpointProviderBase =
    EndpointProviderBase<CloudFormationClientConfiguration, CloudFormationBuiltInParameters, CloudFormationClientContextParameters>;

using CloudFormationDefaultEpProviderBase =
    DefaultEndpointProvider<CloudFormationClientConfiguration, CloudFormationBuiltInParameters, CloudFormationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFORMATION_API CloudFormationEndpointProvider : public CloudFormationDefaultEpProviderBase
{
public:
    using CloudFormationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CloudFormationEndpointProvider()
      : CloudFormationDefaultEpProviderBase(Aws::CloudFormation::CloudFormationEndpointRules::GetRulesBlob(), Aws::CloudFormation::CloudFormationEndpointRules::RulesBlobSize)
    {}

    ~CloudFormationEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CloudFormation
} // namespace Aws
