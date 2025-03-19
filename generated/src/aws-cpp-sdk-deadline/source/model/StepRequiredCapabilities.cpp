/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepRequiredCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepRequiredCapabilities::StepRequiredCapabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

StepRequiredCapabilities& StepRequiredCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amounts"))
  {
    Aws::Utils::Array<JsonView> amountsJsonList = jsonValue.GetArray("amounts");
    for(unsigned amountsIndex = 0; amountsIndex < amountsJsonList.GetLength(); ++amountsIndex)
    {
      m_amounts.push_back(amountsJsonList[amountsIndex].AsObject());
    }
    m_amountsHasBeenSet = true;
  }
  return *this;
}

JsonValue StepRequiredCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_amountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> amountsJsonList(m_amounts.size());
   for(unsigned amountsIndex = 0; amountsIndex < amountsJsonList.GetLength(); ++amountsIndex)
   {
     amountsJsonList[amountsIndex].AsObject(m_amounts[amountsIndex].Jsonize());
   }
   payload.WithArray("amounts", std::move(amountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
