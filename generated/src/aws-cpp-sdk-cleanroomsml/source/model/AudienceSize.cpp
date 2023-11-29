/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

AudienceSize::AudienceSize() : 
    m_type(AudienceSizeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

AudienceSize::AudienceSize(JsonView jsonValue) : 
    m_type(AudienceSizeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceSize& AudienceSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AudienceSizeTypeMapper::GetAudienceSizeTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceSize::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AudienceSizeTypeMapper::GetNameForAudienceSizeType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
