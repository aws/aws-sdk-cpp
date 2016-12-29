/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    UpdateProvisionedProductRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The updated name of the ProvisionedProduct object . You must specify either
     * <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to update. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(Aws::String&& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path to use in the updated ProvisionedProduct object.
     * This value is optional if the product has a default path, and is required if
     * there is more than one path for the specified product.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(const UpdateProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>ProvisioningParameter</code> objects used to update the
     * ProvisionedProduct object.</p>
     */
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(UpdateProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline UpdateProvisionedProductRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline UpdateProvisionedProductRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline UpdateProvisionedProductRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet;
    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet;
    Aws::String m_productId;
    bool m_productIdHasBeenSet;
    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;
    Aws::String m_pathId;
    bool m_pathIdHasBeenSet;
    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet;
    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
