/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DuplicateTimestamps.h>
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

DuplicateTimestamps::DuplicateTimestamps() : 
    m_totalNumberOfDuplicateTimestamps(0),
    m_totalNumberOfDuplicateTimestampsHasBeenSet(false)
{
}

DuplicateTimestamps::DuplicateTimestamps(JsonView jsonValue) : 
    m_totalNumberOfDuplicateTimestamps(0),
    m_totalNumberOfDuplicateTimestampsHasBeenSet(false)
{
  *this = jsonValue;
}

DuplicateTimestamps& DuplicateTimestamps::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalNumberOfDuplicateTimestamps"))
  {
    m_totalNumberOfDuplicateTimestamps = jsonValue.GetInteger("TotalNumberOfDuplicateTimestamps");

    m_totalNumberOfDuplicateTimestampsHasBeenSet = true;
  }

  return *this;
}

JsonValue DuplicateTimestamps::Jsonize() const
{
  JsonValue payload;

  if(m_totalNumberOfDuplicateTimestampsHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfDuplicateTimestamps", m_totalNumberOfDuplicateTimestamps);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
