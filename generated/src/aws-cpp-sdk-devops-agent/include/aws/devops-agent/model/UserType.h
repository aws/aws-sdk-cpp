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
enum class UserType { NOT_SET, IAM, IDC, IDP };

namespace UserTypeMapper {
AWS_DEVOPSAGENT_API UserType GetUserTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForUserType(UserType value);
}  // namespace UserTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
