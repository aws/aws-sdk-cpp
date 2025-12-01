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
enum class EvaluationFormItemSourceValuesComparator { NOT_SET, IN, NOT_IN, ALL_IN, EXACT };

namespace EvaluationFormItemSourceValuesComparatorMapper {
AWS_CONNECT_API EvaluationFormItemSourceValuesComparator GetEvaluationFormItemSourceValuesComparatorForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormItemSourceValuesComparator(EvaluationFormItemSourceValuesComparator value);
}  // namespace EvaluationFormItemSourceValuesComparatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
