/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UpdateDataRetentionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataRetentionRequest::UpdateDataRetentionRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_operation(UpdateDataRetentionOperation::NOT_SET),
    m_operationHasBeenSet(false),
    m_dataRetentionChangeInHours(0),
    m_dataRetentionChangeInHoursHasBeenSet(false)
{
}

Aws::String UpdateDataRetentionRequest::SerializePayload() const
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

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", UpdateDataRetentionOperationMapper::GetNameForUpdateDataRetentionOperation(m_operation));
  }

  if(m_dataRetentionChangeInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionChangeInHours", m_dataRetentionChangeInHours);

  }

  return payload.View().WriteReadable();
}




