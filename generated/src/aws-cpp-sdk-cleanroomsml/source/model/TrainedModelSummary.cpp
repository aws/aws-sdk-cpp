/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

TrainedModelSummary::TrainedModelSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainedModelSummary& TrainedModelSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainedModelStatusMapper::GetTrainedModelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociationArn"))
  {
    m_configuredModelAlgorithmAssociationArn = jsonValue.GetString("configuredModelAlgorithmAssociationArn");
    m_configuredModelAlgorithmAssociationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainedModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("trainedModelArn", m_trainedModelArn);

  }

  if(m_versionIdentifierHasBeenSet)
  {
   payload.WithString("versionIdentifier", m_versionIdentifier);

  }

  if(m_incrementalTrainingDataChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incrementalTrainingDataChannelsJsonList(m_incrementalTrainingDataChannels.size());
   for(unsigned incrementalTrainingDataChannelsIndex = 0; incrementalTrainingDataChannelsIndex < incrementalTrainingDataChannelsJsonList.GetLength(); ++incrementalTrainingDataChannelsIndex)
   {
     incrementalTrainingDataChannelsJsonList[incrementalTrainingDataChannelsIndex].AsObject(m_incrementalTrainingDataChannels[incrementalTrainingDataChannelsIndex].Jsonize());
   }
   payload.WithArray("incrementalTrainingDataChannels", std::move(incrementalTrainingDataChannelsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TrainedModelStatusMapper::GetNameForTrainedModelStatus(m_status));
  }

  if(m_configuredModelAlgorithmAssociationArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmAssociationArn", m_configuredModelAlgorithmAssociationArn);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
