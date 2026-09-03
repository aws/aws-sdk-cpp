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
enum class PreEvaluationFilterType { NOT_SET, TAG };

namespace PreEvaluationFilterTypeMapper {
AWS_CONNECT_API PreEvaluationFilterType GetPreEvaluationFilterTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPreEvaluationFilterType(PreEvaluationFilterType value);
}  // namespace PreEvaluationFilterTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
