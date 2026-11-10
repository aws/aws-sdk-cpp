/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKSClientConfiguration.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Endpoint {
using EKSClientConfiguration = Aws::EKS::EKSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EKSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_EKS_API EKSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EKSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EKSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EKSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EKSClientConfiguration& config);
};

/**
 * The type for the EKS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EKSEndpointProviderBase = EndpointProviderBase<EKSClientConfiguration, EKSBuiltInParameters, EKSClientContextParameters>;

using EKSDefaultEpProviderBase = BDDEndpointProvider<EKSClientConfiguration, EKSBuiltInParameters, EKSClientContextParameters>;

}  // namespace Endpoint
}  // namespace EKS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_EKS_EXTERN template class AWS_EKS_API Aws::Endpoint::EndpointProviderBase<
    EKS::Endpoint::EKSClientConfiguration, EKS::Endpoint::EKSBuiltInParameters, EKS::Endpoint::EKSClientContextParameters>;

AWS_EKS_EXTERN template class AWS_EKS_API Aws::Endpoint::BDDEndpointProvider<
    EKS::Endpoint::EKSClientConfiguration, EKS::Endpoint::EKSBuiltInParameters, EKS::Endpoint::EKSClientContextParameters>;
}  // namespace Endpoint

namespace EKS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_EKS_API EKSEndpointProvider : public EKSDefaultEpProviderBase {
 public:
  using EKSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EKSEndpointProvider();

  ~EKSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EKS
}  // namespace Aws
