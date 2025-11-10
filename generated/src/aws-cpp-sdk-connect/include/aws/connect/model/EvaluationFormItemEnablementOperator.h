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
enum class EvaluationFormItemEnablementOperator { NOT_SET, OR, AND };

namespace EvaluationFormItemEnablementOperatorMapper {
AWS_CONNECT_API EvaluationFormItemEnablementOperator GetEvaluationFormItemEnablementOperatorForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormItemEnablementOperator(EvaluationFormItemEnablementOperator value);
}  // namespace EvaluationFormItemEnablementOperatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
