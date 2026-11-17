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
enum class ChatArchiveStatus { NOT_SET, ACTIVE, ARCHIVED };

namespace ChatArchiveStatusMapper {
AWS_DEVOPSAGENT_API ChatArchiveStatus GetChatArchiveStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForChatArchiveStatus(ChatArchiveStatus value);
}  // namespace ChatArchiveStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
