/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/TLEData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

TLEData::TLEData() : 
    m_tleLine1HasBeenSet(false),
    m_tleLine2HasBeenSet(false),
    m_validTimeRangeHasBeenSet(false)
{
}

TLEData::TLEData(JsonView jsonValue) : 
    m_tleLine1HasBeenSet(false),
    m_tleLine2HasBeenSet(false),
    m_validTimeRangeHasBeenSet(false)
{
  *this = jsonValue;
}

TLEData& TLEData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tleLine1"))
  {
    m_tleLine1 = jsonValue.GetString("tleLine1");

    m_tleLine1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("tleLine2"))
  {
    m_tleLine2 = jsonValue.GetString("tleLine2");

    m_tleLine2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("validTimeRange"))
  {
    m_validTimeRange = jsonValue.GetObject("validTimeRange");

    m_validTimeRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue TLEData::Jsonize() const
{
  JsonValue payload;

  if(m_tleLine1HasBeenSet)
  {
   payload.WithString("tleLine1", m_tleLine1);

  }

  if(m_tleLine2HasBeenSet)
  {
   payload.WithString("tleLine2", m_tleLine2);

  }

  if(m_validTimeRangeHasBeenSet)
  {
   payload.WithObject("validTimeRange", m_validTimeRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
