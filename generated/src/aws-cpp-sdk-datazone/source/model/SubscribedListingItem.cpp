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

SubscribedListingItem::SubscribedListingItem() : 
    m_assetListingHasBeenSet(false)
{
}

SubscribedListingItem::SubscribedListingItem(JsonView jsonValue) : 
    m_assetListingHasBeenSet(false)
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

  return *this;
}

JsonValue SubscribedListingItem::Jsonize() const
{
  JsonValue payload;

  if(m_assetListingHasBeenSet)
  {
   payload.WithObject("assetListing", m_assetListing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
