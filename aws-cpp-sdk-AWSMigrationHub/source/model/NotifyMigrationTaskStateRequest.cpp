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

#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_nextUpdateSeconds(0),
    m_nextUpdateSecondsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String NotifyMigrationTaskStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithObject("Task", m_task.Jsonize());

  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("UpdateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_nextUpdateSecondsHasBeenSet)
  {
   payload.WithInteger("NextUpdateSeconds", m_nextUpdateSeconds);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyMigrationTaskStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.NotifyMigrationTaskState"));
  return headers;

}




