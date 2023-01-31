/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AggregateStatus.h>
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

AggregateStatus::AggregateStatus() : 
    m_signatureMapHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AggregateStatus::AggregateStatus(JsonView jsonValue) : 
    m_signatureMapHasBeenSet(false),
    m_status(AgentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateStatus& AggregateStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signatureMap"))
  {
    Aws::Map<Aws::String, JsonView> signatureMapJsonMap = jsonValue.GetObject("signatureMap").GetAllObjects();
    for(auto& signatureMapItem : signatureMapJsonMap)
    {
      m_signatureMap[signatureMapItem.first] = signatureMapItem.second.AsBool();
    }
    m_signatureMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateStatus::Jsonize() const
{
  JsonValue payload;

  if(m_signatureMapHasBeenSet)
  {
   JsonValue signatureMapJsonMap;
   for(auto& signatureMapItem : m_signatureMap)
   {
     signatureMapJsonMap.WithBool(signatureMapItem.first, signatureMapItem.second);
   }
   payload.WithObject("signatureMap", std::move(signatureMapJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AgentStatusMapper::GetNameForAgentStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
