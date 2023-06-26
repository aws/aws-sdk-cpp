/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityTypesListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityTypesListItem::EntityTypesListItem() : 
    m_typeHasBeenSet(false)
{
}

EntityTypesListItem::EntityTypesListItem(JsonView jsonValue) : 
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EntityTypesListItem& EntityTypesListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityTypesListItem::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
