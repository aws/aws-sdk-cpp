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
enum class ChecklistItemStatus { NOT_SET, DISCUSSED, PARTIALLY_DISCUSSED, NOT_DISCUSSED };

namespace ChecklistItemStatusMapper {
AWS_CONNECTHEALTH_API ChecklistItemStatus GetChecklistItemStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForChecklistItemStatus(ChecklistItemStatus value);
}  // namespace ChecklistItemStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
