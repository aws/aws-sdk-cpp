/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/DLMClientConfiguration.h>
#include <aws/dlm/DLM_EXPORTS.h>

namespace Aws {
namespace DLM {
namespace Endpoint {
using DLMClientConfiguration = Aws::DLM::DLMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DLMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DLM_API DLMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DLMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DLMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DLMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DLMClientConfiguration& config);
};

/**
 * The type for the DLM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DLMEndpointProviderBase = EndpointProviderBase<DLMClientConfiguration, DLMBuiltInParameters, DLMClientContextParameters>;

using DLMDefaultEpProviderBase = BDDEndpointProvider<DLMClientConfiguration, DLMBuiltInParameters, DLMClientContextParameters>;

}  // namespace Endpoint
}  // namespace DLM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DLM_EXTERN template class AWS_DLM_API Aws::Endpoint::EndpointProviderBase<
    DLM::Endpoint::DLMClientConfiguration, DLM::Endpoint::DLMBuiltInParameters, DLM::Endpoint::DLMClientContextParameters>;

AWS_DLM_EXTERN template class AWS_DLM_API Aws::Endpoint::BDDEndpointProvider<
    DLM::Endpoint::DLMClientConfiguration, DLM::Endpoint::DLMBuiltInParameters, DLM::Endpoint::DLMClientContextParameters>;
}  // namespace Endpoint

namespace DLM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DLM_API DLMEndpointProvider : public DLMDefaultEpProviderBase {
 public:
  using DLMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DLMEndpointProvider();

  ~DLMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace DLM
}  // namespace Aws
