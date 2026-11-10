/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVSClientConfiguration.h>
#include <aws/ivs/IVS_EXPORTS.h>

namespace Aws {
namespace IVS {
namespace Endpoint {
using IVSClientConfiguration = Aws::IVS::IVSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IVSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IVS_API IVSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IVSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IVSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IVSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IVSClientConfiguration& config);
};

/**
 * The type for the IVS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IVSEndpointProviderBase = EndpointProviderBase<IVSClientConfiguration, IVSBuiltInParameters, IVSClientContextParameters>;

using IVSDefaultEpProviderBase = BDDEndpointProvider<IVSClientConfiguration, IVSBuiltInParameters, IVSClientContextParameters>;

}  // namespace Endpoint
}  // namespace IVS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IVS_EXTERN template class AWS_IVS_API Aws::Endpoint::EndpointProviderBase<
    IVS::Endpoint::IVSClientConfiguration, IVS::Endpoint::IVSBuiltInParameters, IVS::Endpoint::IVSClientContextParameters>;

AWS_IVS_EXTERN template class AWS_IVS_API Aws::Endpoint::BDDEndpointProvider<
    IVS::Endpoint::IVSClientConfiguration, IVS::Endpoint::IVSBuiltInParameters, IVS::Endpoint::IVSClientContextParameters>;
}  // namespace Endpoint

namespace IVS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IVS_API IVSEndpointProvider : public IVSDefaultEpProviderBase {
 public:
  using IVSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IVSEndpointProvider();

  ~IVSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace IVS
}  // namespace Aws
