/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetTrainedModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTrainedModelResult::GetTrainedModelResult() : 
    m_status(TrainedModelStatus::NOT_SET),
    m_metricsStatus(MetricsStatus::NOT_SET),
    m_logsStatus(LogsStatus::NOT_SET)
{
}

GetTrainedModelResult::GetTrainedModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTrainedModelResult()
{
  *this = result;
}

GetTrainedModelResult& GetTrainedModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");

  }

  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");

  }

  if(jsonValue.ValueExists("trainedModelArn"))
  {
    m_trainedModelArn = jsonValue.GetString("trainedModelArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainedModelStatusMapper::GetTrainedModelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");

  }

  if(jsonValue.ValueExists("configuredModelAlgorithmAssociationArn"))
  {
    m_configuredModelAlgorithmAssociationArn = jsonValue.GetString("configuredModelAlgorithmAssociationArn");

  }

  if(jsonValue.ValueExists("resourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("resourceConfig");

  }

  if(jsonValue.ValueExists("stoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("stoppingCondition");

  }

  if(jsonValue.ValueExists("metricsStatus"))
  {
    m_metricsStatus = MetricsStatusMapper::GetMetricsStatusForName(jsonValue.GetString("metricsStatus"));

  }

  if(jsonValue.ValueExists("metricsStatusDetails"))
  {
    m_metricsStatusDetails = jsonValue.GetString("metricsStatusDetails");

  }

  if(jsonValue.ValueExists("logsStatus"))
  {
    m_logsStatus = LogsStatusMapper::GetLogsStatusForName(jsonValue.GetString("logsStatus"));

  }

  if(jsonValue.ValueExists("logsStatusDetails"))
  {
    m_logsStatusDetails = jsonValue.GetString("logsStatusDetails");

  }

  if(jsonValue.ValueExists("trainingContainerImageDigest"))
  {
    m_trainingContainerImageDigest = jsonValue.GetString("trainingContainerImageDigest");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }

  if(jsonValue.ValueExists("hyperparameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperparametersJsonMap = jsonValue.GetObject("hyperparameters").GetAllObjects();
    for(auto& hyperparametersItem : hyperparametersJsonMap)
    {
      m_hyperparameters[hyperparametersItem.first] = hyperparametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("dataChannels"))
  {
    Aws::Utils::Array<JsonView> dataChannelsJsonList = jsonValue.GetArray("dataChannels");
    for(unsigned dataChannelsIndex = 0; dataChannelsIndex < dataChannelsJsonList.GetLength(); ++dataChannelsIndex)
    {
      m_dataChannels.push_back(dataChannelsJsonList[dataChannelsIndex].AsObject());
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
