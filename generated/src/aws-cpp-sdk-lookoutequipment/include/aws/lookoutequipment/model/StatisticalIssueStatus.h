/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
namespace Model {
enum class StatisticalIssueStatus { NOT_SET, POTENTIAL_ISSUE_DETECTED, NO_ISSUE_DETECTED };

namespace StatisticalIssueStatusMapper {
AWS_LOOKOUTEQUIPMENT_API StatisticalIssueStatus GetStatisticalIssueStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForStatisticalIssueStatus(StatisticalIssueStatus value);
}  // namespace StatisticalIssueStatusMapper
}  // namespace Model
}  // namespace LookoutEquipment
}  // namespace Aws
