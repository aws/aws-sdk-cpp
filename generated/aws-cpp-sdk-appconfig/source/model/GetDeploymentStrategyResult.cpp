/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
