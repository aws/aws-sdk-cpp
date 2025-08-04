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
   * <p>Maps a property from an interface asset model to a property in the asset
   * model where the interface is applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PropertyMapping">AWS
   * API Reference</a></p>
   */
  class PropertyMapping
  {
  public:
    AWS_IOTSITEWISE_API PropertyMapping() = default;
    AWS_IOTSITEWISE_API PropertyMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the property in the asset model where the interface is applied.</p>
     */
    inline const Aws::String& GetAssetModelPropertyId() const { return m_assetModelPropertyId; }
    inline bool AssetModelPropertyIdHasBeenSet() const { return m_assetModelPropertyIdHasBeenSet; }
    template<typename AssetModelPropertyIdT = Aws::String>
    void SetAssetModelPropertyId(AssetModelPropertyIdT&& value) { m_assetModelPropertyIdHasBeenSet = true; m_assetModelPropertyId = std::forward<AssetModelPropertyIdT>(value); }
    template<typename AssetModelPropertyIdT = Aws::String>
    PropertyMapping& WithAssetModelPropertyId(AssetModelPropertyIdT&& value) { SetAssetModelPropertyId(std::forward<AssetModelPropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the property in the interface asset model.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelPropertyId() const { return m_interfaceAssetModelPropertyId; }
    inline bool InterfaceAssetModelPropertyIdHasBeenSet() const { return m_interfaceAssetModelPropertyIdHasBeenSet; }
    template<typename InterfaceAssetModelPropertyIdT = Aws::String>
    void SetInterfaceAssetModelPropertyId(InterfaceAssetModelPropertyIdT&& value) { m_interfaceAssetModelPropertyIdHasBeenSet = true; m_interfaceAssetModelPropertyId = std::forward<InterfaceAssetModelPropertyIdT>(value); }
    template<typename InterfaceAssetModelPropertyIdT = Aws::String>
    PropertyMapping& WithInterfaceAssetModelPropertyId(InterfaceAssetModelPropertyIdT&& value) { SetInterfaceAssetModelPropertyId(std::forward<InterfaceAssetModelPropertyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelPropertyId;
    bool m_assetModelPropertyIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelPropertyId;
    bool m_interfaceAssetModelPropertyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
