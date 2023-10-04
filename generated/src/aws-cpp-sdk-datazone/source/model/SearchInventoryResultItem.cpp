/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchInventoryResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SearchInventoryResultItem::SearchInventoryResultItem() : 
    m_assetItemHasBeenSet(false),
    m_dataProductItemHasBeenSet(false),
    m_glossaryItemHasBeenSet(false),
    m_glossaryTermItemHasBeenSet(false)
{
}

SearchInventoryResultItem::SearchInventoryResultItem(JsonView jsonValue) : 
    m_assetItemHasBeenSet(false),
    m_dataProductItemHasBeenSet(false),
    m_glossaryItemHasBeenSet(false),
    m_glossaryTermItemHasBeenSet(false)
{
  *this = jsonValue;
}

SearchInventoryResultItem& SearchInventoryResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetItem"))
  {
    m_assetItem = jsonValue.GetObject("assetItem");

    m_assetItemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataProductItem"))
  {
    m_dataProductItem = jsonValue.GetObject("dataProductItem");

    m_dataProductItemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("glossaryItem"))
  {
    m_glossaryItem = jsonValue.GetObject("glossaryItem");

    m_glossaryItemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("glossaryTermItem"))
  {
    m_glossaryTermItem = jsonValue.GetObject("glossaryTermItem");

    m_glossaryTermItemHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchInventoryResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_assetItemHasBeenSet)
  {
   payload.WithObject("assetItem", m_assetItem.Jsonize());

  }

  if(m_dataProductItemHasBeenSet)
  {
   payload.WithObject("dataProductItem", m_dataProductItem.Jsonize());

  }

  if(m_glossaryItemHasBeenSet)
  {
   payload.WithObject("glossaryItem", m_glossaryItem.Jsonize());

  }

  if(m_glossaryTermItemHasBeenSet)
  {
   payload.WithObject("glossaryTermItem", m_glossaryTermItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
