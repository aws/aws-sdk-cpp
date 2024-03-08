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

GetLogAnomalyDetectorResult::GetLogAnomalyDetectorResult() : 
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_anomalyDetectorStatus(AnomalyDetectorStatus::NOT_SET),
    m_creationTimeStamp(0),
    m_lastModifiedTimeStamp(0),
    m_anomalyVisibilityTime(0)
{
}

GetLogAnomalyDetectorResult::GetLogAnomalyDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_anomalyDetectorStatus(AnomalyDetectorStatus::NOT_SET),
    m_creationTimeStamp(0),
    m_lastModifiedTimeStamp(0),
    m_anomalyVisibilityTime(0)
{
  *this = result;
}

GetLogAnomalyDetectorResult& GetLogAnomalyDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorName"))
  {
    m_detectorName = jsonValue.GetString("detectorName");

  }

  if(jsonValue.ValueExists("logGroupArnList"))
  {
    Aws::Utils::Array<JsonView> logGroupArnListJsonList = jsonValue.GetArray("logGroupArnList");
    for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
    {
      m_logGroupArnList.push_back(logGroupArnListJsonList[logGroupArnListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("evaluationFrequency"))
  {
    m_evaluationFrequency = EvaluationFrequencyMapper::GetEvaluationFrequencyForName(jsonValue.GetString("evaluationFrequency"));

  }

  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");

  }

  if(jsonValue.ValueExists("anomalyDetectorStatus"))
  {
    m_anomalyDetectorStatus = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("anomalyDetectorStatus"));

  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

  }

  if(jsonValue.ValueExists("creationTimeStamp"))
  {
    m_creationTimeStamp = jsonValue.GetInt64("creationTimeStamp");

  }

  if(jsonValue.ValueExists("lastModifiedTimeStamp"))
  {
    m_lastModifiedTimeStamp = jsonValue.GetInt64("lastModifiedTimeStamp");

  }

  if(jsonValue.ValueExists("anomalyVisibilityTime"))
  {
    m_anomalyVisibilityTime = jsonValue.GetInt64("anomalyVisibilityTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
