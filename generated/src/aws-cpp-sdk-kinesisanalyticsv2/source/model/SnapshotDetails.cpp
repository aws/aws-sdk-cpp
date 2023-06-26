/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

SnapshotDetails::SnapshotDetails() : 
    m_snapshotNameHasBeenSet(false),
    m_snapshotStatus(SnapshotStatus::NOT_SET),
    m_snapshotStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_snapshotCreationTimestampHasBeenSet(false)
{
}

SnapshotDetails::SnapshotDetails(JsonView jsonValue) : 
    m_snapshotNameHasBeenSet(false),
    m_snapshotStatus(SnapshotStatus::NOT_SET),
    m_snapshotStatusHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false),
    m_snapshotCreationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotDetails& SnapshotDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotName"))
  {
    m_snapshotName = jsonValue.GetString("SnapshotName");

    m_snapshotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotStatus"))
  {
    m_snapshotStatus = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("SnapshotStatus"));

    m_snapshotStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

    m_applicationVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCreationTimestamp"))
  {
    m_snapshotCreationTimestamp = jsonValue.GetDouble("SnapshotCreationTimestamp");

    m_snapshotCreationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotDetails::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  if(m_snapshotStatusHasBeenSet)
  {
   payload.WithString("SnapshotStatus", SnapshotStatusMapper::GetNameForSnapshotStatus(m_snapshotStatus));
  }

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  if(m_snapshotCreationTimestampHasBeenSet)
  {
   payload.WithDouble("SnapshotCreationTimestamp", m_snapshotCreationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
