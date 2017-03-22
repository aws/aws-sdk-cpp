/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/model/ModifyReplicationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyReplicationTaskRequest::ModifyReplicationTaskRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_replicationTaskIdentifierHasBeenSet(false),
    m_migrationType(MigrationTypeValue::NOT_SET),
    m_migrationTypeHasBeenSet(false),
    m_tableMappingsHasBeenSet(false),
    m_replicationTaskSettingsHasBeenSet(false),
    m_cdcStartTimeHasBeenSet(false)
{
}

Aws::String ModifyReplicationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationTaskIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationTaskIdentifier", m_replicationTaskIdentifier);

  }

  if(m_migrationTypeHasBeenSet)
  {
   payload.WithString("MigrationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_migrationType));
  }

  if(m_tableMappingsHasBeenSet)
  {
   payload.WithString("TableMappings", m_tableMappings);

  }

  if(m_replicationTaskSettingsHasBeenSet)
  {
   payload.WithString("ReplicationTaskSettings", m_replicationTaskSettings);

  }

  if(m_cdcStartTimeHasBeenSet)
  {
   payload.WithDouble("CdcStartTime", m_cdcStartTime.SecondsWithMSPrecision());
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyReplicationTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyReplicationTask"));
  return headers;

}




