/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class Status { NOT_SET, InProgress, Completed, Failed, Cancelled, Cancelling };

namespace StatusMapper {
AWS_IOT_API Status GetStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
