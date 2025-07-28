/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetModelPropertyBindingValue.h>
#include <aws/iotsitewise/model/AssetPropertyBindingValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains computation model data binding value information, which can be one
   * of <code>assetModelProperty</code>, <code>list</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputationModelDataBindingValue">AWS
   * API Reference</a></p>
   */
  class ComputationModelDataBindingValue
  {
  public:
    AWS_IOTSITEWISE_API ComputationModelDataBindingValue() = default;
    AWS_IOTSITEWISE_API ComputationModelDataBindingValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ComputationModelDataBindingValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an asset model property data binding value.</p>
     */
    inline const AssetModelPropertyBindingValue& GetAssetModelProperty() const { return m_assetModelProperty; }
    inline bool AssetModelPropertyHasBeenSet() const { return m_assetModelPropertyHasBeenSet; }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValue>
    void SetAssetModelProperty(AssetModelPropertyT&& value) { m_assetModelPropertyHasBeenSet = true; m_assetModelProperty = std::forward<AssetModelPropertyT>(value); }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValue>
    ComputationModelDataBindingValue& WithAssetModelProperty(AssetModelPropertyT&& value) { SetAssetModelProperty(std::forward<AssetModelPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value used for computation model data binding.</p>
     */
    inline const AssetPropertyBindingValue& GetAssetProperty() const { return m_assetProperty; }
    inline bool AssetPropertyHasBeenSet() const { return m_assetPropertyHasBeenSet; }
    template<typename AssetPropertyT = AssetPropertyBindingValue>
    void SetAssetProperty(AssetPropertyT&& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = std::forward<AssetPropertyT>(value); }
    template<typename AssetPropertyT = AssetPropertyBindingValue>
    ComputationModelDataBindingValue& WithAssetProperty(AssetPropertyT&& value) { SetAssetProperty(std::forward<AssetPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of data binding value.</p>
     */
    inline const Aws::Vector<ComputationModelDataBindingValue>& GetList() const { return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    template<typename ListT = Aws::Vector<ComputationModelDataBindingValue>>
    void SetList(ListT&& value) { m_listHasBeenSet = true; m_list = std::forward<ListT>(value); }
    template<typename ListT = Aws::Vector<ComputationModelDataBindingValue>>
    ComputationModelDataBindingValue& WithList(ListT&& value) { SetList(std::forward<ListT>(value)); return *this;}
    template<typename ListT = ComputationModelDataBindingValue>
    ComputationModelDataBindingValue& AddList(ListT&& value) { m_listHasBeenSet = true; m_list.emplace_back(std::forward<ListT>(value)); return *this; }
    ///@}
  private:

    AssetModelPropertyBindingValue m_assetModelProperty;
    bool m_assetModelPropertyHasBeenSet = false;

    AssetPropertyBindingValue m_assetProperty;
    bool m_assetPropertyHasBeenSet = false;

    Aws::Vector<ComputationModelDataBindingValue> m_list;
    bool m_listHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
