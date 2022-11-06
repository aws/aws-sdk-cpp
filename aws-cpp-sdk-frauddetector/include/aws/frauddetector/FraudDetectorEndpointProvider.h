/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/frauddetector/FraudDetectorEndpointRules.h>


namespace Aws
{
namespace FraudDetector
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using FraudDetectorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using FraudDetectorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using FraudDetectorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the FraudDetector Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FraudDetectorEndpointProviderBase =
    EndpointProviderBase<FraudDetectorClientConfiguration, FraudDetectorBuiltInParameters, FraudDetectorClientContextParameters>;

using FraudDetectorDefaultEpProviderBase =
    DefaultEndpointProvider<FraudDetectorClientConfiguration, FraudDetectorBuiltInParameters, FraudDetectorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FRAUDDETECTOR_API FraudDetectorEndpointProvider : public FraudDetectorDefaultEpProviderBase
{
public:
    using FraudDetectorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    FraudDetectorEndpointProvider()
      : FraudDetectorDefaultEpProviderBase(Aws::FraudDetector::FraudDetectorEndpointRules::Rules)
    {}

    ~FraudDetectorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace FraudDetector
} // namespace Aws
