/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/QueryStringObject.h>
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

QueryStringObject::QueryStringObject() : 
    m_option(false),
    m_optionHasBeenSet(false),
    m_queryStringsAllowListHasBeenSet(false)
{
}

QueryStringObject::QueryStringObject(JsonView jsonValue) : 
    m_option(false),
    m_optionHasBeenSet(false),
    m_queryStringsAllowListHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStringObject& QueryStringObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("option"))
  {
    m_option = jsonValue.GetBool("option");

    m_optionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryStringsAllowList"))
  {
    Aws::Utils::Array<JsonView> queryStringsAllowListJsonList = jsonValue.GetArray("queryStringsAllowList");
    for(unsigned queryStringsAllowListIndex = 0; queryStringsAllowListIndex < queryStringsAllowListJsonList.GetLength(); ++queryStringsAllowListIndex)
    {
      m_queryStringsAllowList.push_back(queryStringsAllowListJsonList[queryStringsAllowListIndex].AsString());
    }
    m_queryStringsAllowListHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStringObject::Jsonize() const
{
  JsonValue payload;

  if(m_optionHasBeenSet)
  {
   payload.WithBool("option", m_option);

  }

  if(m_queryStringsAllowListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryStringsAllowListJsonList(m_queryStringsAllowList.size());
   for(unsigned queryStringsAllowListIndex = 0; queryStringsAllowListIndex < queryStringsAllowListJsonList.GetLength(); ++queryStringsAllowListIndex)
   {
     queryStringsAllowListJsonList[queryStringsAllowListIndex].AsString(m_queryStringsAllowList[queryStringsAllowListIndex]);
   }
   payload.WithArray("queryStringsAllowList", std::move(queryStringsAllowListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
