/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetListing.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a listing (aka asset published in a Amazon DataZone
   * catalog).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ListingItem">AWS
   * API Reference</a></p>
   */
  class ListingItem
  {
  public:
    AWS_DATAZONE_API ListingItem();
    AWS_DATAZONE_API ListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline const AssetListing& GetAssetListing() const{ return m_assetListing; }

    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }

    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline void SetAssetListing(const AssetListing& value) { m_assetListingHasBeenSet = true; m_assetListing = value; }

    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline void SetAssetListing(AssetListing&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::move(value); }

    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline ListingItem& WithAssetListing(const AssetListing& value) { SetAssetListing(value); return *this;}

    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline ListingItem& WithAssetListing(AssetListing&& value) { SetAssetListing(std::move(value)); return *this;}

  private:

    AssetListing m_assetListing;
    bool m_assetListingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
