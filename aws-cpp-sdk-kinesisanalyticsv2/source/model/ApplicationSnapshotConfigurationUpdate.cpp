/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
