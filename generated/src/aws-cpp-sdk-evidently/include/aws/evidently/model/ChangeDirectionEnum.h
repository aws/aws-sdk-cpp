/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvidently {
namespace Model {
enum class ChangeDirectionEnum { NOT_SET, INCREASE, DECREASE };

namespace ChangeDirectionEnumMapper {
AWS_CLOUDWATCHEVIDENTLY_API ChangeDirectionEnum GetChangeDirectionEnumForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForChangeDirectionEnum(ChangeDirectionEnum value);
}  // namespace ChangeDirectionEnumMapper
}  // namespace Model
}  // namespace CloudWatchEvidently
}  // namespace Aws
