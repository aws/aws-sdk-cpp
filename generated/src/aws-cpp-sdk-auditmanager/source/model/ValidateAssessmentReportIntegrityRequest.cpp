/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ValidateAssessmentReportIntegrityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateAssessmentReportIntegrityRequest::ValidateAssessmentReportIntegrityRequest() : 
    m_s3RelativePathHasBeenSet(false)
{
}

Aws::String ValidateAssessmentReportIntegrityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3RelativePathHasBeenSet)
  {
   payload.WithString("s3RelativePath", m_s3RelativePath);

  }

  return payload.View().WriteReadable();
}




