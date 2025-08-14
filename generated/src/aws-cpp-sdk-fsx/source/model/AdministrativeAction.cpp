/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AdministrativeAction.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/FileSystem.h>
#include <aws/fsx/model/Volume.h>
#include <aws/fsx/model/Snapshot.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AdministrativeAction::AdministrativeAction(JsonView jsonValue)
{
  *this = jsonValue;
}

AdministrativeAction& AdministrativeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdministrativeActionType"))
  {
    m_administrativeActionType = AdministrativeActionTypeMapper::GetAdministrativeActionTypeForName(jsonValue.GetString("AdministrativeActionType"));
    m_administrativeActionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProgressPercent"))
  {
    m_progressPercent = jsonValue.GetInteger("ProgressPercent");
    m_progressPercentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestTime"))
  {
    m_requestTime = jsonValue.GetDouble("RequestTime");
    m_requestTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetFileSystemValues"))
  {
    m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", jsonValue.GetObject("TargetFileSystemValues"));
    m_targetFileSystemValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");
    m_failureDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetVolumeValues"))
  {
    m_targetVolumeValues = Aws::MakeShared<Volume>("AdministrativeAction", jsonValue.GetObject("TargetVolumeValues"));
    m_targetVolumeValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetSnapshotValues"))
  {
    m_targetSnapshotValues = Aws::MakeShared<Snapshot>("AdministrativeAction", jsonValue.GetObject("TargetSnapshotValues"));
    m_targetSnapshotValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalTransferBytes"))
  {
    m_totalTransferBytes = jsonValue.GetInt64("TotalTransferBytes");
    m_totalTransferBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RemainingTransferBytes"))
  {
    m_remainingTransferBytes = jsonValue.GetInt64("RemainingTransferBytes");
    m_remainingTransferBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue AdministrativeAction::Jsonize() const
{
  JsonValue payload;

  if(m_administrativeActionTypeHasBeenSet)
  {
   payload.WithString("AdministrativeActionType", AdministrativeActionTypeMapper::GetNameForAdministrativeActionType(m_administrativeActionType));
  }

  if(m_progressPercentHasBeenSet)
  {
   payload.WithInteger("ProgressPercent", m_progressPercent);

  }

  if(m_requestTimeHasBeenSet)
  {
   payload.WithDouble("RequestTime", m_requestTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_targetFileSystemValuesHasBeenSet)
  {
   payload.WithObject("TargetFileSystemValues", m_targetFileSystemValues->Jsonize());

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_targetVolumeValuesHasBeenSet)
  {
   payload.WithObject("TargetVolumeValues", m_targetVolumeValues->Jsonize());

  }

  if(m_targetSnapshotValuesHasBeenSet)
  {
   payload.WithObject("TargetSnapshotValues", m_targetSnapshotValues->Jsonize());

  }

  if(m_totalTransferBytesHasBeenSet)
  {
   payload.WithInt64("TotalTransferBytes", m_totalTransferBytes);

  }

  if(m_remainingTransferBytesHasBeenSet)
  {
   payload.WithInt64("RemainingTransferBytes", m_remainingTransferBytes);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
