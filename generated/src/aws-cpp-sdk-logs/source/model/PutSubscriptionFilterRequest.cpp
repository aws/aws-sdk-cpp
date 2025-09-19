/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutSubscriptionFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSubscriptionFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", m_filterName);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_distributionHasBeenSet)
  {
   payload.WithString("distribution", DistributionMapper::GetNameForDistribution(m_distribution));
  }

  if(m_applyOnTransformedLogsHasBeenSet)
  {
   payload.WithBool("applyOnTransformedLogs", m_applyOnTransformedLogs);

  }

  if(m_fieldSelectionCriteriaHasBeenSet)
  {
   payload.WithString("fieldSelectionCriteria", m_fieldSelectionCriteria);

  }

  if(m_emitSystemFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emitSystemFieldsJsonList(m_emitSystemFields.size());
   for(unsigned emitSystemFieldsIndex = 0; emitSystemFieldsIndex < emitSystemFieldsJsonList.GetLength(); ++emitSystemFieldsIndex)
   {
     emitSystemFieldsJsonList[emitSystemFieldsIndex].AsString(m_emitSystemFields[emitSystemFieldsIndex]);
   }
   payload.WithArray("emitSystemFields", std::move(emitSystemFieldsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSubscriptionFilterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutSubscriptionFilter"));
  return headers;

}




