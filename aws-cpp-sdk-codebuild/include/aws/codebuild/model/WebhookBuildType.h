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
  enum class WebhookBuildType
  {
    NOT_SET,
    BUILD,
    BUILD_BATCH
  };

namespace WebhookBuildTypeMapper
{
AWS_CODEBUILD_API WebhookBuildType GetWebhookBuildTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForWebhookBuildType(WebhookBuildType value);
} // namespace WebhookBuildTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
