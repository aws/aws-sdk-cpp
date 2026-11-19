/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivschat/IvschatClientConfiguration.h>
#include <aws/ivschat/Ivschat_EXPORTS.h>

namespace Aws {
namespace ivschat {
namespace Endpoint {
using IvschatClientConfiguration = Aws::ivschat::IvschatClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using IvschatClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_IVSCHAT_API IvschatBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~IvschatBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const IvschatClientConfiguration& config);
  virtual void SetFromClientConfiguration(const IvschatClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const IvschatClientConfiguration& config);
};

/**
 * The type for the ivschat Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IvschatEndpointProviderBase =
    EndpointProviderBase<IvschatClientConfiguration, IvschatBuiltInParameters, IvschatClientContextParameters>;

using IvschatDefaultEpProviderBase =
    BDDEndpointProvider<IvschatClientConfiguration, IvschatBuiltInParameters, IvschatClientContextParameters>;

}  // namespace Endpoint
}  // namespace ivschat

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_IVSCHAT_EXTERN template class AWS_IVSCHAT_API
    Aws::Endpoint::EndpointProviderBase<ivschat::Endpoint::IvschatClientConfiguration, ivschat::Endpoint::IvschatBuiltInParameters,
                                        ivschat::Endpoint::IvschatClientContextParameters>;

AWS_IVSCHAT_EXTERN template class AWS_IVSCHAT_API
    Aws::Endpoint::BDDEndpointProvider<ivschat::Endpoint::IvschatClientConfiguration, ivschat::Endpoint::IvschatBuiltInParameters,
                                       ivschat::Endpoint::IvschatClientContextParameters>;
}  // namespace Endpoint

namespace ivschat {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_IVSCHAT_API IvschatEndpointProvider : public IvschatDefaultEpProviderBase {
 public:
  using IvschatResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  IvschatEndpointProvider();

  ~IvschatEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ivschat
}  // namespace Aws
