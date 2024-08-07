﻿/**
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
    AWS_DATAZONE_API SubscribedListingItem();
    AWS_DATAZONE_API SubscribedListingItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedListingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset for which the subscription grant is created.</p>
     */
    inline const SubscribedAssetListing& GetAssetListing() const{ return m_assetListing; }
    inline bool AssetListingHasBeenSet() const { return m_assetListingHasBeenSet; }
    inline void SetAssetListing(const SubscribedAssetListing& value) { m_assetListingHasBeenSet = true; m_assetListing = value; }
    inline void SetAssetListing(SubscribedAssetListing&& value) { m_assetListingHasBeenSet = true; m_assetListing = std::move(value); }
    inline SubscribedListingItem& WithAssetListing(const SubscribedAssetListing& value) { SetAssetListing(value); return *this;}
    inline SubscribedListingItem& WithAssetListing(SubscribedAssetListing&& value) { SetAssetListing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product listing.</p>
     */
    inline const SubscribedProductListing& GetProductListing() const{ return m_productListing; }
    inline bool ProductListingHasBeenSet() const { return m_productListingHasBeenSet; }
    inline void SetProductListing(const SubscribedProductListing& value) { m_productListingHasBeenSet = true; m_productListing = value; }
    inline void SetProductListing(SubscribedProductListing&& value) { m_productListingHasBeenSet = true; m_productListing = std::move(value); }
    inline SubscribedListingItem& WithProductListing(const SubscribedProductListing& value) { SetProductListing(value); return *this;}
    inline SubscribedListingItem& WithProductListing(SubscribedProductListing&& value) { SetProductListing(std::move(value)); return *this;}
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
