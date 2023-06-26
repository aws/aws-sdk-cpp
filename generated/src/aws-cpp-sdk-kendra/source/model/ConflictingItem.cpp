/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConflictingItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConflictingItem::ConflictingItem() : 
    m_queryTextHasBeenSet(false),
    m_setNameHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
}

ConflictingItem::ConflictingItem(JsonView jsonValue) : 
    m_queryTextHasBeenSet(false),
    m_setNameHasBeenSet(false),
    m_setIdHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictingItem& ConflictingItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryText"))
  {
    m_queryText = jsonValue.GetString("QueryText");

    m_queryTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetName"))
  {
    m_setName = jsonValue.GetString("SetName");

    m_setNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetId"))
  {
    m_setId = jsonValue.GetString("SetId");

    m_setIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictingItem::Jsonize() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_setNameHasBeenSet)
  {
   payload.WithString("SetName", m_setName);

  }

  if(m_setIdHasBeenSet)
  {
   payload.WithString("SetId", m_setId);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
