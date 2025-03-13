/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The accepted asset scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptedAssetScope">AWS
   * API Reference</a></p>
   */
  class AcceptedAssetScope
  {
  public:
    AWS_DATAZONE_API AcceptedAssetScope() = default;
    AWS_DATAZONE_API AcceptedAssetScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AcceptedAssetScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset ID of the accepted asset scope.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    AcceptedAssetScope& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter IDs of the accepted asset scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterIds() const { return m_filterIds; }
    inline bool FilterIdsHasBeenSet() const { return m_filterIdsHasBeenSet; }
    template<typename FilterIdsT = Aws::Vector<Aws::String>>
    void SetFilterIds(FilterIdsT&& value) { m_filterIdsHasBeenSet = true; m_filterIds = std::forward<FilterIdsT>(value); }
    template<typename FilterIdsT = Aws::Vector<Aws::String>>
    AcceptedAssetScope& WithFilterIds(FilterIdsT&& value) { SetFilterIds(std::forward<FilterIdsT>(value)); return *this;}
    template<typename FilterIdsT = Aws::String>
    AcceptedAssetScope& AddFilterIds(FilterIdsT&& value) { m_filterIdsHasBeenSet = true; m_filterIds.emplace_back(std::forward<FilterIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterIds;
    bool m_filterIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
