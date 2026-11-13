/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>
#include <aws/cloudfront-keyvaluestore/internal/CloudFrontKeyValueStoreEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDFRONTKEYVALUESTORE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientConfiguration,
                                                   CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreBuiltInParameters,
                                                   CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientConfiguration,
                                                  CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreBuiltInParameters,
                                                  CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudFrontKeyValueStore {
namespace Endpoint {
CloudFrontKeyValueStoreEndpointProvider::CloudFrontKeyValueStoreEndpointProvider()
    : CloudFrontKeyValueStoreDefaultEpProviderBase(Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::GetRulesBlob(),
                                                   Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::RulesBlobSize) {}

void CloudFrontKeyValueStoreBuiltInParameters::SetFromClientConfiguration(const CloudFrontKeyValueStoreClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudFrontKeyValueStoreClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudFrontKeyValueStoreBuiltInParameters::SetFromClientConfiguration(const CloudFrontKeyValueStoreClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudFrontKeyValueStoreClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudFrontKeyValueStoreBuiltInParameters::SetServiceSpecificParameters(const CloudFrontKeyValueStoreClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
