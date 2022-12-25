/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/machinelearning/MachineLearningEndpointRules.h>


namespace Aws
{
namespace MachineLearning
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MachineLearningClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MachineLearningClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MachineLearningBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MachineLearning Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MachineLearningEndpointProviderBase =
    EndpointProviderBase<MachineLearningClientConfiguration, MachineLearningBuiltInParameters, MachineLearningClientContextParameters>;

using MachineLearningDefaultEpProviderBase =
    DefaultEndpointProvider<MachineLearningClientConfiguration, MachineLearningBuiltInParameters, MachineLearningClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MACHINELEARNING_API MachineLearningEndpointProvider : public MachineLearningDefaultEpProviderBase
{
public:
    using MachineLearningResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MachineLearningEndpointProvider()
      : MachineLearningDefaultEpProviderBase(Aws::MachineLearning::MachineLearningEndpointRules::Rules)
    {}

    ~MachineLearningEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MachineLearning
} // namespace Aws
