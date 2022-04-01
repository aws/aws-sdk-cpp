/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAssessmentReportEvidenceFolderRequest::AssociateAssessmentReportEvidenceFolderRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false)
{
}

Aws::String AssociateAssessmentReportEvidenceFolderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evidenceFolderIdHasBeenSet)
  {
   payload.WithString("evidenceFolderId", m_evidenceFolderId);

  }

  return payload.View().WriteReadable();
}




