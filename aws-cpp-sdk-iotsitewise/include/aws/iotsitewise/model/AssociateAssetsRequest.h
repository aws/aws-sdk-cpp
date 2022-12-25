/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AssociateAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API AssociateAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the parent asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline AssociateAssetsRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline AssociateAssetsRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent asset.</p>
     */
    inline AssociateAssetsRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssociateAssetsRequest& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssociateAssetsRequest& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

    /**
     * <p>The ID of a hierarchy in the parent asset's model. Hierarchies allow
     * different groupings of assets to be formed that all come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline AssociateAssetsRequest& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}


    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline const Aws::String& GetChildAssetId() const{ return m_childAssetId; }

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline bool ChildAssetIdHasBeenSet() const { return m_childAssetIdHasBeenSet; }

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline void SetChildAssetId(const Aws::String& value) { m_childAssetIdHasBeenSet = true; m_childAssetId = value; }

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline void SetChildAssetId(Aws::String&& value) { m_childAssetIdHasBeenSet = true; m_childAssetId = std::move(value); }

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline void SetChildAssetId(const char* value) { m_childAssetIdHasBeenSet = true; m_childAssetId.assign(value); }

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline AssociateAssetsRequest& WithChildAssetId(const Aws::String& value) { SetChildAssetId(value); return *this;}

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline AssociateAssetsRequest& WithChildAssetId(Aws::String&& value) { SetChildAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the child asset to be associated.</p>
     */
    inline AssociateAssetsRequest& WithChildAssetId(const char* value) { SetChildAssetId(value); return *this;}


    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline AssociateAssetsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline AssociateAssetsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline AssociateAssetsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    Aws::String m_childAssetId;
    bool m_childAssetIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
