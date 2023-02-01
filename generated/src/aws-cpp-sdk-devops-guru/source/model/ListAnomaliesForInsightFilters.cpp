/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListAnomaliesForInsightFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ListAnomaliesForInsightFilters::ListAnomaliesForInsightFilters() : 
    m_serviceCollectionHasBeenSet(false)
{
}

ListAnomaliesForInsightFilters::ListAnomaliesForInsightFilters(JsonView jsonValue) : 
    m_serviceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

ListAnomaliesForInsightFilters& ListAnomaliesForInsightFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceCollection"))
  {
    m_serviceCollection = jsonValue.GetObject("ServiceCollection");

    m_serviceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAnomaliesForInsightFilters::Jsonize() const
{
  JsonValue payload;

  if(m_serviceCollectionHasBeenSet)
  {
   payload.WithObject("ServiceCollection", m_serviceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
