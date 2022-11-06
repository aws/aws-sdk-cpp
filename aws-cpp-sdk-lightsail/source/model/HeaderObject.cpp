/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/HeaderObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

HeaderObject::HeaderObject() : 
    m_option(ForwardValues::NOT_SET),
    m_optionHasBeenSet(false),
    m_headersAllowListHasBeenSet(false)
{
}

HeaderObject::HeaderObject(JsonView jsonValue) : 
    m_option(ForwardValues::NOT_SET),
    m_optionHasBeenSet(false),
    m_headersAllowListHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderObject& HeaderObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("option"))
  {
    m_option = ForwardValuesMapper::GetForwardValuesForName(jsonValue.GetString("option"));

    m_optionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headersAllowList"))
  {
    Aws::Utils::Array<JsonView> headersAllowListJsonList = jsonValue.GetArray("headersAllowList");
    for(unsigned headersAllowListIndex = 0; headersAllowListIndex < headersAllowListJsonList.GetLength(); ++headersAllowListIndex)
    {
      m_headersAllowList.push_back(HeaderEnumMapper::GetHeaderEnumForName(headersAllowListJsonList[headersAllowListIndex].AsString()));
    }
    m_headersAllowListHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderObject::Jsonize() const
{
  JsonValue payload;

  if(m_optionHasBeenSet)
  {
   payload.WithString("option", ForwardValuesMapper::GetNameForForwardValues(m_option));
  }

  if(m_headersAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersAllowListJsonList(m_headersAllowList.size());
   for(unsigned headersAllowListIndex = 0; headersAllowListIndex < headersAllowListJsonList.GetLength(); ++headersAllowListIndex)
   {
     headersAllowListJsonList[headersAllowListIndex].AsString(HeaderEnumMapper::GetNameForHeaderEnum(m_headersAllowList[headersAllowListIndex]));
   }
   payload.WithArray("headersAllowList", std::move(headersAllowListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
