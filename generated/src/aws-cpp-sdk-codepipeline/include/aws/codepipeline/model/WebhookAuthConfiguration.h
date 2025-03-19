/**
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
    AWS_CODEPIPELINE_API WebhookAuthConfiguration() = default;
    AWS_CODEPIPELINE_API WebhookAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API WebhookAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property used to configure acceptance of webhooks in an IP address range.
     * For IP, only the <code>AllowedIPRange</code> property must be set. This property
     * must be set to a valid CIDR range.</p>
     */
    inline const Aws::String& GetAllowedIPRange() const { return m_allowedIPRange; }
    inline bool AllowedIPRangeHasBeenSet() const { return m_allowedIPRangeHasBeenSet; }
    template<typename AllowedIPRangeT = Aws::String>
    void SetAllowedIPRange(AllowedIPRangeT&& value) { m_allowedIPRangeHasBeenSet = true; m_allowedIPRange = std::forward<AllowedIPRangeT>(value); }
    template<typename AllowedIPRangeT = Aws::String>
    WebhookAuthConfiguration& WithAllowedIPRange(AllowedIPRangeT&& value) { SetAllowedIPRange(std::forward<AllowedIPRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property used to configure GitHub authentication. For GITHUB_HMAC, only
     * the <code>SecretToken</code> property must be set.</p>  <p>When
     * creating CodePipeline webhooks, do not use your own credentials or reuse the
     * same secret token across multiple webhooks. For optimal security, generate a
     * unique secret token for each webhook you create. The secret token is an
     * arbitrary string that you provide, which GitHub uses to compute and sign the
     * webhook payloads sent to CodePipeline, for protecting the integrity and
     * authenticity of the webhook payloads. Using your own credentials or reusing the
     * same token across multiple webhooks can lead to security vulnerabilities.</p>
     *   <p>If a secret token was provided, it will be redacted in
     * the response.</p> 
     */
    inline const Aws::String& GetSecretToken() const { return m_secretToken; }
    inline bool SecretTokenHasBeenSet() const { return m_secretTokenHasBeenSet; }
    template<typename SecretTokenT = Aws::String>
    void SetSecretToken(SecretTokenT&& value) { m_secretTokenHasBeenSet = true; m_secretToken = std::forward<SecretTokenT>(value); }
    template<typename SecretTokenT = Aws::String>
    WebhookAuthConfiguration& WithSecretToken(SecretTokenT&& value) { SetSecretToken(std::forward<SecretTokenT>(value)); return *this;}
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
