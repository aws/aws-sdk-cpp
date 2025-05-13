/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotsitewise/model/AssetModelPropertyDefinition.h>
#include <aws/iotsitewise/model/AssetModelHierarchyDefinition.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelDefinition.h>
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
  class CreateAssetModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateAssetModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique name for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const { return m_assetModelName; }
    inline bool AssetModelNameHasBeenSet() const { return m_assetModelNameHasBeenSet; }
    template<typename AssetModelNameT = Aws::String>
    void SetAssetModelName(AssetModelNameT&& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = std::forward<AssetModelNameT>(value); }
    template<typename AssetModelNameT = Aws::String>
    CreateAssetModelRequest& WithAssetModelName(AssetModelNameT&& value) { SetAssetModelName(std::forward<AssetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline AssetModelType GetAssetModelType() const { return m_assetModelType; }
    inline bool AssetModelTypeHasBeenSet() const { return m_assetModelTypeHasBeenSet; }
    inline void SetAssetModelType(AssetModelType value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = value; }
    inline CreateAssetModelRequest& WithAssetModelType(AssetModelType value) { SetAssetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    CreateAssetModelRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const { return m_assetModelExternalId; }
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }
    template<typename AssetModelExternalIdT = Aws::String>
    void SetAssetModelExternalId(AssetModelExternalIdT&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::forward<AssetModelExternalIdT>(value); }
    template<typename AssetModelExternalIdT = Aws::String>
    CreateAssetModelRequest& WithAssetModelExternalId(AssetModelExternalIdT&& value) { SetAssetModelExternalId(std::forward<AssetModelExternalIdT>(value)); return *this;}
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
    CreateAssetModelRequest& WithAssetModelDescription(AssetModelDescriptionT&& value) { SetAssetModelDescription(std::forward<AssetModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetAssetModelProperties() const { return m_assetModelProperties; }
    inline bool AssetModelPropertiesHasBeenSet() const { return m_assetModelPropertiesHasBeenSet; }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelPropertyDefinition>>
    void SetAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::forward<AssetModelPropertiesT>(value); }
    template<typename AssetModelPropertiesT = Aws::Vector<AssetModelPropertyDefinition>>
    CreateAssetModelRequest& WithAssetModelProperties(AssetModelPropertiesT&& value) { SetAssetModelProperties(std::forward<AssetModelPropertiesT>(value)); return *this;}
    template<typename AssetModelPropertiesT = AssetModelPropertyDefinition>
    CreateAssetModelRequest& AddAssetModelProperties(AssetModelPropertiesT&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.emplace_back(std::forward<AssetModelPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelHierarchyDefinition>& GetAssetModelHierarchies() const { return m_assetModelHierarchies; }
    inline bool AssetModelHierarchiesHasBeenSet() const { return m_assetModelHierarchiesHasBeenSet; }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchyDefinition>>
    void SetAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::forward<AssetModelHierarchiesT>(value); }
    template<typename AssetModelHierarchiesT = Aws::Vector<AssetModelHierarchyDefinition>>
    CreateAssetModelRequest& WithAssetModelHierarchies(AssetModelHierarchiesT&& value) { SetAssetModelHierarchies(std::forward<AssetModelHierarchiesT>(value)); return *this;}
    template<typename AssetModelHierarchiesT = AssetModelHierarchyDefinition>
    CreateAssetModelRequest& AddAssetModelHierarchies(AssetModelHierarchiesT&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.emplace_back(std::forward<AssetModelHierarchiesT>(value)); return *this; }
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
    inline const Aws::Vector<AssetModelCompositeModelDefinition>& GetAssetModelCompositeModels() const { return m_assetModelCompositeModels; }
    inline bool AssetModelCompositeModelsHasBeenSet() const { return m_assetModelCompositeModelsHasBeenSet; }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModelDefinition>>
    void SetAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = std::forward<AssetModelCompositeModelsT>(value); }
    template<typename AssetModelCompositeModelsT = Aws::Vector<AssetModelCompositeModelDefinition>>
    CreateAssetModelRequest& WithAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { SetAssetModelCompositeModels(std::forward<AssetModelCompositeModelsT>(value)); return *this;}
    template<typename AssetModelCompositeModelsT = AssetModelCompositeModelDefinition>
    CreateAssetModelRequest& AddAssetModelCompositeModels(AssetModelCompositeModelsT&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.emplace_back(std::forward<AssetModelCompositeModelsT>(value)); return *this; }
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
    CreateAssetModelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAssetModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAssetModelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_assetModelName;
    bool m_assetModelNameHasBeenSet = false;

    AssetModelType m_assetModelType{AssetModelType::NOT_SET};
    bool m_assetModelTypeHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    Aws::String m_assetModelDescription;
    bool m_assetModelDescriptionHasBeenSet = false;

    Aws::Vector<AssetModelPropertyDefinition> m_assetModelProperties;
    bool m_assetModelPropertiesHasBeenSet = false;

    Aws::Vector<AssetModelHierarchyDefinition> m_assetModelHierarchies;
    bool m_assetModelHierarchiesHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModelDefinition> m_assetModelCompositeModels;
    bool m_assetModelCompositeModelsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
