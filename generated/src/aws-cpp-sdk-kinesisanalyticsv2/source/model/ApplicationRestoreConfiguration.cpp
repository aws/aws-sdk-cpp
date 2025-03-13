/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
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

ApplicationRestoreConfiguration::ApplicationRestoreConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationRestoreConfiguration& ApplicationRestoreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationRestoreType"))
  {
    m_applicationRestoreType = ApplicationRestoreTypeMapper::GetApplicationRestoreTypeForName(jsonValue.GetString("ApplicationRestoreType"));
    m_applicationRestoreTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnapshotName"))
  {
    m_snapshotName = jsonValue.GetString("SnapshotName");
    m_snapshotNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationRestoreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_applicationRestoreTypeHasBeenSet)
  {
   payload.WithString("ApplicationRestoreType", ApplicationRestoreTypeMapper::GetNameForApplicationRestoreType(m_applicationRestoreType));
  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
