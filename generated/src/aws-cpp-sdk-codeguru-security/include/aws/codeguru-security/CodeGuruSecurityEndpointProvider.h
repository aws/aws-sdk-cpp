/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeguru-security/CodeGuruSecurityEndpointRules.h>


namespace Aws
{
namespace CodeGuruSecurity
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeGuruSecurityClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeGuruSecurityClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeGuruSecurityBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeGuruSecurity Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruSecurityEndpointProviderBase =
    EndpointProviderBase<CodeGuruSecurityClientConfiguration, CodeGuruSecurityBuiltInParameters, CodeGuruSecurityClientContextParameters>;

using CodeGuruSecurityDefaultEpProviderBase =
    DefaultEndpointProvider<CodeGuruSecurityClientConfiguration, CodeGuruSecurityBuiltInParameters, CodeGuruSecurityClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUSECURITY_API CodeGuruSecurityEndpointProvider : public CodeGuruSecurityDefaultEpProviderBase
{
public:
    using CodeGuruSecurityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeGuruSecurityEndpointProvider()
      : CodeGuruSecurityDefaultEpProviderBase(Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::GetRulesBlob(), Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::RulesBlobSize)
    {}

    ~CodeGuruSecurityEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeGuruSecurity
} // namespace Aws
