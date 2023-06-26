/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ObjectAttributeUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

ObjectAttributeUpdate::ObjectAttributeUpdate() : 
    m_objectAttributeKeyHasBeenSet(false),
    m_objectAttributeActionHasBeenSet(false)
{
}

ObjectAttributeUpdate::ObjectAttributeUpdate(JsonView jsonValue) : 
    m_objectAttributeKeyHasBeenSet(false),
    m_objectAttributeActionHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeUpdate& ObjectAttributeUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectAttributeKey"))
  {
    m_objectAttributeKey = jsonValue.GetObject("ObjectAttributeKey");

    m_objectAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectAttributeAction"))
  {
    m_objectAttributeAction = jsonValue.GetObject("ObjectAttributeAction");

    m_objectAttributeActionHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectAttributeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_objectAttributeKeyHasBeenSet)
  {
   payload.WithObject("ObjectAttributeKey", m_objectAttributeKey.Jsonize());

  }

  if(m_objectAttributeActionHasBeenSet)
  {
   payload.WithObject("ObjectAttributeAction", m_objectAttributeAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
