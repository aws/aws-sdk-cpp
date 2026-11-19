/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAMClientConfiguration.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Endpoint {
using IAMClientConfiguration = Aws::IAM::IAMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IAMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IAM_API IAMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IAMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IAMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IAMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IAMClientConfiguration& config);
};

/**
 * The type for the IAM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IAMEndpointProviderBase = EndpointProviderBase<IAMClientConfiguration, IAMBuiltInParameters, IAMClientContextParameters>;

using IAMDefaultEpProviderBase = BDDEndpointProvider<IAMClientConfiguration, IAMBuiltInParameters, IAMClientContextParameters>;

}  // namespace Endpoint
}  // namespace IAM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IAM_EXTERN template class AWS_IAM_API Aws::Endpoint::EndpointProviderBase<
    IAM::Endpoint::IAMClientConfiguration, IAM::Endpoint::IAMBuiltInParameters, IAM::Endpoint::IAMClientContextParameters>;

AWS_IAM_EXTERN template class AWS_IAM_API Aws::Endpoint::BDDEndpointProvider<
    IAM::Endpoint::IAMClientConfiguration, IAM::Endpoint::IAMBuiltInParameters, IAM::Endpoint::IAMClientContextParameters>;
}  // namespace Endpoint

namespace IAM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IAM_API IAMEndpointProvider : public IAMDefaultEpProviderBase {
 public:
  using IAMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IAMEndpointProvider();

  ~IAMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IAM
}  // namespace Aws
