/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetListingDetails.h>
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

AssetListingDetails::AssetListingDetails() : 
    m_listingIdHasBeenSet(false),
    m_listingStatus(ListingStatus::NOT_SET),
    m_listingStatusHasBeenSet(false)
{
}

AssetListingDetails::AssetListingDetails(JsonView jsonValue) : 
    m_listingIdHasBeenSet(false),
    m_listingStatus(ListingStatus::NOT_SET),
    m_listingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AssetListingDetails& AssetListingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("listingId"))
  {
    m_listingId = jsonValue.GetString("listingId");

    m_listingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listingStatus"))
  {
    m_listingStatus = ListingStatusMapper::GetListingStatusForName(jsonValue.GetString("listingStatus"));

    m_listingStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetListingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_listingIdHasBeenSet)
  {
   payload.WithString("listingId", m_listingId);

  }

  if(m_listingStatusHasBeenSet)
  {
   payload.WithString("listingStatus", ListingStatusMapper::GetNameForListingStatus(m_listingStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
