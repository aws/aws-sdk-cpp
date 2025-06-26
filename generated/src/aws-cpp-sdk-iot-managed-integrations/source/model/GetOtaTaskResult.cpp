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

GetOtaTaskResult::GetOtaTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOtaTaskResult& GetOtaTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");
    m_s3UrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = OtaProtocolMapper::GetOtaProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtaType"))
  {
    m_otaType = OtaTypeMapper::GetOtaTypeForName(jsonValue.GetString("OtaType"));
    m_otaTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtaTargetQueryString"))
  {
    m_otaTargetQueryString = jsonValue.GetString("OtaTargetQueryString");
    m_otaTargetQueryStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtaMechanism"))
  {
    m_otaMechanism = OtaMechanismMapper::GetOtaMechanismForName(jsonValue.GetString("OtaMechanism"));
    m_otaMechanismHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Target"))
  {
    Aws::Utils::Array<JsonView> targetJsonList = jsonValue.GetArray("Target");
    for(unsigned targetIndex = 0; targetIndex < targetJsonList.GetLength(); ++targetIndex)
    {
      m_target.push_back(targetJsonList[targetIndex].AsString());
    }
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskConfigurationId"))
  {
    m_taskConfigurationId = jsonValue.GetString("TaskConfigurationId");
    m_taskConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskProcessingDetails"))
  {
    m_taskProcessingDetails = jsonValue.GetObject("TaskProcessingDetails");
    m_taskProcessingDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtaSchedulingConfig"))
  {
    m_otaSchedulingConfig = jsonValue.GetObject("OtaSchedulingConfig");
    m_otaSchedulingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtaTaskExecutionRetryConfig"))
  {
    m_otaTaskExecutionRetryConfig = jsonValue.GetObject("OtaTaskExecutionRetryConfig");
    m_otaTaskExecutionRetryConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OtaStatusMapper::GetOtaStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
