/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class PostStreamArtifactGenerationStatus { NOT_SET, IN_PROGRESS, FAILED, COMPLETED };

namespace PostStreamArtifactGenerationStatusMapper {
AWS_CONNECTHEALTH_API PostStreamArtifactGenerationStatus GetPostStreamArtifactGenerationStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForPostStreamArtifactGenerationStatus(PostStreamArtifactGenerationStatus value);
}  // namespace PostStreamArtifactGenerationStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
