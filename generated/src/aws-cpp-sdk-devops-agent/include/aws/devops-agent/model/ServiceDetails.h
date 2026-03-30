/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/DatadogServiceDetails.h>
#include <aws/devops-agent/model/DynatraceServiceDetails.h>
#include <aws/devops-agent/model/EventChannelDetails.h>
#include <aws/devops-agent/model/GitLabDetails.h>
#include <aws/devops-agent/model/GrafanaServiceDetails.h>
#include <aws/devops-agent/model/MCPServerDetails.h>
#include <aws/devops-agent/model/MCPServerSigV4ServiceDetails.h>
#include <aws/devops-agent/model/NewRelicServiceDetails.h>
#include <aws/devops-agent/model/PagerDutyDetails.h>
#include <aws/devops-agent/model/RegisteredAzureIdentityDetails.h>
#include <aws/devops-agent/model/ServiceNowServiceDetails.h>

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
 * <p>Union of service-specific configuration details for service
 * registration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ServiceDetails">AWS
 * API Reference</a></p>
 */
class ServiceDetails {
 public:
  AWS_DEVOPSAGENT_API ServiceDetails() = default;
  AWS_DEVOPSAGENT_API ServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Dynatrace-specific service details.</p>
   */
  inline const DynatraceServiceDetails& GetDynatrace() const { return m_dynatrace; }
  inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
  template <typename DynatraceT = DynatraceServiceDetails>
  void SetDynatrace(DynatraceT&& value) {
    m_dynatraceHasBeenSet = true;
    m_dynatrace = std::forward<DynatraceT>(value);
  }
  template <typename DynatraceT = DynatraceServiceDetails>
  ServiceDetails& WithDynatrace(DynatraceT&& value) {
    SetDynatrace(std::forward<DynatraceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ServiceNow-specific service details.</p>
   */
  inline const ServiceNowServiceDetails& GetServicenow() const { return m_servicenow; }
  inline bool ServicenowHasBeenSet() const { return m_servicenowHasBeenSet; }
  template <typename ServicenowT = ServiceNowServiceDetails>
  void SetServicenow(ServicenowT&& value) {
    m_servicenowHasBeenSet = true;
    m_servicenow = std::forward<ServicenowT>(value);
  }
  template <typename ServicenowT = ServiceNowServiceDetails>
  ServiceDetails& WithServicenow(ServicenowT&& value) {
    SetServicenow(std::forward<ServicenowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Datadog MCP server-specific service details.</p>
   */
  inline const DatadogServiceDetails& GetMcpserverdatadog() const { return m_mcpserverdatadog; }
  inline bool McpserverdatadogHasBeenSet() const { return m_mcpserverdatadogHasBeenSet; }
  template <typename McpserverdatadogT = DatadogServiceDetails>
  void SetMcpserverdatadog(McpserverdatadogT&& value) {
    m_mcpserverdatadogHasBeenSet = true;
    m_mcpserverdatadog = std::forward<McpserverdatadogT>(value);
  }
  template <typename McpserverdatadogT = DatadogServiceDetails>
  ServiceDetails& WithMcpserverdatadog(McpserverdatadogT&& value) {
    SetMcpserverdatadog(std::forward<McpserverdatadogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MCP server-specific service details.</p>
   */
  inline const MCPServerDetails& GetMcpserver() const { return m_mcpserver; }
  inline bool McpserverHasBeenSet() const { return m_mcpserverHasBeenSet; }
  template <typename McpserverT = MCPServerDetails>
  void SetMcpserver(McpserverT&& value) {
    m_mcpserverHasBeenSet = true;
    m_mcpserver = std::forward<McpserverT>(value);
  }
  template <typename McpserverT = MCPServerDetails>
  ServiceDetails& WithMcpserver(McpserverT&& value) {
    SetMcpserver(std::forward<McpserverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitLab-specific service details.</p>
   */
  inline const GitLabDetails& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = GitLabDetails>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = GitLabDetails>
  ServiceDetails& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Splunk MCP server-specific service details.</p>
   */
  inline const MCPServerDetails& GetMcpserversplunk() const { return m_mcpserversplunk; }
  inline bool McpserversplunkHasBeenSet() const { return m_mcpserversplunkHasBeenSet; }
  template <typename McpserversplunkT = MCPServerDetails>
  void SetMcpserversplunk(McpserversplunkT&& value) {
    m_mcpserversplunkHasBeenSet = true;
    m_mcpserversplunk = std::forward<McpserversplunkT>(value);
  }
  template <typename McpserversplunkT = MCPServerDetails>
  ServiceDetails& WithMcpserversplunk(McpserversplunkT&& value) {
    SetMcpserversplunk(std::forward<McpserversplunkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New Relic-specific service details.</p>
   */
  inline const NewRelicServiceDetails& GetMcpservernewrelic() const { return m_mcpservernewrelic; }
  inline bool McpservernewrelicHasBeenSet() const { return m_mcpservernewrelicHasBeenSet; }
  template <typename McpservernewrelicT = NewRelicServiceDetails>
  void SetMcpservernewrelic(McpservernewrelicT&& value) {
    m_mcpservernewrelicHasBeenSet = true;
    m_mcpservernewrelic = std::forward<McpservernewrelicT>(value);
  }
  template <typename McpservernewrelicT = NewRelicServiceDetails>
  ServiceDetails& WithMcpservernewrelic(McpservernewrelicT&& value) {
    SetMcpservernewrelic(std::forward<McpservernewrelicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event Channel specific service details.</p>
   */
  inline const EventChannelDetails& GetEventChannel() const { return m_eventChannel; }
  inline bool EventChannelHasBeenSet() const { return m_eventChannelHasBeenSet; }
  template <typename EventChannelT = EventChannelDetails>
  void SetEventChannel(EventChannelT&& value) {
    m_eventChannelHasBeenSet = true;
    m_eventChannel = std::forward<EventChannelT>(value);
  }
  template <typename EventChannelT = EventChannelDetails>
  ServiceDetails& WithEventChannel(EventChannelT&& value) {
    SetEventChannel(std::forward<EventChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Datadog MCP server-specific service details.</p>
   */
  inline const GrafanaServiceDetails& GetMcpservergrafana() const { return m_mcpservergrafana; }
  inline bool McpservergrafanaHasBeenSet() const { return m_mcpservergrafanaHasBeenSet; }
  template <typename McpservergrafanaT = GrafanaServiceDetails>
  void SetMcpservergrafana(McpservergrafanaT&& value) {
    m_mcpservergrafanaHasBeenSet = true;
    m_mcpservergrafana = std::forward<McpservergrafanaT>(value);
  }
  template <typename McpservergrafanaT = GrafanaServiceDetails>
  ServiceDetails& WithMcpservergrafana(McpservergrafanaT&& value) {
    SetMcpservergrafana(std::forward<McpservergrafanaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>PagerDuty specific service details.</p>
   */
  inline const PagerDutyDetails& GetPagerduty() const { return m_pagerduty; }
  inline bool PagerdutyHasBeenSet() const { return m_pagerdutyHasBeenSet; }
  template <typename PagerdutyT = PagerDutyDetails>
  void SetPagerduty(PagerdutyT&& value) {
    m_pagerdutyHasBeenSet = true;
    m_pagerduty = std::forward<PagerdutyT>(value);
  }
  template <typename PagerdutyT = PagerDutyDetails>
  ServiceDetails& WithPagerduty(PagerdutyT&& value) {
    SetPagerduty(std::forward<PagerdutyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure integration with AWS Outbound Identity Federation specific service
   * details.</p>
   */
  inline const RegisteredAzureIdentityDetails& GetAzureidentity() const { return m_azureidentity; }
  inline bool AzureidentityHasBeenSet() const { return m_azureidentityHasBeenSet; }
  template <typename AzureidentityT = RegisteredAzureIdentityDetails>
  void SetAzureidentity(AzureidentityT&& value) {
    m_azureidentityHasBeenSet = true;
    m_azureidentity = std::forward<AzureidentityT>(value);
  }
  template <typename AzureidentityT = RegisteredAzureIdentityDetails>
  ServiceDetails& WithAzureidentity(AzureidentityT&& value) {
    SetAzureidentity(std::forward<AzureidentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SigV4-authenticated MCP server-specific service details.</p>
   */
  inline const MCPServerSigV4ServiceDetails& GetMcpserversigv4() const { return m_mcpserversigv4; }
  inline bool Mcpserversigv4HasBeenSet() const { return m_mcpserversigv4HasBeenSet; }
  template <typename Mcpserversigv4T = MCPServerSigV4ServiceDetails>
  void SetMcpserversigv4(Mcpserversigv4T&& value) {
    m_mcpserversigv4HasBeenSet = true;
    m_mcpserversigv4 = std::forward<Mcpserversigv4T>(value);
  }
  template <typename Mcpserversigv4T = MCPServerSigV4ServiceDetails>
  ServiceDetails& WithMcpserversigv4(Mcpserversigv4T&& value) {
    SetMcpserversigv4(std::forward<Mcpserversigv4T>(value));
    return *this;
  }
  ///@}
 private:
  DynatraceServiceDetails m_dynatrace;

  ServiceNowServiceDetails m_servicenow;

  DatadogServiceDetails m_mcpserverdatadog;

  MCPServerDetails m_mcpserver;

  GitLabDetails m_gitlab;

  MCPServerDetails m_mcpserversplunk;

  NewRelicServiceDetails m_mcpservernewrelic;

  EventChannelDetails m_eventChannel;

  GrafanaServiceDetails m_mcpservergrafana;

  PagerDutyDetails m_pagerduty;

  RegisteredAzureIdentityDetails m_azureidentity;

  MCPServerSigV4ServiceDetails m_mcpserversigv4;
  bool m_dynatraceHasBeenSet = false;
  bool m_servicenowHasBeenSet = false;
  bool m_mcpserverdatadogHasBeenSet = false;
  bool m_mcpserverHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_mcpserversplunkHasBeenSet = false;
  bool m_mcpservernewrelicHasBeenSet = false;
  bool m_eventChannelHasBeenSet = false;
  bool m_mcpservergrafanaHasBeenSet = false;
  bool m_pagerdutyHasBeenSet = false;
  bool m_azureidentityHasBeenSet = false;
  bool m_mcpserversigv4HasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
