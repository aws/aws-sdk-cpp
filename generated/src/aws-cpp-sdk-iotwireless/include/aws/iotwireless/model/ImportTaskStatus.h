/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class ImportTaskStatus { NOT_SET, INITIALIZING, INITIALIZED, PENDING, COMPLETE, FAILED, DELETING };

namespace ImportTaskStatusMapper {
AWS_IOTWIRELESS_API ImportTaskStatus GetImportTaskStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForImportTaskStatus(ImportTaskStatus value);
}  // namespace ImportTaskStatusMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
