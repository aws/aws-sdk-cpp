/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/InterpolationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

InterpolationParameters::InterpolationParameters() : 
    m_interpolationType(InterpolationType::NOT_SET),
    m_interpolationTypeHasBeenSet(false),
    m_intervalInSeconds(0),
    m_intervalInSecondsHasBeenSet(false)
{
}

InterpolationParameters::InterpolationParameters(JsonView jsonValue) : 
    m_interpolationType(InterpolationType::NOT_SET),
    m_interpolationTypeHasBeenSet(false),
    m_intervalInSeconds(0),
    m_intervalInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

InterpolationParameters& InterpolationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interpolationType"))
  {
    m_interpolationType = InterpolationTypeMapper::GetInterpolationTypeForName(jsonValue.GetString("interpolationType"));

    m_interpolationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intervalInSeconds"))
  {
    m_intervalInSeconds = jsonValue.GetInt64("intervalInSeconds");

    m_intervalInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue InterpolationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_interpolationTypeHasBeenSet)
  {
   payload.WithString("interpolationType", InterpolationTypeMapper::GetNameForInterpolationType(m_interpolationType));
  }

  if(m_intervalInSecondsHasBeenSet)
  {
   payload.WithInt64("intervalInSeconds", m_intervalInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
