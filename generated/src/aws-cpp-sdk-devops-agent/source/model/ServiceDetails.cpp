/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceDetails::ServiceDetails(JsonView jsonValue) { *this = jsonValue; }

ServiceDetails& ServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dynatrace")) {
    m_dynatrace = jsonValue.GetObject("dynatrace");
    m_dynatraceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicenow")) {
    m_servicenow = jsonValue.GetObject("servicenow");
    m_servicenowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpserverdatadog")) {
    m_mcpserverdatadog = jsonValue.GetObject("mcpserverdatadog");
    m_mcpserverdatadogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpserver")) {
    m_mcpserver = jsonValue.GetObject("mcpserver");
    m_mcpserverHasBeenSet = true;
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
  if (jsonValue.ValueExists("eventChannel")) {
    m_eventChannel = jsonValue.GetObject("eventChannel");
    m_eventChannelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpservergrafana")) {
    m_mcpservergrafana = jsonValue.GetObject("mcpservergrafana");
    m_mcpservergrafanaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pagerduty")) {
    m_pagerduty = jsonValue.GetObject("pagerduty");
    m_pagerdutyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azureidentity")) {
    m_azureidentity = jsonValue.GetObject("azureidentity");
    m_azureidentityHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_dynatraceHasBeenSet) {
    payload.WithObject("dynatrace", m_dynatrace.Jsonize());
  }

  if (m_servicenowHasBeenSet) {
    payload.WithObject("servicenow", m_servicenow.Jsonize());
  }

  if (m_mcpserverdatadogHasBeenSet) {
    payload.WithObject("mcpserverdatadog", m_mcpserverdatadog.Jsonize());
  }

  if (m_mcpserverHasBeenSet) {
    payload.WithObject("mcpserver", m_mcpserver.Jsonize());
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

  if (m_eventChannelHasBeenSet) {
    payload.WithObject("eventChannel", m_eventChannel.Jsonize());
  }

  if (m_mcpservergrafanaHasBeenSet) {
    payload.WithObject("mcpservergrafana", m_mcpservergrafana.Jsonize());
  }

  if (m_pagerdutyHasBeenSet) {
    payload.WithObject("pagerduty", m_pagerduty.Jsonize());
  }

  if (m_azureidentityHasBeenSet) {
    payload.WithObject("azureidentity", m_azureidentity.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
