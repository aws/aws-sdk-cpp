/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class PhaseStatus { NOT_SET, PENDING, SUCCESS, ERROR_ };

namespace PhaseStatusMapper {
AWS_DATASYNC_API PhaseStatus GetPhaseStatusForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForPhaseStatus(PhaseStatus value);
}  // namespace PhaseStatusMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
