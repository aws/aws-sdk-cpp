/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/KMSClientConfiguration.h>
#include <aws/kms/KMS_EXPORTS.h>

namespace Aws {
namespace KMS {
namespace Endpoint {
using KMSClientConfiguration = Aws::KMS::KMSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KMSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KMS_API KMSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KMSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KMSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KMSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KMSClientConfiguration& config);
};

/**
 * The type for the KMS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KMSEndpointProviderBase = EndpointProviderBase<KMSClientConfiguration, KMSBuiltInParameters, KMSClientContextParameters>;

using KMSDefaultEpProviderBase = BDDEndpointProvider<KMSClientConfiguration, KMSBuiltInParameters, KMSClientContextParameters>;

}  // namespace Endpoint
}  // namespace KMS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KMS_EXTERN template class AWS_KMS_API Aws::Endpoint::EndpointProviderBase<
    KMS::Endpoint::KMSClientConfiguration, KMS::Endpoint::KMSBuiltInParameters, KMS::Endpoint::KMSClientContextParameters>;

AWS_KMS_EXTERN template class AWS_KMS_API Aws::Endpoint::BDDEndpointProvider<
    KMS::Endpoint::KMSClientConfiguration, KMS::Endpoint::KMSBuiltInParameters, KMS::Endpoint::KMSClientContextParameters>;
}  // namespace Endpoint

namespace KMS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KMS_API KMSEndpointProvider : public KMSDefaultEpProviderBase {
 public:
  using KMSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KMSEndpointProvider();

  ~KMSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KMS
}  // namespace Aws
