/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/RecoveryGroupOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

RecoveryGroupOutput::RecoveryGroupOutput() : 
    m_cellsHasBeenSet(false),
    m_recoveryGroupArnHasBeenSet(false),
    m_recoveryGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RecoveryGroupOutput::RecoveryGroupOutput(JsonView jsonValue) : 
    m_cellsHasBeenSet(false),
    m_recoveryGroupArnHasBeenSet(false),
    m_recoveryGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryGroupOutput& RecoveryGroupOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("cells");
    for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
    {
      m_cells.push_back(cellsJsonList[cellsIndex].AsString());
    }
    m_cellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryGroupArn"))
  {
    m_recoveryGroupArn = jsonValue.GetString("recoveryGroupArn");

    m_recoveryGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryGroupName"))
  {
    m_recoveryGroupName = jsonValue.GetString("recoveryGroupName");

    m_recoveryGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryGroupOutput::Jsonize() const
{
  JsonValue payload;

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsString(m_cells[cellsIndex]);
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  if(m_recoveryGroupArnHasBeenSet)
  {
   payload.WithString("recoveryGroupArn", m_recoveryGroupArn);

  }

  if(m_recoveryGroupNameHasBeenSet)
  {
   payload.WithString("recoveryGroupName", m_recoveryGroupName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
