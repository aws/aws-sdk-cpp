/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetModelCustomizationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetModelCustomizationJobResult::GetModelCustomizationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetModelCustomizationJobResult& GetModelCustomizationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputModelName"))
  {
    m_outputModelName = jsonValue.GetString("outputModelName");
    m_outputModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputModelArn"))
  {
    m_outputModelArn = jsonValue.GetString("outputModelArn");
    m_outputModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");
    m_clientRequestTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelCustomizationJobStatusMapper::GetModelCustomizationJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseModelArn"))
  {
    m_baseModelArn = jsonValue.GetString("baseModelArn");
    m_baseModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("hyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
    m_hyperParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingDataConfig"))
  {
    m_trainingDataConfig = jsonValue.GetObject("trainingDataConfig");
    m_trainingDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationDataConfig"))
  {
    m_validationDataConfig = jsonValue.GetObject("validationDataConfig");
    m_validationDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");
    m_outputDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customizationType"))
  {
    m_customizationType = CustomizationTypeMapper::GetCustomizationTypeForName(jsonValue.GetString("customizationType"));
    m_customizationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputModelKmsKeyArn"))
  {
    m_outputModelKmsKeyArn = jsonValue.GetString("outputModelKmsKeyArn");
    m_outputModelKmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingMetrics"))
  {
    m_trainingMetrics = jsonValue.GetObject("trainingMetrics");
    m_trainingMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationMetrics"))
  {
    Aws::Utils::Array<JsonView> validationMetricsJsonList = jsonValue.GetArray("validationMetrics");
    for(unsigned validationMetricsIndex = 0; validationMetricsIndex < validationMetricsJsonList.GetLength(); ++validationMetricsIndex)
    {
      m_validationMetrics.push_back(validationMetricsJsonList[validationMetricsIndex].AsObject());
    }
    m_validationMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customizationConfig"))
  {
    m_customizationConfig = jsonValue.GetObject("customizationConfig");
    m_customizationConfigHasBeenSet = true;
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
