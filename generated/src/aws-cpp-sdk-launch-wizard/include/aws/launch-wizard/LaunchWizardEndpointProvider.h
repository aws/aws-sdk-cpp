/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/launch-wizard/LaunchWizardEndpointRules.h>


namespace Aws
{
namespace LaunchWizard
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LaunchWizardClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LaunchWizardClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LaunchWizardBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LaunchWizard Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LaunchWizardEndpointProviderBase =
    EndpointProviderBase<LaunchWizardClientConfiguration, LaunchWizardBuiltInParameters, LaunchWizardClientContextParameters>;

using LaunchWizardDefaultEpProviderBase =
    DefaultEndpointProvider<LaunchWizardClientConfiguration, LaunchWizardBuiltInParameters, LaunchWizardClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LAUNCHWIZARD_API LaunchWizardEndpointProvider : public LaunchWizardDefaultEpProviderBase
{
public:
    using LaunchWizardResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LaunchWizardEndpointProvider()
      : LaunchWizardDefaultEpProviderBase(Aws::LaunchWizard::LaunchWizardEndpointRules::GetRulesBlob(), Aws::LaunchWizard::LaunchWizardEndpointRules::RulesBlobSize)
    {}

    ~LaunchWizardEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LaunchWizard
} // namespace Aws
