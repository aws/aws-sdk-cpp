/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/CloudFrontEndpointProvider.h>
#include <aws/cloudfront/internal/CloudFrontEndpointRules.h>

namespace Aws {
namespace CloudFront {
namespace Endpoint {
CloudFrontEndpointProvider::CloudFrontEndpointProvider()
    : CloudFrontDefaultEpProviderBase(Aws::CloudFront::CloudFrontEndpointRules::GetRulesBlob(),
                                      Aws::CloudFront::CloudFrontEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudFront
}  // namespace Aws
