/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelVersionType.h>
#include <aws/iotsitewise/model/AssetModelProperty.h>
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
  class UpdateAssetModelCompositeModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetModelCompositeModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssetModelCompositeModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const { return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    void SetAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::forward<AssetModelCompositeModelIdT>(value); }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { SetAssetModelCompositeModelId(std::forward<AssetModelCompositeModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model. You can only set the external ID
     * of the asset model if it wasn't set when it was created, or you're setting it to
     * the exact same thing as when it was created.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const { return m_assetModelCompositeModelExternalId; }
    inline bool AssetModelCompositeModelExternalIdHasBeenSet() const { return m_assetModelCompositeModelExternalIdHasBeenSet; }
    template<typename AssetModelCompositeModelExternalIdT = Aws::String>
    void SetAssetModelCompositeModelExternalId(AssetModelCompositeModelExternalIdT&& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = std::forward<AssetModelCompositeModelExternalIdT>(value); }
    template<typename AssetModelCompositeModelExternalIdT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(AssetModelCompositeModelExternalIdT&& value) { SetAssetModelCompositeModelExternalId(std::forward<AssetModelCompositeModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelDescription() const { return m_assetModelCompositeModelDescription; }
    inline bool AssetModelCompositeModelDescriptionHasBeenSet() const { return m_assetModelCompositeModelDescriptionHasBeenSet; }
    template<typename AssetModelCompositeModelDescriptionT = Aws::String>
    void SetAssetModelCompositeModelDescription(AssetModelCompositeModelDescriptionT&& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = std::forward<AssetModelCompositeModelDescriptionT>(value); }
    template<typename AssetModelCompositeModelDescriptionT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(AssetModelCompositeModelDescriptionT&& value) { SetAssetModelCompositeModelDescription(std::forward<AssetModelCompositeModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const { return m_assetModelCompositeModelName; }
    inline bool AssetModelCompositeModelNameHasBeenSet() const { return m_assetModelCompositeModelNameHasBeenSet; }
    template<typename AssetModelCompositeModelNameT = Aws::String>
    void SetAssetModelCompositeModelName(AssetModelCompositeModelNameT&& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = std::forward<AssetModelCompositeModelNameT>(value); }
    template<typename AssetModelCompositeModelNameT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(AssetModelCompositeModelNameT&& value) { SetAssetModelCompositeModelName(std::forward<AssetModelCompositeModelNameT>(value)); return *this;}
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
    UpdateAssetModelCompositeModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/custom-composite-models.html#inline-composite-models">
     * Inline custom composite models</a> in the <i>IoT SiteWise User Guide</i>.</p>
     * <p>You can specify up to 200 properties per composite model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelCompositeModelProperties() const { return m_assetModelCompositeModelProperties; }
    inline bool AssetModelCompositeModelPropertiesHasBeenSet() const { return m_assetModelCompositeModelPropertiesHasBeenSet; }
    template<typename AssetModelCompositeModelPropertiesT = Aws::Vector<AssetModelProperty>>
    void SetAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = std::forward<AssetModelCompositeModelPropertiesT>(value); }
    template<typename AssetModelCompositeModelPropertiesT = Aws::Vector<AssetModelProperty>>
    UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { SetAssetModelCompositeModelProperties(std::forward<AssetModelCompositeModelPropertiesT>(value)); return *this;}
    template<typename AssetModelCompositeModelPropertiesT = AssetModelProperty>
    UpdateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(AssetModelCompositeModelPropertiesT&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.emplace_back(std::forward<AssetModelCompositeModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expected current entity tag (ETag) for the asset model’s latest or active
     * version (specified using <code>matchForVersionType</code>). The update request
     * is rejected if the tag does not match the latest or active version's current
     * entity tag. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/opt-locking-for-model.html">Optimistic
     * locking for asset model writes</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepts <b>*</b> to reject the update request if an active version (specified
     * using <code>matchForVersionType</code> as <code>ACTIVE</code>) already exists
     * for the asset model.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const { return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    template<typename IfNoneMatchT = Aws::String>
    void SetIfNoneMatch(IfNoneMatchT&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::forward<IfNoneMatchT>(value); }
    template<typename IfNoneMatchT = Aws::String>
    UpdateAssetModelCompositeModelRequest& WithIfNoneMatch(IfNoneMatchT&& value) { SetIfNoneMatch(std::forward<IfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the asset model version type (<code>LATEST</code> or
     * <code>ACTIVE</code>) used in conjunction with <code>If-Match</code> or
     * <code>If-None-Match</code> headers to determine the target ETag for the update
     * operation.</p>
     */
    inline AssetModelVersionType GetMatchForVersionType() const { return m_matchForVersionType; }
    inline bool MatchForVersionTypeHasBeenSet() const { return m_matchForVersionTypeHasBeenSet; }
    inline void SetMatchForVersionType(AssetModelVersionType value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = value; }
    inline UpdateAssetModelCompositeModelRequest& WithMatchForVersionType(AssetModelVersionType value) { SetMatchForVersionType(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelExternalId;
    bool m_assetModelCompositeModelExternalIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelDescription;
    bool m_assetModelCompositeModelDescriptionHasBeenSet = false;

    Aws::String m_assetModelCompositeModelName;
    bool m_assetModelCompositeModelNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<AssetModelProperty> m_assetModelCompositeModelProperties;
    bool m_assetModelCompositeModelPropertiesHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_ifNoneMatch;
    bool m_ifNoneMatchHasBeenSet = false;

    AssetModelVersionType m_matchForVersionType{AssetModelVersionType::NOT_SET};
    bool m_matchForVersionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
