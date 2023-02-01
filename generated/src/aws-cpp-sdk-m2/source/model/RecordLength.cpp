/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/RecordLength.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

RecordLength::RecordLength() : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
}

RecordLength::RecordLength(JsonView jsonValue) : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
  *this = jsonValue;
}

RecordLength& RecordLength::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetInteger("max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetInteger("min");

    m_minHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordLength::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithInteger("min", m_min);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
