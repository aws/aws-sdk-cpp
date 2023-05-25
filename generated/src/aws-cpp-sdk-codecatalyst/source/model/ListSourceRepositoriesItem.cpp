/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ListSourceRepositoriesItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

ListSourceRepositoriesItem::ListSourceRepositoriesItem() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

ListSourceRepositoriesItem::ListSourceRepositoriesItem(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ListSourceRepositoriesItem& ListSourceRepositoriesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSourceRepositoriesItem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
