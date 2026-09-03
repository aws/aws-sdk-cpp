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
enum class PreEvaluationFilterResourceType { NOT_SET, CONTACT };

namespace PreEvaluationFilterResourceTypeMapper {
AWS_CONNECT_API PreEvaluationFilterResourceType GetPreEvaluationFilterResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForPreEvaluationFilterResourceType(PreEvaluationFilterResourceType value);
}  // namespace PreEvaluationFilterResourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
