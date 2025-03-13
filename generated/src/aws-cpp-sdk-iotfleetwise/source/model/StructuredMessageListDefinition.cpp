/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StructuredMessageListDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleetwise/model/StructuredMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StructuredMessageListDefinition::StructuredMessageListDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

StructuredMessageListDefinition& StructuredMessageListDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memberType"))
  {
    m_memberType = Aws::MakeShared<StructuredMessage>("StructuredMessageListDefinition", jsonValue.GetObject("memberType"));
    m_memberTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listType"))
  {
    m_listType = StructuredMessageListTypeMapper::GetStructuredMessageListTypeForName(jsonValue.GetString("listType"));
    m_listTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetInteger("capacity");
    m_capacityHasBeenSet = true;
  }
  return *this;
}

JsonValue StructuredMessageListDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_memberTypeHasBeenSet)
  {
   payload.WithObject("memberType", m_memberType->Jsonize());

  }

  if(m_listTypeHasBeenSet)
  {
   payload.WithString("listType", StructuredMessageListTypeMapper::GetNameForStructuredMessageListType(m_listType));
  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("capacity", m_capacity);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
