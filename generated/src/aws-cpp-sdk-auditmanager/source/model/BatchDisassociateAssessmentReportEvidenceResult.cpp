/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchDisassociateAssessmentReportEvidenceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDisassociateAssessmentReportEvidenceResult::BatchDisassociateAssessmentReportEvidenceResult()
{
}

BatchDisassociateAssessmentReportEvidenceResult::BatchDisassociateAssessmentReportEvidenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateAssessmentReportEvidenceResult& BatchDisassociateAssessmentReportEvidenceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evidenceIds"))
  {
    Aws::Utils::Array<JsonView> evidenceIdsJsonList = jsonValue.GetArray("evidenceIds");
    for(unsigned evidenceIdsIndex = 0; evidenceIdsIndex < evidenceIdsJsonList.GetLength(); ++evidenceIdsIndex)
    {
      m_evidenceIds.push_back(evidenceIdsJsonList[evidenceIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
