/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchAssociateAssessmentReportEvidenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchAssociateAssessmentReportEvidenceRequest::BatchAssociateAssessmentReportEvidenceRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false),
    m_evidenceIdsHasBeenSet(false)
{
}

Aws::String BatchAssociateAssessmentReportEvidenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evidenceFolderIdHasBeenSet)
  {
   payload.WithString("evidenceFolderId", m_evidenceFolderId);

  }

  if(m_evidenceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evidenceIdsJsonList(m_evidenceIds.size());
   for(unsigned evidenceIdsIndex = 0; evidenceIdsIndex < evidenceIdsJsonList.GetLength(); ++evidenceIdsIndex)
   {
     evidenceIdsJsonList[evidenceIdsIndex].AsString(m_evidenceIds[evidenceIdsIndex]);
   }
   payload.WithArray("evidenceIds", std::move(evidenceIdsJsonList));

  }

  return payload.View().WriteReadable();
}




