﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/RestoreTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RestoreTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceKeyspaceNameHasBeenSet)
  {
   payload.WithString("sourceKeyspaceName", m_sourceKeyspaceName);

  }

  if(m_sourceTableNameHasBeenSet)
  {
   payload.WithString("sourceTableName", m_sourceTableName);

  }

  if(m_targetKeyspaceNameHasBeenSet)
  {
   payload.WithString("targetKeyspaceName", m_targetKeyspaceName);

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("targetTableName", m_targetTableName);

  }

  if(m_restoreTimestampHasBeenSet)
  {
   payload.WithDouble("restoreTimestamp", m_restoreTimestamp.SecondsWithMSPrecision());
  }

  if(m_capacitySpecificationOverrideHasBeenSet)
  {
   payload.WithObject("capacitySpecificationOverride", m_capacitySpecificationOverride.Jsonize());

  }

  if(m_encryptionSpecificationOverrideHasBeenSet)
  {
   payload.WithObject("encryptionSpecificationOverride", m_encryptionSpecificationOverride.Jsonize());

  }

  if(m_pointInTimeRecoveryOverrideHasBeenSet)
  {
   payload.WithObject("pointInTimeRecoveryOverride", m_pointInTimeRecoveryOverride.Jsonize());

  }

  if(m_tagsOverrideHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsOverrideJsonList(m_tagsOverride.size());
   for(unsigned tagsOverrideIndex = 0; tagsOverrideIndex < tagsOverrideJsonList.GetLength(); ++tagsOverrideIndex)
   {
     tagsOverrideJsonList[tagsOverrideIndex].AsObject(m_tagsOverride[tagsOverrideIndex].Jsonize());
   }
   payload.WithArray("tagsOverride", std::move(tagsOverrideJsonList));

  }

  if(m_autoScalingSpecificationHasBeenSet)
  {
   payload.WithObject("autoScalingSpecification", m_autoScalingSpecification.Jsonize());

  }

  if(m_replicaSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaSpecificationsJsonList(m_replicaSpecifications.size());
   for(unsigned replicaSpecificationsIndex = 0; replicaSpecificationsIndex < replicaSpecificationsJsonList.GetLength(); ++replicaSpecificationsIndex)
   {
     replicaSpecificationsJsonList[replicaSpecificationsIndex].AsObject(m_replicaSpecifications[replicaSpecificationsIndex].Jsonize());
   }
   payload.WithArray("replicaSpecifications", std::move(replicaSpecificationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesService.RestoreTable"));
  return headers;

}




