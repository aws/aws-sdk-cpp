/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
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

FlinkRunConfiguration::FlinkRunConfiguration() : 
    m_allowNonRestoredState(false),
    m_allowNonRestoredStateHasBeenSet(false)
{
}

FlinkRunConfiguration::FlinkRunConfiguration(JsonView jsonValue) : 
    m_allowNonRestoredState(false),
    m_allowNonRestoredStateHasBeenSet(false)
{
  *this = jsonValue;
}

FlinkRunConfiguration& FlinkRunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowNonRestoredState"))
  {
    m_allowNonRestoredState = jsonValue.GetBool("AllowNonRestoredState");

    m_allowNonRestoredStateHasBeenSet = true;
  }

  return *this;
}

JsonValue FlinkRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowNonRestoredStateHasBeenSet)
  {
   payload.WithBool("AllowNonRestoredState", m_allowNonRestoredState);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
