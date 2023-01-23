/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventAggregate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EventAggregate::EventAggregate() : 
    m_aggregateValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

EventAggregate::EventAggregate(JsonView jsonValue) : 
    m_aggregateValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

EventAggregate& EventAggregate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregateValue"))
  {
    m_aggregateValue = jsonValue.GetString("aggregateValue");

    m_aggregateValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue EventAggregate::Jsonize() const
{
  JsonValue payload;

  if(m_aggregateValueHasBeenSet)
  {
   payload.WithString("aggregateValue", m_aggregateValue);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
