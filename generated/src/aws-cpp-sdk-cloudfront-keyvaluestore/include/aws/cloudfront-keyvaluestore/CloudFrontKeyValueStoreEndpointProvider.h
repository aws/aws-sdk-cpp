/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClientConfiguration.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudFrontKeyValueStore {
namespace Endpoint {
using CloudFrontKeyValueStoreClientConfiguration = Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudFrontKeyValueStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDFRONTKEYVALUESTORE_API CloudFrontKeyValueStoreBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudFrontKeyValueStoreBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudFrontKeyValueStoreClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudFrontKeyValueStoreClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudFrontKeyValueStoreClientConfiguration& config);
};

/**
 * The type for the CloudFrontKeyValueStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudFrontKeyValueStoreEndpointProviderBase =
    EndpointProviderBase<CloudFrontKeyValueStoreClientConfiguration, CloudFrontKeyValueStoreBuiltInParameters,
                         CloudFrontKeyValueStoreClientContextParameters>;

using CloudFrontKeyValueStoreDefaultEpProviderBase =
    BDDEndpointProvider<CloudFrontKeyValueStoreClientConfiguration, CloudFrontKeyValueStoreBuiltInParameters,
                        CloudFrontKeyValueStoreClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudFrontKeyValueStore

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDFRONTKEYVALUESTORE_EXTERN template class AWS_CLOUDFRONTKEYVALUESTORE_API
    Aws::Endpoint::EndpointProviderBase<CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientConfiguration,
                                        CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreBuiltInParameters,
                                        CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientContextParameters>;

AWS_CLOUDFRONTKEYVALUESTORE_EXTERN template class AWS_CLOUDFRONTKEYVALUESTORE_API
    Aws::Endpoint::BDDEndpointProvider<CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientConfiguration,
                                       CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreBuiltInParameters,
                                       CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientContextParameters>;
}  // namespace Endpoint

namespace CloudFrontKeyValueStore {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDFRONTKEYVALUESTORE_API CloudFrontKeyValueStoreEndpointProvider : public CloudFrontKeyValueStoreDefaultEpProviderBase {
 public:
  using CloudFrontKeyValueStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudFrontKeyValueStoreEndpointProvider();

  ~CloudFrontKeyValueStoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
