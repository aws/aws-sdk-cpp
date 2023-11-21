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
   * <p>Filter by asset. [TwinMaker asset]</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/FilterByAsset">AWS
   * API Reference</a></p>
   */
  class FilterByAsset
  {
  public:
    AWS_IOTTWINMAKER_API FilterByAsset();
    AWS_IOTTWINMAKER_API FilterByAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FilterByAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter by asset Id.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>Filter by asset Id.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>Filter by asset Id.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>Filter by asset Id.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>Filter by asset Id.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>Filter by asset Id.</p>
     */
    inline FilterByAsset& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>Filter by asset Id.</p>
     */
    inline FilterByAsset& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>Filter by asset Id.</p>
     */
    inline FilterByAsset& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline const Aws::String& GetAssetExternalId() const{ return m_assetExternalId; }

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline bool AssetExternalIdHasBeenSet() const { return m_assetExternalIdHasBeenSet; }

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline void SetAssetExternalId(const Aws::String& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = value; }

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline void SetAssetExternalId(Aws::String&& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = std::move(value); }

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline void SetAssetExternalId(const char* value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId.assign(value); }

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline FilterByAsset& WithAssetExternalId(const Aws::String& value) { SetAssetExternalId(value); return *this;}

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline FilterByAsset& WithAssetExternalId(Aws::String&& value) { SetAssetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external-Id property of an asset. </p>
     */
    inline FilterByAsset& WithAssetExternalId(const char* value) { SetAssetExternalId(value); return *this;}


    /**
     * <p>Includes sub-assets.[need description hekp for this]</p>
     */
    inline bool GetIncludeOffspring() const{ return m_includeOffspring; }

    /**
     * <p>Includes sub-assets.[need description hekp for this]</p>
     */
    inline bool IncludeOffspringHasBeenSet() const { return m_includeOffspringHasBeenSet; }

    /**
     * <p>Includes sub-assets.[need description hekp for this]</p>
     */
    inline void SetIncludeOffspring(bool value) { m_includeOffspringHasBeenSet = true; m_includeOffspring = value; }

    /**
     * <p>Includes sub-assets.[need description hekp for this]</p>
     */
    inline FilterByAsset& WithIncludeOffspring(bool value) { SetIncludeOffspring(value); return *this;}


    /**
     * <p>Boolean to include the asset model.</p>
     */
    inline bool GetIncludeAssetModel() const{ return m_includeAssetModel; }

    /**
     * <p>Boolean to include the asset model.</p>
     */
    inline bool IncludeAssetModelHasBeenSet() const { return m_includeAssetModelHasBeenSet; }

    /**
     * <p>Boolean to include the asset model.</p>
     */
    inline void SetIncludeAssetModel(bool value) { m_includeAssetModelHasBeenSet = true; m_includeAssetModel = value; }

    /**
     * <p>Boolean to include the asset model.</p>
     */
    inline FilterByAsset& WithIncludeAssetModel(bool value) { SetIncludeAssetModel(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetExternalId;
    bool m_assetExternalIdHasBeenSet = false;

    bool m_includeOffspring;
    bool m_includeOffspringHasBeenSet = false;

    bool m_includeAssetModel;
    bool m_includeAssetModelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
