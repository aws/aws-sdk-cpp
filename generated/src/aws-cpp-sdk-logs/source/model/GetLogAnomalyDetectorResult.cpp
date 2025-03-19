/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogAnomalyDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLogAnomalyDetectorResult::GetLogAnomalyDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLogAnomalyDetectorResult& GetLogAnomalyDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorName"))
  {
    m_detectorName = jsonValue.GetString("detectorName");
    m_detectorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupArnList"))
  {
    Aws::Utils::Array<JsonView> logGroupArnListJsonList = jsonValue.GetArray("logGroupArnList");
    for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
    {
      m_logGroupArnList.push_back(logGroupArnListJsonList[logGroupArnListIndex].AsString());
    }
    m_logGroupArnListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluationFrequency"))
  {
    m_evaluationFrequency = EvaluationFrequencyMapper::GetEvaluationFrequencyForName(jsonValue.GetString("evaluationFrequency"));
    m_evaluationFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");
    m_filterPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("anomalyDetectorStatus"))
  {
    m_anomalyDetectorStatus = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("anomalyDetectorStatus"));
    m_anomalyDetectorStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTimeStamp"))
  {
    m_creationTimeStamp = jsonValue.GetInt64("creationTimeStamp");
    m_creationTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTimeStamp"))
  {
    m_lastModifiedTimeStamp = jsonValue.GetInt64("lastModifiedTimeStamp");
    m_lastModifiedTimeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("anomalyVisibilityTime"))
  {
    m_anomalyVisibilityTime = jsonValue.GetInt64("anomalyVisibilityTime");
    m_anomalyVisibilityTimeHasBeenSet = true;
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
