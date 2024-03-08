/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model this composite model is a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline const Aws::String& GetParentAssetModelCompositeModelId() const{ return m_parentAssetModelCompositeModelId; }

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline bool ParentAssetModelCompositeModelIdHasBeenSet() const { return m_parentAssetModelCompositeModelIdHasBeenSet; }

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline void SetParentAssetModelCompositeModelId(const Aws::String& value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId = value; }

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline void SetParentAssetModelCompositeModelId(Aws::String&& value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId = std::move(value); }

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline void SetParentAssetModelCompositeModelId(const char* value) { m_parentAssetModelCompositeModelIdHasBeenSet = true; m_parentAssetModelCompositeModelId.assign(value); }

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(const Aws::String& value) { SetParentAssetModelCompositeModelId(value); return *this;}

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(Aws::String&& value) { SetParentAssetModelCompositeModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent composite model in this asset model relationship.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithParentAssetModelCompositeModelId(const char* value) { SetParentAssetModelCompositeModelId(value); return *this;}


    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const{ return m_assetModelCompositeModelExternalId; }

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline bool AssetModelCompositeModelExternalIdHasBeenSet() const { return m_assetModelCompositeModelExternalIdHasBeenSet; }

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline void SetAssetModelCompositeModelExternalId(const Aws::String& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = value; }

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline void SetAssetModelCompositeModelExternalId(Aws::String&& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = std::move(value); }

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline void SetAssetModelCompositeModelExternalId(const char* value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId.assign(value); }

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const Aws::String& value) { SetAssetModelCompositeModelExternalId(value); return *this;}

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(Aws::String&& value) { SetAssetModelCompositeModelExternalId(std::move(value)); return *this;}

    /**
     * <p>An external ID to assign to the composite model.</p> <p>If the composite
     * model is a derived composite model, or one nested inside a component model, you
     * can only set the external ID using <code>UpdateAssetModelCompositeModel</code>
     * and specifying the derived ID of the model or property from the created model
     * it's a part of.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const char* value) { SetAssetModelCompositeModelExternalId(value); return *this;}


    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the composite model. IoT SiteWise automatically generates a unique
     * ID for you, so this parameter is never required. However, if you prefer to
     * supply your own ID instead, you can specify it here in UUID format. If you
     * specify your own ID, it must be globally unique.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}


    /**
     * <p>A description for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelDescription() const{ return m_assetModelCompositeModelDescription; }

    /**
     * <p>A description for the composite model.</p>
     */
    inline bool AssetModelCompositeModelDescriptionHasBeenSet() const { return m_assetModelCompositeModelDescriptionHasBeenSet; }

    /**
     * <p>A description for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelDescription(const Aws::String& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = value; }

    /**
     * <p>A description for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelDescription(Aws::String&& value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription = std::move(value); }

    /**
     * <p>A description for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelDescription(const char* value) { m_assetModelCompositeModelDescriptionHasBeenSet = true; m_assetModelCompositeModelDescription.assign(value); }

    /**
     * <p>A description for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const Aws::String& value) { SetAssetModelCompositeModelDescription(value); return *this;}

    /**
     * <p>A description for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(Aws::String&& value) { SetAssetModelCompositeModelDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const char* value) { SetAssetModelCompositeModelDescription(value); return *this;}


    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const{ return m_assetModelCompositeModelName; }

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline bool AssetModelCompositeModelNameHasBeenSet() const { return m_assetModelCompositeModelNameHasBeenSet; }

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelName(const Aws::String& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = value; }

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelName(Aws::String&& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = std::move(value); }

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline void SetAssetModelCompositeModelName(const char* value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName.assign(value); }

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const Aws::String& value) { SetAssetModelCompositeModelName(value); return *this;}

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(Aws::String&& value) { SetAssetModelCompositeModelName(std::move(value)); return *this;}

    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const char* value) { SetAssetModelCompositeModelName(value); return *this;}


    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const{ return m_assetModelCompositeModelType; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline bool AssetModelCompositeModelTypeHasBeenSet() const { return m_assetModelCompositeModelTypeHasBeenSet; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(const Aws::String& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = value; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(Aws::String&& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = std::move(value); }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(const char* value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType.assign(value); }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(const Aws::String& value) { SetAssetModelCompositeModelType(value); return *this;}

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(Aws::String&& value) { SetAssetModelCompositeModelType(std::move(value)); return *this;}

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelType(const char* value) { SetAssetModelCompositeModelType(value); return *this;}


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
    inline CreateAssetModelCompositeModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline const Aws::String& GetComposedAssetModelId() const{ return m_composedAssetModelId; }

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline bool ComposedAssetModelIdHasBeenSet() const { return m_composedAssetModelIdHasBeenSet; }

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline void SetComposedAssetModelId(const Aws::String& value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId = value; }

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline void SetComposedAssetModelId(Aws::String&& value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId = std::move(value); }

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline void SetComposedAssetModelId(const char* value) { m_composedAssetModelIdHasBeenSet = true; m_composedAssetModelId.assign(value); }

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(const Aws::String& value) { SetComposedAssetModelId(value); return *this;}

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(Aws::String&& value) { SetComposedAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of a composite model on this asset.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithComposedAssetModelId(const char* value) { SetComposedAssetModelId(value); return *this;}


    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelPropertyDefinition>& GetAssetModelCompositeModelProperties() const{ return m_assetModelCompositeModelProperties; }

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool AssetModelCompositeModelPropertiesHasBeenSet() const { return m_assetModelCompositeModelPropertiesHasBeenSet; }

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelCompositeModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = value; }

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetAssetModelCompositeModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = std::move(value); }

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(const Aws::Vector<AssetModelPropertyDefinition>& value) { SetAssetModelCompositeModelProperties(value); return *this;}

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(Aws::Vector<AssetModelPropertyDefinition>&& value) { SetAssetModelCompositeModelProperties(std::move(value)); return *this;}

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(const AssetModelPropertyDefinition& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(value); return *this; }

    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline CreateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(AssetModelPropertyDefinition&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_parentAssetModelCompositeModelId;
    bool m_parentAssetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelExternalId;
    bool m_assetModelCompositeModelExternalIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
