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

GetModelCustomizationJobResult::GetModelCustomizationJobResult() : 
    m_status(ModelCustomizationJobStatus::NOT_SET),
    m_customizationType(CustomizationType::NOT_SET)
{
}

GetModelCustomizationJobResult::GetModelCustomizationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ModelCustomizationJobStatus::NOT_SET),
    m_customizationType(CustomizationType::NOT_SET)
{
  *this = result;
}

GetModelCustomizationJobResult& GetModelCustomizationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("outputModelName"))
  {
    m_outputModelName = jsonValue.GetString("outputModelName");

  }

  if(jsonValue.ValueExists("outputModelArn"))
  {
    m_outputModelArn = jsonValue.GetString("outputModelArn");

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelCustomizationJobStatusMapper::GetModelCustomizationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("baseModelArn"))
  {
    m_baseModelArn = jsonValue.GetString("baseModelArn");

  }

  if(jsonValue.ValueExists("hyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("hyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("trainingDataConfig"))
  {
    m_trainingDataConfig = jsonValue.GetObject("trainingDataConfig");

  }

  if(jsonValue.ValueExists("validationDataConfig"))
  {
    m_validationDataConfig = jsonValue.GetObject("validationDataConfig");

  }

  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");

  }

  if(jsonValue.ValueExists("customizationType"))
  {
    m_customizationType = CustomizationTypeMapper::GetCustomizationTypeForName(jsonValue.GetString("customizationType"));

  }

  if(jsonValue.ValueExists("outputModelKmsKeyArn"))
  {
    m_outputModelKmsKeyArn = jsonValue.GetString("outputModelKmsKeyArn");

  }

  if(jsonValue.ValueExists("trainingMetrics"))
  {
    m_trainingMetrics = jsonValue.GetObject("trainingMetrics");

  }

  if(jsonValue.ValueExists("validationMetrics"))
  {
    Aws::Utils::Array<JsonView> validationMetricsJsonList = jsonValue.GetArray("validationMetrics");
    for(unsigned validationMetricsIndex = 0; validationMetricsIndex < validationMetricsJsonList.GetLength(); ++validationMetricsIndex)
    {
      m_validationMetrics.push_back(validationMetricsJsonList[validationMetricsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
