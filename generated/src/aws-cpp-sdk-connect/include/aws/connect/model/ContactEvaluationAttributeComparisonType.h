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
enum class ContactEvaluationAttributeComparisonType { NOT_SET, EXACT };

namespace ContactEvaluationAttributeComparisonTypeMapper {
AWS_CONNECT_API ContactEvaluationAttributeComparisonType GetContactEvaluationAttributeComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactEvaluationAttributeComparisonType(ContactEvaluationAttributeComparisonType value);
}  // namespace ContactEvaluationAttributeComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
