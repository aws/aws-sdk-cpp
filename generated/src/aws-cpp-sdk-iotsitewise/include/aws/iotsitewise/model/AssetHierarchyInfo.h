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
    AWS_IOTSITEWISE_API AssetHierarchyInfo();
    AWS_IOTSITEWISE_API AssetHierarchyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetHierarchyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline const Aws::String& GetParentAssetId() const{ return m_parentAssetId; }

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline bool ParentAssetIdHasBeenSet() const { return m_parentAssetIdHasBeenSet; }

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline void SetParentAssetId(const Aws::String& value) { m_parentAssetIdHasBeenSet = true; m_parentAssetId = value; }

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline void SetParentAssetId(Aws::String&& value) { m_parentAssetIdHasBeenSet = true; m_parentAssetId = std::move(value); }

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline void SetParentAssetId(const char* value) { m_parentAssetIdHasBeenSet = true; m_parentAssetId.assign(value); }

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithParentAssetId(const Aws::String& value) { SetParentAssetId(value); return *this;}

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithParentAssetId(Aws::String&& value) { SetParentAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithParentAssetId(const char* value) { SetParentAssetId(value); return *this;}


    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline const Aws::String& GetChildAssetId() const{ return m_childAssetId; }

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline bool ChildAssetIdHasBeenSet() const { return m_childAssetIdHasBeenSet; }

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline void SetChildAssetId(const Aws::String& value) { m_childAssetIdHasBeenSet = true; m_childAssetId = value; }

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline void SetChildAssetId(Aws::String&& value) { m_childAssetIdHasBeenSet = true; m_childAssetId = std::move(value); }

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline void SetChildAssetId(const char* value) { m_childAssetIdHasBeenSet = true; m_childAssetId.assign(value); }

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithChildAssetId(const Aws::String& value) { SetChildAssetId(value); return *this;}

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithChildAssetId(Aws::String&& value) { SetChildAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the child asset in this asset relationship.</p>
     */
    inline AssetHierarchyInfo& WithChildAssetId(const char* value) { SetChildAssetId(value); return *this;}

  private:

    Aws::String m_parentAssetId;
    bool m_parentAssetIdHasBeenSet = false;

    Aws::String m_childAssetId;
    bool m_childAssetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
