/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/DevOpsGuruClientConfiguration.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

namespace Aws {
namespace DevOpsGuru {
namespace Endpoint {
using DevOpsGuruClientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DevOpsGuruClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DEVOPSGURU_API DevOpsGuruBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DevOpsGuruBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DevOpsGuruClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DevOpsGuruClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DevOpsGuruClientConfiguration& config);
};

/**
 * The type for the DevOpsGuru Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DevOpsGuruEndpointProviderBase =
    EndpointProviderBase<DevOpsGuruClientConfiguration, DevOpsGuruBuiltInParameters, DevOpsGuruClientContextParameters>;

using DevOpsGuruDefaultEpProviderBase =
    BDDEndpointProvider<DevOpsGuruClientConfiguration, DevOpsGuruBuiltInParameters, DevOpsGuruClientContextParameters>;

}  // namespace Endpoint
}  // namespace DevOpsGuru

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DEVOPSGURU_EXTERN template class AWS_DEVOPSGURU_API Aws::Endpoint::EndpointProviderBase<
    DevOpsGuru::Endpoint::DevOpsGuruClientConfiguration, DevOpsGuru::Endpoint::DevOpsGuruBuiltInParameters,
    DevOpsGuru::Endpoint::DevOpsGuruClientContextParameters>;

AWS_DEVOPSGURU_EXTERN template class AWS_DEVOPSGURU_API Aws::Endpoint::BDDEndpointProvider<
    DevOpsGuru::Endpoint::DevOpsGuruClientConfiguration, DevOpsGuru::Endpoint::DevOpsGuruBuiltInParameters,
    DevOpsGuru::Endpoint::DevOpsGuruClientContextParameters>;
}  // namespace Endpoint

namespace DevOpsGuru {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DEVOPSGURU_API DevOpsGuruEndpointProvider : public DevOpsGuruDefaultEpProviderBase {
 public:
  using DevOpsGuruResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DevOpsGuruEndpointProvider();

  ~DevOpsGuruEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DevOpsGuru
}  // namespace Aws
