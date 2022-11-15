/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanAdvancedBackupSettingsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanAdvancedBackupSettingsDetails::AwsBackupBackupPlanAdvancedBackupSettingsDetails() : 
    m_backupOptionsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

AwsBackupBackupPlanAdvancedBackupSettingsDetails::AwsBackupBackupPlanAdvancedBackupSettingsDetails(JsonView jsonValue) : 
    m_backupOptionsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanAdvancedBackupSettingsDetails& AwsBackupBackupPlanAdvancedBackupSettingsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupOptions"))
  {
    Aws::Map<Aws::String, JsonView> backupOptionsJsonMap = jsonValue.GetObject("BackupOptions").GetAllObjects();
    for(auto& backupOptionsItem : backupOptionsJsonMap)
    {
      m_backupOptions[backupOptionsItem.first] = backupOptionsItem.second.AsString();
    }
    m_backupOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanAdvancedBackupSettingsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupOptionsHasBeenSet)
  {
   JsonValue backupOptionsJsonMap;
   for(auto& backupOptionsItem : m_backupOptions)
   {
     backupOptionsJsonMap.WithString(backupOptionsItem.first, backupOptionsItem.second);
   }
   payload.WithObject("BackupOptions", std::move(backupOptionsJsonMap));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
