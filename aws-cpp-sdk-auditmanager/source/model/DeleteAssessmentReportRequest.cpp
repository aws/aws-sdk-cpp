/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeleteAssessmentReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssessmentReportRequest::DeleteAssessmentReportRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_assessmentReportIdHasBeenSet(false)
{
}

Aws::String DeleteAssessmentReportRequest::SerializePayload() const
{
  return {};
}




