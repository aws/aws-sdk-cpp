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
enum class ViewerMtlsMode { NOT_SET, required, optional };

namespace ViewerMtlsModeMapper {
AWS_CLOUDFRONT_API ViewerMtlsMode GetViewerMtlsModeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForViewerMtlsMode(ViewerMtlsMode value);
}  // namespace ViewerMtlsModeMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
