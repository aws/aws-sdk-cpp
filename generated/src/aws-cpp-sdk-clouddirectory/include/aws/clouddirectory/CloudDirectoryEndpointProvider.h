/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryClientConfiguration.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudDirectory {
namespace Endpoint {
using CloudDirectoryClientConfiguration = Aws::CloudDirectory::CloudDirectoryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudDirectoryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDDIRECTORY_API CloudDirectoryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudDirectoryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudDirectoryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudDirectoryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudDirectoryClientConfiguration& config);
};

/**
 * The type for the CloudDirectory Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudDirectoryEndpointProviderBase =
    EndpointProviderBase<CloudDirectoryClientConfiguration, CloudDirectoryBuiltInParameters, CloudDirectoryClientContextParameters>;

using CloudDirectoryDefaultEpProviderBase =
    BDDEndpointProvider<CloudDirectoryClientConfiguration, CloudDirectoryBuiltInParameters, CloudDirectoryClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudDirectory

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDDIRECTORY_EXTERN template class AWS_CLOUDDIRECTORY_API Aws::Endpoint::EndpointProviderBase<
    CloudDirectory::Endpoint::CloudDirectoryClientConfiguration, CloudDirectory::Endpoint::CloudDirectoryBuiltInParameters,
    CloudDirectory::Endpoint::CloudDirectoryClientContextParameters>;

AWS_CLOUDDIRECTORY_EXTERN template class AWS_CLOUDDIRECTORY_API Aws::Endpoint::BDDEndpointProvider<
    CloudDirectory::Endpoint::CloudDirectoryClientConfiguration, CloudDirectory::Endpoint::CloudDirectoryBuiltInParameters,
    CloudDirectory::Endpoint::CloudDirectoryClientContextParameters>;
}  // namespace Endpoint

namespace CloudDirectory {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDDIRECTORY_API CloudDirectoryEndpointProvider : public CloudDirectoryDefaultEpProviderBase {
 public:
  using CloudDirectoryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudDirectoryEndpointProvider();

  ~CloudDirectoryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudDirectory
}  // namespace Aws
