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
#include <aws/iotsitewise/model/AssetModelPropertyDefinition.h>
#include <aws/iotsitewise/model/AssetModelHierarchyDefinition.h>
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
  class AWS_IOTSITEWISE_API CreateAssetModelRequest : public IoTSiteWiseRequest
  {
  public:
    CreateAssetModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetModel"; }

    Aws::String SerializePayload() const override;


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
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetAssetModelProperties() const{ return m_assetModelProperties; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool AssetModelPropertiesHasBeenSet() const { return m_assetModelPropertiesHasBeenSet; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = value; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties = std::move(value); }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { SetAssetModelProperties(value); return *this;}

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { SetAssetModelProperties(std::move(value)); return *this;}

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelProperties(const AssetModelPropertyDefinition& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(value); return *this; }

    /**
     * <p>The property definitions of the asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html">Asset
     * properties</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can specify
     * up to 200 properties per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelProperties(AssetModelPropertyDefinition&& value) { m_assetModelPropertiesHasBeenSet = true; m_assetModelProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelHierarchyDefinition>& GetAssetModelHierarchies() const{ return m_assetModelHierarchies; }

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool AssetModelHierarchiesHasBeenSet() const { return m_assetModelHierarchiesHasBeenSet; }

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelHierarchies(const Aws::Vector<AssetModelHierarchyDefinition>& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = value; }

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelHierarchies(Aws::Vector<AssetModelHierarchyDefinition>&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies = std::move(value); }

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelHierarchies(const Aws::Vector<AssetModelHierarchyDefinition>& value) { SetAssetModelHierarchies(value); return *this;}

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithAssetModelHierarchies(Aws::Vector<AssetModelHierarchyDefinition>&& value) { SetAssetModelHierarchies(std::move(value)); return *this;}

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelHierarchies(const AssetModelHierarchyDefinition& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(value); return *this; }

    /**
     * <p>The hierarchy definitions of the asset model. Each hierarchy specifies an
     * asset model whose assets can be children of any other assets created from this
     * asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>AWS IoT SiteWise User Guide</i>.</p> <p>You can
     * specify up to 10 hierarchies per asset model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddAssetModelHierarchies(AssetModelHierarchyDefinition&& value) { m_assetModelHierarchiesHasBeenSet = true; m_assetModelHierarchies.push_back(std::move(value)); return *this; }


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
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the asset model. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your AWS IoT SiteWise resources</a> in the <i>AWS IoT SiteWise User
     * Guide</i>.</p>
     */
    inline CreateAssetModelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_assetModelName;
    bool m_assetModelNameHasBeenSet;

    Aws::String m_assetModelDescription;
    bool m_assetModelDescriptionHasBeenSet;

    Aws::Vector<AssetModelPropertyDefinition> m_assetModelProperties;
    bool m_assetModelPropertiesHasBeenSet;

    Aws::Vector<AssetModelHierarchyDefinition> m_assetModelHierarchies;
    bool m_assetModelHierarchiesHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
