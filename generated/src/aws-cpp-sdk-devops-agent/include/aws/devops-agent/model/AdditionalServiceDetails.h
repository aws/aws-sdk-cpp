/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RegisteredAzureDevOpsServiceDetails.h>
#include <aws/devops-agent/model/RegisteredAzureIdentityDetails.h>
#include <aws/devops-agent/model/RegisteredGitLabServiceDetails.h>
#include <aws/devops-agent/model/RegisteredGithubServiceDetails.h>
#include <aws/devops-agent/model/RegisteredGrafanaServerDetails.h>
#include <aws/devops-agent/model/RegisteredMCPServerDetails.h>
#include <aws/devops-agent/model/RegisteredMCPServerSigV4Details.h>
#include <aws/devops-agent/model/RegisteredNewRelicDetails.h>
#include <aws/devops-agent/model/RegisteredPagerDutyDetails.h>
#include <aws/devops-agent/model/RegisteredServiceNowDetails.h>
#include <aws/devops-agent/model/RegisteredSlackServiceDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Union of service-specific details for different service types.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AdditionalServiceDetails">AWS
 * API Reference</a></p>
 */
class AdditionalServiceDetails {
 public:
  AWS_DEVOPSAGENT_API AdditionalServiceDetails() = default;
  AWS_DEVOPSAGENT_API AdditionalServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AdditionalServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>GitHub-specific service details.</p>
   */
  inline const RegisteredGithubServiceDetails& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = RegisteredGithubServiceDetails>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = RegisteredGithubServiceDetails>
  AdditionalServiceDetails& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Slack-specific service details.</p>
   */
  inline const RegisteredSlackServiceDetails& GetSlack() const { return m_slack; }
  inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
  template <typename SlackT = RegisteredSlackServiceDetails>
  void SetSlack(SlackT&& value) {
    m_slackHasBeenSet = true;
    m_slack = std::forward<SlackT>(value);
  }
  template <typename SlackT = RegisteredSlackServiceDetails>
  AdditionalServiceDetails& WithSlack(SlackT&& value) {
    SetSlack(std::forward<SlackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Datadog MCP server-specific service details.</p>
   */
  inline const RegisteredMCPServerDetails& GetMcpserverdatadog() const { return m_mcpserverdatadog; }
  inline bool McpserverdatadogHasBeenSet() const { return m_mcpserverdatadogHasBeenSet; }
  template <typename McpserverdatadogT = RegisteredMCPServerDetails>
  void SetMcpserverdatadog(McpserverdatadogT&& value) {
    m_mcpserverdatadogHasBeenSet = true;
    m_mcpserverdatadog = std::forward<McpserverdatadogT>(value);
  }
  template <typename McpserverdatadogT = RegisteredMCPServerDetails>
  AdditionalServiceDetails& WithMcpserverdatadog(McpserverdatadogT&& value) {
    SetMcpserverdatadog(std::forward<McpserverdatadogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server-specific service details.</p>
   */
  inline const RegisteredMCPServerDetails& GetMcpserver() const { return m_mcpserver; }
  inline bool McpserverHasBeenSet() const { return m_mcpserverHasBeenSet; }
  template <typename McpserverT = RegisteredMCPServerDetails>
  void SetMcpserver(McpserverT&& value) {
    m_mcpserverHasBeenSet = true;
    m_mcpserver = std::forward<McpserverT>(value);
  }
  template <typename McpserverT = RegisteredMCPServerDetails>
  AdditionalServiceDetails& WithMcpserver(McpserverT&& value) {
    SetMcpserver(std::forward<McpserverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ServiceNow-specific service details.</p>
   */
  inline const RegisteredServiceNowDetails& GetServicenow() const { return m_servicenow; }
  inline bool ServicenowHasBeenSet() const { return m_servicenowHasBeenSet; }
  template <typename ServicenowT = RegisteredServiceNowDetails>
  void SetServicenow(ServicenowT&& value) {
    m_servicenowHasBeenSet = true;
    m_servicenow = std::forward<ServicenowT>(value);
  }
  template <typename ServicenowT = RegisteredServiceNowDetails>
  AdditionalServiceDetails& WithServicenow(ServicenowT&& value) {
    SetServicenow(std::forward<ServicenowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitLab-specific service details.</p>
   */
  inline const RegisteredGitLabServiceDetails& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = RegisteredGitLabServiceDetails>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = RegisteredGitLabServiceDetails>
  AdditionalServiceDetails& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Splunk MCP server-specific service details.</p>
   */
  inline const RegisteredMCPServerDetails& GetMcpserversplunk() const { return m_mcpserversplunk; }
  inline bool McpserversplunkHasBeenSet() const { return m_mcpserversplunkHasBeenSet; }
  template <typename McpserversplunkT = RegisteredMCPServerDetails>
  void SetMcpserversplunk(McpserversplunkT&& value) {
    m_mcpserversplunkHasBeenSet = true;
    m_mcpserversplunk = std::forward<McpserversplunkT>(value);
  }
  template <typename McpserversplunkT = RegisteredMCPServerDetails>
  AdditionalServiceDetails& WithMcpserversplunk(McpserversplunkT&& value) {
    SetMcpserversplunk(std::forward<McpserversplunkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New Relic MCP server-specific service details.</p>
   */
  inline const RegisteredNewRelicDetails& GetMcpservernewrelic() const { return m_mcpservernewrelic; }
  inline bool McpservernewrelicHasBeenSet() const { return m_mcpservernewrelicHasBeenSet; }
  template <typename McpservernewrelicT = RegisteredNewRelicDetails>
  void SetMcpservernewrelic(McpservernewrelicT&& value) {
    m_mcpservernewrelicHasBeenSet = true;
    m_mcpservernewrelic = std::forward<McpservernewrelicT>(value);
  }
  template <typename McpservernewrelicT = RegisteredNewRelicDetails>
  AdditionalServiceDetails& WithMcpservernewrelic(McpservernewrelicT&& value) {
    SetMcpservernewrelic(std::forward<McpservernewrelicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure DevOps specific service details.</p>
   */
  inline const RegisteredAzureDevOpsServiceDetails& GetAzuredevops() const { return m_azuredevops; }
  inline bool AzuredevopsHasBeenSet() const { return m_azuredevopsHasBeenSet; }
  template <typename AzuredevopsT = RegisteredAzureDevOpsServiceDetails>
  void SetAzuredevops(AzuredevopsT&& value) {
    m_azuredevopsHasBeenSet = true;
    m_azuredevops = std::forward<AzuredevopsT>(value);
  }
  template <typename AzuredevopsT = RegisteredAzureDevOpsServiceDetails>
  AdditionalServiceDetails& WithAzuredevops(AzuredevopsT&& value) {
    SetAzuredevops(std::forward<AzuredevopsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure identity details for services using Azure authentication.</p>
   */
  inline const RegisteredAzureIdentityDetails& GetAzureidentity() const { return m_azureidentity; }
  inline bool AzureidentityHasBeenSet() const { return m_azureidentityHasBeenSet; }
  template <typename AzureidentityT = RegisteredAzureIdentityDetails>
  void SetAzureidentity(AzureidentityT&& value) {
    m_azureidentityHasBeenSet = true;
    m_azureidentity = std::forward<AzureidentityT>(value);
  }
  template <typename AzureidentityT = RegisteredAzureIdentityDetails>
  AdditionalServiceDetails& WithAzureidentity(AzureidentityT&& value) {
    SetAzureidentity(std::forward<AzureidentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Grafana MCP server-specific service details.</p>
   */
  inline const RegisteredGrafanaServerDetails& GetMcpservergrafana() const { return m_mcpservergrafana; }
  inline bool McpservergrafanaHasBeenSet() const { return m_mcpservergrafanaHasBeenSet; }
  template <typename McpservergrafanaT = RegisteredGrafanaServerDetails>
  void SetMcpservergrafana(McpservergrafanaT&& value) {
    m_mcpservergrafanaHasBeenSet = true;
    m_mcpservergrafana = std::forward<McpservergrafanaT>(value);
  }
  template <typename McpservergrafanaT = RegisteredGrafanaServerDetails>
  AdditionalServiceDetails& WithMcpservergrafana(McpservergrafanaT&& value) {
    SetMcpservergrafana(std::forward<McpservergrafanaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagerduty service details.</p>
   */
  inline const RegisteredPagerDutyDetails& GetPagerduty() const { return m_pagerduty; }
  inline bool PagerdutyHasBeenSet() const { return m_pagerdutyHasBeenSet; }
  template <typename PagerdutyT = RegisteredPagerDutyDetails>
  void SetPagerduty(PagerdutyT&& value) {
    m_pagerdutyHasBeenSet = true;
    m_pagerduty = std::forward<PagerdutyT>(value);
  }
  template <typename PagerdutyT = RegisteredPagerDutyDetails>
  AdditionalServiceDetails& WithPagerduty(PagerdutyT&& value) {
    SetPagerduty(std::forward<PagerdutyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SigV4-authenticated MCP server-specific service details.</p>
   */
  inline const RegisteredMCPServerSigV4Details& GetMcpserversigv4() const { return m_mcpserversigv4; }
  inline bool Mcpserversigv4HasBeenSet() const { return m_mcpserversigv4HasBeenSet; }
  template <typename Mcpserversigv4T = RegisteredMCPServerSigV4Details>
  void SetMcpserversigv4(Mcpserversigv4T&& value) {
    m_mcpserversigv4HasBeenSet = true;
    m_mcpserversigv4 = std::forward<Mcpserversigv4T>(value);
  }
  template <typename Mcpserversigv4T = RegisteredMCPServerSigV4Details>
  AdditionalServiceDetails& WithMcpserversigv4(Mcpserversigv4T&& value) {
    SetMcpserversigv4(std::forward<Mcpserversigv4T>(value));
    return *this;
  }
  ///@}
 private:
  RegisteredGithubServiceDetails m_github;

  RegisteredSlackServiceDetails m_slack;

  RegisteredMCPServerDetails m_mcpserverdatadog;

  RegisteredMCPServerDetails m_mcpserver;

  RegisteredServiceNowDetails m_servicenow;

  RegisteredGitLabServiceDetails m_gitlab;

  RegisteredMCPServerDetails m_mcpserversplunk;

  RegisteredNewRelicDetails m_mcpservernewrelic;

  RegisteredAzureDevOpsServiceDetails m_azuredevops;

  RegisteredAzureIdentityDetails m_azureidentity;

  RegisteredGrafanaServerDetails m_mcpservergrafana;

  RegisteredPagerDutyDetails m_pagerduty;

  RegisteredMCPServerSigV4Details m_mcpserversigv4;
  bool m_githubHasBeenSet = false;
  bool m_slackHasBeenSet = false;
  bool m_mcpserverdatadogHasBeenSet = false;
  bool m_mcpserverHasBeenSet = false;
  bool m_servicenowHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_mcpserversplunkHasBeenSet = false;
  bool m_mcpservernewrelicHasBeenSet = false;
  bool m_azuredevopsHasBeenSet = false;
  bool m_azureidentityHasBeenSet = false;
  bool m_mcpservergrafanaHasBeenSet = false;
  bool m_pagerdutyHasBeenSet = false;
  bool m_mcpserversigv4HasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
