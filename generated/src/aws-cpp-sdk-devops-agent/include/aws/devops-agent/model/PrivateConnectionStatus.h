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
enum class PrivateConnectionStatus { NOT_SET, ACTIVE, CREATE_IN_PROGRESS, CREATE_FAILED, DELETE_IN_PROGRESS, DELETE_FAILED };

namespace PrivateConnectionStatusMapper {
AWS_DEVOPSAGENT_API PrivateConnectionStatus GetPrivateConnectionStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForPrivateConnectionStatus(PrivateConnectionStatus value);
}  // namespace PrivateConnectionStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
