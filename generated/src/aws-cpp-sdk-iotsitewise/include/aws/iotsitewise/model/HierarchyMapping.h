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
   * <p>Maps a hierarchy from an interface asset model to a hierarchy in the asset
   * model where the interface is applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/HierarchyMapping">AWS
   * API Reference</a></p>
   */
  class HierarchyMapping
  {
  public:
    AWS_IOTSITEWISE_API HierarchyMapping() = default;
    AWS_IOTSITEWISE_API HierarchyMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API HierarchyMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the hierarchy in the asset model where the interface is
     * applied.</p>
     */
    inline const Aws::String& GetAssetModelHierarchyId() const { return m_assetModelHierarchyId; }
    inline bool AssetModelHierarchyIdHasBeenSet() const { return m_assetModelHierarchyIdHasBeenSet; }
    template<typename AssetModelHierarchyIdT = Aws::String>
    void SetAssetModelHierarchyId(AssetModelHierarchyIdT&& value) { m_assetModelHierarchyIdHasBeenSet = true; m_assetModelHierarchyId = std::forward<AssetModelHierarchyIdT>(value); }
    template<typename AssetModelHierarchyIdT = Aws::String>
    HierarchyMapping& WithAssetModelHierarchyId(AssetModelHierarchyIdT&& value) { SetAssetModelHierarchyId(std::forward<AssetModelHierarchyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hierarchy in the interface asset model.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelHierarchyId() const { return m_interfaceAssetModelHierarchyId; }
    inline bool InterfaceAssetModelHierarchyIdHasBeenSet() const { return m_interfaceAssetModelHierarchyIdHasBeenSet; }
    template<typename InterfaceAssetModelHierarchyIdT = Aws::String>
    void SetInterfaceAssetModelHierarchyId(InterfaceAssetModelHierarchyIdT&& value) { m_interfaceAssetModelHierarchyIdHasBeenSet = true; m_interfaceAssetModelHierarchyId = std::forward<InterfaceAssetModelHierarchyIdT>(value); }
    template<typename InterfaceAssetModelHierarchyIdT = Aws::String>
    HierarchyMapping& WithInterfaceAssetModelHierarchyId(InterfaceAssetModelHierarchyIdT&& value) { SetInterfaceAssetModelHierarchyId(std::forward<InterfaceAssetModelHierarchyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelHierarchyId;
    bool m_assetModelHierarchyIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelHierarchyId;
    bool m_interfaceAssetModelHierarchyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
