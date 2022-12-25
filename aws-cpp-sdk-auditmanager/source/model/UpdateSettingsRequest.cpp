/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSettingsRequest::UpdateSettingsRequest() : 
    m_snsTopicHasBeenSet(false),
    m_defaultAssessmentReportsDestinationHasBeenSet(false),
    m_defaultProcessOwnersHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_evidenceFinderEnabled(false),
    m_evidenceFinderEnabledHasBeenSet(false)
{
}

Aws::String UpdateSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snsTopicHasBeenSet)
  {
   payload.WithString("snsTopic", m_snsTopic);

  }

  if(m_defaultAssessmentReportsDestinationHasBeenSet)
  {
   payload.WithObject("defaultAssessmentReportsDestination", m_defaultAssessmentReportsDestination.Jsonize());

  }

  if(m_defaultProcessOwnersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultProcessOwnersJsonList(m_defaultProcessOwners.size());
   for(unsigned defaultProcessOwnersIndex = 0; defaultProcessOwnersIndex < defaultProcessOwnersJsonList.GetLength(); ++defaultProcessOwnersIndex)
   {
     defaultProcessOwnersJsonList[defaultProcessOwnersIndex].AsObject(m_defaultProcessOwners[defaultProcessOwnersIndex].Jsonize());
   }
   payload.WithArray("defaultProcessOwners", std::move(defaultProcessOwnersJsonList));

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("kmsKey", m_kmsKey);

  }

  if(m_evidenceFinderEnabledHasBeenSet)
  {
   payload.WithBool("evidenceFinderEnabled", m_evidenceFinderEnabled);

  }

  return payload.View().WriteReadable();
}




