/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DisassociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateAssessmentReportEvidenceFolderRequest::DisassociateAssessmentReportEvidenceFolderRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false)
{
}

Aws::String DisassociateAssessmentReportEvidenceFolderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evidenceFolderIdHasBeenSet)
  {
   payload.WithString("evidenceFolderId", m_evidenceFolderId);

  }

  return payload.View().WriteReadable();
}




