/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/CreateAssessmentReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssessmentReportRequest::CreateAssessmentReportRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_queryStatementHasBeenSet(false)
{
}

Aws::String CreateAssessmentReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("queryStatement", m_queryStatement);

  }

  return payload.View().WriteReadable();
}




