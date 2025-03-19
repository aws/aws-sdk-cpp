/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedListingItem.h>
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

SubscribedListingItem::SubscribedListingItem(JsonView jsonValue)
{
  *this = jsonValue;
}

SubscribedListingItem& SubscribedListingItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetListing"))
  {
    m_assetListing = jsonValue.GetObject("assetListing");
    m_assetListingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productListing"))
  {
    m_productListing = jsonValue.GetObject("productListing");
    m_productListingHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedListingItem::Jsonize() const
{
  JsonValue payload;

  if(m_assetListingHasBeenSet)
  {
   payload.WithObject("assetListing", m_assetListing.Jsonize());

  }

  if(m_productListingHasBeenSet)
  {
   payload.WithObject("productListing", m_productListing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
