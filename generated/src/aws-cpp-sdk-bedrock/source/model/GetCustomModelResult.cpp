﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetCustomModelResult.h>
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

GetCustomModelResult::GetCustomModelResult()
{
}

GetCustomModelResult::GetCustomModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCustomModelResult& GetCustomModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("baseModelArn"))
  {
    m_baseModelArn = jsonValue.GetString("baseModelArn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("hyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("hyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

  }

  if(jsonValue.ValueExists("modelKmsKeyArn"))
  {
    m_modelKmsKeyArn = jsonValue.GetString("modelKmsKeyArn");

  }

  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");

  }

  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");

  }

  if(jsonValue.ValueExists("trainingDataConfig"))
  {
    m_trainingDataConfig = jsonValue.GetObject("trainingDataConfig");

  }

  if(jsonValue.ValueExists("trainingMetrics"))
  {
    m_trainingMetrics = jsonValue.GetObject("trainingMetrics");

  }

  if(jsonValue.ValueExists("validationDataConfig"))
  {
    m_validationDataConfig = jsonValue.GetObject("validationDataConfig");

  }

  if(jsonValue.ValueExists("validationMetrics"))
  {
    Aws::Utils::Array<JsonView> validationMetricsJsonList = jsonValue.GetArray("validationMetrics");
    for(unsigned validationMetricsIndex = 0; validationMetricsIndex < validationMetricsJsonList.GetLength(); ++validationMetricsIndex)
    {
      m_validationMetrics.push_back(validationMetricsJsonList[validationMetricsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
