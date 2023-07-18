﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/StartInferenceSchedulerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartInferenceSchedulerResult::StartInferenceSchedulerResult() : 
    m_status(InferenceSchedulerStatus::NOT_SET)
{
}

StartInferenceSchedulerResult::StartInferenceSchedulerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(InferenceSchedulerStatus::NOT_SET)
{
  *this = result;
}

StartInferenceSchedulerResult& StartInferenceSchedulerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("InferenceSchedulerName"))
  {
    m_inferenceSchedulerName = jsonValue.GetString("InferenceSchedulerName");

  }

  if(jsonValue.ValueExists("InferenceSchedulerArn"))
  {
    m_inferenceSchedulerArn = jsonValue.GetString("InferenceSchedulerArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceSchedulerStatusMapper::GetInferenceSchedulerStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
