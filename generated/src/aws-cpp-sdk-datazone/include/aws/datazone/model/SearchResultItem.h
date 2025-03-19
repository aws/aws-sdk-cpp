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
    AWS_DATAZONE_API SearchResultItem() = default;
    AWS_DATAZONE_API SearchResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset listing included in the results of the <code>SearchListings</code>
     * action.</p>
     */
    inline const AssetListingItem& GetAssetListing() const { return m_assetListing; }
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }
    template<typename AssetListingT = AssetListingItem>
    void SetAssetListing(AssetListingT&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::forward<AssetListingT>(value); }
    template<typename AssetListingT = AssetListingItem>
    SearchResultItem& WithAssetListing(AssetListingT&& value) { SetAssetListing(std::forward<AssetListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product listing.</p>
     */
    inline const DataProductListingItem& GetDataProductListing() const { return m_dataProductListing; }
    inline bool DataProductListingHasBeenSet() const { return m_dataProductListingHasBeenSet; }
    template<typename DataProductListingT = DataProductListingItem>
    void SetDataProductListing(DataProductListingT&& value) { m_dataProductListingHasBeenSet = true; m_dataProductListing = std::forward<DataProductListingT>(value); }
    template<typename DataProductListingT = DataProductListingItem>
    SearchResultItem& WithDataProductListing(DataProductListingT&& value) { SetDataProductListing(std::forward<DataProductListingT>(value)); return *this;}
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
