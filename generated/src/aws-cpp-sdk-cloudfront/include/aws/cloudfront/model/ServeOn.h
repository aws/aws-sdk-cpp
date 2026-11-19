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
enum class ServeOn { NOT_SET, any, anycast_ip_list_only };

namespace ServeOnMapper {
AWS_CLOUDFRONT_API ServeOn GetServeOnForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForServeOn(ServeOn value);
}  // namespace ServeOnMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
