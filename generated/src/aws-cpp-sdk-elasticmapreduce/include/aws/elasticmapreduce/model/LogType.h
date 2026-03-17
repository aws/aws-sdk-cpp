/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Model {
enum class LogType { NOT_SET, system_logs, application_logs, persistent_ui_logs };

namespace LogTypeMapper {
AWS_EMR_API LogType GetLogTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForLogType(LogType value);
}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
