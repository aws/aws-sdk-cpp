/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/RestoreTableToPointInTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreTableToPointInTimeRequest::RestoreTableToPointInTimeRequest() : 
    m_sourceTableArnHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false),
    m_restoreDateTimeHasBeenSet(false),
    m_billingModeOverride(BillingMode::NOT_SET),
    m_billingModeOverrideHasBeenSet(false),
    m_globalSecondaryIndexOverrideHasBeenSet(false),
    m_localSecondaryIndexOverrideHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_sSESpecificationOverrideHasBeenSet(false)
{
}

Aws::String RestoreTableToPointInTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceTableArnHasBeenSet)
  {
   payload.WithString("SourceTableArn", m_sourceTableArn);

  }

  if(m_sourceTableNameHasBeenSet)
  {
   payload.WithString("SourceTableName", m_sourceTableName);

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("TargetTableName", m_targetTableName);

  }

  if(m_useLatestRestorableTimeHasBeenSet)
  {
   payload.WithBool("UseLatestRestorableTime", m_useLatestRestorableTime);

  }

  if(m_restoreDateTimeHasBeenSet)
  {
   payload.WithDouble("RestoreDateTime", m_restoreDateTime.SecondsWithMSPrecision());
  }

  if(m_billingModeOverrideHasBeenSet)
  {
   payload.WithString("BillingModeOverride", BillingModeMapper::GetNameForBillingMode(m_billingModeOverride));
  }

  if(m_globalSecondaryIndexOverrideHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexOverrideJsonList(m_globalSecondaryIndexOverride.size());
   for(unsigned globalSecondaryIndexOverrideIndex = 0; globalSecondaryIndexOverrideIndex < globalSecondaryIndexOverrideJsonList.GetLength(); ++globalSecondaryIndexOverrideIndex)
   {
     globalSecondaryIndexOverrideJsonList[globalSecondaryIndexOverrideIndex].AsObject(m_globalSecondaryIndexOverride[globalSecondaryIndexOverrideIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexOverride", std::move(globalSecondaryIndexOverrideJsonList));

  }

  if(m_localSecondaryIndexOverrideHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localSecondaryIndexOverrideJsonList(m_localSecondaryIndexOverride.size());
   for(unsigned localSecondaryIndexOverrideIndex = 0; localSecondaryIndexOverrideIndex < localSecondaryIndexOverrideJsonList.GetLength(); ++localSecondaryIndexOverrideIndex)
   {
     localSecondaryIndexOverrideJsonList[localSecondaryIndexOverrideIndex].AsObject(m_localSecondaryIndexOverride[localSecondaryIndexOverrideIndex].Jsonize());
   }
   payload.WithArray("LocalSecondaryIndexOverride", std::move(localSecondaryIndexOverrideJsonList));

  }

  if(m_provisionedThroughputOverrideHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughputOverride", m_provisionedThroughputOverride.Jsonize());

  }

  if(m_sSESpecificationOverrideHasBeenSet)
  {
   payload.WithObject("SSESpecificationOverride", m_sSESpecificationOverride.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreTableToPointInTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.RestoreTableToPointInTime"));
  return headers;

}




