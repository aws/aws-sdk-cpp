/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AdditionalServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AdditionalServiceDetails::AdditionalServiceDetails(JsonView jsonValue) { *this = jsonValue; }

AdditionalServiceDetails& AdditionalServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("slack")) {
    m_slack = jsonValue.GetObject("slack");
    m_slackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpserverdatadog")) {
    m_mcpserverdatadog = jsonValue.GetObject("mcpserverdatadog");
    m_mcpserverdatadogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpserver")) {
    m_mcpserver = jsonValue.GetObject("mcpserver");
    m_mcpserverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicenow")) {
    m_servicenow = jsonValue.GetObject("servicenow");
    m_servicenowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gitlab")) {
    m_gitlab = jsonValue.GetObject("gitlab");
    m_gitlabHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpserversplunk")) {
    m_mcpserversplunk = jsonValue.GetObject("mcpserversplunk");
    m_mcpserversplunkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpservernewrelic")) {
    m_mcpservernewrelic = jsonValue.GetObject("mcpservernewrelic");
    m_mcpservernewrelicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azuredevops")) {
    m_azuredevops = jsonValue.GetObject("azuredevops");
    m_azuredevopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azureidentity")) {
    m_azureidentity = jsonValue.GetObject("azureidentity");
    m_azureidentityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpservergrafana")) {
    m_mcpservergrafana = jsonValue.GetObject("mcpservergrafana");
    m_mcpservergrafanaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pagerduty")) {
    m_pagerduty = jsonValue.GetObject("pagerduty");
    m_pagerdutyHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  if (m_slackHasBeenSet) {
    payload.WithObject("slack", m_slack.Jsonize());
  }

  if (m_mcpserverdatadogHasBeenSet) {
    payload.WithObject("mcpserverdatadog", m_mcpserverdatadog.Jsonize());
  }

  if (m_mcpserverHasBeenSet) {
    payload.WithObject("mcpserver", m_mcpserver.Jsonize());
  }

  if (m_servicenowHasBeenSet) {
    payload.WithObject("servicenow", m_servicenow.Jsonize());
  }

  if (m_gitlabHasBeenSet) {
    payload.WithObject("gitlab", m_gitlab.Jsonize());
  }

  if (m_mcpserversplunkHasBeenSet) {
    payload.WithObject("mcpserversplunk", m_mcpserversplunk.Jsonize());
  }

  if (m_mcpservernewrelicHasBeenSet) {
    payload.WithObject("mcpservernewrelic", m_mcpservernewrelic.Jsonize());
  }

  if (m_azuredevopsHasBeenSet) {
    payload.WithObject("azuredevops", m_azuredevops.Jsonize());
  }

  if (m_azureidentityHasBeenSet) {
    payload.WithObject("azureidentity", m_azureidentity.Jsonize());
  }

  if (m_mcpservergrafanaHasBeenSet) {
    payload.WithObject("mcpservergrafana", m_mcpservergrafana.Jsonize());
  }

  if (m_pagerdutyHasBeenSet) {
    payload.WithObject("pagerduty", m_pagerduty.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
