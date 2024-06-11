﻿/**
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


    ///@{
    /**
     * <p>The ID of the asset to update. This can be either the actual ID in UUID
     * format, or else <code>externalId:</code> followed by the external ID, if it has
     * one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline UpdateAssetRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline UpdateAssetRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline UpdateAssetRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the asset.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }
    inline UpdateAssetRequest& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}
    inline UpdateAssetRequest& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}
    inline UpdateAssetRequest& WithAssetName(const char* value) { SetAssetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateAssetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateAssetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateAssetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetAssetDescription() const{ return m_assetDescription; }
    inline bool AssetDescriptionHasBeenSet() const { return m_assetDescriptionHasBeenSet; }
    inline void SetAssetDescription(const Aws::String& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = value; }
    inline void SetAssetDescription(Aws::String&& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = std::move(value); }
    inline void SetAssetDescription(const char* value) { m_assetDescriptionHasBeenSet = true; m_assetDescription.assign(value); }
    inline UpdateAssetRequest& WithAssetDescription(const Aws::String& value) { SetAssetDescription(value); return *this;}
    inline UpdateAssetRequest& WithAssetDescription(Aws::String&& value) { SetAssetDescription(std::move(value)); return *this;}
    inline UpdateAssetRequest& WithAssetDescription(const char* value) { SetAssetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset. The asset must not already have an
     * external ID. The external ID must be unique within your Amazon Web Services
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetExternalId() const{ return m_assetExternalId; }
    inline bool AssetExternalIdHasBeenSet() const { return m_assetExternalIdHasBeenSet; }
    inline void SetAssetExternalId(const Aws::String& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = value; }
    inline void SetAssetExternalId(Aws::String&& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = std::move(value); }
    inline void SetAssetExternalId(const char* value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId.assign(value); }
    inline UpdateAssetRequest& WithAssetExternalId(const Aws::String& value) { SetAssetExternalId(value); return *this;}
    inline UpdateAssetRequest& WithAssetExternalId(Aws::String&& value) { SetAssetExternalId(std::move(value)); return *this;}
    inline UpdateAssetRequest& WithAssetExternalId(const char* value) { SetAssetExternalId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_assetDescription;
    bool m_assetDescriptionHasBeenSet = false;

    Aws::String m_assetExternalId;
    bool m_assetExternalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
