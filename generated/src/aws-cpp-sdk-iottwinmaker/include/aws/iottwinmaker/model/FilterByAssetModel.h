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
    AWS_IOTTWINMAKER_API FilterByAssetModel();
    AWS_IOTTWINMAKER_API FilterByAssetModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API FilterByAssetModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset model Id.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The asset model Id.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The asset model Id.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The asset model Id.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The asset model Id.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The asset model Id.</p>
     */
    inline FilterByAssetModel& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The asset model Id.</p>
     */
    inline FilterByAssetModel& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The asset model Id.</p>
     */
    inline FilterByAssetModel& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const{ return m_assetModelExternalId; }

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline void SetAssetModelExternalId(const Aws::String& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = value; }

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline void SetAssetModelExternalId(Aws::String&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::move(value); }

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline void SetAssetModelExternalId(const char* value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId.assign(value); }

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline FilterByAssetModel& WithAssetModelExternalId(const Aws::String& value) { SetAssetModelExternalId(value); return *this;}

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline FilterByAssetModel& WithAssetModelExternalId(Aws::String&& value) { SetAssetModelExternalId(std::move(value)); return *this;}

    /**
     * <p>The external-Id property of an asset model.</p>
     */
    inline FilterByAssetModel& WithAssetModelExternalId(const char* value) { SetAssetModelExternalId(value); return *this;}


    /**
     * <p>Include asset offspring. [need desc.]</p>
     */
    inline bool GetIncludeOffspring() const{ return m_includeOffspring; }

    /**
     * <p>Include asset offspring. [need desc.]</p>
     */
    inline bool IncludeOffspringHasBeenSet() const { return m_includeOffspringHasBeenSet; }

    /**
     * <p>Include asset offspring. [need desc.]</p>
     */
    inline void SetIncludeOffspring(bool value) { m_includeOffspringHasBeenSet = true; m_includeOffspring = value; }

    /**
     * <p>Include asset offspring. [need desc.]</p>
     */
    inline FilterByAssetModel& WithIncludeOffspring(bool value) { SetIncludeOffspring(value); return *this;}


    /**
     * <p>Bolean to include assets.</p>
     */
    inline bool GetIncludeAssets() const{ return m_includeAssets; }

    /**
     * <p>Bolean to include assets.</p>
     */
    inline bool IncludeAssetsHasBeenSet() const { return m_includeAssetsHasBeenSet; }

    /**
     * <p>Bolean to include assets.</p>
     */
    inline void SetIncludeAssets(bool value) { m_includeAssetsHasBeenSet = true; m_includeAssets = value; }

    /**
     * <p>Bolean to include assets.</p>
     */
    inline FilterByAssetModel& WithIncludeAssets(bool value) { SetIncludeAssets(value); return *this;}

  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    bool m_includeOffspring;
    bool m_includeOffspringHasBeenSet = false;

    bool m_includeAssets;
    bool m_includeAssetsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
