/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceConfiguration::ServiceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceConfiguration& ServiceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAws")) {
    m_sourceAws = jsonValue.GetObject("sourceAws");
    m_sourceAwsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aws")) {
    m_aws = jsonValue.GetObject("aws");
    m_awsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("slack")) {
    m_slack = jsonValue.GetObject("slack");
    m_slackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dynatrace")) {
    m_dynatrace = jsonValue.GetObject("dynatrace");
    m_dynatraceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicenow")) {
    m_servicenow = jsonValue.GetObject("servicenow");
    m_servicenowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpservernewrelic")) {
    m_mcpservernewrelic = jsonValue.GetObject("mcpservernewrelic");
    m_mcpservernewrelicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gitlab")) {
    m_gitlab = jsonValue.GetObject("gitlab");
    m_gitlabHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventChannel")) {
    m_eventChannel = jsonValue.GetObject("eventChannel");
    m_eventChannelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azure")) {
    m_azure = jsonValue.GetObject("azure");
    m_azureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azuredevops")) {
    m_azuredevops = jsonValue.GetObject("azuredevops");
    m_azuredevopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpservergrafana")) {
    m_mcpservergrafana = jsonValue.GetObject("mcpservergrafana");
    m_mcpservergrafanaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pagerduty")) {
    m_pagerduty = jsonValue.GetObject("pagerduty");
    m_pagerdutyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("msteams")) {
    m_msteams = jsonValue.GetObject("msteams");
    m_msteamsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAwsHasBeenSet) {
    payload.WithObject("sourceAws", m_sourceAws.Jsonize());
  }

  if (m_awsHasBeenSet) {
    payload.WithObject("aws", m_aws.Jsonize());
  }

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  if (m_slackHasBeenSet) {
    payload.WithObject("slack", m_slack.Jsonize());
  }

  if (m_dynatraceHasBeenSet) {
    payload.WithObject("dynatrace", m_dynatrace.Jsonize());
  }

  if (m_servicenowHasBeenSet) {
    payload.WithObject("servicenow", m_servicenow.Jsonize());
  }

  if (m_mcpservernewrelicHasBeenSet) {
    payload.WithObject("mcpservernewrelic", m_mcpservernewrelic.Jsonize());
  }

  if (m_gitlabHasBeenSet) {
    payload.WithObject("gitlab", m_gitlab.Jsonize());
  }

  if (m_eventChannelHasBeenSet) {
    payload.WithObject("eventChannel", m_eventChannel.Jsonize());
  }

  if (m_azureHasBeenSet) {
    payload.WithObject("azure", m_azure.Jsonize());
  }

  if (m_azuredevopsHasBeenSet) {
    payload.WithObject("azuredevops", m_azuredevops.Jsonize());
  }

  if (m_mcpservergrafanaHasBeenSet) {
    payload.WithObject("mcpservergrafana", m_mcpservergrafana.Jsonize());
  }

  if (m_pagerdutyHasBeenSet) {
    payload.WithObject("pagerduty", m_pagerduty.Jsonize());
  }

  if (m_msteamsHasBeenSet) {
    payload.WithObject("msteams", m_msteams.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
