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




