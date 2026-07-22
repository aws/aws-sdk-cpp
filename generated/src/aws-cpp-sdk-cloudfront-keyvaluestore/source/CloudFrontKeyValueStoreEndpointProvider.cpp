/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>
#include <aws/cloudfront-keyvaluestore/internal/CloudFrontKeyValueStoreEndpointRules.h>

namespace Aws {
namespace CloudFrontKeyValueStore {
namespace Endpoint {
CloudFrontKeyValueStoreEndpointProvider::CloudFrontKeyValueStoreEndpointProvider()
    : CloudFrontKeyValueStoreDefaultEpProviderBase(Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::GetRulesBlob(),
                                                   Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
