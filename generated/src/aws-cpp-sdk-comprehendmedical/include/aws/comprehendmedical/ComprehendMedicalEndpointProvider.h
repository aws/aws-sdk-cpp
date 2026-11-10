/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedicalClientConfiguration.h>
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ComprehendMedical {
namespace Endpoint {
using ComprehendMedicalClientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ComprehendMedicalClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_COMPREHENDMEDICAL_API ComprehendMedicalBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ComprehendMedicalBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ComprehendMedicalClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ComprehendMedicalClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ComprehendMedicalClientConfiguration& config);
};

/**
 * The type for the ComprehendMedical Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComprehendMedicalEndpointProviderBase = EndpointProviderBase<ComprehendMedicalClientConfiguration, ComprehendMedicalBuiltInParameters,
                                                                   ComprehendMedicalClientContextParameters>;

using ComprehendMedicalDefaultEpProviderBase =
    BDDEndpointProvider<ComprehendMedicalClientConfiguration, ComprehendMedicalBuiltInParameters, ComprehendMedicalClientContextParameters>;

}  // namespace Endpoint
}  // namespace ComprehendMedical

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_COMPREHENDMEDICAL_EXTERN template class AWS_COMPREHENDMEDICAL_API Aws::Endpoint::EndpointProviderBase<
    ComprehendMedical::Endpoint::ComprehendMedicalClientConfiguration, ComprehendMedical::Endpoint::ComprehendMedicalBuiltInParameters,
    ComprehendMedical::Endpoint::ComprehendMedicalClientContextParameters>;

AWS_COMPREHENDMEDICAL_EXTERN template class AWS_COMPREHENDMEDICAL_API Aws::Endpoint::BDDEndpointProvider<
    ComprehendMedical::Endpoint::ComprehendMedicalClientConfiguration, ComprehendMedical::Endpoint::ComprehendMedicalBuiltInParameters,
    ComprehendMedical::Endpoint::ComprehendMedicalClientContextParameters>;
}  // namespace Endpoint

namespace ComprehendMedical {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_COMPREHENDMEDICAL_API ComprehendMedicalEndpointProvider : public ComprehendMedicalDefaultEpProviderBase {
 public:
  using ComprehendMedicalResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ComprehendMedicalEndpointProvider();

  ~ComprehendMedicalEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ComprehendMedical
}  // namespace Aws
