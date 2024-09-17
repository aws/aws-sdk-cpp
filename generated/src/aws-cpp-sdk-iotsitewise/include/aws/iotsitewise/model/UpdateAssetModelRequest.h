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
    AWS_IOTSITEWISE_API UpdateAssetModelRequest();

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
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline UpdateAssetModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model. The asset model must not already
     * have an external ID. The external ID must be unique within your Amazon Web
     * Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const{ return m_assetModelExternalId; }
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }
    inline void SetAssetModelExternalId(const Aws::String& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = value; }
    inline void SetAssetModelExternalId(Aws::String&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::move(value); }
    inline void SetAssetModelExternalId(const char* value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId.assign(value); }
    inline UpdateAssetModelRequest& WithAssetModelExternalId(const Aws::String& value) { SetAssetModelExternalId(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelExternalId(Aws::String&& value) { SetAssetModelExternalId(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelExternalId(const char* value) { SetAssetModelExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const{ return m_assetModelName; }
    inline bool AssetModelNameHasBeenSet() const { return m_assetModelNameHasBeenSet; }
    inline void SetAssetModelName(const Aws::String& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = value; }
    inline void SetAssetModelName(Aws::String&& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = std::move(value); }
    inline void SetAssetModelName(const char* value) { m_assetModelNameHasBeenSet = true; m_assetModelName.assign(value); }
    inline UpdateAssetModelRequest& WithAssetModelName(const Aws::String& value) { SetAssetModelName(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelName(Aws::String&& value) { SetAssetModelName(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelName(const char* value) { SetAssetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const{ return m_assetModelDescription; }
    inline bool AssetModelDescriptionHasBeenSet() const { return m_assetModelDescriptionHasBeenSet; }
    inline void SetAssetModelDescription(const Aws::String& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = value; }
    inline void SetAssetModelDescription(Aws::String&& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = std::move(value); }
    inline void SetAssetModelDescription(const char* value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription.assign(value); }
    inline UpdateAssetModelRequest& WithAssetModelDescription(const Aws::String& value) { SetAssetModelDescription(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelDescription(Aws::String&& value) { SetAssetModelDescription(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelDescription(const char* value) { SetAssetModelDescription(value); return *this;}
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
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelProperties() const{ return m_assetModelProperties; }
    inline bool AssetModelPropertiesHasBeenSet() const { return m_assetModelPropertiesHasBeenSet; }
    inline void SetAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = value; }
    inline void SetAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::move(value); }
    inline UpdateAssetModelRequest& WithAssetModelProperties(const Aws::Vector<AssetModelProperty>& value) { SetAssetModelProperties(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelProperties(Aws::Vector<AssetModelProperty>&& value) { SetAssetModelProperties(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& AddAssetModelProperties(const AssetModelProperty& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(value); return *this; }
    inline UpdateAssetModelRequest& AddAssetModelProperties(AssetModelProperty&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<AssetModelHierarchy>& GetAssetModelHierarchies() const{ return m_assetModelHierarchies; }
    inline bool AssetModelHierarchiesHasBeenSet() const { return m_assetModelHierarchiesHasBeenSet; }
    inline void SetAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = value; }
    inline void SetAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::move(value); }
    inline UpdateAssetModelRequest& WithAssetModelHierarchies(const Aws::Vector<AssetModelHierarchy>& value) { SetAssetModelHierarchies(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelHierarchies(Aws::Vector<AssetModelHierarchy>&& value) { SetAssetModelHierarchies(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& AddAssetModelHierarchies(const AssetModelHierarchy& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(value); return *this; }
    inline UpdateAssetModelRequest& AddAssetModelHierarchies(AssetModelHierarchy&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<AssetModelCompositeModel>& GetAssetModelCompositeModels() const{ return m_assetModelCompositeModels; }
    inline bool AssetModelCompositeModelsHasBeenSet() const { return m_assetModelCompositeModelsHasBeenSet; }
    inline void SetAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = value; }
    inline void SetAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = std::move(value); }
    inline UpdateAssetModelRequest& WithAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModel>& value) { SetAssetModelCompositeModels(value); return *this;}
    inline UpdateAssetModelRequest& WithAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModel>&& value) { SetAssetModelCompositeModels(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& AddAssetModelCompositeModels(const AssetModelCompositeModel& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.push_back(value); return *this; }
    inline UpdateAssetModelRequest& AddAssetModelCompositeModels(AssetModelCompositeModel&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.push_back(std::move(value)); return *this; }
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
    inline UpdateAssetModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateAssetModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline UpdateAssetModelRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline UpdateAssetModelRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepts <b>*</b> to reject the update request if an active version (specified
     * using <code>matchForVersionType</code> as <code>ACTIVE</code>) already exists
     * for the asset model.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const{ return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    inline void SetIfNoneMatch(const Aws::String& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = value; }
    inline void SetIfNoneMatch(Aws::String&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::move(value); }
    inline void SetIfNoneMatch(const char* value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch.assign(value); }
    inline UpdateAssetModelRequest& WithIfNoneMatch(const Aws::String& value) { SetIfNoneMatch(value); return *this;}
    inline UpdateAssetModelRequest& WithIfNoneMatch(Aws::String&& value) { SetIfNoneMatch(std::move(value)); return *this;}
    inline UpdateAssetModelRequest& WithIfNoneMatch(const char* value) { SetIfNoneMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the asset model version type (<code>LATEST</code> or
     * <code>ACTIVE</code>) used in conjunction with <code>If-Match</code> or
     * <code>If-None-Match</code> headers to determine the target ETag for the update
     * operation.</p>
     */
    inline const AssetModelVersionType& GetMatchForVersionType() const{ return m_matchForVersionType; }
    inline bool MatchForVersionTypeHasBeenSet() const { return m_matchForVersionTypeHasBeenSet; }
    inline void SetMatchForVersionType(const AssetModelVersionType& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = value; }
    inline void SetMatchForVersionType(AssetModelVersionType&& value) { m_matchForVersionTypeHasBeenSet = true; m_matchForVersionType = std::move(value); }
    inline UpdateAssetModelRequest& WithMatchForVersionType(const AssetModelVersionType& value) { SetMatchForVersionType(value); return *this;}
    inline UpdateAssetModelRequest& WithMatchForVersionType(AssetModelVersionType&& value) { SetMatchForVersionType(std::move(value)); return *this;}
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
