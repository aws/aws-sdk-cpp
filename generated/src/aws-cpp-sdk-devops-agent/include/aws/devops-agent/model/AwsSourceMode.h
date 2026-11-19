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
enum class AwsSourceMode { NOT_SET, standalone, organization };

namespace AwsSourceModeMapper {
AWS_DEVOPSAGENT_API AwsSourceMode GetAwsSourceModeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForAwsSourceMode(AwsSourceMode value);
}  // namespace AwsSourceModeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
