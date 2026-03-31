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
enum class GitLabTokenType { NOT_SET, personal, group };

namespace GitLabTokenTypeMapper {
AWS_DEVOPSAGENT_API GitLabTokenType GetGitLabTokenTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForGitLabTokenType(GitLabTokenType value);
}  // namespace GitLabTokenTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
