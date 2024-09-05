/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/WebhookAuthenticationType.h>
#include <aws/codepipeline/model/WebhookAuthConfiguration.h>
#include <aws/codepipeline/model/WebhookFilterRule.h>
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
   * <p>Represents information about a webhook and its definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/WebhookDefinition">AWS
   * API Reference</a></p>
   */
  class WebhookDefinition
  {
  public:
    AWS_CODEPIPELINE_API WebhookDefinition();
    AWS_CODEPIPELINE_API WebhookDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API WebhookDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the webhook.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WebhookDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WebhookDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WebhookDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline you want to connect to the webhook.</p>
     */
    inline const Aws::String& GetTargetPipeline() const{ return m_targetPipeline; }
    inline bool TargetPipelineHasBeenSet() const { return m_targetPipelineHasBeenSet; }
    inline void SetTargetPipeline(const Aws::String& value) { m_targetPipelineHasBeenSet = true; m_targetPipeline = value; }
    inline void SetTargetPipeline(Aws::String&& value) { m_targetPipelineHasBeenSet = true; m_targetPipeline = std::move(value); }
    inline void SetTargetPipeline(const char* value) { m_targetPipelineHasBeenSet = true; m_targetPipeline.assign(value); }
    inline WebhookDefinition& WithTargetPipeline(const Aws::String& value) { SetTargetPipeline(value); return *this;}
    inline WebhookDefinition& WithTargetPipeline(Aws::String&& value) { SetTargetPipeline(std::move(value)); return *this;}
    inline WebhookDefinition& WithTargetPipeline(const char* value) { SetTargetPipeline(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action in a pipeline you want to connect to the webhook. The
     * action must be from the source (first) stage of the pipeline.</p>
     */
    inline const Aws::String& GetTargetAction() const{ return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    inline void SetTargetAction(const Aws::String& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }
    inline void SetTargetAction(Aws::String&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }
    inline void SetTargetAction(const char* value) { m_targetActionHasBeenSet = true; m_targetAction.assign(value); }
    inline WebhookDefinition& WithTargetAction(const Aws::String& value) { SetTargetAction(value); return *this;}
    inline WebhookDefinition& WithTargetAction(Aws::String&& value) { SetTargetAction(std::move(value)); return *this;}
    inline WebhookDefinition& WithTargetAction(const char* value) { SetTargetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of rules applied to the body/payload sent in the POST request to a
     * webhook URL. All defined rules must pass for the request to be accepted and the
     * pipeline started.</p>
     */
    inline const Aws::Vector<WebhookFilterRule>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<WebhookFilterRule>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<WebhookFilterRule>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline WebhookDefinition& WithFilters(const Aws::Vector<WebhookFilterRule>& value) { SetFilters(value); return *this;}
    inline WebhookDefinition& WithFilters(Aws::Vector<WebhookFilterRule>&& value) { SetFilters(std::move(value)); return *this;}
    inline WebhookDefinition& AddFilters(const WebhookFilterRule& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline WebhookDefinition& AddFilters(WebhookFilterRule&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Supported options are GITHUB_HMAC, IP, and UNAUTHENTICATED.</p> 
     * <p>When creating CodePipeline webhooks, do not use your own credentials or reuse
     * the same secret token across multiple webhooks. For optimal security, generate a
     * unique secret token for each webhook you create. The secret token is an
     * arbitrary string that you provide, which GitHub uses to compute and sign the
     * webhook payloads sent to CodePipeline, for protecting the integrity and
     * authenticity of the webhook payloads. Using your own credentials or reusing the
     * same token across multiple webhooks can lead to security vulnerabilities.</p>
     *   <p>If a secret token was provided, it will be redacted in
     * the response.</p>  <ul> <li> <p>For information about the authentication
     * scheme implemented by GITHUB_HMAC, see <a
     * href="https://developer.github.com/webhooks/securing/">Securing your
     * webhooks</a> on the GitHub Developer website.</p> </li> <li> <p> IP rejects
     * webhooks trigger requests unless they originate from an IP address in the IP
     * range whitelisted in the authentication configuration.</p> </li> <li> <p>
     * UNAUTHENTICATED accepts all webhook trigger requests regardless of origin.</p>
     * </li> </ul>
     */
    inline const WebhookAuthenticationType& GetAuthentication() const{ return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(const WebhookAuthenticationType& value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline void SetAuthentication(WebhookAuthenticationType&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }
    inline WebhookDefinition& WithAuthentication(const WebhookAuthenticationType& value) { SetAuthentication(value); return *this;}
    inline WebhookDefinition& WithAuthentication(WebhookAuthenticationType&& value) { SetAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties that configure the authentication applied to incoming webhook
     * trigger requests. The required properties depend on the authentication type. For
     * GITHUB_HMAC, only the <code>SecretToken </code>property must be set. For IP,
     * only the <code>AllowedIPRange </code>property must be set to a valid CIDR range.
     * For UNAUTHENTICATED, no properties can be set.</p>
     */
    inline const WebhookAuthConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const WebhookAuthConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(WebhookAuthConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline WebhookDefinition& WithAuthenticationConfiguration(const WebhookAuthConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}
    inline WebhookDefinition& WithAuthenticationConfiguration(WebhookAuthConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_targetPipeline;
    bool m_targetPipelineHasBeenSet = false;

    Aws::String m_targetAction;
    bool m_targetActionHasBeenSet = false;

    Aws::Vector<WebhookFilterRule> m_filters;
    bool m_filtersHasBeenSet = false;

    WebhookAuthenticationType m_authentication;
    bool m_authenticationHasBeenSet = false;

    WebhookAuthConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
