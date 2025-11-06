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
enum class EvaluationFormItemEnablementAction { NOT_SET, DISABLE, ENABLE };

namespace EvaluationFormItemEnablementActionMapper {
AWS_CONNECT_API EvaluationFormItemEnablementAction GetEvaluationFormItemEnablementActionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormItemEnablementAction(EvaluationFormItemEnablementAction value);
}  // namespace EvaluationFormItemEnablementActionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
