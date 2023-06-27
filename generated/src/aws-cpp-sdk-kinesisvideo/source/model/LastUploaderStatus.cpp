/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/LastUploaderStatus.h>
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

LastUploaderStatus::LastUploaderStatus() : 
    m_jobStatusDetailsHasBeenSet(false),
    m_lastCollectedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_uploaderStatus(UploaderStatus::NOT_SET),
    m_uploaderStatusHasBeenSet(false)
{
}

LastUploaderStatus::LastUploaderStatus(JsonView jsonValue) : 
    m_jobStatusDetailsHasBeenSet(false),
    m_lastCollectedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_uploaderStatus(UploaderStatus::NOT_SET),
    m_uploaderStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LastUploaderStatus& LastUploaderStatus::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("UploaderStatus"))
  {
    m_uploaderStatus = UploaderStatusMapper::GetUploaderStatusForName(jsonValue.GetString("UploaderStatus"));

    m_uploaderStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LastUploaderStatus::Jsonize() const
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

  if(m_uploaderStatusHasBeenSet)
  {
   payload.WithString("UploaderStatus", UploaderStatusMapper::GetNameForUploaderStatus(m_uploaderStatus));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
