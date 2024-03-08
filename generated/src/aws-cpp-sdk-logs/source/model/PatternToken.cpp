/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PatternToken.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

PatternToken::PatternToken() : 
    m_dynamicTokenPosition(0),
    m_dynamicTokenPositionHasBeenSet(false),
    m_isDynamic(false),
    m_isDynamicHasBeenSet(false),
    m_tokenStringHasBeenSet(false),
    m_enumerationsHasBeenSet(false)
{
}

PatternToken::PatternToken(JsonView jsonValue) : 
    m_dynamicTokenPosition(0),
    m_dynamicTokenPositionHasBeenSet(false),
    m_isDynamic(false),
    m_isDynamicHasBeenSet(false),
    m_tokenStringHasBeenSet(false),
    m_enumerationsHasBeenSet(false)
{
  *this = jsonValue;
}

PatternToken& PatternToken::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dynamicTokenPosition"))
  {
    m_dynamicTokenPosition = jsonValue.GetInteger("dynamicTokenPosition");

    m_dynamicTokenPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDynamic"))
  {
    m_isDynamic = jsonValue.GetBool("isDynamic");

    m_isDynamicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenString"))
  {
    m_tokenString = jsonValue.GetString("tokenString");

    m_tokenStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enumerations"))
  {
    Aws::Map<Aws::String, JsonView> enumerationsJsonMap = jsonValue.GetObject("enumerations").GetAllObjects();
    for(auto& enumerationsItem : enumerationsJsonMap)
    {
      m_enumerations[enumerationsItem.first] = enumerationsItem.second.AsInt64();
    }
    m_enumerationsHasBeenSet = true;
  }

  return *this;
}

JsonValue PatternToken::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicTokenPositionHasBeenSet)
  {
   payload.WithInteger("dynamicTokenPosition", m_dynamicTokenPosition);

  }

  if(m_isDynamicHasBeenSet)
  {
   payload.WithBool("isDynamic", m_isDynamic);

  }

  if(m_tokenStringHasBeenSet)
  {
   payload.WithString("tokenString", m_tokenString);

  }

  if(m_enumerationsHasBeenSet)
  {
   JsonValue enumerationsJsonMap;
   for(auto& enumerationsItem : m_enumerations)
   {
     enumerationsJsonMap.WithInt64(enumerationsItem.first, enumerationsItem.second);
   }
   payload.WithObject("enumerations", std::move(enumerationsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
