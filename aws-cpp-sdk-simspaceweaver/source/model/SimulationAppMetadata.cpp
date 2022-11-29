/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationAppMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

SimulationAppMetadata::SimulationAppMetadata() : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_simulationHasBeenSet(false),
    m_status(SimulationAppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(SimulationAppTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
}

SimulationAppMetadata::SimulationAppMetadata(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_simulationHasBeenSet(false),
    m_status(SimulationAppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(SimulationAppTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationAppMetadata& SimulationAppMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Simulation"))
  {
    m_simulation = jsonValue.GetString("Simulation");

    m_simulationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SimulationAppStatusMapper::GetSimulationAppStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = SimulationAppTargetStatusMapper::GetSimulationAppTargetStatusForName(jsonValue.GetString("TargetStatus"));

    m_targetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationAppMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_simulationHasBeenSet)
  {
   payload.WithString("Simulation", m_simulation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SimulationAppStatusMapper::GetNameForSimulationAppStatus(m_status));
  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("TargetStatus", SimulationAppTargetStatusMapper::GetNameForSimulationAppTargetStatus(m_targetStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
