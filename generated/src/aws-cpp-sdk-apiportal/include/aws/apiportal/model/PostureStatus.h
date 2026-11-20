/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class PostureStatus { NOT_SET, TRUE, FALSE, NOT_APPLICABLE, INSUFFICIENT_DATA };

namespace PostureStatusMapper {
AWS_APIPORTAL_API PostureStatus GetPostureStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForPostureStatus(PostureStatus value);
}  // namespace PostureStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
