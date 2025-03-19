/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationSystemRollbackConfigurationUpdate.h>
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

ApplicationSystemRollbackConfigurationUpdate::ApplicationSystemRollbackConfigurationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationSystemRollbackConfigurationUpdate& ApplicationSystemRollbackConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollbackEnabledUpdate"))
  {
    m_rollbackEnabledUpdate = jsonValue.GetBool("RollbackEnabledUpdate");
    m_rollbackEnabledUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSystemRollbackConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_rollbackEnabledUpdateHasBeenSet)
  {
   payload.WithBool("RollbackEnabledUpdate", m_rollbackEnabledUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
