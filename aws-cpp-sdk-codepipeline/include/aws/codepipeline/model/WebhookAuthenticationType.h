/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class WebhookAuthenticationType
  {
    NOT_SET,
    GITHUB_HMAC,
    IP,
    UNAUTHENTICATED
  };

namespace WebhookAuthenticationTypeMapper
{
AWS_CODEPIPELINE_API WebhookAuthenticationType GetWebhookAuthenticationTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForWebhookAuthenticationType(WebhookAuthenticationType value);
} // namespace WebhookAuthenticationTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
