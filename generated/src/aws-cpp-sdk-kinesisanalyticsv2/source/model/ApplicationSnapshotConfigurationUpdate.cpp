/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationUpdate.h>
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

ApplicationSnapshotConfigurationUpdate::ApplicationSnapshotConfigurationUpdate() : 
    m_snapshotsEnabledUpdate(false),
    m_snapshotsEnabledUpdateHasBeenSet(false)
{
}

ApplicationSnapshotConfigurationUpdate::ApplicationSnapshotConfigurationUpdate(JsonView jsonValue) : 
    m_snapshotsEnabledUpdate(false),
    m_snapshotsEnabledUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSnapshotConfigurationUpdate& ApplicationSnapshotConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotsEnabledUpdate"))
  {
    m_snapshotsEnabledUpdate = jsonValue.GetBool("SnapshotsEnabledUpdate");

    m_snapshotsEnabledUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSnapshotConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotsEnabledUpdateHasBeenSet)
  {
   payload.WithBool("SnapshotsEnabledUpdate", m_snapshotsEnabledUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
