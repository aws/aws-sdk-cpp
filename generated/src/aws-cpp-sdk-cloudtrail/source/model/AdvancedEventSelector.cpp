/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/AdvancedEventSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

AdvancedEventSelector::AdvancedEventSelector() : 
    m_nameHasBeenSet(false),
    m_fieldSelectorsHasBeenSet(false)
{
}

AdvancedEventSelector::AdvancedEventSelector(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_fieldSelectorsHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedEventSelector& AdvancedEventSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldSelectors"))
  {
    Aws::Utils::Array<JsonView> fieldSelectorsJsonList = jsonValue.GetArray("FieldSelectors");
    for(unsigned fieldSelectorsIndex = 0; fieldSelectorsIndex < fieldSelectorsJsonList.GetLength(); ++fieldSelectorsIndex)
    {
      m_fieldSelectors.push_back(fieldSelectorsJsonList[fieldSelectorsIndex].AsObject());
    }
    m_fieldSelectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedEventSelector::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_fieldSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldSelectorsJsonList(m_fieldSelectors.size());
   for(unsigned fieldSelectorsIndex = 0; fieldSelectorsIndex < fieldSelectorsJsonList.GetLength(); ++fieldSelectorsIndex)
   {
     fieldSelectorsJsonList[fieldSelectorsIndex].AsObject(m_fieldSelectors[fieldSelectorsIndex].Jsonize());
   }
   payload.WithArray("FieldSelectors", std::move(fieldSelectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
