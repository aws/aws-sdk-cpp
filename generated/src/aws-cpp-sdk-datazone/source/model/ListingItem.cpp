/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListingItem.h>
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

ListingItem::ListingItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListingItem& ListingItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetListing"))
  {
    m_assetListing = jsonValue.GetObject("assetListing");
    m_assetListingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProductListing"))
  {
    m_dataProductListing = jsonValue.GetObject("dataProductListing");
    m_dataProductListingHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingItem::Jsonize() const
{
  JsonValue payload;

  if(m_assetListingHasBeenSet)
  {
   payload.WithObject("assetListing", m_assetListing.Jsonize());

  }

  if(m_dataProductListingHasBeenSet)
  {
   payload.WithObject("dataProductListing", m_dataProductListing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
