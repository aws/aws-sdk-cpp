/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/UpdateEventDataStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventDataStoreRequest::UpdateEventDataStoreRequest() : 
    m_eventDataStoreHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_advancedEventSelectorsHasBeenSet(false),
    m_multiRegionEnabled(false),
    m_multiRegionEnabledHasBeenSet(false),
    m_organizationEnabled(false),
    m_organizationEnabledHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_terminationProtectionEnabled(false),
    m_terminationProtectionEnabledHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

Aws::String UpdateEventDataStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDataStoreHasBeenSet)
  {
   payload.WithString("EventDataStore", m_eventDataStore);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_advancedEventSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advancedEventSelectorsJsonList(m_advancedEventSelectors.size());
   for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
   {
     advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject(m_advancedEventSelectors[advancedEventSelectorsIndex].Jsonize());
   }
   payload.WithArray("AdvancedEventSelectors", std::move(advancedEventSelectorsJsonList));

  }

  if(m_multiRegionEnabledHasBeenSet)
  {
   payload.WithBool("MultiRegionEnabled", m_multiRegionEnabled);

  }

  if(m_organizationEnabledHasBeenSet)
  {
   payload.WithBool("OrganizationEnabled", m_organizationEnabled);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("RetentionPeriod", m_retentionPeriod);

  }

  if(m_terminationProtectionEnabledHasBeenSet)
  {
   payload.WithBool("TerminationProtectionEnabled", m_terminationProtectionEnabled);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEventDataStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.UpdateEventDataStore"));
  return headers;

}




