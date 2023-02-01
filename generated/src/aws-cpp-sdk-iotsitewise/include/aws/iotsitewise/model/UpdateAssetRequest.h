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
  class UpdateAssetRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAsset"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the asset to update.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline UpdateAssetRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline UpdateAssetRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset to update.</p>
     */
    inline UpdateAssetRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>A friendly name for the asset.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetName(const char* value) { SetAssetName(value); return *this;}


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
    inline UpdateAssetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdateAssetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdateAssetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetAssetDescription() const{ return m_assetDescription; }

    /**
     * <p>A description for the asset.</p>
     */
    inline bool AssetDescriptionHasBeenSet() const { return m_assetDescriptionHasBeenSet; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(const Aws::String& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = value; }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(Aws::String&& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = std::move(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline void SetAssetDescription(const char* value) { m_assetDescriptionHasBeenSet = true; m_assetDescription.assign(value); }

    /**
     * <p>A description for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetDescription(const Aws::String& value) { SetAssetDescription(value); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetDescription(Aws::String&& value) { SetAssetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the asset.</p>
     */
    inline UpdateAssetRequest& WithAssetDescription(const char* value) { SetAssetDescription(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_assetDescription;
    bool m_assetDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
