/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/HypervisorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

HypervisorDetails::HypervisorDetails() : 
    m_hostHasBeenSet(false),
    m_hypervisorArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastSuccessfulMetadataSyncTimeHasBeenSet(false),
    m_latestMetadataSyncStatus(SyncMetadataStatus::NOT_SET),
    m_latestMetadataSyncStatusHasBeenSet(false),
    m_latestMetadataSyncStatusMessageHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(HypervisorState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

HypervisorDetails::HypervisorDetails(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_hypervisorArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_lastSuccessfulMetadataSyncTimeHasBeenSet(false),
    m_latestMetadataSyncStatus(SyncMetadataStatus::NOT_SET),
    m_latestMetadataSyncStatusHasBeenSet(false),
    m_latestMetadataSyncStatusMessageHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(HypervisorState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

HypervisorDetails& HypervisorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HypervisorArn"))
  {
    m_hypervisorArn = jsonValue.GetString("HypervisorArn");

    m_hypervisorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulMetadataSyncTime"))
  {
    m_lastSuccessfulMetadataSyncTime = jsonValue.GetDouble("LastSuccessfulMetadataSyncTime");

    m_lastSuccessfulMetadataSyncTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestMetadataSyncStatus"))
  {
    m_latestMetadataSyncStatus = SyncMetadataStatusMapper::GetSyncMetadataStatusForName(jsonValue.GetString("LatestMetadataSyncStatus"));

    m_latestMetadataSyncStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestMetadataSyncStatusMessage"))
  {
    m_latestMetadataSyncStatusMessage = jsonValue.GetString("LatestMetadataSyncStatusMessage");

    m_latestMetadataSyncStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = HypervisorStateMapper::GetHypervisorStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue HypervisorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_hypervisorArnHasBeenSet)
  {
   payload.WithString("HypervisorArn", m_hypervisorArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_lastSuccessfulMetadataSyncTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulMetadataSyncTime", m_lastSuccessfulMetadataSyncTime.SecondsWithMSPrecision());
  }

  if(m_latestMetadataSyncStatusHasBeenSet)
  {
   payload.WithString("LatestMetadataSyncStatus", SyncMetadataStatusMapper::GetNameForSyncMetadataStatus(m_latestMetadataSyncStatus));
  }

  if(m_latestMetadataSyncStatusMessageHasBeenSet)
  {
   payload.WithString("LatestMetadataSyncStatusMessage", m_latestMetadataSyncStatusMessage);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", HypervisorStateMapper::GetNameForHypervisorState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
