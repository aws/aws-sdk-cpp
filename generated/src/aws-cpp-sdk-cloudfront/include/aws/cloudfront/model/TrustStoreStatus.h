/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFront {
namespace Model {
enum class TrustStoreStatus { NOT_SET, pending, active, failed };

namespace TrustStoreStatusMapper {
AWS_CLOUDFRONT_API TrustStoreStatus GetTrustStoreStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForTrustStoreStatus(TrustStoreStatus value);
}  // namespace TrustStoreStatusMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
