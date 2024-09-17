/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class WebhookScopeType
  {
    NOT_SET,
    GITHUB_ORGANIZATION,
    GITHUB_GLOBAL,
    GITLAB_GROUP
  };

namespace WebhookScopeTypeMapper
{
AWS_CODEBUILD_API WebhookScopeType GetWebhookScopeTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForWebhookScopeType(WebhookScopeType value);
} // namespace WebhookScopeTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
