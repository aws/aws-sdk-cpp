/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionsStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchActionsStatus::LaunchActionsStatus() : 
    m_runsHasBeenSet(false),
    m_ssmAgentDiscoveryDatetimeHasBeenSet(false)
{
}

LaunchActionsStatus::LaunchActionsStatus(JsonView jsonValue) : 
    m_runsHasBeenSet(false),
    m_ssmAgentDiscoveryDatetimeHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchActionsStatus& LaunchActionsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runs"))
  {
    Aws::Utils::Array<JsonView> runsJsonList = jsonValue.GetArray("runs");
    for(unsigned runsIndex = 0; runsIndex < runsJsonList.GetLength(); ++runsIndex)
    {
      m_runs.push_back(runsJsonList[runsIndex].AsObject());
    }
    m_runsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmAgentDiscoveryDatetime"))
  {
    m_ssmAgentDiscoveryDatetime = jsonValue.GetString("ssmAgentDiscoveryDatetime");

    m_ssmAgentDiscoveryDatetimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchActionsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_runsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runsJsonList(m_runs.size());
   for(unsigned runsIndex = 0; runsIndex < runsJsonList.GetLength(); ++runsIndex)
   {
     runsJsonList[runsIndex].AsObject(m_runs[runsIndex].Jsonize());
   }
   payload.WithArray("runs", std::move(runsJsonList));

  }

  if(m_ssmAgentDiscoveryDatetimeHasBeenSet)
  {
   payload.WithString("ssmAgentDiscoveryDatetime", m_ssmAgentDiscoveryDatetime);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
