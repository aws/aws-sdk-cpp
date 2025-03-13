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

DescribeAnomalyDetectorResult::DescribeAnomalyDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAnomalyDetectorResult& DescribeAnomalyDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("AnomalyDetectorArn");
    m_anomalyDetectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyDetectorName"))
  {
    m_anomalyDetectorName = jsonValue.GetString("AnomalyDetectorName");
    m_anomalyDetectorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyDetectorDescription"))
  {
    m_anomalyDetectorDescription = jsonValue.GetString("AnomalyDetectorDescription");
    m_anomalyDetectorDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyDetectorConfig"))
  {
    m_anomalyDetectorConfig = jsonValue.GetObject("AnomalyDetectorConfig");
    m_anomalyDetectorConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureType"))
  {
    m_failureType = AnomalyDetectorFailureTypeMapper::GetAnomalyDetectorFailureTypeForName(jsonValue.GetString("FailureType"));
    m_failureTypeHasBeenSet = true;
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
