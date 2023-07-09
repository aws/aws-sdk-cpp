/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/LastRecorderStatus.h>
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

LastRecorderStatus::LastRecorderStatus() : 
    m_jobStatusDetailsHasBeenSet(false),
    m_lastCollectedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_recorderStatus(RecorderStatus::NOT_SET),
    m_recorderStatusHasBeenSet(false)
{
}

LastRecorderStatus::LastRecorderStatus(JsonView jsonValue) : 
    m_jobStatusDetailsHasBeenSet(false),
    m_lastCollectedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_recorderStatus(RecorderStatus::NOT_SET),
    m_recorderStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LastRecorderStatus& LastRecorderStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobStatusDetails"))
  {
    m_jobStatusDetails = jsonValue.GetString("JobStatusDetails");

    m_jobStatusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastCollectedTime"))
  {
    m_lastCollectedTime = jsonValue.GetDouble("LastCollectedTime");

    m_lastCollectedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecorderStatus"))
  {
    m_recorderStatus = RecorderStatusMapper::GetRecorderStatusForName(jsonValue.GetString("RecorderStatus"));

    m_recorderStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LastRecorderStatus::Jsonize() const
{
  JsonValue payload;

  if(m_jobStatusDetailsHasBeenSet)
  {
   payload.WithString("JobStatusDetails", m_jobStatusDetails);

  }

  if(m_lastCollectedTimeHasBeenSet)
  {
   payload.WithDouble("LastCollectedTime", m_lastCollectedTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_recorderStatusHasBeenSet)
  {
   payload.WithString("RecorderStatus", RecorderStatusMapper::GetNameForRecorderStatus(m_recorderStatus));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
