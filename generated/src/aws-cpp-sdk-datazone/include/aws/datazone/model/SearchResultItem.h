/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetListingItem.h>
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
   * <p>The details of the results of the <code>SearchListings</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchResultItem">AWS
   * API Reference</a></p>
   */
  class SearchResultItem
  {
  public:
    AWS_DATAZONE_API SearchResultItem();
    AWS_DATAZONE_API SearchResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline const AssetListingItem& GetAssetListing() const{ return m_assetListing; }

    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }

    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline void SetAssetListing(const AssetListingItem& value) { m_assetListingHasBeenSet = true; m_assetListing = value; }

    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline void SetAssetListing(AssetListingItem&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::move(value); }

    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline SearchResultItem& WithAssetListing(const AssetListingItem& value) { SetAssetListing(value); return *this;}

    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline SearchResultItem& WithAssetListing(AssetListingItem&& value) { SetAssetListing(std::move(value)); return *this;}

  private:

    AssetListingItem m_assetListing;
    bool m_assetListingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
