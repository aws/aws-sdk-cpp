/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECRClientConfiguration.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace ECR {
namespace Endpoint {
using ECRClientConfiguration = Aws::ECR::ECRClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ECRClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ECR_API ECRBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ECRBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ECRClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ECRClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ECRClientConfiguration& config);
};

/**
 * The type for the ECR Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECREndpointProviderBase = EndpointProviderBase<ECRClientConfiguration, ECRBuiltInParameters, ECRClientContextParameters>;

using ECRDefaultEpProviderBase = BDDEndpointProvider<ECRClientConfiguration, ECRBuiltInParameters, ECRClientContextParameters>;

}  // namespace Endpoint
}  // namespace ECR

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ECR_EXTERN template class AWS_ECR_API Aws::Endpoint::EndpointProviderBase<
    ECR::Endpoint::ECRClientConfiguration, ECR::Endpoint::ECRBuiltInParameters, ECR::Endpoint::ECRClientContextParameters>;

AWS_ECR_EXTERN template class AWS_ECR_API Aws::Endpoint::BDDEndpointProvider<
    ECR::Endpoint::ECRClientConfiguration, ECR::Endpoint::ECRBuiltInParameters, ECR::Endpoint::ECRClientContextParameters>;
}  // namespace Endpoint

namespace ECR {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ECR_API ECREndpointProvider : public ECRDefaultEpProviderBase {
 public:
  using ECRResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ECREndpointProvider();

  ~ECREndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ECR
}  // namespace Aws
