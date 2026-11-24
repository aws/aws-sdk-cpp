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
enum class PreviewStatus { NOT_SET, PREVIEW_IN_PROGRESS, PREVIEW_FAILED, PREVIEW_READY };

namespace PreviewStatusMapper {
AWS_APIPORTAL_API PreviewStatus GetPreviewStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForPreviewStatus(PreviewStatus value);
}  // namespace PreviewStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
