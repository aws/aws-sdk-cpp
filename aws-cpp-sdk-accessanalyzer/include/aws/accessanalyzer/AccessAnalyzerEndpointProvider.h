/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/accessanalyzer/AccessAnalyzerEndpointRules.h>


namespace Aws
{
namespace AccessAnalyzer
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AccessAnalyzerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AccessAnalyzerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AccessAnalyzerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AccessAnalyzer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AccessAnalyzerEndpointProviderBase =
    EndpointProviderBase<AccessAnalyzerClientConfiguration, AccessAnalyzerBuiltInParameters, AccessAnalyzerClientContextParameters>;

using AccessAnalyzerDefaultEpProviderBase =
    DefaultEndpointProvider<AccessAnalyzerClientConfiguration, AccessAnalyzerBuiltInParameters, AccessAnalyzerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ACCESSANALYZER_API AccessAnalyzerEndpointProvider : public AccessAnalyzerDefaultEpProviderBase
{
public:
    using AccessAnalyzerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AccessAnalyzerEndpointProvider()
      : AccessAnalyzerDefaultEpProviderBase(Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::Rules)
    {}

    ~AccessAnalyzerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AccessAnalyzer
} // namespace Aws
