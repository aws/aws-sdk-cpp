/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMRClientConfiguration.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Endpoint {
using EMRClientConfiguration = Aws::EMR::EMRClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EMRClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EMR_API EMRBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EMRBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EMRClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EMRClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EMRClientConfiguration& config);
};

/**
 * The type for the EMR Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMREndpointProviderBase = EndpointProviderBase<EMRClientConfiguration, EMRBuiltInParameters, EMRClientContextParameters>;

using EMRDefaultEpProviderBase = BDDEndpointProvider<EMRClientConfiguration, EMRBuiltInParameters, EMRClientContextParameters>;

}  // namespace Endpoint
}  // namespace EMR

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EMR_EXTERN template class AWS_EMR_API Aws::Endpoint::EndpointProviderBase<
    EMR::Endpoint::EMRClientConfiguration, EMR::Endpoint::EMRBuiltInParameters, EMR::Endpoint::EMRClientContextParameters>;

AWS_EMR_EXTERN template class AWS_EMR_API Aws::Endpoint::BDDEndpointProvider<
    EMR::Endpoint::EMRClientConfiguration, EMR::Endpoint::EMRBuiltInParameters, EMR::Endpoint::EMRClientContextParameters>;
}  // namespace Endpoint

namespace EMR {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EMR_API EMREndpointProvider : public EMRDefaultEpProviderBase {
 public:
  using EMRResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EMREndpointProvider();

  ~EMREndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EMR
}  // namespace Aws
