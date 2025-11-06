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
enum class EvaluationFormItemEnablementSourceValueType { NOT_SET, OPTION_REF_ID };

namespace EvaluationFormItemEnablementSourceValueTypeMapper {
AWS_CONNECT_API EvaluationFormItemEnablementSourceValueType GetEvaluationFormItemEnablementSourceValueTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormItemEnablementSourceValueType(EvaluationFormItemEnablementSourceValueType value);
}  // namespace EvaluationFormItemEnablementSourceValueTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
