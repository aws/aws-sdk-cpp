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
enum class GithubRepoOwnerType { NOT_SET, organization, user };

namespace GithubRepoOwnerTypeMapper {
AWS_DEVOPSAGENT_API GithubRepoOwnerType GetGithubRepoOwnerTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForGithubRepoOwnerType(GithubRepoOwnerType value);
}  // namespace GithubRepoOwnerTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
