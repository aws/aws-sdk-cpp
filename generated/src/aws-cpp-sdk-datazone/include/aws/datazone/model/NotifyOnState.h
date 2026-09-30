/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotifyOnState { NOT_SET, SUCCEEDED, FAILED, STOPPED, QUEUED, STARTING, RUNNING, STOPPING };

namespace NotifyOnStateMapper {
AWS_DATAZONE_API NotifyOnState GetNotifyOnStateForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotifyOnState(NotifyOnState value);
}  // namespace NotifyOnStateMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
