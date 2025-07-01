/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CollaborationTrainedModelInferenceJobSummary.h>
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

CollaborationTrainedModelInferenceJobSummary::CollaborationTrainedModelInferenceJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CollaborationTrainedModelInferenceJobSummary& CollaborationTrainedModelInferenceJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trainedModelInferenceJobArn"))
  {
    m_trainedModelInferenceJobArn = jsonValue.GetString("trainedModelInferenceJobArn");
    m_trainedModelInferenceJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociationArn"))
  {
    m_configuredModelAlgorithmAssociationArn = jsonValue.GetString("configuredModelAlgorithmAssociationArn");
    m_configuredModelAlgorithmAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");
    m_membershipIdentifierHasBeenSet = true;
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
  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");
    m_collaborationIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TrainedModelInferenceJobStatusMapper::GetTrainedModelInferenceJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");
    m_outputConfigurationHasBeenSet = true;
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
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CollaborationTrainedModelInferenceJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trainedModelInferenceJobArnHasBeenSet)
  {
   payload.WithString("trainedModelInferenceJobArn", m_trainedModelInferenceJobArn);

  }

  if(m_configuredModelAlgorithmAssociationArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmAssociationArn", m_configuredModelAlgorithmAssociationArn);

  }

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("trainedModelArn", m_trainedModelArn);

  }

  if(m_trainedModelVersionIdentifierHasBeenSet)
  {
   payload.WithString("trainedModelVersionIdentifier", m_trainedModelVersionIdentifier);

  }

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TrainedModelInferenceJobStatusMapper::GetNameForTrainedModelInferenceJobStatus(m_status));
  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_metricsStatusHasBeenSet)
  {
   payload.WithString("metricsStatus", MetricsStatusMapper::GetNameForMetricsStatus(m_metricsStatus));
  }

  if(m_metricsStatusDetailsHasBeenSet)
  {
   payload.WithString("metricsStatusDetails", m_metricsStatusDetails);

  }

  if(m_logsStatusHasBeenSet)
  {
   payload.WithString("logsStatus", LogsStatusMapper::GetNameForLogsStatus(m_logsStatus));
  }

  if(m_logsStatusDetailsHasBeenSet)
  {
   payload.WithString("logsStatusDetails", m_logsStatusDetails);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
