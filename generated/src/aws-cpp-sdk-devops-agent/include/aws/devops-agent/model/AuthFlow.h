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
enum class AuthFlow { NOT_SET, iam, idc, idp };

namespace AuthFlowMapper {
AWS_DEVOPSAGENT_API AuthFlow GetAuthFlowForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForAuthFlow(AuthFlow value);
}  // namespace AuthFlowMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
