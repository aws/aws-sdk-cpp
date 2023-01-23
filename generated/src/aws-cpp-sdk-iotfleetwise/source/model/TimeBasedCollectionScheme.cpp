/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimeBasedCollectionScheme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

TimeBasedCollectionScheme::TimeBasedCollectionScheme() : 
    m_periodMs(0),
    m_periodMsHasBeenSet(false)
{
}

TimeBasedCollectionScheme::TimeBasedCollectionScheme(JsonView jsonValue) : 
    m_periodMs(0),
    m_periodMsHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedCollectionScheme& TimeBasedCollectionScheme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("periodMs"))
  {
    m_periodMs = jsonValue.GetInt64("periodMs");

    m_periodMsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedCollectionScheme::Jsonize() const
{
  JsonValue payload;

  if(m_periodMsHasBeenSet)
  {
   payload.WithInt64("periodMs", m_periodMs);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
