﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class ScheduleStatus { NOT_SET, ENABLED, DISABLED };

namespace ScheduleStatusMapper {
AWS_DATASYNC_API ScheduleStatus GetScheduleStatusForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForScheduleStatus(ScheduleStatus value);
}  // namespace ScheduleStatusMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
