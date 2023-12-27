/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetItem.h>
#include <aws/datazone/model/DataProductSummary.h>
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
    AWS_DATAZONE_API SearchInventoryResultItem();
    AWS_DATAZONE_API SearchInventoryResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchInventoryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset item included in the search results.</p>
     */
    inline const AssetItem& GetAssetItem() const{ return m_assetItem; }

    /**
     * <p>The asset item included in the search results.</p>
     */
    inline bool AssetItemHasBeenSet() const { return m_assetItemHasBeenSet; }

    /**
     * <p>The asset item included in the search results.</p>
     */
    inline void SetAssetItem(const AssetItem& value) { m_assetItemHasBeenSet = true; m_assetItem = value; }

    /**
     * <p>The asset item included in the search results.</p>
     */
    inline void SetAssetItem(AssetItem&& value) { m_assetItemHasBeenSet = true; m_assetItem = std::move(value); }

    /**
     * <p>The asset item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithAssetItem(const AssetItem& value) { SetAssetItem(value); return *this;}

    /**
     * <p>The asset item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithAssetItem(AssetItem&& value) { SetAssetItem(std::move(value)); return *this;}


    /**
     * <p>The data product item included in the search results.</p>
     */
    inline const DataProductSummary& GetDataProductItem() const{ return m_dataProductItem; }

    /**
     * <p>The data product item included in the search results.</p>
     */
    inline bool DataProductItemHasBeenSet() const { return m_dataProductItemHasBeenSet; }

    /**
     * <p>The data product item included in the search results.</p>
     */
    inline void SetDataProductItem(const DataProductSummary& value) { m_dataProductItemHasBeenSet = true; m_dataProductItem = value; }

    /**
     * <p>The data product item included in the search results.</p>
     */
    inline void SetDataProductItem(DataProductSummary&& value) { m_dataProductItemHasBeenSet = true; m_dataProductItem = std::move(value); }

    /**
     * <p>The data product item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithDataProductItem(const DataProductSummary& value) { SetDataProductItem(value); return *this;}

    /**
     * <p>The data product item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithDataProductItem(DataProductSummary&& value) { SetDataProductItem(std::move(value)); return *this;}


    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline const GlossaryItem& GetGlossaryItem() const{ return m_glossaryItem; }

    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline bool GlossaryItemHasBeenSet() const { return m_glossaryItemHasBeenSet; }

    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline void SetGlossaryItem(const GlossaryItem& value) { m_glossaryItemHasBeenSet = true; m_glossaryItem = value; }

    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline void SetGlossaryItem(GlossaryItem&& value) { m_glossaryItemHasBeenSet = true; m_glossaryItem = std::move(value); }

    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithGlossaryItem(const GlossaryItem& value) { SetGlossaryItem(value); return *this;}

    /**
     * <p>The glossary item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithGlossaryItem(GlossaryItem&& value) { SetGlossaryItem(std::move(value)); return *this;}


    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline const GlossaryTermItem& GetGlossaryTermItem() const{ return m_glossaryTermItem; }

    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline bool GlossaryTermItemHasBeenSet() const { return m_glossaryTermItemHasBeenSet; }

    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline void SetGlossaryTermItem(const GlossaryTermItem& value) { m_glossaryTermItemHasBeenSet = true; m_glossaryTermItem = value; }

    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline void SetGlossaryTermItem(GlossaryTermItem&& value) { m_glossaryTermItemHasBeenSet = true; m_glossaryTermItem = std::move(value); }

    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithGlossaryTermItem(const GlossaryTermItem& value) { SetGlossaryTermItem(value); return *this;}

    /**
     * <p>The glossary term item included in the search results.</p>
     */
    inline SearchInventoryResultItem& WithGlossaryTermItem(GlossaryTermItem&& value) { SetGlossaryTermItem(std::move(value)); return *this;}

  private:

    AssetItem m_assetItem;
    bool m_assetItemHasBeenSet = false;

    DataProductSummary m_dataProductItem;
    bool m_dataProductItemHasBeenSet = false;

    GlossaryItem m_glossaryItem;
    bool m_glossaryItemHasBeenSet = false;

    GlossaryTermItem m_glossaryTermItem;
    bool m_glossaryTermItemHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
