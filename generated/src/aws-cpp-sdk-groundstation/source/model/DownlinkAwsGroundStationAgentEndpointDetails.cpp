/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/DownlinkAwsGroundStationAgentEndpointDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

DownlinkAwsGroundStationAgentEndpointDetails::DownlinkAwsGroundStationAgentEndpointDetails(JsonView jsonValue) { *this = jsonValue; }

DownlinkAwsGroundStationAgentEndpointDetails& DownlinkAwsGroundStationAgentEndpointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataflowDetails")) {
    m_dataflowDetails = jsonValue.GetObject("dataflowDetails");
    m_dataflowDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentStatus")) {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));
    m_agentStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("auditResults")) {
    m_auditResults = AuditResultsMapper::GetAuditResultsForName(jsonValue.GetString("auditResults"));
    m_auditResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue DownlinkAwsGroundStationAgentEndpointDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dataflowDetailsHasBeenSet) {
    payload.WithObject("dataflowDetails", m_dataflowDetails.Jsonize());
  }

  if (m_agentStatusHasBeenSet) {
    payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if (m_auditResultsHasBeenSet) {
    payload.WithString("auditResults", AuditResultsMapper::GetNameForAuditResults(m_auditResults));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
