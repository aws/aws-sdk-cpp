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
enum class EvaluationTranscriptType { NOT_SET, RAW, REDACTED };

namespace EvaluationTranscriptTypeMapper {
AWS_CONNECT_API EvaluationTranscriptType GetEvaluationTranscriptTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationTranscriptType(EvaluationTranscriptType value);
}  // namespace EvaluationTranscriptTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
