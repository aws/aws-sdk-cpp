/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/AdvancedBackupSetting.h>
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

AdvancedBackupSetting::AdvancedBackupSetting() : 
    m_resourceTypeHasBeenSet(false),
    m_backupOptionsHasBeenSet(false)
{
}

AdvancedBackupSetting::AdvancedBackupSetting(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_backupOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedBackupSetting& AdvancedBackupSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupOptions"))
  {
    Aws::Map<Aws::String, JsonView> backupOptionsJsonMap = jsonValue.GetObject("BackupOptions").GetAllObjects();
    for(auto& backupOptionsItem : backupOptionsJsonMap)
    {
      m_backupOptions[backupOptionsItem.first] = backupOptionsItem.second.AsString();
    }
    m_backupOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedBackupSetting::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_backupOptionsHasBeenSet)
  {
   JsonValue backupOptionsJsonMap;
   for(auto& backupOptionsItem : m_backupOptions)
   {
     backupOptionsJsonMap.WithString(backupOptionsItem.first, backupOptionsItem.second);
   }
   payload.WithObject("BackupOptions", std::move(backupOptionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
