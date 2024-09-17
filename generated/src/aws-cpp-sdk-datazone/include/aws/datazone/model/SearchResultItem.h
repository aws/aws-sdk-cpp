/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetListingItem.h>
#include <aws/datazone/model/DataProductListingItem.h>
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


    ///@{
    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline const AssetListingItem& GetAssetListing() const{ return m_assetListing; }
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }
    inline void SetAssetListing(const AssetListingItem& value) { m_assetListingHasBeenSet = true; m_assetListing = value; }
    inline void SetAssetListing(AssetListingItem&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::move(value); }
    inline SearchResultItem& WithAssetListing(const AssetListingItem& value) { SetAssetListing(value); return *this;}
    inline SearchResultItem& WithAssetListing(AssetListingItem&& value) { SetAssetListing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product listing.</p>
     */
    inline const DataProductListingItem& GetDataProductListing() const{ return m_dataProductListing; }
    inline bool DataProductListingHasBeenSet() const { return m_dataProductListingHasBeenSet; }
    inline void SetDataProductListing(const DataProductListingItem& value) { m_dataProductListingHasBeenSet = true; m_dataProductListing = value; }
    inline void SetDataProductListing(DataProductListingItem&& value) { m_dataProductListingHasBeenSet = true; m_dataProductListing = std::move(value); }
    inline SearchResultItem& WithDataProductListing(const DataProductListingItem& value) { SetDataProductListing(value); return *this;}
    inline SearchResultItem& WithDataProductListing(DataProductListingItem&& value) { SetDataProductListing(std::move(value)); return *this;}
    ///@}
  private:

    AssetListingItem m_assetListing;
    bool m_assetListingHasBeenSet = false;

    DataProductListingItem m_dataProductListing;
    bool m_dataProductListingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
