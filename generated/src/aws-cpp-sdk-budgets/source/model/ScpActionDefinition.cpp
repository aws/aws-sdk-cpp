/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ScpActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

ScpActionDefinition::ScpActionDefinition() : 
    m_policyIdHasBeenSet(false),
    m_targetIdsHasBeenSet(false)
{
}

ScpActionDefinition::ScpActionDefinition(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_targetIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ScpActionDefinition& ScpActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetIds"))
  {
    Aws::Utils::Array<JsonView> targetIdsJsonList = jsonValue.GetArray("TargetIds");
    for(unsigned targetIdsIndex = 0; targetIdsIndex < targetIdsJsonList.GetLength(); ++targetIdsIndex)
    {
      m_targetIds.push_back(targetIdsJsonList[targetIdsIndex].AsString());
    }
    m_targetIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScpActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_targetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIdsJsonList(m_targetIds.size());
   for(unsigned targetIdsIndex = 0; targetIdsIndex < targetIdsJsonList.GetLength(); ++targetIdsIndex)
   {
     targetIdsJsonList[targetIdsIndex].AsString(m_targetIds[targetIdsIndex]);
   }
   payload.WithArray("TargetIds", std::move(targetIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
