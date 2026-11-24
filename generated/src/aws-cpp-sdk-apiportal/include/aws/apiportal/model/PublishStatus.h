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
enum class PublishStatus { NOT_SET, PUBLISHED, PUBLISH_IN_PROGRESS, PUBLISH_FAILED, DISABLE_IN_PROGRESS, DISABLE_FAILED, DISABLED };

namespace PublishStatusMapper {
AWS_APIPORTAL_API PublishStatus GetPublishStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForPublishStatus(PublishStatus value);
}  // namespace PublishStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
