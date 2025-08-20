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

SnapshotDetails::SnapshotDetails(JsonView jsonValue)
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
  if(jsonValue.ValueExists("RuntimeEnvironment"))
  {
    m_runtimeEnvironment = RuntimeEnvironmentMapper::GetRuntimeEnvironmentForName(jsonValue.GetString("RuntimeEnvironment"));
    m_runtimeEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationEncryptionConfigurationDescription"))
  {
    m_applicationEncryptionConfigurationDescription = jsonValue.GetObject("ApplicationEncryptionConfigurationDescription");
    m_applicationEncryptionConfigurationDescriptionHasBeenSet = true;
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

  if(m_runtimeEnvironmentHasBeenSet)
  {
   payload.WithString("RuntimeEnvironment", RuntimeEnvironmentMapper::GetNameForRuntimeEnvironment(m_runtimeEnvironment));
  }

  if(m_applicationEncryptionConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationEncryptionConfigurationDescription", m_applicationEncryptionConfigurationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
