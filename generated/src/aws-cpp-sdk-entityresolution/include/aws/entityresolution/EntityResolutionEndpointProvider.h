/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/EntityResolutionClientConfiguration.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

namespace Aws {
namespace EntityResolution {
namespace Endpoint {
using EntityResolutionClientConfiguration = Aws::EntityResolution::EntityResolutionClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using EntityResolutionClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ENTITYRESOLUTION_API EntityResolutionBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~EntityResolutionBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const EntityResolutionClientConfiguration& config);
  virtual void SetFromClientConfiguration(const EntityResolutionClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const EntityResolutionClientConfiguration& config);
};

/**
 * The type for the EntityResolution Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EntityResolutionEndpointProviderBase =
    EndpointProviderBase<EntityResolutionClientConfiguration, EntityResolutionBuiltInParameters, EntityResolutionClientContextParameters>;

using EntityResolutionDefaultEpProviderBase =
    BDDEndpointProvider<EntityResolutionClientConfiguration, EntityResolutionBuiltInParameters, EntityResolutionClientContextParameters>;

}  // namespace Endpoint
}  // namespace EntityResolution

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ENTITYRESOLUTION_EXTERN template class AWS_ENTITYRESOLUTION_API Aws::Endpoint::EndpointProviderBase<
    EntityResolution::Endpoint::EntityResolutionClientConfiguration, EntityResolution::Endpoint::EntityResolutionBuiltInParameters,
    EntityResolution::Endpoint::EntityResolutionClientContextParameters>;

AWS_ENTITYRESOLUTION_EXTERN template class AWS_ENTITYRESOLUTION_API Aws::Endpoint::BDDEndpointProvider<
    EntityResolution::Endpoint::EntityResolutionClientConfiguration, EntityResolution::Endpoint::EntityResolutionBuiltInParameters,
    EntityResolution::Endpoint::EntityResolutionClientContextParameters>;
}  // namespace Endpoint

namespace EntityResolution {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ENTITYRESOLUTION_API EntityResolutionEndpointProvider : public EntityResolutionDefaultEpProviderBase {
 public:
  using EntityResolutionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  EntityResolutionEndpointProvider();

  ~EntityResolutionEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace EntityResolution
}  // namespace Aws
