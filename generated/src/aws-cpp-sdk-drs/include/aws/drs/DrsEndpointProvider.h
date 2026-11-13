/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/DrsClientConfiguration.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Endpoint {
using DrsClientConfiguration = Aws::drs::DrsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using DrsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_DRS_API DrsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~DrsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const DrsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const DrsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const DrsClientConfiguration& config);
};

/**
 * The type for the drs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DrsEndpointProviderBase = EndpointProviderBase<DrsClientConfiguration, DrsBuiltInParameters, DrsClientContextParameters>;

using DrsDefaultEpProviderBase = BDDEndpointProvider<DrsClientConfiguration, DrsBuiltInParameters, DrsClientContextParameters>;

}  // namespace Endpoint
}  // namespace drs

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_DRS_EXTERN template class AWS_DRS_API Aws::Endpoint::EndpointProviderBase<
    drs::Endpoint::DrsClientConfiguration, drs::Endpoint::DrsBuiltInParameters, drs::Endpoint::DrsClientContextParameters>;

AWS_DRS_EXTERN template class AWS_DRS_API Aws::Endpoint::BDDEndpointProvider<
    drs::Endpoint::DrsClientConfiguration, drs::Endpoint::DrsBuiltInParameters, drs::Endpoint::DrsClientContextParameters>;
}  // namespace Endpoint

namespace drs {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_DRS_API DrsEndpointProvider : public DrsDefaultEpProviderBase {
 public:
  using DrsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  DrsEndpointProvider();

  ~DrsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace drs
}  // namespace Aws
