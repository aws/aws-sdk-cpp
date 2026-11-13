/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/machinelearning/MachineLearningClientConfiguration.h>
#include <aws/machinelearning/MachineLearning_EXPORTS.h>

namespace Aws {
namespace MachineLearning {
namespace Endpoint {
using MachineLearningClientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MachineLearningClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MACHINELEARNING_API MachineLearningBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MachineLearningBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MachineLearningClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MachineLearningClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MachineLearningClientConfiguration& config);
};

/**
 * The type for the MachineLearning Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MachineLearningEndpointProviderBase =
    EndpointProviderBase<MachineLearningClientConfiguration, MachineLearningBuiltInParameters, MachineLearningClientContextParameters>;

using MachineLearningDefaultEpProviderBase =
    BDDEndpointProvider<MachineLearningClientConfiguration, MachineLearningBuiltInParameters, MachineLearningClientContextParameters>;

}  // namespace Endpoint
}  // namespace MachineLearning

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MACHINELEARNING_EXTERN template class AWS_MACHINELEARNING_API Aws::Endpoint::EndpointProviderBase<
    MachineLearning::Endpoint::MachineLearningClientConfiguration, MachineLearning::Endpoint::MachineLearningBuiltInParameters,
    MachineLearning::Endpoint::MachineLearningClientContextParameters>;

AWS_MACHINELEARNING_EXTERN template class AWS_MACHINELEARNING_API Aws::Endpoint::BDDEndpointProvider<
    MachineLearning::Endpoint::MachineLearningClientConfiguration, MachineLearning::Endpoint::MachineLearningBuiltInParameters,
    MachineLearning::Endpoint::MachineLearningClientContextParameters>;
}  // namespace Endpoint

namespace MachineLearning {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MACHINELEARNING_API MachineLearningEndpointProvider : public MachineLearningDefaultEpProviderBase {
 public:
  using MachineLearningResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MachineLearningEndpointProvider();

  ~MachineLearningEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MachineLearning
}  // namespace Aws
