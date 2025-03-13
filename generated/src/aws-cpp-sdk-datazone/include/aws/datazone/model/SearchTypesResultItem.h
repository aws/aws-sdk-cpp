/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetTypeItem.h>
#include <aws/datazone/model/FormTypeData.h>
#include <aws/datazone/model/LineageNodeTypeItem.h>
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
   * <p>The details of the results of the <code>SearchTypes</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchTypesResultItem">AWS
   * API Reference</a></p>
   */
  class SearchTypesResultItem
  {
  public:
    AWS_DATAZONE_API SearchTypesResultItem() = default;
    AWS_DATAZONE_API SearchTypesResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchTypesResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset type included in the results of the <code>SearchTypes</code>
     * action.</p>
     */
    inline const AssetTypeItem& GetAssetTypeItem() const { return m_assetTypeItem; }
    inline bool AssetTypeItemHasBeenSet() const { return m_assetTypeItemHasBeenSet; }
    template<typename AssetTypeItemT = AssetTypeItem>
    void SetAssetTypeItem(AssetTypeItemT&& value) { m_assetTypeItemHasBeenSet = true; m_assetTypeItem = std::forward<AssetTypeItemT>(value); }
    template<typename AssetTypeItemT = AssetTypeItem>
    SearchTypesResultItem& WithAssetTypeItem(AssetTypeItemT&& value) { SetAssetTypeItem(std::forward<AssetTypeItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The form type included in the results of the <code>SearchTypes</code>
     * action.</p>
     */
    inline const FormTypeData& GetFormTypeItem() const { return m_formTypeItem; }
    inline bool FormTypeItemHasBeenSet() const { return m_formTypeItemHasBeenSet; }
    template<typename FormTypeItemT = FormTypeData>
    void SetFormTypeItem(FormTypeItemT&& value) { m_formTypeItemHasBeenSet = true; m_formTypeItem = std::forward<FormTypeItemT>(value); }
    template<typename FormTypeItemT = FormTypeData>
    SearchTypesResultItem& WithFormTypeItem(FormTypeItemT&& value) { SetFormTypeItem(std::forward<FormTypeItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a data lineage node type.</p>
     */
    inline const LineageNodeTypeItem& GetLineageNodeTypeItem() const { return m_lineageNodeTypeItem; }
    inline bool LineageNodeTypeItemHasBeenSet() const { return m_lineageNodeTypeItemHasBeenSet; }
    template<typename LineageNodeTypeItemT = LineageNodeTypeItem>
    void SetLineageNodeTypeItem(LineageNodeTypeItemT&& value) { m_lineageNodeTypeItemHasBeenSet = true; m_lineageNodeTypeItem = std::forward<LineageNodeTypeItemT>(value); }
    template<typename LineageNodeTypeItemT = LineageNodeTypeItem>
    SearchTypesResultItem& WithLineageNodeTypeItem(LineageNodeTypeItemT&& value) { SetLineageNodeTypeItem(std::forward<LineageNodeTypeItemT>(value)); return *this;}
    ///@}
  private:

    AssetTypeItem m_assetTypeItem;
    bool m_assetTypeItemHasBeenSet = false;

    FormTypeData m_formTypeItem;
    bool m_formTypeItemHasBeenSet = false;

    LineageNodeTypeItem m_lineageNodeTypeItem;
    bool m_lineageNodeTypeItemHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
