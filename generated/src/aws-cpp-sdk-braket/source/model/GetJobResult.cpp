/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetJobResult::GetJobResult() : 
    m_billableDuration(0),
    m_status(JobPrimaryStatus::NOT_SET)
{
}

GetJobResult::GetJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_billableDuration(0),
    m_status(JobPrimaryStatus::NOT_SET)
{
  *this = result;
}

GetJobResult& GetJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("algorithmSpecification"))
  {
    m_algorithmSpecification = jsonValue.GetObject("algorithmSpecification");

  }

  if(jsonValue.ValueExists("billableDuration"))
  {
    m_billableDuration = jsonValue.GetInteger("billableDuration");

  }

  if(jsonValue.ValueExists("checkpointConfig"))
  {
    m_checkpointConfig = jsonValue.GetObject("checkpointConfig");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("deviceConfig"))
  {
    m_deviceConfig = jsonValue.GetObject("deviceConfig");

  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

  }

  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("hyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("hyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("inputDataConfig"))
  {
    Aws::Utils::Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("inputDataConfig");
    for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
    {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("instanceConfig"))
  {
    m_instanceConfig = jsonValue.GetObject("instanceConfig");

  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobPrimaryStatusMapper::GetJobPrimaryStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("stoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("stoppingCondition");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
