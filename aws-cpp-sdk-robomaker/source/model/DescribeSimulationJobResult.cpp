/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/robomaker/model/DescribeSimulationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSimulationJobResult::DescribeSimulationJobResult() : 
    m_status(SimulationJobStatus::NOT_SET),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_maxJobDurationInSeconds(0),
    m_simulationTimeMillis(0)
{
}

DescribeSimulationJobResult::DescribeSimulationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SimulationJobStatus::NOT_SET),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_maxJobDurationInSeconds(0),
    m_simulationTimeMillis(0)
{
  *this = result;
}

DescribeSimulationJobResult& DescribeSimulationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobStatusMapper::GetSimulationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastStartedAt"))
  {
    m_lastStartedAt = jsonValue.GetDouble("lastStartedAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("failureBehavior"))
  {
    m_failureBehavior = FailureBehaviorMapper::GetFailureBehaviorForName(jsonValue.GetString("failureBehavior"));

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobErrorCodeMapper::GetSimulationJobErrorCodeForName(jsonValue.GetString("failureCode"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");

  }

  if(jsonValue.ValueExists("maxJobDurationInSeconds"))
  {
    m_maxJobDurationInSeconds = jsonValue.GetInt64("maxJobDurationInSeconds");

  }

  if(jsonValue.ValueExists("simulationTimeMillis"))
  {
    m_simulationTimeMillis = jsonValue.GetInt64("simulationTimeMillis");

  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");

  }

  if(jsonValue.ValueExists("robotApplications"))
  {
    Array<JsonView> robotApplicationsJsonList = jsonValue.GetArray("robotApplications");
    for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
    {
      m_robotApplications.push_back(robotApplicationsJsonList[robotApplicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("simulationApplications"))
  {
    Array<JsonView> simulationApplicationsJsonList = jsonValue.GetArray("simulationApplications");
    for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
    {
      m_simulationApplications.push_back(simulationApplicationsJsonList[simulationApplicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

  }



  return *this;
}
