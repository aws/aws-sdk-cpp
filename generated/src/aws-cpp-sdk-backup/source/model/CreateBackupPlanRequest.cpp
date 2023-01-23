/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateBackupPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackupPlanRequest::CreateBackupPlanRequest() : 
    m_backupPlanHasBeenSet(false),
    m_backupPlanTagsHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false)
{
}

Aws::String CreateBackupPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupPlanHasBeenSet)
  {
   payload.WithObject("BackupPlan", m_backupPlan.Jsonize());

  }

  if(m_backupPlanTagsHasBeenSet)
  {
   JsonValue backupPlanTagsJsonMap;
   for(auto& backupPlanTagsItem : m_backupPlanTags)
   {
     backupPlanTagsJsonMap.WithString(backupPlanTagsItem.first, backupPlanTagsItem.second);
   }
   payload.WithObject("BackupPlanTags", std::move(backupPlanTagsJsonMap));

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  return payload.View().WriteReadable();
}




