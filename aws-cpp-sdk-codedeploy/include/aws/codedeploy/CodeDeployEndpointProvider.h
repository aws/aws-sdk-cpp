/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codedeploy/CodeDeployEndpointRules.h>


namespace Aws
{
namespace CodeDeploy
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeDeployClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeDeployClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeDeployBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeDeploy Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeDeployEndpointProviderBase =
    EndpointProviderBase<CodeDeployClientConfiguration, CodeDeployBuiltInParameters, CodeDeployClientContextParameters>;

using CodeDeployDefaultEpProviderBase =
    DefaultEndpointProvider<CodeDeployClientConfiguration, CodeDeployBuiltInParameters, CodeDeployClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEDEPLOY_API CodeDeployEndpointProvider : public CodeDeployDefaultEpProviderBase
{
public:
    using CodeDeployResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeDeployEndpointProvider()
      : CodeDeployDefaultEpProviderBase(Aws::CodeDeploy::CodeDeployEndpointRules::Rules)
    {}

    ~CodeDeployEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeDeploy
} // namespace Aws
