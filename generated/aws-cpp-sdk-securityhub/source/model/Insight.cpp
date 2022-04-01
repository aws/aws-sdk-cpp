/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Insight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Insight::Insight() : 
    m_insightArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false)
{
}

Insight::Insight(JsonView jsonValue) : 
    m_insightArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false)
{
  *this = jsonValue;
}

Insight& Insight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightArn"))
  {
    m_insightArn = jsonValue.GetString("InsightArn");

    m_insightArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");

    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupByAttribute"))
  {
    m_groupByAttribute = jsonValue.GetString("GroupByAttribute");

    m_groupByAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue Insight::Jsonize() const
{
  JsonValue payload;

  if(m_insightArnHasBeenSet)
  {
   payload.WithString("InsightArn", m_insightArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupByAttributeHasBeenSet)
  {
   payload.WithString("GroupByAttribute", m_groupByAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
