﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IOTSITEWISE_API UpdateAssetModelCompositeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssetModelCompositeModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An external ID to assign to the asset model. You can only set the external ID
     * of the asset model if it wasn't set when it was created, or you're setting it to
     * the exact same thing as when it was created.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelExternalId() const{ return m_assetModelCompositeModelExternalId; }
    inline bool AssetModelCompositeModelExternalIdHasBeenSet() const { return m_assetModelCompositeModelExternalIdHasBeenSet; }
    inline void SetAssetModelCompositeModelExternalId(const Aws::String& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = value; }
    inline void SetAssetModelCompositeModelExternalId(Aws::String&& value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId = std::move(value); }
    inline void SetAssetModelCompositeModelExternalId(const char* value) { m_assetModelCompositeModelExternalIdHasBeenSet = true; m_assetModelCompositeModelExternalId.assign(value); }
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const Aws::String& value) { SetAssetModelCompositeModelExternalId(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(Aws::String&& value) { SetAssetModelCompositeModelExternalId(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelExternalId(const char* value) { SetAssetModelCompositeModelExternalId(value); return *this;}
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
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const Aws::String& value) { SetAssetModelCompositeModelDescription(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(Aws::String&& value) { SetAssetModelCompositeModelDescription(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelDescription(const char* value) { SetAssetModelCompositeModelDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, friendly name for the composite model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelName() const{ return m_assetModelCompositeModelName; }
    inline bool AssetModelCompositeModelNameHasBeenSet() const { return m_assetModelCompositeModelNameHasBeenSet; }
    inline void SetAssetModelCompositeModelName(const Aws::String& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = value; }
    inline void SetAssetModelCompositeModelName(Aws::String&& value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName = std::move(value); }
    inline void SetAssetModelCompositeModelName(const char* value) { m_assetModelCompositeModelNameHasBeenSet = true; m_assetModelCompositeModelName.assign(value); }
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const Aws::String& value) { SetAssetModelCompositeModelName(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(Aws::String&& value) { SetAssetModelCompositeModelName(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelName(const char* value) { SetAssetModelCompositeModelName(value); return *this;}
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
    inline UpdateAssetModelCompositeModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property definitions of the composite model. For more information, see
     * &lt;LINK&gt;.</p> <p>You can specify up to 200 properties per composite model.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<AssetModelProperty>& GetAssetModelCompositeModelProperties() const{ return m_assetModelCompositeModelProperties; }
    inline bool AssetModelCompositeModelPropertiesHasBeenSet() const { return m_assetModelCompositeModelPropertiesHasBeenSet; }
    inline void SetAssetModelCompositeModelProperties(const Aws::Vector<AssetModelProperty>& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = value; }
    inline void SetAssetModelCompositeModelProperties(Aws::Vector<AssetModelProperty>&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties = std::move(value); }
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(const Aws::Vector<AssetModelProperty>& value) { SetAssetModelCompositeModelProperties(value); return *this;}
    inline UpdateAssetModelCompositeModelRequest& WithAssetModelCompositeModelProperties(Aws::Vector<AssetModelProperty>&& value) { SetAssetModelCompositeModelProperties(std::move(value)); return *this;}
    inline UpdateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(const AssetModelProperty& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(value); return *this; }
    inline UpdateAssetModelCompositeModelRequest& AddAssetModelCompositeModelProperties(AssetModelProperty&& value) { m_assetModelCompositeModelPropertiesHasBeenSet = true; m_assetModelCompositeModelProperties.push_back(std::move(value)); return *this; }
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<AssetModelProperty> m_assetModelCompositeModelProperties;
    bool m_assetModelCompositeModelPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
