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
enum class EvaluationEnablementStatus { NOT_SET, ENABLED, DISABLED };

namespace EvaluationEnablementStatusMapper {
AWS_CONNECT_API EvaluationEnablementStatus GetEvaluationEnablementStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationEnablementStatus(EvaluationEnablementStatus value);
}  // namespace EvaluationEnablementStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
