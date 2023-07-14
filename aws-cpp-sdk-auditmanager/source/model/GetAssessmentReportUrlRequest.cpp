/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetAssessmentReportUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssessmentReportUrlRequest::GetAssessmentReportUrlRequest() : 
    m_assessmentReportIdHasBeenSet(false),
    m_assessmentIdHasBeenSet(false)
{
}

Aws::String GetAssessmentReportUrlRequest::SerializePayload() const
{
  return {};
}




