/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedAssetListing.h>
#include <aws/datazone/model/SubscribedProductListing.h>
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
   * <p>The published asset for which the subscription grant is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedListingItem">AWS
   * API Reference</a></p>
   */
  class SubscribedListingItem
  {
  public:
    AWS_DATAZONE_API SubscribedListingItem() = default;
    AWS_DATAZONE_API SubscribedListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset for which the subscription grant is created.</p>
     */
    inline const SubscribedAssetListing& GetAssetListing() const { return m_assetListing; }
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }
    template<typename AssetListingT = SubscribedAssetListing>
    void SetAssetListing(AssetListingT&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::forward<AssetListingT>(value); }
    template<typename AssetListingT = SubscribedAssetListing>
    SubscribedListingItem& WithAssetListing(AssetListingT&& value) { SetAssetListing(std::forward<AssetListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product listing.</p>
     */
    inline const SubscribedProductListing& GetProductListing() const { return m_productListing; }
    inline bool ProductListingHasBeenSet() const { return m_productListingHasBeenSet; }
    template<typename ProductListingT = SubscribedProductListing>
    void SetProductListing(ProductListingT&& value) { m_productListingHasBeenSet = true; m_productListing = std::forward<ProductListingT>(value); }
    template<typename ProductListingT = SubscribedProductListing>
    SubscribedListingItem& WithProductListing(ProductListingT&& value) { SetProductListing(std::forward<ProductListingT>(value)); return *this;}
    ///@}
  private:

    SubscribedAssetListing m_assetListing;
    bool m_assetListingHasBeenSet = false;

    SubscribedProductListing m_productListing;
    bool m_productListingHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
