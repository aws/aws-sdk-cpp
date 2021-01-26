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
  enum class WebhookFilterType
  {
    NOT_SET,
    EVENT,
    BASE_REF,
    HEAD_REF,
    ACTOR_ACCOUNT_ID,
    FILE_PATH,
    COMMIT_MESSAGE
  };

namespace WebhookFilterTypeMapper
{
AWS_CODEBUILD_API WebhookFilterType GetWebhookFilterTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForWebhookFilterType(WebhookFilterType value);
} // namespace WebhookFilterTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
