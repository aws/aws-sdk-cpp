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
    AWS_IOTSITEWISE_API UpdateAssetRequest() = default;

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
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    UpdateAssetRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset. The asset must not already have an
     * external ID. The external ID must be unique within your Amazon Web Services
     * account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetExternalId() const { return m_assetExternalId; }
    inline bool AssetExternalIdHasBeenSet() const { return m_assetExternalIdHasBeenSet; }
    template<typename AssetExternalIdT = Aws::String>
    void SetAssetExternalId(AssetExternalIdT&& value) { m_assetExternalIdHasBeenSet = true; m_assetExternalId = std::forward<AssetExternalIdT>(value); }
    template<typename AssetExternalIdT = Aws::String>
    UpdateAssetRequest& WithAssetExternalId(AssetExternalIdT&& value) { SetAssetExternalId(std::forward<AssetExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the asset.</p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    UpdateAssetRequest& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateAssetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the asset.</p>
     */
    inline const Aws::String& GetAssetDescription() const { return m_assetDescription; }
    inline bool AssetDescriptionHasBeenSet() const { return m_assetDescriptionHasBeenSet; }
    template<typename AssetDescriptionT = Aws::String>
    void SetAssetDescription(AssetDescriptionT&& value) { m_assetDescriptionHasBeenSet = true; m_assetDescription = std::forward<AssetDescriptionT>(value); }
    template<typename AssetDescriptionT = Aws::String>
    UpdateAssetRequest& WithAssetDescription(AssetDescriptionT&& value) { SetAssetDescription(std::forward<AssetDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetExternalId;
    bool m_assetExternalIdHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_assetDescription;
    bool m_assetDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
