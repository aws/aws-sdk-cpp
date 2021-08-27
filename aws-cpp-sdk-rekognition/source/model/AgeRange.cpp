/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/AgeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

AgeRange::AgeRange() : 
    m_low(0),
    m_lowHasBeenSet(false),
    m_high(0),
    m_highHasBeenSet(false)
{
}

AgeRange::AgeRange(JsonView jsonValue) : 
    m_low(0),
    m_lowHasBeenSet(false),
    m_high(0),
    m_highHasBeenSet(false)
{
  *this = jsonValue;
}

AgeRange& AgeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Low"))
  {
    m_low = jsonValue.GetInteger("Low");

    m_lowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("High"))
  {
    m_high = jsonValue.GetInteger("High");

    m_highHasBeenSet = true;
  }

  return *this;
}

JsonValue AgeRange::Jsonize() const
{
  JsonValue payload;

  if(m_lowHasBeenSet)
  {
   payload.WithInteger("Low", m_low);

  }

  if(m_highHasBeenSet)
  {
   payload.WithInteger("High", m_high);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
