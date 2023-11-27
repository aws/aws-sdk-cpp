/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateAggregateConfiguration.h>
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

CreateAggregateConfiguration::CreateAggregateConfiguration() : 
    m_aggregatesHasBeenSet(false),
    m_constituentsPerAggregate(0),
    m_constituentsPerAggregateHasBeenSet(false)
{
}

CreateAggregateConfiguration::CreateAggregateConfiguration(JsonView jsonValue) : 
    m_aggregatesHasBeenSet(false),
    m_constituentsPerAggregate(0),
    m_constituentsPerAggregateHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAggregateConfiguration& CreateAggregateConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ConstituentsPerAggregate"))
  {
    m_constituentsPerAggregate = jsonValue.GetInteger("ConstituentsPerAggregate");

    m_constituentsPerAggregateHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAggregateConfiguration::Jsonize() const
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

  if(m_constituentsPerAggregateHasBeenSet)
  {
   payload.WithInteger("ConstituentsPerAggregate", m_constituentsPerAggregate);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
