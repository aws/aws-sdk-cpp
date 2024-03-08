/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotsitewise/model/AssetModelType.h>
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
    AWS_IOTSITEWISE_API CreateAssetModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelName() const{ return m_assetModelName; }

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline bool AssetModelNameHasBeenSet() const { return m_assetModelNameHasBeenSet; }

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline void SetAssetModelName(const Aws::String& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = value; }

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline void SetAssetModelName(Aws::String&& value) { m_assetModelNameHasBeenSet = true; m_assetModelName = std::move(value); }

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline void SetAssetModelName(const char* value) { m_assetModelNameHasBeenSet = true; m_assetModelName.assign(value); }

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelName(const Aws::String& value) { SetAssetModelName(value); return *this;}

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelName(Aws::String&& value) { SetAssetModelName(std::move(value)); return *this;}

    /**
     * <p>A unique, friendly name for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelName(const char* value) { SetAssetModelName(value); return *this;}


    /**
     * <p>A description for the asset model.</p>
     */
    inline const Aws::String& GetAssetModelDescription() const{ return m_assetModelDescription; }

    /**
     * <p>A description for the asset model.</p>
     */
    inline bool AssetModelDescriptionHasBeenSet() const { return m_assetModelDescriptionHasBeenSet; }

    /**
     * <p>A description for the asset model.</p>
     */
    inline void SetAssetModelDescription(const Aws::String& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = value; }

    /**
     * <p>A description for the asset model.</p>
     */
    inline void SetAssetModelDescription(Aws::String&& value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription = std::move(value); }

    /**
     * <p>A description for the asset model.</p>
     */
    inline void SetAssetModelDescription(const char* value) { m_assetModelDescriptionHasBeenSet = true; m_assetModelDescription.assign(value); }

    /**
     * <p>A description for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelDescription(const Aws::String& value) { SetAssetModelDescription(value); return *this;}

    /**
     * <p>A description for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelDescription(Aws::String&& value) { SetAssetModelDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the asset model.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelDescription(const char* value) { SetAssetModelDescription(value); return *this;}


    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetAssetModelProperties() const{ return m_assetModelProperties; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool AssetModelPropertiesHasBeenSet() const { return m_assetModelPropertiesHasBeenSet; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = value; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::move(value); }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { SetAssetModelProperties(value); return *this;}

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { SetAssetModelProperties(std::move(value)); return *this;}

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelProperties(const AssetModelPropertyDefinition& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(value); return *this; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You can specify up
     * to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelProperties(AssetModelPropertyDefinition&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(std::move(value)); return *this; }


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
    inline const Aws::Vector<AssetModelHierarchyDefinition>& GetAssetModelHierarchies() const{ return m_assetModelHierarchies; }

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
    inline bool AssetModelHierarchiesHasBeenSet() const { return m_assetModelHierarchiesHasBeenSet; }

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
    inline void SetAssetModelHierarchies(const Aws::Vector<AssetModelHierarchyDefinition>& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = value; }

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
    inline void SetAssetModelHierarchies(Aws::Vector<AssetModelHierarchyDefinition>&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::move(value); }

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
    inline CreateAssetModelRequest& WithAssetModelHierarchies(const Aws::Vector<AssetModelHierarchyDefinition>& value) { SetAssetModelHierarchies(value); return *this;}

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
    inline CreateAssetModelRequest& WithAssetModelHierarchies(Aws::Vector<AssetModelHierarchyDefinition>&& value) { SetAssetModelHierarchies(std::move(value)); return *this;}

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
    inline CreateAssetModelRequest& AddAssetModelHierarchies(const AssetModelHierarchyDefinition& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(value); return *this; }

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
    inline CreateAssetModelRequest& AddAssetModelHierarchies(AssetModelHierarchyDefinition&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(std::move(value)); return *this; }


    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline const Aws::Vector<AssetModelCompositeModelDefinition>& GetAssetModelCompositeModels() const{ return m_assetModelCompositeModels; }

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline bool AssetModelCompositeModelsHasBeenSet() const { return m_assetModelCompositeModelsHasBeenSet; }

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline void SetAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModelDefinition>& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = value; }

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline void SetAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModelDefinition>&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels = std::move(value); }

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline CreateAssetModelRequest& WithAssetModelCompositeModels(const Aws::Vector<AssetModelCompositeModelDefinition>& value) { SetAssetModelCompositeModels(value); return *this;}

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline CreateAssetModelRequest& WithAssetModelCompositeModels(Aws::Vector<AssetModelCompositeModelDefinition>&& value) { SetAssetModelCompositeModels(std::move(value)); return *this;}

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline CreateAssetModelRequest& AddAssetModelCompositeModels(const AssetModelCompositeModelDefinition& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.push_back(value); return *this; }

    /**
     * <p>The composite models that are part of this asset model. It groups properties
     * (such as attributes, measurements, transforms, and metrics) and child composite
     * models that model parts of your industrial equipment. Each composite model has a
     * type that defines the properties that the composite model supports. Use
     * composite models to define alarms on this asset model.</p>  <p>When
     * creating custom composite models, you need to use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">CreateAssetModelCompositeModel</a>.
     * For more information, see &lt;LINK&gt;.</p> 
     */
    inline CreateAssetModelRequest& AddAssetModelCompositeModels(AssetModelCompositeModelDefinition&& value) { m_assetModelCompositeModelsHasBeenSet = true; m_assetModelCompositeModels.push_back(std::move(value)); return *this; }


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
    inline CreateAssetModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAssetModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAssetModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID to assign to the asset model, if desired. IoT SiteWise automatically
     * generates a unique ID for you, so this parameter is never required. However, if
     * you prefer to supply your own ID instead, you can specify it here in UUID
     * format. If you specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelExternalId() const{ return m_assetModelExternalId; }

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool AssetModelExternalIdHasBeenSet() const { return m_assetModelExternalIdHasBeenSet; }

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelExternalId(const Aws::String& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = value; }

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelExternalId(Aws::String&& value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId = std::move(value); }

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelExternalId(const char* value) { m_assetModelExternalIdHasBeenSet = true; m_assetModelExternalId.assign(value); }

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelExternalId(const Aws::String& value) { SetAssetModelExternalId(value); return *this;}

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelExternalId(Aws::String&& value) { SetAssetModelExternalId(std::move(value)); return *this;}

    /**
     * <p>An external ID to assign to the asset model. The external ID must be unique
     * within your Amazon Web Services account. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelExternalId(const char* value) { SetAssetModelExternalId(value); return *this;}


    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline const AssetModelType& GetAssetModelType() const{ return m_assetModelType; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline bool AssetModelTypeHasBeenSet() const { return m_assetModelTypeHasBeenSet; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(const AssetModelType& value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = value; }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline void SetAssetModelType(AssetModelType&& value) { m_assetModelTypeHasBeenSet = true; m_assetModelType = std::move(value); }

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline CreateAssetModelRequest& WithAssetModelType(const AssetModelType& value) { SetAssetModelType(value); return *this;}

    /**
     * <p>The type of asset model.</p> <ul> <li> <p> <b>ASSET_MODEL</b> – (default) An
     * asset model that you can use to create assets. Can't be included as a component
     * in another asset model.</p> </li> <li> <p> <b>COMPONENT_MODEL</b> – A reusable
     * component that you can include in the composite models of other asset models.
     * You can't create assets directly from this type of asset model. </p> </li> </ul>
     */
    inline CreateAssetModelRequest& WithAssetModelType(AssetModelType&& value) { SetAssetModelType(std::move(value)); return *this;}

  private:

    Aws::String m_assetModelName;
    bool m_assetModelNameHasBeenSet = false;

    Aws::String m_assetModelDescription;
    bool m_assetModelDescriptionHasBeenSet = false;

    Aws::Vector<AssetModelPropertyDefinition> m_assetModelProperties;
    bool m_assetModelPropertiesHasBeenSet = false;

    Aws::Vector<AssetModelHierarchyDefinition> m_assetModelHierarchies;
    bool m_assetModelHierarchiesHasBeenSet = false;

    Aws::Vector<AssetModelCompositeModelDefinition> m_assetModelCompositeModels;
    bool m_assetModelCompositeModelsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelExternalId;
    bool m_assetModelExternalIdHasBeenSet = false;

    AssetModelType m_assetModelType;
    bool m_assetModelTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
