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
enum class OnDomainTakeover { NOT_SET, allow, reject };

namespace OnDomainTakeoverMapper {
AWS_CLOUDFRONT_API OnDomainTakeover GetOnDomainTakeoverForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForOnDomainTakeover(OnDomainTakeover value);
}  // namespace OnDomainTakeoverMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
