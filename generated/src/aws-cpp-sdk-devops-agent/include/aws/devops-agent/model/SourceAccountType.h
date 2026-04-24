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
enum class SourceAccountType { NOT_SET, source };

namespace SourceAccountTypeMapper {
AWS_DEVOPSAGENT_API SourceAccountType GetSourceAccountTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForSourceAccountType(SourceAccountType value);
}  // namespace SourceAccountTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
