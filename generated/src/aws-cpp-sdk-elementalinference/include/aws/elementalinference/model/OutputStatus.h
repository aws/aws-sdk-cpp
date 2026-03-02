/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class OutputStatus { NOT_SET, ENABLED, DISABLED };

namespace OutputStatusMapper {
AWS_ELEMENTALINFERENCE_API OutputStatus GetOutputStatusForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForOutputStatus(OutputStatus value);
}  // namespace OutputStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
