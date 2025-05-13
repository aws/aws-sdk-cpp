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
#include <aws/iotsitewise/model/AssetModelHierarchy.h>
#include <aws/iotsitewise/model/AssetModelCompositeModel.h>
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
  class UpdateAssetModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssetModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the asset model to update. This can be either the actual ID in UUID
     * format, or else <code>externalId:</code> followed by the external ID, if it has
     * one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    UpdateAssetModelRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model. The asset model must not already
     * have an external ID. The external ID must be unique within your Amazon Web
     * Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const { return m_assetModelExternalId; }
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }
    template<typename AssetModelExternalIdT = Aws::String>
    void SetAssetModelExternalId(AssetModelExternalIdT&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::forward<AssetModelExternalIdT>(value); }
    template<typename AssetModelExternalIdT = Aws::String>
    UpdateAssetModelRequest& WithAssetModelExternalId(AssetModelExternalIdT&& value) { SetAssetModelExternalId(std::forward<AssetModelExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const { return m_assetModelName; }
    inline bool AssetModelNameHasBeenSet() const { return m_assetModelNameHasBeenSet; }
    template<typename AssetModelNameT = Aws::String>
    void SetAssetModelName(AssetModelNameT&& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = std::forward<AssetModelNameT>(value); }
    template<typename AssetModelNameT = Aws::String>
    UpdateAssetModelRequest& WithAssetModelName(AssetModelNameT&& value) { SetAssetModelName(std::forward<AssetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const { return m_assetModelDescription; }
    inline bool AssetModelDescriptionHasBeenSet() const { return m_assetModelDescriptionHasBeenSet; }
    template<typename AssetModelDescriptionT = Aws::String>
    void SetAssetModelDescription(AssetModelDescriptionT&& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = std::forward<AssetModelDescriptionT>(value); }
    template<typename AssetModelDescriptionT = Aws::String>
    UpdateAssetModelRequest& WithAssetModelDescription(AssetModelDescriptionT&& value) { SetAssetModelDescription(std::forward<AssetModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated property definitions of the asset model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelProperties() const { return m_assetModelProperties; }
    inline bool AssetModelPropertiesHasBeenSet() const { return m_assetModelPropertiesHasBeenSet; }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelProperty>>
    void SetAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::forward<AssetModelPropertiesT>(value); }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelProperty>>
    UpdateAssetModelRequest& WithAssetModelProperties(AssetModelPropertiesT&& value) { SetAssetModelProperties(std::forward<AssetModelPropertiesT>(value)); return *this;}
    template<typename AssetModelPropertiesT = AssetModelProperty>
    UpdateAssetModelRequest& AddAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.emplace_back(std::forward<AssetModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated hierarchy definitions of the asset model. Each hierarchy
     * specifies an asset model whose assets can be children of any other assets
     * created from this asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelHierarchy>& GetAssetModelHierarchies() const { return m_assetModelHierarchies; }
    inline bool AssetModelHierarchiesHasBeenSet() const { return m_assetModelHierarchiesHasBeenSet; }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchy>>
    void SetAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::forward<AssetModelHierarchiesT>(value); }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchy>>
    UpdateAssetModelRequest& WithAssetModelHierarchies(AssetModelHierarchiesT&& value) { SetAssetModelHierarchies(std::forward<AssetModelHierarchiesT>(value)); return *this;}
    template<typename AssetModelHierarchiesT = AssetModelHierarchy>
    UpdateAssetModelRequest& AddAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.emplace_back(std::forward<AssetModelHierarchiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-custom-composite-models.html">Creating
     * custom composite models (Components)</a> in the <i>IoT SiteWise User
     * Guide</i>.</p> 
     */
    inline const Aws::Vector<AssetModelCompositeModel>& GetAssetModelCompositeModels() const { return m_assetModelCompositeModels; }
    inline bool AssetModelCompositeModelsHasBeenSet() const { return m_assetModelCompositeModelsHasBeenSet; }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModel>>
    void SetAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = std::forward<AssetModelCompositeModelsT>(value); }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModel>>
    UpdateAssetModelRequest& WithAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { SetAssetModelCompositeModels(std::forward<AssetModelCompositeModelsT>(value)); return *this;}
    template<typename AssetModelCompositeModelsT = AssetModelCompositeModel>
    UpdateAssetModelRequest& AddAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.emplace_back(std::forward<AssetModelCompositeModelsT>(value)); return *this; }
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
    UpdateAssetModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    UpdateAssetModelRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
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
    UpdateAssetModelRequest& WithIfNoneMatch(IfNoneMatchT&& value) { SetIfNoneMatch(std::forward<IfNoneMatchT>(value)); return *this;}
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
    inline UpdateAssetModelRequest& WithMatchForVersionType(AssetModelVersionType value) { SetMatchForVersionType(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    Aws::String m_assetModelName;
    bool m_assetModelNameHasBeenSet = false;

    Aws::String m_assetModelDescription;
    bool m_assetModelDescriptionHasBeenSet = false;

    Aws::Vector<AssetModelProperty> m_assetModelProperties;
    bool m_assetModelPropertiesHasBeenSet = false;

    Aws::Vector<AssetModelHierarchy> m_assetModelHierarchies;
    bool m_assetModelHierarchiesHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModel> m_assetModelCompositeModels;
    bool m_assetModelCompositeModelsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
