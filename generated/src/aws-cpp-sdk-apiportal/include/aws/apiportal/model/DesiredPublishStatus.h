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
enum class DesiredPublishStatus { NOT_SET, PUBLISHED, DISABLED };

namespace DesiredPublishStatusMapper {
AWS_APIPORTAL_API DesiredPublishStatus GetDesiredPublishStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDesiredPublishStatus(DesiredPublishStatus value);
}  // namespace DesiredPublishStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
