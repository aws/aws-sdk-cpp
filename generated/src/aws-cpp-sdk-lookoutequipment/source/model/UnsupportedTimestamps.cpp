/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UnsupportedTimestamps.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

UnsupportedTimestamps::UnsupportedTimestamps() : 
    m_totalNumberOfUnsupportedTimestamps(0),
    m_totalNumberOfUnsupportedTimestampsHasBeenSet(false)
{
}

UnsupportedTimestamps::UnsupportedTimestamps(JsonView jsonValue) : 
    m_totalNumberOfUnsupportedTimestamps(0),
    m_totalNumberOfUnsupportedTimestampsHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedTimestamps& UnsupportedTimestamps::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalNumberOfUnsupportedTimestamps"))
  {
    m_totalNumberOfUnsupportedTimestamps = jsonValue.GetInteger("TotalNumberOfUnsupportedTimestamps");

    m_totalNumberOfUnsupportedTimestampsHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedTimestamps::Jsonize() const
{
  JsonValue payload;

  if(m_totalNumberOfUnsupportedTimestampsHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfUnsupportedTimestamps", m_totalNumberOfUnsupportedTimestamps);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
