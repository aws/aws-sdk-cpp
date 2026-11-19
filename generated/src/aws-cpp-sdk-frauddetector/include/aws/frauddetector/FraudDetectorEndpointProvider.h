/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/FraudDetectorClientConfiguration.h>
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

namespace Aws {
namespace FraudDetector {
namespace Endpoint {
using FraudDetectorClientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using FraudDetectorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_FRAUDDETECTOR_API FraudDetectorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~FraudDetectorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const FraudDetectorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const FraudDetectorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const FraudDetectorClientConfiguration& config);
};

/**
 * The type for the FraudDetector Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using FraudDetectorEndpointProviderBase =
    EndpointProviderBase<FraudDetectorClientConfiguration, FraudDetectorBuiltInParameters, FraudDetectorClientContextParameters>;

using FraudDetectorDefaultEpProviderBase =
    BDDEndpointProvider<FraudDetectorClientConfiguration, FraudDetectorBuiltInParameters, FraudDetectorClientContextParameters>;

}  // namespace Endpoint
}  // namespace FraudDetector

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_FRAUDDETECTOR_EXTERN template class AWS_FRAUDDETECTOR_API Aws::Endpoint::EndpointProviderBase<
    FraudDetector::Endpoint::FraudDetectorClientConfiguration, FraudDetector::Endpoint::FraudDetectorBuiltInParameters,
    FraudDetector::Endpoint::FraudDetectorClientContextParameters>;

AWS_FRAUDDETECTOR_EXTERN template class AWS_FRAUDDETECTOR_API Aws::Endpoint::BDDEndpointProvider<
    FraudDetector::Endpoint::FraudDetectorClientConfiguration, FraudDetector::Endpoint::FraudDetectorBuiltInParameters,
    FraudDetector::Endpoint::FraudDetectorClientContextParameters>;
}  // namespace Endpoint

namespace FraudDetector {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_FRAUDDETECTOR_API FraudDetectorEndpointProvider : public FraudDetectorDefaultEpProviderBase {
 public:
  using FraudDetectorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  FraudDetectorEndpointProvider();

  ~FraudDetectorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace FraudDetector
}  // namespace Aws
