﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ValidateAssessmentReportIntegrityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateAssessmentReportIntegrityResult::ValidateAssessmentReportIntegrityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ValidateAssessmentReportIntegrityResult& ValidateAssessmentReportIntegrityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("signatureValid"))
  {
    m_signatureValid = jsonValue.GetBool("signatureValid");
    m_signatureValidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signatureAlgorithm"))
  {
    m_signatureAlgorithm = jsonValue.GetString("signatureAlgorithm");
    m_signatureAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signatureDateTime"))
  {
    m_signatureDateTime = jsonValue.GetString("signatureDateTime");
    m_signatureDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signatureKeyId"))
  {
    m_signatureKeyId = jsonValue.GetString("signatureKeyId");
    m_signatureKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationErrors"))
  {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsString());
    }
    m_validationErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
