/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AttributeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AttributeDetails::AttributeDetails() : 
    m_attributesHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

AttributeDetails::AttributeDetails(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeDetails& AttributeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
