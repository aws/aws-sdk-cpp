/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetTargetNameMap">AWS
   * API Reference</a></p>
   */
  class AssetTargetNameMap
  {
  public:
    AWS_DATAZONE_API AssetTargetNameMap();
    AWS_DATAZONE_API AssetTargetNameMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetTargetNameMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetTargetNameMap& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetTargetNameMap& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the inventory asset.</p>
     */
    inline AssetTargetNameMap& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline AssetTargetNameMap& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline AssetTargetNameMap& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The target name in the asset target name map.</p>
     */
    inline AssetTargetNameMap& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
