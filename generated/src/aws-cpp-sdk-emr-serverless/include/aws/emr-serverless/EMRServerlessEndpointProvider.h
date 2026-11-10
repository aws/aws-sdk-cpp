/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/EMRServerlessClientConfiguration.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

namespace Aws {
namespace EMRServerless {
namespace Endpoint {
using EMRServerlessClientConfiguration = Aws::EMRServerless::EMRServerlessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EMRServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EMRSERVERLESS_API EMRServerlessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EMRServerlessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EMRServerlessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EMRServerlessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EMRServerlessClientConfiguration& config);
};

/**
 * The type for the EMRServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EMRServerlessEndpointProviderBase =
    EndpointProviderBase<EMRServerlessClientConfiguration, EMRServerlessBuiltInParameters, EMRServerlessClientContextParameters>;

using EMRServerlessDefaultEpProviderBase =
    BDDEndpointProvider<EMRServerlessClientConfiguration, EMRServerlessBuiltInParameters, EMRServerlessClientContextParameters>;

}  // namespace Endpoint
}  // namespace EMRServerless

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EMRSERVERLESS_EXTERN template class AWS_EMRSERVERLESS_API Aws::Endpoint::EndpointProviderBase<
    EMRServerless::Endpoint::EMRServerlessClientConfiguration, EMRServerless::Endpoint::EMRServerlessBuiltInParameters,
    EMRServerless::Endpoint::EMRServerlessClientContextParameters>;

AWS_EMRSERVERLESS_EXTERN template class AWS_EMRSERVERLESS_API Aws::Endpoint::BDDEndpointProvider<
    EMRServerless::Endpoint::EMRServerlessClientConfiguration, EMRServerless::Endpoint::EMRServerlessBuiltInParameters,
    EMRServerless::Endpoint::EMRServerlessClientContextParameters>;
}  // namespace Endpoint

namespace EMRServerless {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EMRSERVERLESS_API EMRServerlessEndpointProvider : public EMRServerlessDefaultEpProviderBase {
 public:
  using EMRServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EMRServerlessEndpointProvider();

  ~EMRServerlessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EMRServerless
}  // namespace Aws
