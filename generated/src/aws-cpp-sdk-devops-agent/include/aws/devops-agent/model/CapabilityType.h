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
enum class CapabilityType { NOT_SET, RELEASE_READINESS_REVIEW, RELEASE_READINESS_REVIEW_AUTOMATED_TESTING };

namespace CapabilityTypeMapper {
AWS_DEVOPSAGENT_API CapabilityType GetCapabilityTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForCapabilityType(CapabilityType value);
}  // namespace CapabilityTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
