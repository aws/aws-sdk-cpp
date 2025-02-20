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
  enum class WebhookStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE,
    DELETING
  };

namespace WebhookStatusMapper
{
AWS_CODEBUILD_API WebhookStatus GetWebhookStatusForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForWebhookStatus(WebhookStatus value);
} // namespace WebhookStatusMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
