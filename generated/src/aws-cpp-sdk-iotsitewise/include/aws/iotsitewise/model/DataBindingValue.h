/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetModelPropertyBindingValue.h>
#include <aws/iotsitewise/model/AssetPropertyBindingValue.h>
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
   * <p>Represents a value used in a data binding. It can be an asset property or an
   * asset model property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DataBindingValue">AWS
   * API Reference</a></p>
   */
  class DataBindingValue
  {
  public:
    AWS_IOTSITEWISE_API DataBindingValue() = default;
    AWS_IOTSITEWISE_API DataBindingValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API DataBindingValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AssetModelPropertyBindingValue& GetAssetModelProperty() const { return m_assetModelProperty; }
    inline bool AssetModelPropertyHasBeenSet() const { return m_assetModelPropertyHasBeenSet; }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValue>
    void SetAssetModelProperty(AssetModelPropertyT&& value) { m_assetModelPropertyHasBeenSet = true; m_assetModelProperty = std::forward<AssetModelPropertyT>(value); }
    template<typename AssetModelPropertyT = AssetModelPropertyBindingValue>
    DataBindingValue& WithAssetModelProperty(AssetModelPropertyT&& value) { SetAssetModelProperty(std::forward<AssetModelPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value used in the data binding.</p>
     */
    inline const AssetPropertyBindingValue& GetAssetProperty() const { return m_assetProperty; }
    inline bool AssetPropertyHasBeenSet() const { return m_assetPropertyHasBeenSet; }
    template<typename AssetPropertyT = AssetPropertyBindingValue>
    void SetAssetProperty(AssetPropertyT&& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = std::forward<AssetPropertyT>(value); }
    template<typename AssetPropertyT = AssetPropertyBindingValue>
    DataBindingValue& WithAssetProperty(AssetPropertyT&& value) { SetAssetProperty(std::forward<AssetPropertyT>(value)); return *this;}
    ///@}
  private:

    AssetModelPropertyBindingValue m_assetModelProperty;
    bool m_assetModelPropertyHasBeenSet = false;

    AssetPropertyBindingValue m_assetProperty;
    bool m_assetPropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
