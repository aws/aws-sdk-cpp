﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListConformancePackComplianceScoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConformancePackComplianceScoresResult::ListConformancePackComplianceScoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConformancePackComplianceScoresResult& ListConformancePackComplianceScoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConformancePackComplianceScores"))
  {
    Aws::Utils::Array<JsonView> conformancePackComplianceScoresJsonList = jsonValue.GetArray("ConformancePackComplianceScores");
    for(unsigned conformancePackComplianceScoresIndex = 0; conformancePackComplianceScoresIndex < conformancePackComplianceScoresJsonList.GetLength(); ++conformancePackComplianceScoresIndex)
    {
      m_conformancePackComplianceScores.push_back(conformancePackComplianceScoresJsonList[conformancePackComplianceScoresIndex].AsObject());
    }
    m_conformancePackComplianceScoresHasBeenSet = true;
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
