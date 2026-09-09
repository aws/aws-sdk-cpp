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
enum class EvaluationFormAIVersionStatus { NOT_SET, LATEST, PREVIEW, ACTIVE, DEPRECATED };

namespace EvaluationFormAIVersionStatusMapper {
AWS_CONNECT_API EvaluationFormAIVersionStatus GetEvaluationFormAIVersionStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormAIVersionStatus(EvaluationFormAIVersionStatus value);
}  // namespace EvaluationFormAIVersionStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
