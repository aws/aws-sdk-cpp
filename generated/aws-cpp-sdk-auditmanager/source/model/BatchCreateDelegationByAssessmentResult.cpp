﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchCreateDelegationByAssessmentResult::BatchCreateDelegationByAssessmentResult()
{
}

BatchCreateDelegationByAssessmentResult::BatchCreateDelegationByAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchCreateDelegationByAssessmentResult& BatchCreateDelegationByAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("delegations"))
  {
    Array<JsonView> delegationsJsonList = jsonValue.GetArray("delegations");
    for(unsigned delegationsIndex = 0; delegationsIndex < delegationsJsonList.GetLength(); ++delegationsIndex)
    {
      m_delegations.push_back(delegationsJsonList[delegationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
