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
enum class EvaluationType { NOT_SET, STANDARD, CALIBRATION };

namespace EvaluationTypeMapper {
AWS_CONNECT_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationType(EvaluationType value);
}  // namespace EvaluationTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
