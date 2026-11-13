/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactClientConfiguration.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace Artifact {
namespace Endpoint {
using ArtifactClientConfiguration = Aws::Artifact::ArtifactClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ArtifactClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ARTIFACT_API ArtifactBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ArtifactBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ArtifactClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ArtifactClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ArtifactClientConfiguration& config);
};

/**
 * The type for the Artifact Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ArtifactEndpointProviderBase =
    EndpointProviderBase<ArtifactClientConfiguration, ArtifactBuiltInParameters, ArtifactClientContextParameters>;

using ArtifactDefaultEpProviderBase =
    BDDEndpointProvider<ArtifactClientConfiguration, ArtifactBuiltInParameters, ArtifactClientContextParameters>;

}  // namespace Endpoint
}  // namespace Artifact

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ARTIFACT_EXTERN template class AWS_ARTIFACT_API
    Aws::Endpoint::EndpointProviderBase<Artifact::Endpoint::ArtifactClientConfiguration, Artifact::Endpoint::ArtifactBuiltInParameters,
                                        Artifact::Endpoint::ArtifactClientContextParameters>;

AWS_ARTIFACT_EXTERN template class AWS_ARTIFACT_API
    Aws::Endpoint::BDDEndpointProvider<Artifact::Endpoint::ArtifactClientConfiguration, Artifact::Endpoint::ArtifactBuiltInParameters,
                                       Artifact::Endpoint::ArtifactClientContextParameters>;
}  // namespace Endpoint

namespace Artifact {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ARTIFACT_API ArtifactEndpointProvider : public ArtifactDefaultEpProviderBase {
 public:
  using ArtifactResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ArtifactEndpointProvider();

  ~ArtifactEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Artifact
}  // namespace Aws
