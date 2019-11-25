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

#include <aws/appconfig/model/GetDeploymentStrategyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentStrategyResult::GetDeploymentStrategyResult() : 
    m_deploymentDurationInMinutes(0),
    m_growthType(GrowthType::NOT_SET),
    m_growthFactor(0.0),
    m_finalBakeTimeInMinutes(0),
    m_replicateTo(ReplicateTo::NOT_SET)
{
}

GetDeploymentStrategyResult::GetDeploymentStrategyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deploymentDurationInMinutes(0),
    m_growthType(GrowthType::NOT_SET),
    m_growthFactor(0.0),
    m_finalBakeTimeInMinutes(0),
    m_replicateTo(ReplicateTo::NOT_SET)
{
  *this = result;
}

GetDeploymentStrategyResult& GetDeploymentStrategyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DeploymentDurationInMinutes"))
  {
    m_deploymentDurationInMinutes = jsonValue.GetInteger("DeploymentDurationInMinutes");

  }

  if(jsonValue.ValueExists("GrowthType"))
  {
    m_growthType = GrowthTypeMapper::GetGrowthTypeForName(jsonValue.GetString("GrowthType"));

  }

  if(jsonValue.ValueExists("GrowthFactor"))
  {
    m_growthFactor = jsonValue.GetDouble("GrowthFactor");

  }

  if(jsonValue.ValueExists("FinalBakeTimeInMinutes"))
  {
    m_finalBakeTimeInMinutes = jsonValue.GetInteger("FinalBakeTimeInMinutes");

  }

  if(jsonValue.ValueExists("ReplicateTo"))
  {
    m_replicateTo = ReplicateToMapper::GetReplicateToForName(jsonValue.GetString("ReplicateTo"));

  }



  return *this;
}
