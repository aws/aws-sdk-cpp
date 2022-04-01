﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkersWithQualificationTypeResult::ListWorkersWithQualificationTypeResult() : 
    m_numResults(0)
{
}

ListWorkersWithQualificationTypeResult::ListWorkersWithQualificationTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListWorkersWithQualificationTypeResult& ListWorkersWithQualificationTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("Qualifications"))
  {
    Array<JsonView> qualificationsJsonList = jsonValue.GetArray("Qualifications");
    for(unsigned qualificationsIndex = 0; qualificationsIndex < qualificationsJsonList.GetLength(); ++qualificationsIndex)
    {
      m_qualifications.push_back(qualificationsJsonList[qualificationsIndex].AsObject());
    }
  }



  return *this;
}
