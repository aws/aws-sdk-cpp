/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationSystemRollbackConfiguration.h>
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

ApplicationSystemRollbackConfiguration::ApplicationSystemRollbackConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationSystemRollbackConfiguration& ApplicationSystemRollbackConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollbackEnabled"))
  {
    m_rollbackEnabled = jsonValue.GetBool("RollbackEnabled");
    m_rollbackEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSystemRollbackConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rollbackEnabledHasBeenSet)
  {
   payload.WithBool("RollbackEnabled", m_rollbackEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
