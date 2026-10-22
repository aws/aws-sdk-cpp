/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class ValidationTerminalStatus { NOT_SET, COMPLETED, FAILED, NO_SOURCE_AVAILABLE, PARTIAL };

namespace ValidationTerminalStatusMapper {
AWS_CONTINUUM_API ValidationTerminalStatus GetValidationTerminalStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForValidationTerminalStatus(ValidationTerminalStatus value);
}  // namespace ValidationTerminalStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
