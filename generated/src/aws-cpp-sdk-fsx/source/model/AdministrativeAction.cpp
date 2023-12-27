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

AdministrativeAction::AdministrativeAction() : 
    m_administrativeActionType(AdministrativeActionType::NOT_SET),
    m_administrativeActionTypeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetFileSystemValuesHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_targetVolumeValuesHasBeenSet(false),
    m_targetSnapshotValuesHasBeenSet(false),
    m_totalTransferBytes(0),
    m_totalTransferBytesHasBeenSet(false),
    m_remainingTransferBytes(0),
    m_remainingTransferBytesHasBeenSet(false)
{
}

AdministrativeAction::AdministrativeAction(JsonView jsonValue) : 
    m_administrativeActionType(AdministrativeActionType::NOT_SET),
    m_administrativeActionTypeHasBeenSet(false),
    m_progressPercent(0),
    m_progressPercentHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetFileSystemValuesHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_targetVolumeValuesHasBeenSet(false),
    m_targetSnapshotValuesHasBeenSet(false),
    m_totalTransferBytes(0),
    m_totalTransferBytesHasBeenSet(false),
    m_remainingTransferBytes(0),
    m_remainingTransferBytesHasBeenSet(false)
{
  *this = jsonValue;
}

const FileSystem& AdministrativeAction::GetTargetFileSystemValues() const{ return *m_targetFileSystemValues; }
bool AdministrativeAction::TargetFileSystemValuesHasBeenSet() const { return m_targetFileSystemValuesHasBeenSet; }
void AdministrativeAction::SetTargetFileSystemValues(const FileSystem& value) { m_targetFileSystemValuesHasBeenSet = true; m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", value); }
void AdministrativeAction::SetTargetFileSystemValues(FileSystem&& value) { m_targetFileSystemValuesHasBeenSet = true; m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", std::move(value)); }
AdministrativeAction& AdministrativeAction::WithTargetFileSystemValues(const FileSystem& value) { SetTargetFileSystemValues(value); return *this;}
AdministrativeAction& AdministrativeAction::WithTargetFileSystemValues(FileSystem&& value) { SetTargetFileSystemValues(std::move(value)); return *this;}

const Volume& AdministrativeAction::GetTargetVolumeValues() const{ return *m_targetVolumeValues; }
bool AdministrativeAction::TargetVolumeValuesHasBeenSet() const { return m_targetVolumeValuesHasBeenSet; }
void AdministrativeAction::SetTargetVolumeValues(const Volume& value) { m_targetVolumeValuesHasBeenSet = true; m_targetVolumeValues = Aws::MakeShared<Volume>("AdministrativeAction", value); }
void AdministrativeAction::SetTargetVolumeValues(Volume&& value) { m_targetVolumeValuesHasBeenSet = true; m_targetVolumeValues = Aws::MakeShared<Volume>("AdministrativeAction", std::move(value)); }
AdministrativeAction& AdministrativeAction::WithTargetVolumeValues(const Volume& value) { SetTargetVolumeValues(value); return *this;}
AdministrativeAction& AdministrativeAction::WithTargetVolumeValues(Volume&& value) { SetTargetVolumeValues(std::move(value)); return *this;}

const Snapshot& AdministrativeAction::GetTargetSnapshotValues() const{ return *m_targetSnapshotValues; }
bool AdministrativeAction::TargetSnapshotValuesHasBeenSet() const { return m_targetSnapshotValuesHasBeenSet; }
void AdministrativeAction::SetTargetSnapshotValues(const Snapshot& value) { m_targetSnapshotValuesHasBeenSet = true; m_targetSnapshotValues = Aws::MakeShared<Snapshot>("AdministrativeAction", value); }
void AdministrativeAction::SetTargetSnapshotValues(Snapshot&& value) { m_targetSnapshotValuesHasBeenSet = true; m_targetSnapshotValues = Aws::MakeShared<Snapshot>("AdministrativeAction", std::move(value)); }
AdministrativeAction& AdministrativeAction::WithTargetSnapshotValues(const Snapshot& value) { SetTargetSnapshotValues(value); return *this;}
AdministrativeAction& AdministrativeAction::WithTargetSnapshotValues(Snapshot&& value) { SetTargetSnapshotValues(std::move(value)); return *this;}

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

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
