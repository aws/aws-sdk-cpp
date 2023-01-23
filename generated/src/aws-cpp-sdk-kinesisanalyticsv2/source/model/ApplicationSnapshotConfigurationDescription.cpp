/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationSnapshotConfigurationDescription.h>
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

ApplicationSnapshotConfigurationDescription::ApplicationSnapshotConfigurationDescription() : 
    m_snapshotsEnabled(false),
    m_snapshotsEnabledHasBeenSet(false)
{
}

ApplicationSnapshotConfigurationDescription::ApplicationSnapshotConfigurationDescription(JsonView jsonValue) : 
    m_snapshotsEnabled(false),
    m_snapshotsEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSnapshotConfigurationDescription& ApplicationSnapshotConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotsEnabled"))
  {
    m_snapshotsEnabled = jsonValue.GetBool("SnapshotsEnabled");

    m_snapshotsEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSnapshotConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotsEnabledHasBeenSet)
  {
   payload.WithBool("SnapshotsEnabled", m_snapshotsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
