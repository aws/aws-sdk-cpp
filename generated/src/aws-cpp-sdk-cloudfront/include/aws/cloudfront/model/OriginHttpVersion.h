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
enum class OriginHttpVersion { NOT_SET, http1_1, http2 };

namespace OriginHttpVersionMapper {
AWS_CLOUDFRONT_API OriginHttpVersion GetOriginHttpVersionForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOriginHttpVersion(OriginHttpVersion value);
}  // namespace OriginHttpVersionMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
