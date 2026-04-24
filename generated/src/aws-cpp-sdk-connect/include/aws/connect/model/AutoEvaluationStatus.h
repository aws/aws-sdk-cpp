/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class AutoEvaluationStatus { NOT_SET, IN_PROGRESS, FAILED, SUCCEEDED };

namespace AutoEvaluationStatusMapper {
AWS_CONNECT_API AutoEvaluationStatus GetAutoEvaluationStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAutoEvaluationStatus(AutoEvaluationStatus value);
}  // namespace AutoEvaluationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
