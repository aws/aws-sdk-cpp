/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/Change.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

Change::Change(JsonView jsonValue)
{
  *this = jsonValue;
}

Change& Change::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("specificationType"))
  {
    m_specificationType = ChangeSpecificationTypeMapper::GetChangeSpecificationTypeForName(jsonValue.GetString("specificationType"));
    m_specificationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specification"))
  {
    m_specification = jsonValue.GetObject("specification");
    m_specificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(ChangeTypeMapper::GetChangeTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue Change::Jsonize() const
{
  JsonValue payload;

  if(m_specificationTypeHasBeenSet)
  {
   payload.WithString("specificationType", ChangeSpecificationTypeMapper::GetNameForChangeSpecificationType(m_specificationType));
  }

  if(m_specificationHasBeenSet)
  {
   payload.WithObject("specification", m_specification.Jsonize());

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(ChangeTypeMapper::GetNameForChangeType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
