/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>Filter by asset model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/FilterByAssetModel">AWS
   * API Reference</a></p>
   */
  class FilterByAssetModel
  {
  public:
    AWS_IOTTWINMAKER_API FilterByAssetModel() = default;
    AWS_IOTTWINMAKER_API FilterByAssetModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FilterByAssetModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset model Id.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    FilterByAssetModel& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const { return m_assetModelExternalId; }
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }
    template<typename AssetModelExternalIdT = Aws::String>
    void SetAssetModelExternalId(AssetModelExternalIdT&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::forward<AssetModelExternalIdT>(value); }
    template<typename AssetModelExternalIdT = Aws::String>
    FilterByAssetModel& WithAssetModelExternalId(AssetModelExternalIdT&& value) { SetAssetModelExternalId(std::forward<AssetModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include asset offspring. [need desc.]</p>
     */
    inline bool GetIncludeOffspring() const { return m_includeOffspring; }
    inline bool IncludeOffspringHasBeenSet() const { return m_includeOffspringHasBeenSet; }
    inline void SetIncludeOffspring(bool value) { m_includeOffspringHasBeenSet = true; m_includeOffspring = value; }
    inline FilterByAssetModel& WithIncludeOffspring(bool value) { SetIncludeOffspring(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bolean to include assets.</p>
     */
    inline bool GetIncludeAssets() const { return m_includeAssets; }
    inline bool IncludeAssetsHasBeenSet() const { return m_includeAssetsHasBeenSet; }
    inline void SetIncludeAssets(bool value) { m_includeAssetsHasBeenSet = true; m_includeAssets = value; }
    inline FilterByAssetModel& WithIncludeAssets(bool value) { SetIncludeAssets(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    bool m_includeOffspring{false};
    bool m_includeOffspringHasBeenSet = false;

    bool m_includeAssets{false};
    bool m_includeAssetsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
