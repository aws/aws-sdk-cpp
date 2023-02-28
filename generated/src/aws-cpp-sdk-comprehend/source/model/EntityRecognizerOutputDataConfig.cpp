/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerOutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerOutputDataConfig::EntityRecognizerOutputDataConfig() : 
    m_flywheelStatsS3PrefixHasBeenSet(false)
{
}

EntityRecognizerOutputDataConfig::EntityRecognizerOutputDataConfig(JsonView jsonValue) : 
    m_flywheelStatsS3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerOutputDataConfig& EntityRecognizerOutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlywheelStatsS3Prefix"))
  {
    m_flywheelStatsS3Prefix = jsonValue.GetString("FlywheelStatsS3Prefix");

    m_flywheelStatsS3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerOutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_flywheelStatsS3PrefixHasBeenSet)
  {
   payload.WithString("FlywheelStatsS3Prefix", m_flywheelStatsS3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
