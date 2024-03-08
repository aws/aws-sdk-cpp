/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AggregateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AggregateConfiguration::AggregateConfiguration() : 
    m_aggregatesHasBeenSet(false),
    m_totalConstituents(0),
    m_totalConstituentsHasBeenSet(false)
{
}

AggregateConfiguration::AggregateConfiguration(JsonView jsonValue) : 
    m_aggregatesHasBeenSet(false),
    m_totalConstituents(0),
    m_totalConstituentsHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateConfiguration& AggregateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Aggregates"))
  {
    Aws::Utils::Array<JsonView> aggregatesJsonList = jsonValue.GetArray("Aggregates");
    for(unsigned aggregatesIndex = 0; aggregatesIndex < aggregatesJsonList.GetLength(); ++aggregatesIndex)
    {
      m_aggregates.push_back(aggregatesJsonList[aggregatesIndex].AsString());
    }
    m_aggregatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalConstituents"))
  {
    m_totalConstituents = jsonValue.GetInteger("TotalConstituents");

    m_totalConstituentsHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_aggregatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatesJsonList(m_aggregates.size());
   for(unsigned aggregatesIndex = 0; aggregatesIndex < aggregatesJsonList.GetLength(); ++aggregatesIndex)
   {
     aggregatesJsonList[aggregatesIndex].AsString(m_aggregates[aggregatesIndex]);
   }
   payload.WithArray("Aggregates", std::move(aggregatesJsonList));

  }

  if(m_totalConstituentsHasBeenSet)
  {
   payload.WithInteger("TotalConstituents", m_totalConstituents);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
