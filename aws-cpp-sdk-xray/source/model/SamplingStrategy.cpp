/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingStrategy::SamplingStrategy() : 
    m_name(SamplingStrategyName::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

SamplingStrategy::SamplingStrategy(JsonView jsonValue) : 
    m_name(SamplingStrategyName::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingStrategy& SamplingStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = SamplingStrategyNameMapper::GetSamplingStrategyNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", SamplingStrategyNameMapper::GetNameForSamplingStrategyName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
