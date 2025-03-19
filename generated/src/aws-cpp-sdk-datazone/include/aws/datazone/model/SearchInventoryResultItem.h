/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetItem.h>
#include <aws/datazone/model/DataProductResultItem.h>
#include <aws/datazone/model/GlossaryItem.h>
#include <aws/datazone/model/GlossaryTermItem.h>
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
   * <p>The details of the search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchInventoryResultItem">AWS
   * API Reference</a></p>
   */
  class SearchInventoryResultItem
  {
  public:
    AWS_DATAZONE_API SearchInventoryResultItem() = default;
    AWS_DATAZONE_API SearchInventoryResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchInventoryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset item included in the search results.</p>
     */
    inline const AssetItem& GetAssetItem() const { return m_assetItem; }
    inline bool AssetItemHasBeenSet() const { return m_assetItemHasBeenSet; }
    template<typename AssetItemT = AssetItem>
    void SetAssetItem(AssetItemT&& value) { m_assetItemHasBeenSet = true; m_assetItem = std::forward<AssetItemT>(value); }
    template<typename AssetItemT = AssetItem>
    SearchInventoryResultItem& WithAssetItem(AssetItemT&& value) { SetAssetItem(std::forward<AssetItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product.</p>
     */
    inline const DataProductResultItem& GetDataProductItem() const { return m_dataProductItem; }
    inline bool DataProductItemHasBeenSet() const { return m_dataProductItemHasBeenSet; }
    template<typename DataProductItemT = DataProductResultItem>
    void SetDataProductItem(DataProductItemT&& value) { m_dataProductItemHasBeenSet = true; m_dataProductItem = std::forward<DataProductItemT>(value); }
    template<typename DataProductItemT = DataProductResultItem>
    SearchInventoryResultItem& WithDataProductItem(DataProductItemT&& value) { SetDataProductItem(std::forward<DataProductItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline const GlossaryItem& GetGlossaryItem() const { return m_glossaryItem; }
    inline bool GlossaryItemHasBeenSet() const { return m_glossaryItemHasBeenSet; }
    template<typename GlossaryItemT = GlossaryItem>
    void SetGlossaryItem(GlossaryItemT&& value) { m_glossaryItemHasBeenSet = true; m_glossaryItem = std::forward<GlossaryItemT>(value); }
    template<typename GlossaryItemT = GlossaryItem>
    SearchInventoryResultItem& WithGlossaryItem(GlossaryItemT&& value) { SetGlossaryItem(std::forward<GlossaryItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline const GlossaryTermItem& GetGlossaryTermItem() const { return m_glossaryTermItem; }
    inline bool GlossaryTermItemHasBeenSet() const { return m_glossaryTermItemHasBeenSet; }
    template<typename GlossaryTermItemT = GlossaryTermItem>
    void SetGlossaryTermItem(GlossaryTermItemT&& value) { m_glossaryTermItemHasBeenSet = true; m_glossaryTermItem = std::forward<GlossaryTermItemT>(value); }
    template<typename GlossaryTermItemT = GlossaryTermItem>
    SearchInventoryResultItem& WithGlossaryTermItem(GlossaryTermItemT&& value) { SetGlossaryTermItem(std::forward<GlossaryTermItemT>(value)); return *this;}
    ///@}
  private:

    AssetItem m_assetItem;
    bool m_assetItemHasBeenSet = false;

    DataProductResultItem m_dataProductItem;
    bool m_dataProductItemHasBeenSet = false;

    GlossaryItem m_glossaryItem;
    bool m_glossaryItemHasBeenSet = false;

    GlossaryTermItem m_glossaryTermItem;
    bool m_glossaryTermItemHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
