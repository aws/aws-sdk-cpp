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

#include <aws/backup/model/BackupRuleInput.h>
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

BackupRuleInput::BackupRuleInput() : 
    m_ruleNameHasBeenSet(false),
    m_targetBackupVaultNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_startWindowMinutes(0),
    m_startWindowMinutesHasBeenSet(false),
    m_completionWindowMinutes(0),
    m_completionWindowMinutesHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_recoveryPointTagsHasBeenSet(false)
{
}

BackupRuleInput::BackupRuleInput(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_targetBackupVaultNameHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false),
    m_startWindowMinutes(0),
    m_startWindowMinutesHasBeenSet(false),
    m_completionWindowMinutes(0),
    m_completionWindowMinutesHasBeenSet(false),
    m_lifecycleHasBeenSet(false),
    m_recoveryPointTagsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupRuleInput& BackupRuleInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetBackupVaultName"))
  {
    m_targetBackupVaultName = jsonValue.GetString("TargetBackupVaultName");

    m_targetBackupVaultNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartWindowMinutes"))
  {
    m_startWindowMinutes = jsonValue.GetInt64("StartWindowMinutes");

    m_startWindowMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionWindowMinutes"))
  {
    m_completionWindowMinutes = jsonValue.GetInt64("CompletionWindowMinutes");

    m_completionWindowMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecoveryPointTags"))
  {
    Aws::Map<Aws::String, JsonView> recoveryPointTagsJsonMap = jsonValue.GetObject("RecoveryPointTags").GetAllObjects();
    for(auto& recoveryPointTagsItem : recoveryPointTagsJsonMap)
    {
      m_recoveryPointTags[recoveryPointTagsItem.first] = recoveryPointTagsItem.second.AsString();
    }
    m_recoveryPointTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupRuleInput::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_targetBackupVaultNameHasBeenSet)
  {
   payload.WithString("TargetBackupVaultName", m_targetBackupVaultName);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_startWindowMinutesHasBeenSet)
  {
   payload.WithInt64("StartWindowMinutes", m_startWindowMinutes);

  }

  if(m_completionWindowMinutesHasBeenSet)
  {
   payload.WithInt64("CompletionWindowMinutes", m_completionWindowMinutes);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_recoveryPointTagsHasBeenSet)
  {
   JsonValue recoveryPointTagsJsonMap;
   for(auto& recoveryPointTagsItem : m_recoveryPointTags)
   {
     recoveryPointTagsJsonMap.WithString(recoveryPointTagsItem.first, recoveryPointTagsItem.second);
   }
   payload.WithObject("RecoveryPointTags", std::move(recoveryPointTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
