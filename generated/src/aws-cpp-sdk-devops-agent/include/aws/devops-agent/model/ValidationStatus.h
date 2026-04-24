/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class ValidationStatus { NOT_SET, valid, invalid, pending_confirmation };

namespace ValidationStatusMapper {
AWS_DEVOPSAGENT_API ValidationStatus GetValidationStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForValidationStatus(ValidationStatus value);
}  // namespace ValidationStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
