/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/RemoveAttributesActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

RemoveAttributesActivity::RemoveAttributesActivity() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_nextHasBeenSet(false)
{
}

RemoveAttributesActivity::RemoveAttributesActivity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_nextHasBeenSet(false)
{
  *this = jsonValue;
}

RemoveAttributesActivity& RemoveAttributesActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsString());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("next"))
  {
    m_next = jsonValue.GetString("next");

    m_nextHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoveAttributesActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsString(m_attributes[attributesIndex]);
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_nextHasBeenSet)
  {
   payload.WithString("next", m_next);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
