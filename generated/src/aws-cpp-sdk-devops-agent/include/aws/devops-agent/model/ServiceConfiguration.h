/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AWSConfiguration.h>
#include <aws/devops-agent/model/AzureConfiguration.h>
#include <aws/devops-agent/model/AzureDevOpsConfiguration.h>
#include <aws/devops-agent/model/DynatraceConfiguration.h>
#include <aws/devops-agent/model/EventChannelConfiguration.h>
#include <aws/devops-agent/model/GitHubConfiguration.h>
#include <aws/devops-agent/model/GitLabConfiguration.h>
#include <aws/devops-agent/model/MCPServerConfiguration.h>
#include <aws/devops-agent/model/MCPServerDatadogConfiguration.h>
#include <aws/devops-agent/model/MCPServerGrafanaConfiguration.h>
#include <aws/devops-agent/model/MCPServerNewRelicConfiguration.h>
#include <aws/devops-agent/model/MCPServerSplunkConfiguration.h>
#include <aws/devops-agent/model/PagerDutyConfiguration.h>
#include <aws/devops-agent/model/ServiceNowConfiguration.h>
#include <aws/devops-agent/model/SlackConfiguration.h>
#include <aws/devops-agent/model/SourceAwsConfiguration.h>

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
 * <p>Union of all supported service configuration types. Each service has its own
 * specific configuration structure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ServiceConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceConfiguration {
 public:
  AWS_DEVOPSAGENT_API ServiceConfiguration() = default;
  AWS_DEVOPSAGENT_API ServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS source account configuration for monitoring resources.</p>
   */
  inline const SourceAwsConfiguration& GetSourceAws() const { return m_sourceAws; }
  inline bool SourceAwsHasBeenSet() const { return m_sourceAwsHasBeenSet; }
  template <typename SourceAwsT = SourceAwsConfiguration>
  void SetSourceAws(SourceAwsT&& value) {
    m_sourceAwsHasBeenSet = true;
    m_sourceAws = std::forward<SourceAwsT>(value);
  }
  template <typename SourceAwsT = SourceAwsConfiguration>
  ServiceConfiguration& WithSourceAws(SourceAwsT&& value) {
    SetSourceAws(std::forward<SourceAwsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS monitor account configuration.</p>
   */
  inline const AWSConfiguration& GetAws() const { return m_aws; }
  inline bool AwsHasBeenSet() const { return m_awsHasBeenSet; }
  template <typename AwsT = AWSConfiguration>
  void SetAws(AwsT&& value) {
    m_awsHasBeenSet = true;
    m_aws = std::forward<AwsT>(value);
  }
  template <typename AwsT = AWSConfiguration>
  ServiceConfiguration& WithAws(AwsT&& value) {
    SetAws(std::forward<AwsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitHub repository integration configuration.</p>
   */
  inline const GitHubConfiguration& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = GitHubConfiguration>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = GitHubConfiguration>
  ServiceConfiguration& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Slack workspace integration configuration.</p>
   */
  inline const SlackConfiguration& GetSlack() const { return m_slack; }
  inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
  template <typename SlackT = SlackConfiguration>
  void SetSlack(SlackT&& value) {
    m_slackHasBeenSet = true;
    m_slack = std::forward<SlackT>(value);
  }
  template <typename SlackT = SlackConfiguration>
  ServiceConfiguration& WithSlack(SlackT&& value) {
    SetSlack(std::forward<SlackT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Dynatrace monitoring integration configuration.</p>
   */
  inline const DynatraceConfiguration& GetDynatrace() const { return m_dynatrace; }
  inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
  template <typename DynatraceT = DynatraceConfiguration>
  void SetDynatrace(DynatraceT&& value) {
    m_dynatraceHasBeenSet = true;
    m_dynatrace = std::forward<DynatraceT>(value);
  }
  template <typename DynatraceT = DynatraceConfiguration>
  ServiceConfiguration& WithDynatrace(DynatraceT&& value) {
    SetDynatrace(std::forward<DynatraceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ServiceNow instance integration configuration.</p>
   */
  inline const ServiceNowConfiguration& GetServicenow() const { return m_servicenow; }
  inline bool ServicenowHasBeenSet() const { return m_servicenowHasBeenSet; }
  template <typename ServicenowT = ServiceNowConfiguration>
  void SetServicenow(ServicenowT&& value) {
    m_servicenowHasBeenSet = true;
    m_servicenow = std::forward<ServicenowT>(value);
  }
  template <typename ServicenowT = ServiceNowConfiguration>
  ServiceConfiguration& WithServicenow(ServicenowT&& value) {
    SetServicenow(std::forward<ServicenowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>NewRelic instance integration configuration.</p>
   */
  inline const MCPServerNewRelicConfiguration& GetMcpservernewrelic() const { return m_mcpservernewrelic; }
  inline bool McpservernewrelicHasBeenSet() const { return m_mcpservernewrelicHasBeenSet; }
  template <typename McpservernewrelicT = MCPServerNewRelicConfiguration>
  void SetMcpservernewrelic(McpservernewrelicT&& value) {
    m_mcpservernewrelicHasBeenSet = true;
    m_mcpservernewrelic = std::forward<McpservernewrelicT>(value);
  }
  template <typename McpservernewrelicT = MCPServerNewRelicConfiguration>
  ServiceConfiguration& WithMcpservernewrelic(McpservernewrelicT&& value) {
    SetMcpservernewrelic(std::forward<McpservernewrelicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Datadog MCP server integration configuration.</p>
   */
  inline const MCPServerDatadogConfiguration& GetMcpserverdatadog() const { return m_mcpserverdatadog; }
  inline bool McpserverdatadogHasBeenSet() const { return m_mcpserverdatadogHasBeenSet; }
  template <typename McpserverdatadogT = MCPServerDatadogConfiguration>
  void SetMcpserverdatadog(McpserverdatadogT&& value) {
    m_mcpserverdatadogHasBeenSet = true;
    m_mcpserverdatadog = std::forward<McpserverdatadogT>(value);
  }
  template <typename McpserverdatadogT = MCPServerDatadogConfiguration>
  ServiceConfiguration& WithMcpserverdatadog(McpserverdatadogT&& value) {
    SetMcpserverdatadog(std::forward<McpserverdatadogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP (Model Context Protocol) server integration configuration.</p>
   */
  inline const MCPServerConfiguration& GetMcpserver() const { return m_mcpserver; }
  inline bool McpserverHasBeenSet() const { return m_mcpserverHasBeenSet; }
  template <typename McpserverT = MCPServerConfiguration>
  void SetMcpserver(McpserverT&& value) {
    m_mcpserverHasBeenSet = true;
    m_mcpserver = std::forward<McpserverT>(value);
  }
  template <typename McpserverT = MCPServerConfiguration>
  ServiceConfiguration& WithMcpserver(McpserverT&& value) {
    SetMcpserver(std::forward<McpserverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitLab project integration configuration.</p>
   */
  inline const GitLabConfiguration& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = GitLabConfiguration>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = GitLabConfiguration>
  ServiceConfiguration& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Splunk MCP server integration configuration.</p>
   */
  inline const MCPServerSplunkConfiguration& GetMcpserversplunk() const { return m_mcpserversplunk; }
  inline bool McpserversplunkHasBeenSet() const { return m_mcpserversplunkHasBeenSet; }
  template <typename McpserversplunkT = MCPServerSplunkConfiguration>
  void SetMcpserversplunk(McpserversplunkT&& value) {
    m_mcpserversplunkHasBeenSet = true;
    m_mcpserversplunk = std::forward<McpserversplunkT>(value);
  }
  template <typename McpserversplunkT = MCPServerSplunkConfiguration>
  ServiceConfiguration& WithMcpserversplunk(McpserversplunkT&& value) {
    SetMcpserversplunk(std::forward<McpserversplunkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event Channel instance integration configuration.</p>
   */
  inline const EventChannelConfiguration& GetEventChannel() const { return m_eventChannel; }
  inline bool EventChannelHasBeenSet() const { return m_eventChannelHasBeenSet; }
  template <typename EventChannelT = EventChannelConfiguration>
  void SetEventChannel(EventChannelT&& value) {
    m_eventChannelHasBeenSet = true;
    m_eventChannel = std::forward<EventChannelT>(value);
  }
  template <typename EventChannelT = EventChannelConfiguration>
  ServiceConfiguration& WithEventChannel(EventChannelT&& value) {
    SetEventChannel(std::forward<EventChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure subscription integration configuration.</p>
   */
  inline const AzureConfiguration& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureConfiguration>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureConfiguration>
  ServiceConfiguration& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure DevOps project integration configuration.</p>
   */
  inline const AzureDevOpsConfiguration& GetAzuredevops() const { return m_azuredevops; }
  inline bool AzuredevopsHasBeenSet() const { return m_azuredevopsHasBeenSet; }
  template <typename AzuredevopsT = AzureDevOpsConfiguration>
  void SetAzuredevops(AzuredevopsT&& value) {
    m_azuredevopsHasBeenSet = true;
    m_azuredevops = std::forward<AzuredevopsT>(value);
  }
  template <typename AzuredevopsT = AzureDevOpsConfiguration>
  ServiceConfiguration& WithAzuredevops(AzuredevopsT&& value) {
    SetAzuredevops(std::forward<AzuredevopsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Grafana MCP server integration configuration.</p>
   */
  inline const MCPServerGrafanaConfiguration& GetMcpservergrafana() const { return m_mcpservergrafana; }
  inline bool McpservergrafanaHasBeenSet() const { return m_mcpservergrafanaHasBeenSet; }
  template <typename McpservergrafanaT = MCPServerGrafanaConfiguration>
  void SetMcpservergrafana(McpservergrafanaT&& value) {
    m_mcpservergrafanaHasBeenSet = true;
    m_mcpservergrafana = std::forward<McpservergrafanaT>(value);
  }
  template <typename McpservergrafanaT = MCPServerGrafanaConfiguration>
  ServiceConfiguration& WithMcpservergrafana(McpservergrafanaT&& value) {
    SetMcpservergrafana(std::forward<McpservergrafanaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>PagerDuty integration configuration</p>
   */
  inline const PagerDutyConfiguration& GetPagerduty() const { return m_pagerduty; }
  inline bool PagerdutyHasBeenSet() const { return m_pagerdutyHasBeenSet; }
  template <typename PagerdutyT = PagerDutyConfiguration>
  void SetPagerduty(PagerdutyT&& value) {
    m_pagerdutyHasBeenSet = true;
    m_pagerduty = std::forward<PagerdutyT>(value);
  }
  template <typename PagerdutyT = PagerDutyConfiguration>
  ServiceConfiguration& WithPagerduty(PagerdutyT&& value) {
    SetPagerduty(std::forward<PagerdutyT>(value));
    return *this;
  }
  ///@}
 private:
  SourceAwsConfiguration m_sourceAws;

  AWSConfiguration m_aws;

  GitHubConfiguration m_github;

  SlackConfiguration m_slack;

  DynatraceConfiguration m_dynatrace;

  ServiceNowConfiguration m_servicenow;

  MCPServerNewRelicConfiguration m_mcpservernewrelic;

  MCPServerDatadogConfiguration m_mcpserverdatadog;

  MCPServerConfiguration m_mcpserver;

  GitLabConfiguration m_gitlab;

  MCPServerSplunkConfiguration m_mcpserversplunk;

  EventChannelConfiguration m_eventChannel;

  AzureConfiguration m_azure;

  AzureDevOpsConfiguration m_azuredevops;

  MCPServerGrafanaConfiguration m_mcpservergrafana;

  PagerDutyConfiguration m_pagerduty;
  bool m_sourceAwsHasBeenSet = false;
  bool m_awsHasBeenSet = false;
  bool m_githubHasBeenSet = false;
  bool m_slackHasBeenSet = false;
  bool m_dynatraceHasBeenSet = false;
  bool m_servicenowHasBeenSet = false;
  bool m_mcpservernewrelicHasBeenSet = false;
  bool m_mcpserverdatadogHasBeenSet = false;
  bool m_mcpserverHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_mcpserversplunkHasBeenSet = false;
  bool m_eventChannelHasBeenSet = false;
  bool m_azureHasBeenSet = false;
  bool m_azuredevopsHasBeenSet = false;
  bool m_mcpservergrafanaHasBeenSet = false;
  bool m_pagerdutyHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
