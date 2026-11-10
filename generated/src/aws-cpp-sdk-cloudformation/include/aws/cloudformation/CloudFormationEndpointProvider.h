/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationClientConfiguration.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudFormation {
namespace Endpoint {
using CloudFormationClientConfiguration = Aws::CloudFormation::CloudFormationClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDFORMATION_API CloudFormationBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudFormationBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudFormationClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudFormationClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudFormationClientConfiguration& config);
};

/**
 * The type for the CloudFormation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFormationEndpointProviderBase =
    EndpointProviderBase<CloudFormationClientConfiguration, CloudFormationBuiltInParameters, CloudFormationClientContextParameters>;

using CloudFormationDefaultEpProviderBase =
    BDDEndpointProvider<CloudFormationClientConfiguration, CloudFormationBuiltInParameters, CloudFormationClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudFormation

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDFORMATION_EXTERN template class AWS_CLOUDFORMATION_API Aws::Endpoint::EndpointProviderBase<
    CloudFormation::Endpoint::CloudFormationClientConfiguration, CloudFormation::Endpoint::CloudFormationBuiltInParameters,
    CloudFormation::Endpoint::CloudFormationClientContextParameters>;

AWS_CLOUDFORMATION_EXTERN template class AWS_CLOUDFORMATION_API Aws::Endpoint::BDDEndpointProvider<
    CloudFormation::Endpoint::CloudFormationClientConfiguration, CloudFormation::Endpoint::CloudFormationBuiltInParameters,
    CloudFormation::Endpoint::CloudFormationClientContextParameters>;
}  // namespace Endpoint

namespace CloudFormation {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFORMATION_API CloudFormationEndpointProvider : public CloudFormationDefaultEpProviderBase {
 public:
  using CloudFormationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudFormationEndpointProvider();

  ~CloudFormationEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudFormation
}  // namespace Aws
