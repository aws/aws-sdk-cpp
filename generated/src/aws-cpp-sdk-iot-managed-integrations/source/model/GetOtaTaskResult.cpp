/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetOtaTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOtaTaskResult::GetOtaTaskResult() : 
    m_protocol(OtaProtocol::NOT_SET),
    m_otaType(OtaType::NOT_SET),
    m_otaMechanism(OtaMechanism::NOT_SET),
    m_status(OtaStatus::NOT_SET)
{
}

GetOtaTaskResult::GetOtaTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetOtaTaskResult()
{
  *this = result;
}

GetOtaTaskResult& GetOtaTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = OtaProtocolMapper::GetOtaProtocolForName(jsonValue.GetString("Protocol"));

  }

  if(jsonValue.ValueExists("OtaType"))
  {
    m_otaType = OtaTypeMapper::GetOtaTypeForName(jsonValue.GetString("OtaType"));

  }

  if(jsonValue.ValueExists("OtaTargetQueryString"))
  {
    m_otaTargetQueryString = jsonValue.GetString("OtaTargetQueryString");

  }

  if(jsonValue.ValueExists("OtaMechanism"))
  {
    m_otaMechanism = OtaMechanismMapper::GetOtaMechanismForName(jsonValue.GetString("OtaMechanism"));

  }

  if(jsonValue.ValueExists("Target"))
  {
    Aws::Utils::Array<JsonView> targetJsonList = jsonValue.GetArray("Target");
    for(unsigned targetIndex = 0; targetIndex < targetJsonList.GetLength(); ++targetIndex)
    {
      m_target.push_back(targetJsonList[targetIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("TaskConfigurationId"))
  {
    m_taskConfigurationId = jsonValue.GetString("TaskConfigurationId");

  }

  if(jsonValue.ValueExists("TaskProcessingDetails"))
  {
    m_taskProcessingDetails = jsonValue.GetObject("TaskProcessingDetails");

  }

  if(jsonValue.ValueExists("OtaSchedulingConfig"))
  {
    m_otaSchedulingConfig = jsonValue.GetObject("OtaSchedulingConfig");

  }

  if(jsonValue.ValueExists("OtaTaskExecutionRetryConfig"))
  {
    m_otaTaskExecutionRetryConfig = jsonValue.GetObject("OtaTaskExecutionRetryConfig");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OtaStatusMapper::GetOtaStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
