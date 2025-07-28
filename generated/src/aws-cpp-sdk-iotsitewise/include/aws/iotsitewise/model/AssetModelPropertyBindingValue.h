/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about an <code>assetModelProperty</code> binding
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelPropertyBindingValue">AWS
   * API Reference</a></p>
   */
  class AssetModelPropertyBindingValue
  {
  public:
    AWS_IOTSITEWISE_API AssetModelPropertyBindingValue() = default;
    AWS_IOTSITEWISE_API AssetModelPropertyBindingValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelPropertyBindingValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    AssetModelPropertyBindingValue& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset model property used in data binding value.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    AssetModelPropertyBindingValue& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
