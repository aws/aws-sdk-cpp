/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDisassociateProjectAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateProjectAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project from which to disassociate the assets.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIds() const{ return m_assetIds; }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline bool AssetIdsHasBeenSet() const { return m_assetIdsHasBeenSet; }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline void SetAssetIds(const Aws::Vector<Aws::String>& value) { m_assetIdsHasBeenSet = true; m_assetIds = value; }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline void SetAssetIds(Aws::Vector<Aws::String>&& value) { m_assetIdsHasBeenSet = true; m_assetIds = std::move(value); }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithAssetIds(const Aws::Vector<Aws::String>& value) { SetAssetIds(value); return *this;}

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithAssetIds(Aws::Vector<Aws::String>&& value) { SetAssetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& AddAssetIds(const Aws::String& value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& AddAssetIds(Aws::String&& value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the assets to be disassociated from the project.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& AddAssetIds(const char* value) { m_assetIdsHasBeenSet = true; m_assetIds.push_back(value); return *this; }


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
    inline BatchDisassociateProjectAssetsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline BatchDisassociateProjectAssetsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetIds;
    bool m_assetIdsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
