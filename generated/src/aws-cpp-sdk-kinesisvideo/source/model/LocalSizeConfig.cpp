/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/LocalSizeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

LocalSizeConfig::LocalSizeConfig() : 
    m_maxLocalMediaSizeInMB(0),
    m_maxLocalMediaSizeInMBHasBeenSet(false),
    m_strategyOnFullSize(StrategyOnFullSize::NOT_SET),
    m_strategyOnFullSizeHasBeenSet(false)
{
}

LocalSizeConfig::LocalSizeConfig(JsonView jsonValue) : 
    m_maxLocalMediaSizeInMB(0),
    m_maxLocalMediaSizeInMBHasBeenSet(false),
    m_strategyOnFullSize(StrategyOnFullSize::NOT_SET),
    m_strategyOnFullSizeHasBeenSet(false)
{
  *this = jsonValue;
}

LocalSizeConfig& LocalSizeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxLocalMediaSizeInMB"))
  {
    m_maxLocalMediaSizeInMB = jsonValue.GetInteger("MaxLocalMediaSizeInMB");

    m_maxLocalMediaSizeInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StrategyOnFullSize"))
  {
    m_strategyOnFullSize = StrategyOnFullSizeMapper::GetStrategyOnFullSizeForName(jsonValue.GetString("StrategyOnFullSize"));

    m_strategyOnFullSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalSizeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxLocalMediaSizeInMBHasBeenSet)
  {
   payload.WithInteger("MaxLocalMediaSizeInMB", m_maxLocalMediaSizeInMB);

  }

  if(m_strategyOnFullSizeHasBeenSet)
  {
   payload.WithString("StrategyOnFullSize", StrategyOnFullSizeMapper::GetNameForStrategyOnFullSize(m_strategyOnFullSize));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
