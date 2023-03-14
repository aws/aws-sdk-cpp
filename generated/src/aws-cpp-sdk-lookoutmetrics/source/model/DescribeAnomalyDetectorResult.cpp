/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAnomalyDetectorResult::DescribeAnomalyDetectorResult() : 
    m_status(AnomalyDetectorStatus::NOT_SET),
    m_failureType(AnomalyDetectorFailureType::NOT_SET)
{
}

DescribeAnomalyDetectorResult::DescribeAnomalyDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AnomalyDetectorStatus::NOT_SET),
    m_failureType(AnomalyDetectorFailureType::NOT_SET)
{
  *this = result;
}

DescribeAnomalyDetectorResult& DescribeAnomalyDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");

  }

  if(jsonValue.ValueExists("AnomalyDetectorName"))
  {
    m_anomalyDetectorName = jsonValue.GetString("AnomalyDetectorName");

  }

  if(jsonValue.ValueExists("AnomalyDetectorDescription"))
  {
    m_anomalyDetectorDescription = jsonValue.GetString("AnomalyDetectorDescription");

  }

  if(jsonValue.ValueExists("AnomalyDetectorConfig"))
  {
    m_anomalyDetectorConfig = jsonValue.GetObject("AnomalyDetectorConfig");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }

  if(jsonValue.ValueExists("FailureType"))
  {
    m_failureType = AnomalyDetectorFailureTypeMapper::GetAnomalyDetectorFailureTypeForName(jsonValue.GetString("FailureType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
