/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class ResumePosition { NOT_SET, LAST_PROCESSED, LATEST };

namespace ResumePositionMapper {
AWS_EVENTBRIDGEV2_API ResumePosition GetResumePositionForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForResumePosition(ResumePosition value);
}  // namespace ResumePositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
