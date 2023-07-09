/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsEdgeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ListEdgeAgentConfigurationsEdgeConfig::ListEdgeAgentConfigurationsEdgeConfig() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_syncStatus(SyncStatus::NOT_SET),
    m_syncStatusHasBeenSet(false),
    m_failedStatusDetailsHasBeenSet(false),
    m_edgeConfigHasBeenSet(false)
{
}

ListEdgeAgentConfigurationsEdgeConfig::ListEdgeAgentConfigurationsEdgeConfig(JsonView jsonValue) : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_syncStatus(SyncStatus::NOT_SET),
    m_syncStatusHasBeenSet(false),
    m_failedStatusDetailsHasBeenSet(false),
    m_edgeConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ListEdgeAgentConfigurationsEdgeConfig& ListEdgeAgentConfigurationsEdgeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");

    m_streamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncStatus"))
  {
    m_syncStatus = SyncStatusMapper::GetSyncStatusForName(jsonValue.GetString("SyncStatus"));

    m_syncStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedStatusDetails"))
  {
    m_failedStatusDetails = jsonValue.GetString("FailedStatusDetails");

    m_failedStatusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeConfig"))
  {
    m_edgeConfig = jsonValue.GetObject("EdgeConfig");

    m_edgeConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ListEdgeAgentConfigurationsEdgeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_syncStatusHasBeenSet)
  {
   payload.WithString("SyncStatus", SyncStatusMapper::GetNameForSyncStatus(m_syncStatus));
  }

  if(m_failedStatusDetailsHasBeenSet)
  {
   payload.WithString("FailedStatusDetails", m_failedStatusDetails);

  }

  if(m_edgeConfigHasBeenSet)
  {
   payload.WithObject("EdgeConfig", m_edgeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
