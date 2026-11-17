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
enum class EvaluationFormItemEnablementSourceType { NOT_SET, QUESTION_REF_ID, CONTACT, EVALUATION_METADATA, FORM_METADATA, AI_METRICS };

namespace EvaluationFormItemEnablementSourceTypeMapper {
AWS_CONNECT_API EvaluationFormItemEnablementSourceType GetEvaluationFormItemEnablementSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormItemEnablementSourceType(EvaluationFormItemEnablementSourceType value);
}  // namespace EvaluationFormItemEnablementSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
