/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/DataRetrievalRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

DataRetrievalRule::DataRetrievalRule() : 
    m_strategyHasBeenSet(false),
    m_bytesPerHour(0),
    m_bytesPerHourHasBeenSet(false)
{
}

DataRetrievalRule::DataRetrievalRule(JsonView jsonValue) : 
    m_strategyHasBeenSet(false),
    m_bytesPerHour(0),
    m_bytesPerHourHasBeenSet(false)
{
  *this = jsonValue;
}

DataRetrievalRule& DataRetrievalRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = jsonValue.GetString("Strategy");

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesPerHour"))
  {
    m_bytesPerHour = jsonValue.GetInt64("BytesPerHour");

    m_bytesPerHourHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRetrievalRule::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", m_strategy);

  }

  if(m_bytesPerHourHasBeenSet)
  {
   payload.WithInt64("BytesPerHour", m_bytesPerHour);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
