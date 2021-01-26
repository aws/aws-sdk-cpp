/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListProfileObjectsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListProfileObjectsItem::ListProfileObjectsItem() : 
    m_objectTypeNameHasBeenSet(false),
    m_profileObjectUniqueKeyHasBeenSet(false),
    m_objectHasBeenSet(false)
{
}

ListProfileObjectsItem::ListProfileObjectsItem(JsonView jsonValue) : 
    m_objectTypeNameHasBeenSet(false),
    m_profileObjectUniqueKeyHasBeenSet(false),
    m_objectHasBeenSet(false)
{
  *this = jsonValue;
}

ListProfileObjectsItem& ListProfileObjectsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");

    m_objectTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileObjectUniqueKey"))
  {
    m_profileObjectUniqueKey = jsonValue.GetString("ProfileObjectUniqueKey");

    m_profileObjectUniqueKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Object"))
  {
    m_object = jsonValue.GetString("Object");

    m_objectHasBeenSet = true;
  }

  return *this;
}

JsonValue ListProfileObjectsItem::Jsonize() const
{
  JsonValue payload;

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_profileObjectUniqueKeyHasBeenSet)
  {
   payload.WithString("ProfileObjectUniqueKey", m_profileObjectUniqueKey);

  }

  if(m_objectHasBeenSet)
  {
   payload.WithString("Object", m_object);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
