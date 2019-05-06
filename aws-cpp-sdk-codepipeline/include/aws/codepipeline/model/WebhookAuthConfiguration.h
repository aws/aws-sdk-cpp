/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEPIPELINE_API WebhookAuthConfiguration
  {
  public:
    WebhookAuthConfiguration();
    WebhookAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    WebhookAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline const Aws::String& GetAllowedIPRange() const{ return m_allowedIPRange; }

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline bool AllowedIPRangeHasBeenSet() const { return m_allowedIPRangeHasBeenSet; }

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline void SetAllowedIPRange(const Aws::String& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = value; }

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline void SetAllowedIPRange(Aws::String&& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = std::move(value); }

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline void SetAllowedIPRange(const char* value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange.assign(value); }

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline WebhookAuthConfiguration& WithAllowedIPRange(const Aws::String& value) { SetAllowedIPRange(value); return *this;}

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline WebhookAuthConfiguration& WithAllowedIPRange(Aws::String&& value) { SetAllowedIPRange(std::move(value)); return *this;}

    /**
     * <p>The property used to configure acceptance of webhooks within a specific IP
     * range. For IP, only the <code>AllowedIPRange</code> property must be set, and
     * this property must be set to a valid CIDR range.</p>
     */
    inline WebhookAuthConfiguration& WithAllowedIPRange(const char* value) { SetAllowedIPRange(value); return *this;}


    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline const Aws::String& GetSecretToken() const{ return m_secretToken; }

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline bool SecretTokenHasBeenSet() const { return m_secretTokenHasBeenSet; }

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline void SetSecretToken(const Aws::String& value) { m_secretTokenHasBeenSet = true; m_secretToken = value; }

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline void SetSecretToken(Aws::String&& value) { m_secretTokenHasBeenSet = true; m_secretToken = std::move(value); }

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline void SetSecretToken(const char* value) { m_secretTokenHasBeenSet = true; m_secretToken.assign(value); }

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline WebhookAuthConfiguration& WithSecretToken(const Aws::String& value) { SetSecretToken(value); return *this;}

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline WebhookAuthConfiguration& WithSecretToken(Aws::String&& value) { SetSecretToken(std::move(value)); return *this;}

    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>
     */
    inline WebhookAuthConfiguration& WithSecretToken(const char* value) { SetSecretToken(value); return *this;}

  private:

    Aws::String m_allowedIPRange;
    bool m_allowedIPRangeHasBeenSet;

    Aws::String m_secretToken;
    bool m_secretTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
