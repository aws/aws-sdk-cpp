/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AwsGroundStationAgentEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

AwsGroundStationAgentEndpoint::AwsGroundStationAgentEndpoint() : 
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_auditResults(AuditResults::NOT_SET),
    m_auditResultsHasBeenSet(false),
    m_egressAddressHasBeenSet(false),
    m_ingressAddressHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AwsGroundStationAgentEndpoint::AwsGroundStationAgentEndpoint(JsonView jsonValue) : 
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_auditResults(AuditResults::NOT_SET),
    m_auditResultsHasBeenSet(false),
    m_egressAddressHasBeenSet(false),
    m_ingressAddressHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsGroundStationAgentEndpoint& AwsGroundStationAgentEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentStatus"))
  {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));

    m_agentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auditResults"))
  {
    m_auditResults = AuditResultsMapper::GetAuditResultsForName(jsonValue.GetString("auditResults"));

    m_auditResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("egressAddress"))
  {
    m_egressAddress = jsonValue.GetObject("egressAddress");

    m_egressAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingressAddress"))
  {
    m_ingressAddress = jsonValue.GetObject("ingressAddress");

    m_ingressAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsGroundStationAgentEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_agentStatusHasBeenSet)
  {
   payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if(m_auditResultsHasBeenSet)
  {
   payload.WithString("auditResults", AuditResultsMapper::GetNameForAuditResults(m_auditResults));
  }

  if(m_egressAddressHasBeenSet)
  {
   payload.WithObject("egressAddress", m_egressAddress.Jsonize());

  }

  if(m_ingressAddressHasBeenSet)
  {
   payload.WithObject("ingressAddress", m_ingressAddress.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
