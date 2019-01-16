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

#include <aws/backup/model/BackupPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupPlan::BackupPlan() : 
    m_backupPlanNameHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

BackupPlan::BackupPlan(JsonView jsonValue) : 
    m_backupPlanNameHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

BackupPlan& BackupPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanName"))
  {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");

    m_backupPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupPlan::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanNameHasBeenSet)
  {
   payload.WithString("BackupPlanName", m_backupPlanName);

  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
