/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetBindingValueFilter.h>
#include <aws/iotsitewise/model/AssetModelBindingValueFilter.h>
#include <aws/iotsitewise/model/AssetPropertyBindingValueFilter.h>
#include <aws/iotsitewise/model/AssetModelPropertyBindingValueFilter.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A filter used to match specific data binding values based on criteria. This
   * filter allows searching for data bindings by asset, asset model, asset property,
   * or asset model property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DataBindingValueFilter">AWS
   * API Reference</a></p>
   */
  class DataBindingValueFilter
  {
  public:
    AWS_IOTSITEWISE_API DataBindingValueFilter() = default;
    AWS_IOTSITEWISE_API DataBindingValueFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DataBindingValueFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter criteria for matching data bindings based on a specific asset. Used to
     * list all data bindings referencing a particular asset or its properties.</p>
     */
    inline const AssetBindingValueFilter& GetAsset() const { return m_asset; }
    inline bool AssetHasBeenSet() const { return m_assetHasBeenSet; }
    template<typename AssetT = AssetBindingValueFilter>
    void SetAsset(AssetT&& value) { m_assetHasBeenSet = true; m_asset = std::forward<AssetT>(value); }
    template<typename AssetT = AssetBindingValueFilter>
    DataBindingValueFilter& WithAsset(AssetT&& value) { SetAsset(std::forward<AssetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter criteria for matching data bindings based on a specific asset model.
     * Used to list all data bindings referencing a particular asset model or its
     * properties.</p>
     */
    inline const AssetModelBindingValueFilter& GetAssetModel() const { return m_assetModel; }
    inline bool AssetModelHasBeenSet() const { return m_assetModelHasBeenSet; }
    template<typename AssetModelT = AssetModelBindingValueFilter>
    void SetAssetModel(AssetModelT&& value) { m_assetModelHasBeenSet = true; m_assetModel = std::forward<AssetModelT>(value); }
    template<typename AssetModelT = AssetModelBindingValueFilter>
    DataBindingValueFilter& WithAssetModel(AssetModelT&& value) { SetAssetModel(std::forward<AssetModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter criteria for matching data bindings based on a specific asset
     * property. Used to list all data bindings referencing a particular property of an
     * asset.</p>
     */
    inline const AssetPropertyBindingValueFilter& GetAssetProperty() const { return m_assetProperty; }
    inline bool AssetPropertyHasBeenSet() const { return m_assetPropertyHasBeenSet; }
    template<typename AssetPropertyT = AssetPropertyBindingValueFilter>
    void SetAssetProperty(AssetPropertyT&& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = std::forward<AssetPropertyT>(value); }
    template<typename AssetPropertyT = AssetPropertyBindingValueFilter>
    DataBindingValueFilter& WithAssetProperty(AssetPropertyT&& value) { SetAssetProperty(std::forward<AssetPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter criteria for matching data bindings based on a specific asset model
     * property. Used to list all data bindings referencing a particular property of an
     * asset model.</p>
     */
    inline const AssetModelPropertyBindingValueFilter& GetAssetModelProperty() const { return m_assetModelProperty; }
    inline bool AssetModelPropertyHasBeenSet() const { return m_assetModelPropertyHasBeenSet; }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValueFilter>
    void SetAssetModelProperty(AssetModelPropertyT&& value) { m_assetModelPropertyHasBeenSet = true; m_assetModelProperty = std::forward<AssetModelPropertyT>(value); }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValueFilter>
    DataBindingValueFilter& WithAssetModelProperty(AssetModelPropertyT&& value) { SetAssetModelProperty(std::forward<AssetModelPropertyT>(value)); return *this;}
    ///@}
  private:

    AssetBindingValueFilter m_asset;
    bool m_assetHasBeenSet = false;

    AssetModelBindingValueFilter m_assetModel;
    bool m_assetModelHasBeenSet = false;

    AssetPropertyBindingValueFilter m_assetProperty;
    bool m_assetPropertyHasBeenSet = false;

    AssetModelPropertyBindingValueFilter m_assetModelProperty;
    bool m_assetModelPropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
