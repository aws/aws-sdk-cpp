﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The authentication applied to incoming webhook trigger
   * requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/WebhookAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class WebhookAuthConfiguration
  {
  public:
    AWS_CODEPIPELINE_API WebhookAuthConfiguration();
    AWS_CODEPIPELINE_API WebhookAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API WebhookAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property used to configure acceptance of webhooks in an IP address range.
     * For IP, only the <code>AllowedIPRange</code> property must be set. This property
     * must be set to a valid CIDR range.</p>
     */
    inline const Aws::String& GetAllowedIPRange() const{ return m_allowedIPRange; }
    inline bool AllowedIPRangeHasBeenSet() const { return m_allowedIPRangeHasBeenSet; }
    inline void SetAllowedIPRange(const Aws::String& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = value; }
    inline void SetAllowedIPRange(Aws::String&& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = std::move(value); }
    inline void SetAllowedIPRange(const char* value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange.assign(value); }
    inline WebhookAuthConfiguration& WithAllowedIPRange(const Aws::String& value) { SetAllowedIPRange(value); return *this;}
    inline WebhookAuthConfiguration& WithAllowedIPRange(Aws::String&& value) { SetAllowedIPRange(std::move(value)); return *this;}
    inline WebhookAuthConfiguration& WithAllowedIPRange(const char* value) { SetAllowedIPRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline const Aws::String& GetSecretToken() const{ return m_secretToken; }
    inline bool SecretTokenHasBeenSet() const { return m_secretTokenHasBeenSet; }
    inline void SetSecretToken(const Aws::String& value) { m_secretTokenHasBeenSet = true; m_secretToken = value; }
    inline void SetSecretToken(Aws::String&& value) { m_secretTokenHasBeenSet = true; m_secretToken = std::move(value); }
    inline void SetSecretToken(const char* value) { m_secretTokenHasBeenSet = true; m_secretToken.assign(value); }
    inline WebhookAuthConfiguration& WithSecretToken(const Aws::String& value) { SetSecretToken(value); return *this;}
    inline WebhookAuthConfiguration& WithSecretToken(Aws::String&& value) { SetSecretToken(std::move(value)); return *this;}
    inline WebhookAuthConfiguration& WithSecretToken(const char* value) { SetSecretToken(value); return *this;}
    ///@}
  private:

    Aws::String m_allowedIPRange;
    bool m_allowedIPRangeHasBeenSet = false;

    Aws::String m_secretToken;
    bool m_secretTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
