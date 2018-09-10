/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/es/model/UpgradeHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

UpgradeHistory::UpgradeHistory() : 
    m_upgradeNameHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_upgradeStatus(UpgradeStatus::NOT_SET),
    m_upgradeStatusHasBeenSet(false),
    m_stepsListHasBeenSet(false)
{
}

UpgradeHistory::UpgradeHistory(JsonView jsonValue) : 
    m_upgradeNameHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_upgradeStatus(UpgradeStatus::NOT_SET),
    m_upgradeStatusHasBeenSet(false),
    m_stepsListHasBeenSet(false)
{
  *this = jsonValue;
}

UpgradeHistory& UpgradeHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpgradeName"))
  {
    m_upgradeName = jsonValue.GetString("UpgradeName");

    m_upgradeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpgradeStatus"))
  {
    m_upgradeStatus = UpgradeStatusMapper::GetUpgradeStatusForName(jsonValue.GetString("UpgradeStatus"));

    m_upgradeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepsList"))
  {
    Array<JsonView> stepsListJsonList = jsonValue.GetArray("StepsList");
    for(unsigned stepsListIndex = 0; stepsListIndex < stepsListJsonList.GetLength(); ++stepsListIndex)
    {
      m_stepsList.push_back(stepsListJsonList[stepsListIndex].AsObject());
    }
    m_stepsListHasBeenSet = true;
  }

  return *this;
}

JsonValue UpgradeHistory::Jsonize() const
{
  JsonValue payload;

  if(m_upgradeNameHasBeenSet)
  {
   payload.WithString("UpgradeName", m_upgradeName);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_upgradeStatusHasBeenSet)
  {
   payload.WithString("UpgradeStatus", UpgradeStatusMapper::GetNameForUpgradeStatus(m_upgradeStatus));
  }

  if(m_stepsListHasBeenSet)
  {
   Array<JsonValue> stepsListJsonList(m_stepsList.size());
   for(unsigned stepsListIndex = 0; stepsListIndex < stepsListJsonList.GetLength(); ++stepsListIndex)
   {
     stepsListJsonList[stepsListIndex].AsObject(m_stepsList[stepsListIndex].Jsonize());
   }
   payload.WithArray("StepsList", std::move(stepsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
