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
    AWS_CODEPIPELINE_API WebhookDefinition() = default;
    AWS_CODEPIPELINE_API WebhookDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API WebhookDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the webhook.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WebhookDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline you want to connect to the webhook.</p>
     */
    inline const Aws::String& GetTargetPipeline() const { return m_targetPipeline; }
    inline bool TargetPipelineHasBeenSet() const { return m_targetPipelineHasBeenSet; }
    template<typename TargetPipelineT = Aws::String>
    void SetTargetPipeline(TargetPipelineT&& value) { m_targetPipelineHasBeenSet = true; m_targetPipeline = std::forward<TargetPipelineT>(value); }
    template<typename TargetPipelineT = Aws::String>
    WebhookDefinition& WithTargetPipeline(TargetPipelineT&& value) { SetTargetPipeline(std::forward<TargetPipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action in a pipeline you want to connect to the webhook. The
     * action must be from the source (first) stage of the pipeline.</p>
     */
    inline const Aws::String& GetTargetAction() const { return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    template<typename TargetActionT = Aws::String>
    void SetTargetAction(TargetActionT&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::forward<TargetActionT>(value); }
    template<typename TargetActionT = Aws::String>
    WebhookDefinition& WithTargetAction(TargetActionT&& value) { SetTargetAction(std::forward<TargetActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of rules applied to the body/payload sent in the POST request to a
     * webhook URL. All defined rules must pass for the request to be accepted and the
     * pipeline started.</p>
     */
    inline const Aws::Vector<WebhookFilterRule>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<WebhookFilterRule>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<WebhookFilterRule>>
    WebhookDefinition& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = WebhookFilterRule>
    WebhookDefinition& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline WebhookAuthenticationType GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(WebhookAuthenticationType value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline WebhookDefinition& WithAuthentication(WebhookAuthenticationType value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties that configure the authentication applied to incoming webhook
     * trigger requests. The required properties depend on the authentication type. For
     * GITHUB_HMAC, only the <code>SecretToken </code>property must be set. For IP,
     * only the <code>AllowedIPRange </code>property must be set to a valid CIDR range.
     * For UNAUTHENTICATED, no properties can be set.</p>
     */
    inline const WebhookAuthConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = WebhookAuthConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = WebhookAuthConfiguration>
    WebhookDefinition& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
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

    WebhookAuthenticationType m_authentication{WebhookAuthenticationType::NOT_SET};
    bool m_authenticationHasBeenSet = false;

    WebhookAuthConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
