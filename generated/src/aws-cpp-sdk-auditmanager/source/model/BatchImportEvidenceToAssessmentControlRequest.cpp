﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchImportEvidenceToAssessmentControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_manualEvidenceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> manualEvidenceJsonList(m_manualEvidence.size());
   for(unsigned manualEvidenceIndex = 0; manualEvidenceIndex < manualEvidenceJsonList.GetLength(); ++manualEvidenceIndex)
   {
     manualEvidenceJsonList[manualEvidenceIndex].AsObject(m_manualEvidence[manualEvidenceIndex].Jsonize());
   }
   payload.WithArray("manualEvidence", std::move(manualEvidenceJsonList));

  }

  return payload.View().WriteReadable();
}




