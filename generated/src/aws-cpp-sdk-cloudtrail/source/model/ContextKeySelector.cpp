/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ContextKeySelector.h>
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

ContextKeySelector::ContextKeySelector(JsonView jsonValue)
{
  *this = jsonValue;
}

ContextKeySelector& ContextKeySelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Equals"))
  {
    Aws::Utils::Array<JsonView> equalsJsonList = jsonValue.GetArray("Equals");
    for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
    {
      m_equals.push_back(equalsJsonList[equalsIndex].AsString());
    }
    m_equalsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextKeySelector::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  if(m_equalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> equalsJsonList(m_equals.size());
   for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
   {
     equalsJsonList[equalsIndex].AsString(m_equals[equalsIndex]);
   }
   payload.WithArray("Equals", std::move(equalsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
