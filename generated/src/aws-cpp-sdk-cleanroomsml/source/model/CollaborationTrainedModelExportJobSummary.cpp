/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CollaborationTrainedModelExportJobSummary.h>
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

CollaborationTrainedModelExportJobSummary::CollaborationTrainedModelExportJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CollaborationTrainedModelExportJobSummary& CollaborationTrainedModelExportJobSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");
    m_outputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainedModelExportJobStatusMapper::GetTrainedModelExportJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusDetails"))
  {
    m_statusDetails = jsonValue.GetObject("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelArn"))
  {
    m_trainedModelArn = jsonValue.GetString("trainedModelArn");
    m_trainedModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelVersionIdentifier"))
  {
    m_trainedModelVersionIdentifier = jsonValue.GetString("trainedModelVersionIdentifier");
    m_trainedModelVersionIdentifierHasBeenSet = true;
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
  return *this;
}

JsonValue CollaborationTrainedModelExportJobSummary::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TrainedModelExportJobStatusMapper::GetNameForTrainedModelExportJobStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithObject("statusDetails", m_statusDetails.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("trainedModelArn", m_trainedModelArn);

  }

  if(m_trainedModelVersionIdentifierHasBeenSet)
  {
   payload.WithString("trainedModelVersionIdentifier", m_trainedModelVersionIdentifier);

  }

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
