/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PercentPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PercentPair::PercentPair() : 
    m_percent(0.0),
    m_percentHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

PercentPair::PercentPair(JsonView jsonValue) : 
    m_percent(0.0),
    m_percentHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PercentPair& PercentPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("percent"))
  {
    m_percent = jsonValue.GetDouble("percent");

    m_percentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PercentPair::Jsonize() const
{
  JsonValue payload;

  if(m_percentHasBeenSet)
  {
   payload.WithDouble("percent", m_percent);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
