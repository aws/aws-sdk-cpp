/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobFilter.h>
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

IngestionJobFilter::IngestionJobFilter() : 
    m_attribute(IngestionJobFilterAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(IngestionJobFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

IngestionJobFilter::IngestionJobFilter(JsonView jsonValue) : 
    m_attribute(IngestionJobFilterAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(IngestionJobFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionJobFilter& IngestionJobFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = IngestionJobFilterAttributeMapper::GetIngestionJobFilterAttributeForName(jsonValue.GetString("attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = IngestionJobFilterOperatorMapper::GetIngestionJobFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionJobFilter::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", IngestionJobFilterAttributeMapper::GetNameForIngestionJobFilterAttribute(m_attribute));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", IngestionJobFilterOperatorMapper::GetNameForIngestionJobFilterOperator(m_operator));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
