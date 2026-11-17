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
enum class EvaluationFormEvaluationMetadataField { NOT_SET, EVALUATION_TYPE };

namespace EvaluationFormEvaluationMetadataFieldMapper {
AWS_CONNECT_API EvaluationFormEvaluationMetadataField GetEvaluationFormEvaluationMetadataFieldForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormEvaluationMetadataField(EvaluationFormEvaluationMetadataField value);
}  // namespace EvaluationFormEvaluationMetadataFieldMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
