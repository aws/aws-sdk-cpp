/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/RelatedItemsUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

RelatedItemsUpdate::RelatedItemsUpdate() : 
    m_itemToAddHasBeenSet(false),
    m_itemToRemoveHasBeenSet(false)
{
}

RelatedItemsUpdate::RelatedItemsUpdate(JsonView jsonValue) : 
    m_itemToAddHasBeenSet(false),
    m_itemToRemoveHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedItemsUpdate& RelatedItemsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemToAdd"))
  {
    m_itemToAdd = jsonValue.GetObject("itemToAdd");

    m_itemToAddHasBeenSet = true;
  }

  if(jsonValue.ValueExists("itemToRemove"))
  {
    m_itemToRemove = jsonValue.GetObject("itemToRemove");

    m_itemToRemoveHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedItemsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_itemToAddHasBeenSet)
  {
   payload.WithObject("itemToAdd", m_itemToAdd.Jsonize());

  }

  if(m_itemToRemoveHasBeenSet)
  {
   payload.WithObject("itemToRemove", m_itemToRemove.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
