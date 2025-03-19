/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetListing.h>
#include <aws/datazone/model/DataProductListing.h>
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
    AWS_DATAZONE_API ListingItem() = default;
    AWS_DATAZONE_API ListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An asset published in an Amazon DataZone catalog.</p>
     */
    inline const AssetListing& GetAssetListing() const { return m_assetListing; }
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }
    template<typename AssetListingT = AssetListing>
    void SetAssetListing(AssetListingT&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::forward<AssetListingT>(value); }
    template<typename AssetListingT = AssetListing>
    ListingItem& WithAssetListing(AssetListingT&& value) { SetAssetListing(std::forward<AssetListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product listing.</p>
     */
    inline const DataProductListing& GetDataProductListing() const { return m_dataProductListing; }
    inline bool DataProductListingHasBeenSet() const { return m_dataProductListingHasBeenSet; }
    template<typename DataProductListingT = DataProductListing>
    void SetDataProductListing(DataProductListingT&& value) { m_dataProductListingHasBeenSet = true; m_dataProductListing = std::forward<DataProductListingT>(value); }
    template<typename DataProductListingT = DataProductListing>
    ListingItem& WithDataProductListing(DataProductListingT&& value) { SetDataProductListing(std::forward<DataProductListingT>(value)); return *this;}
    ///@}
  private:

    AssetListing m_assetListing;
    bool m_assetListingHasBeenSet = false;

    DataProductListing m_dataProductListing;
    bool m_dataProductListingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
