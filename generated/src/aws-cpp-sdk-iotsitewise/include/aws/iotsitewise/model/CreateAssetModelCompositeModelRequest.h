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
#include <aws/iotsitewise/model/AssetModelPropertyDefinition.h>
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
  class CreateAssetModelCompositeModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateAssetModelCompositeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetModelCompositeModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const{ return m_assetModelCompositeModelExternalId; }
    inline bool AssetModelCompositeModelExternalIdHasBeenSet() const { return m_assetModelCompositeModelExternalIdHasBeenSet; }
    inline void SetAssetModelCompositeModelExternalId(const Aws::String& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = value; }
    inline void SetAssetModelCompositeModelExternalId(Aws::String&& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = std::move(value); }
    inline void SetAssetModelCompositeModelExternalId(const char* value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const Aws::String& value) { SetAssetModelCompositeModelExternalId(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(Aws::String&& value) { SetAssetModelCompositeModelExternalId(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const char* value) { SetAssetModelCompositeModelExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline const Aws::String& GetParentAssetModelCompositeModelId() const{ return m_parentAssetModelCompositeModelId; }
    inline bool ParentAssetModelCompositeModelIdHasBeenSet() const { return m_parentAssetModelCompositeModelIdHasBeenSet; }
    inline void SetParentAssetModelCompositeModelId(const Aws::String& value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId = value; }
    inline void SetParentAssetModelCompositeModelId(Aws::String&& value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId = std::move(value); }
    inline void SetParentAssetModelCompositeModelId(const char* value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(const Aws::String& value) { SetParentAssetModelCompositeModelId(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(Aws::String&& value) { SetParentAssetModelCompositeModelId(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(const char* value) { SetParentAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelDescription() const{ return m_assetModelCompositeModelDescription; }
    inline bool AssetModelCompositeModelDescriptionHasBeenSet() const { return m_assetModelCompositeModelDescriptionHasBeenSet; }
    inline void SetAssetModelCompositeModelDescription(const Aws::String& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = value; }
    inline void SetAssetModelCompositeModelDescription(Aws::String&& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = std::move(value); }
    inline void SetAssetModelCompositeModelDescription(const char* value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const Aws::String& value) { SetAssetModelCompositeModelDescription(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(Aws::String&& value) { SetAssetModelCompositeModelDescription(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const char* value) { SetAssetModelCompositeModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const{ return m_assetModelCompositeModelName; }
    inline bool AssetModelCompositeModelNameHasBeenSet() const { return m_assetModelCompositeModelNameHasBeenSet; }
    inline void SetAssetModelCompositeModelName(const Aws::String& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = value; }
    inline void SetAssetModelCompositeModelName(Aws::String&& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = std::move(value); }
    inline void SetAssetModelCompositeModelName(const char* value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const Aws::String& value) { SetAssetModelCompositeModelName(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(Aws::String&& value) { SetAssetModelCompositeModelName(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const char* value) { SetAssetModelCompositeModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const{ return m_assetModelCompositeModelType; }
    inline bool AssetModelCompositeModelTypeHasBeenSet() const { return m_assetModelCompositeModelTypeHasBeenSet; }
    inline void SetAssetModelCompositeModelType(const Aws::String& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = value; }
    inline void SetAssetModelCompositeModelType(Aws::String&& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = std::move(value); }
    inline void SetAssetModelCompositeModelType(const char* value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(const Aws::String& value) { SetAssetModelCompositeModelType(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(Aws::String&& value) { SetAssetModelCompositeModelType(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(const char* value) { SetAssetModelCompositeModelType(value); return *this;}
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
    inline CreateAssetModelCompositeModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a component model which is reused to create this composite
     * model.</p>
     */
    inline const Aws::String& GetComposedAssetModelId() const{ return m_composedAssetModelId; }
    inline bool ComposedAssetModelIdHasBeenSet() const { return m_composedAssetModelIdHasBeenSet; }
    inline void SetComposedAssetModelId(const Aws::String& value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId = value; }
    inline void SetComposedAssetModelId(Aws::String&& value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId = std::move(value); }
    inline void SetComposedAssetModelId(const char* value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(const Aws::String& value) { SetComposedAssetModelId(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(Aws::String&& value) { SetComposedAssetModelId(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(const char* value) { SetComposedAssetModelId(value); return *this;}
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
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetAssetModelCompositeModelProperties() const{ return m_assetModelCompositeModelProperties; }
    inline bool AssetModelCompositeModelPropertiesHasBeenSet() const { return m_assetModelCompositeModelPropertiesHasBeenSet; }
    inline void SetAssetModelCompositeModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = value; }
    inline void SetAssetModelCompositeModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = std::move(value); }
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { SetAssetModelCompositeModelProperties(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { SetAssetModelCompositeModelProperties(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(const AssetModelPropertyDefinition& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(value); return *this; }
    inline CreateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(AssetModelPropertyDefinition&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The expected current entity tag (ETag) for the asset model’s latest or active
     * version (specified using <code>matchForVersionType</code>). The create request
     * is rejected if the tag does not match the latest or active version's current
     * entity tag. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/opt-locking-for-model.html">Optimistic
     * locking for asset model writes</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepts <b>*</b> to reject the create request if an active version (specified
     * using <code>matchForVersionType</code> as <code>ACTIVE</code>) already exists
     * for the asset model.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const{ return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    inline void SetIfNoneMatch(const Aws::String& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = value; }
    inline void SetIfNoneMatch(Aws::String&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::move(value); }
    inline void SetIfNoneMatch(const char* value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch.assign(value); }
    inline CreateAssetModelCompositeModelRequest& WithIfNoneMatch(const Aws::String& value) { SetIfNoneMatch(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithIfNoneMatch(Aws::String&& value) { SetIfNoneMatch(std::move(value)); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithIfNoneMatch(const char* value) { SetIfNoneMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the asset model version type (<code>LATEST</code> or
     * <code>ACTIVE</code>) used in conjunction with <code>If-Match</code> or
     * <code>If-None-Match</code> headers to determine the target ETag for the create
     * operation.</p>
     */
    inline const AssetModelVersionType& GetMatchForVersionType() const{ return m_matchForVersionType; }
    inline bool MatchForVersionTypeHasBeenSet() const { return m_matchForVersionTypeHasBeenSet; }
    inline void SetMatchForVersionType(const AssetModelVersionType& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = value; }
    inline void SetMatchForVersionType(AssetModelVersionType&& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = std::move(value); }
    inline CreateAssetModelCompositeModelRequest& WithMatchForVersionType(const AssetModelVersionType& value) { SetMatchForVersionType(value); return *this;}
    inline CreateAssetModelCompositeModelRequest& WithMatchForVersionType(AssetModelVersionType&& value) { SetMatchForVersionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelExternalId;
    bool m_assetModelCompositeModelExternalIdHasBeenSet = false;

    Aws::String m_parentAssetModelCompositeModelId;
    bool m_parentAssetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelDescription;
    bool m_assetModelCompositeModelDescriptionHasBeenSet = false;

    Aws::String m_assetModelCompositeModelName;
    bool m_assetModelCompositeModelNameHasBeenSet = false;

    Aws::String m_assetModelCompositeModelType;
    bool m_assetModelCompositeModelTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_composedAssetModelId;
    bool m_composedAssetModelIdHasBeenSet = false;

    Aws::Vector<AssetModelPropertyDefinition> m_assetModelCompositeModelProperties;
    bool m_assetModelCompositeModelPropertiesHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_ifNoneMatch;
    bool m_ifNoneMatchHasBeenSet = false;

    AssetModelVersionType m_matchForVersionType;
    bool m_matchForVersionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
