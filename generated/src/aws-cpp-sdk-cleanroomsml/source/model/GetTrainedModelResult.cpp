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

GetTrainedModelResult::GetTrainedModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTrainedModelResult& GetTrainedModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");
    m_membershipIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");
    m_collaborationIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelArn"))
  {
    m_trainedModelArn = jsonValue.GetString("trainedModelArn");
    m_trainedModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionIdentifier"))
  {
    m_versionIdentifier = jsonValue.GetString("versionIdentifier");
    m_versionIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incrementalTrainingDataChannels"))
  {
    Aws::Utils::Array<JsonView> incrementalTrainingDataChannelsJsonList = jsonValue.GetArray("incrementalTrainingDataChannels");
    for(unsigned incrementalTrainingDataChannelsIndex = 0; incrementalTrainingDataChannelsIndex < incrementalTrainingDataChannelsJsonList.GetLength(); ++incrementalTrainingDataChannelsIndex)
    {
      m_incrementalTrainingDataChannels.push_back(incrementalTrainingDataChannelsJsonList[incrementalTrainingDataChannelsIndex].AsObject());
    }
    m_incrementalTrainingDataChannelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainedModelStatusMapper::GetTrainedModelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociationArn"))
  {
    m_configuredModelAlgorithmAssociationArn = jsonValue.GetString("configuredModelAlgorithmAssociationArn");
    m_configuredModelAlgorithmAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("resourceConfig");
    m_resourceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingInputMode"))
  {
    m_trainingInputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("trainingInputMode"));
    m_trainingInputModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("stoppingCondition");
    m_stoppingConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricsStatus"))
  {
    m_metricsStatus = MetricsStatusMapper::GetMetricsStatusForName(jsonValue.GetString("metricsStatus"));
    m_metricsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricsStatusDetails"))
  {
    m_metricsStatusDetails = jsonValue.GetString("metricsStatusDetails");
    m_metricsStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logsStatus"))
  {
    m_logsStatus = LogsStatusMapper::GetLogsStatusForName(jsonValue.GetString("logsStatus"));
    m_logsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logsStatusDetails"))
  {
    m_logsStatusDetails = jsonValue.GetString("logsStatusDetails");
    m_logsStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingContainerImageDigest"))
  {
    m_trainingContainerImageDigest = jsonValue.GetString("trainingContainerImageDigest");
    m_trainingContainerImageDigestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hyperparameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperparametersJsonMap = jsonValue.GetObject("hyperparameters").GetAllObjects();
    for(auto& hyperparametersItem : hyperparametersJsonMap)
    {
      m_hyperparameters[hyperparametersItem.first] = hyperparametersItem.second.AsString();
    }
    m_hyperparametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataChannels"))
  {
    Aws::Utils::Array<JsonView> dataChannelsJsonList = jsonValue.GetArray("dataChannels");
    for(unsigned dataChannelsIndex = 0; dataChannelsIndex < dataChannelsJsonList.GetLength(); ++dataChannelsIndex)
    {
      m_dataChannels.push_back(dataChannelsJsonList[dataChannelsIndex].AsObject());
    }
    m_dataChannelsHasBeenSet = true;
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
