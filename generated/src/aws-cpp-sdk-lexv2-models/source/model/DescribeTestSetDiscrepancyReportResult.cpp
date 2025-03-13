/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeTestSetDiscrepancyReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTestSetDiscrepancyReportResult::DescribeTestSetDiscrepancyReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTestSetDiscrepancyReportResult& DescribeTestSetDiscrepancyReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSetDiscrepancyReportId"))
  {
    m_testSetDiscrepancyReportId = jsonValue.GetString("testSetDiscrepancyReportId");
    m_testSetDiscrepancyReportIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");
    m_testSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetDiscrepancyReportStatus"))
  {
    m_testSetDiscrepancyReportStatus = TestSetDiscrepancyReportStatusMapper::GetTestSetDiscrepancyReportStatusForName(jsonValue.GetString("testSetDiscrepancyReportStatus"));
    m_testSetDiscrepancyReportStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDataTime"))
  {
    m_lastUpdatedDataTime = jsonValue.GetDouble("lastUpdatedDataTime");
    m_lastUpdatedDataTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetDiscrepancyTopErrors"))
  {
    m_testSetDiscrepancyTopErrors = jsonValue.GetObject("testSetDiscrepancyTopErrors");
    m_testSetDiscrepancyTopErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSetDiscrepancyRawOutputUrl"))
  {
    m_testSetDiscrepancyRawOutputUrl = jsonValue.GetString("testSetDiscrepancyRawOutputUrl");
    m_testSetDiscrepancyRawOutputUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
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
