/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobSortBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

IngestionJobSortBy::IngestionJobSortBy() : 
    m_attribute(IngestionJobSortByAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

IngestionJobSortBy::IngestionJobSortBy(JsonView jsonValue) : 
    m_attribute(IngestionJobSortByAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionJobSortBy& IngestionJobSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = IngestionJobSortByAttributeMapper::GetIngestionJobSortByAttributeForName(jsonValue.GetString("attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionJobSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", IngestionJobSortByAttributeMapper::GetNameForIngestionJobSortByAttribute(m_attribute));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", SortOrderMapper::GetNameForSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
