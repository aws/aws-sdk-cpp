/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Options.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

Options::Options() : 
    m_verifyMode(VerifyMode::NOT_SET),
    m_verifyModeHasBeenSet(false),
    m_overwriteMode(OverwriteMode::NOT_SET),
    m_overwriteModeHasBeenSet(false),
    m_atime(Atime::NOT_SET),
    m_atimeHasBeenSet(false),
    m_mtime(Mtime::NOT_SET),
    m_mtimeHasBeenSet(false),
    m_uid(Uid::NOT_SET),
    m_uidHasBeenSet(false),
    m_gid(Gid::NOT_SET),
    m_gidHasBeenSet(false),
    m_preserveDeletedFiles(PreserveDeletedFiles::NOT_SET),
    m_preserveDeletedFilesHasBeenSet(false),
    m_preserveDevices(PreserveDevices::NOT_SET),
    m_preserveDevicesHasBeenSet(false),
    m_posixPermissions(PosixPermissions::NOT_SET),
    m_posixPermissionsHasBeenSet(false),
    m_bytesPerSecond(0),
    m_bytesPerSecondHasBeenSet(false),
    m_taskQueueing(TaskQueueing::NOT_SET),
    m_taskQueueingHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_transferMode(TransferMode::NOT_SET),
    m_transferModeHasBeenSet(false)
{
}

Options::Options(JsonView jsonValue) : 
    m_verifyMode(VerifyMode::NOT_SET),
    m_verifyModeHasBeenSet(false),
    m_overwriteMode(OverwriteMode::NOT_SET),
    m_overwriteModeHasBeenSet(false),
    m_atime(Atime::NOT_SET),
    m_atimeHasBeenSet(false),
    m_mtime(Mtime::NOT_SET),
    m_mtimeHasBeenSet(false),
    m_uid(Uid::NOT_SET),
    m_uidHasBeenSet(false),
    m_gid(Gid::NOT_SET),
    m_gidHasBeenSet(false),
    m_preserveDeletedFiles(PreserveDeletedFiles::NOT_SET),
    m_preserveDeletedFilesHasBeenSet(false),
    m_preserveDevices(PreserveDevices::NOT_SET),
    m_preserveDevicesHasBeenSet(false),
    m_posixPermissions(PosixPermissions::NOT_SET),
    m_posixPermissionsHasBeenSet(false),
    m_bytesPerSecond(0),
    m_bytesPerSecondHasBeenSet(false),
    m_taskQueueing(TaskQueueing::NOT_SET),
    m_taskQueueingHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_transferMode(TransferMode::NOT_SET),
    m_transferModeHasBeenSet(false)
{
  *this = jsonValue;
}

Options& Options::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VerifyMode"))
  {
    m_verifyMode = VerifyModeMapper::GetVerifyModeForName(jsonValue.GetString("VerifyMode"));

    m_verifyModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverwriteMode"))
  {
    m_overwriteMode = OverwriteModeMapper::GetOverwriteModeForName(jsonValue.GetString("OverwriteMode"));

    m_overwriteModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Atime"))
  {
    m_atime = AtimeMapper::GetAtimeForName(jsonValue.GetString("Atime"));

    m_atimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mtime"))
  {
    m_mtime = MtimeMapper::GetMtimeForName(jsonValue.GetString("Mtime"));

    m_mtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = UidMapper::GetUidForName(jsonValue.GetString("Uid"));

    m_uidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = GidMapper::GetGidForName(jsonValue.GetString("Gid"));

    m_gidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreserveDeletedFiles"))
  {
    m_preserveDeletedFiles = PreserveDeletedFilesMapper::GetPreserveDeletedFilesForName(jsonValue.GetString("PreserveDeletedFiles"));

    m_preserveDeletedFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreserveDevices"))
  {
    m_preserveDevices = PreserveDevicesMapper::GetPreserveDevicesForName(jsonValue.GetString("PreserveDevices"));

    m_preserveDevicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PosixPermissions"))
  {
    m_posixPermissions = PosixPermissionsMapper::GetPosixPermissionsForName(jsonValue.GetString("PosixPermissions"));

    m_posixPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesPerSecond"))
  {
    m_bytesPerSecond = jsonValue.GetInt64("BytesPerSecond");

    m_bytesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskQueueing"))
  {
    m_taskQueueing = TaskQueueingMapper::GetTaskQueueingForName(jsonValue.GetString("TaskQueueing"));

    m_taskQueueingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferMode"))
  {
    m_transferMode = TransferModeMapper::GetTransferModeForName(jsonValue.GetString("TransferMode"));

    m_transferModeHasBeenSet = true;
  }

  return *this;
}

JsonValue Options::Jsonize() const
{
  JsonValue payload;

  if(m_verifyModeHasBeenSet)
  {
   payload.WithString("VerifyMode", VerifyModeMapper::GetNameForVerifyMode(m_verifyMode));
  }

  if(m_overwriteModeHasBeenSet)
  {
   payload.WithString("OverwriteMode", OverwriteModeMapper::GetNameForOverwriteMode(m_overwriteMode));
  }

  if(m_atimeHasBeenSet)
  {
   payload.WithString("Atime", AtimeMapper::GetNameForAtime(m_atime));
  }

  if(m_mtimeHasBeenSet)
  {
   payload.WithString("Mtime", MtimeMapper::GetNameForMtime(m_mtime));
  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("Uid", UidMapper::GetNameForUid(m_uid));
  }

  if(m_gidHasBeenSet)
  {
   payload.WithString("Gid", GidMapper::GetNameForGid(m_gid));
  }

  if(m_preserveDeletedFilesHasBeenSet)
  {
   payload.WithString("PreserveDeletedFiles", PreserveDeletedFilesMapper::GetNameForPreserveDeletedFiles(m_preserveDeletedFiles));
  }

  if(m_preserveDevicesHasBeenSet)
  {
   payload.WithString("PreserveDevices", PreserveDevicesMapper::GetNameForPreserveDevices(m_preserveDevices));
  }

  if(m_posixPermissionsHasBeenSet)
  {
   payload.WithString("PosixPermissions", PosixPermissionsMapper::GetNameForPosixPermissions(m_posixPermissions));
  }

  if(m_bytesPerSecondHasBeenSet)
  {
   payload.WithInt64("BytesPerSecond", m_bytesPerSecond);

  }

  if(m_taskQueueingHasBeenSet)
  {
   payload.WithString("TaskQueueing", TaskQueueingMapper::GetNameForTaskQueueing(m_taskQueueing));
  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_transferModeHasBeenSet)
  {
   payload.WithString("TransferMode", TransferModeMapper::GetNameForTransferMode(m_transferMode));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
