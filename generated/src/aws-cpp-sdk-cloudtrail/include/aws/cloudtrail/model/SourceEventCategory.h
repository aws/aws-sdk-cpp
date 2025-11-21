/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudTrail {
namespace Model {
enum class SourceEventCategory { NOT_SET, Management, Data };

namespace SourceEventCategoryMapper {
AWS_CLOUDTRAIL_API SourceEventCategory GetSourceEventCategoryForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForSourceEventCategory(SourceEventCategory value);
}  // namespace SourceEventCategoryMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
