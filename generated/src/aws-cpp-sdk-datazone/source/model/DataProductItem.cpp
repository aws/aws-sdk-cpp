/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataProductItem.h>
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

DataProductItem::DataProductItem() : 
    m_domainIdHasBeenSet(false),
    m_itemIdHasBeenSet(false)
{
}

DataProductItem::DataProductItem(JsonView jsonValue) : 
    m_domainIdHasBeenSet(false),
    m_itemIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataProductItem& DataProductItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProductItem::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
