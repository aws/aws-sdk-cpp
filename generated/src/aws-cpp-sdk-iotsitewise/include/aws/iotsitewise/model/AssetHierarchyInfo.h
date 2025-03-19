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
   * <p>Contains information about a parent asset and a child asset that are related
   * through an asset hierarchy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetHierarchyInfo">AWS
   * API Reference</a></p>
   */
  class AssetHierarchyInfo
  {
  public:
    AWS_IOTSITEWISE_API AssetHierarchyInfo() = default;
    AWS_IOTSITEWISE_API AssetHierarchyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetHierarchyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline const Aws::String& GetParentAssetId() const { return m_parentAssetId; }
    inline bool ParentAssetIdHasBeenSet() const { return m_parentAssetIdHasBeenSet; }
    template<typename ParentAssetIdT = Aws::String>
    void SetParentAssetId(ParentAssetIdT&& value) { m_parentAssetIdHasBeenSet = true; m_parentAssetId = std::forward<ParentAssetIdT>(value); }
    template<typename ParentAssetIdT = Aws::String>
    AssetHierarchyInfo& WithParentAssetId(ParentAssetIdT&& value) { SetParentAssetId(std::forward<ParentAssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline const Aws::String& GetChildAssetId() const { return m_childAssetId; }
    inline bool ChildAssetIdHasBeenSet() const { return m_childAssetIdHasBeenSet; }
    template<typename ChildAssetIdT = Aws::String>
    void SetChildAssetId(ChildAssetIdT&& value) { m_childAssetIdHasBeenSet = true; m_childAssetId = std::forward<ChildAssetIdT>(value); }
    template<typename ChildAssetIdT = Aws::String>
    AssetHierarchyInfo& WithChildAssetId(ChildAssetIdT&& value) { SetChildAssetId(std::forward<ChildAssetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parentAssetId;
    bool m_parentAssetIdHasBeenSet = false;

    Aws::String m_childAssetId;
    bool m_childAssetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
