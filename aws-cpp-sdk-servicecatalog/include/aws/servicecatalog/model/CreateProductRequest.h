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
#include <aws/servicecatalog/model/ProductType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifactProperties.h>
#include <aws/servicecatalog/model/Tag.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API CreateProductRequest : public ServiceCatalogRequest
  {
  public:
    CreateProductRequest();
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
    inline CreateProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline CreateProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline CreateProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the product.</p>
     */
    inline CreateProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline CreateProductRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline CreateProductRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The owner of the product.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the product.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the product.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the product.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the product.</p>
     */
    inline CreateProductRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the product.</p>
     */
    inline CreateProductRequest& WithOwner(Aws::String&& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the product.</p>
     */
    inline CreateProductRequest& WithOwner(const char* value) { SetOwner(value); return *this;}

    /**
     * <p>The text description of the product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the product.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the product.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the product.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the product.</p>
     */
    inline CreateProductRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the product.</p>
     */
    inline CreateProductRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the product.</p>
     */
    inline CreateProductRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The distributor of the product.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }

    /**
     * <p>The distributor of the product.</p>
     */
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }

    /**
     * <p>The distributor of the product.</p>
     */
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = value; }

    /**
     * <p>The distributor of the product.</p>
     */
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }

    /**
     * <p>The distributor of the product.</p>
     */
    inline CreateProductRequest& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}

    /**
     * <p>The distributor of the product.</p>
     */
    inline CreateProductRequest& WithDistributor(Aws::String&& value) { SetDistributor(value); return *this;}

    /**
     * <p>The distributor of the product.</p>
     */
    inline CreateProductRequest& WithDistributor(const char* value) { SetDistributor(value); return *this;}

    /**
     * <p>Support information about the product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }

    /**
     * <p>Support information about the product.</p>
     */
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }

    /**
     * <p>Support information about the product.</p>
     */
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }

    /**
     * <p>Support information about the product.</p>
     */
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }

    /**
     * <p>Support information about the product.</p>
     */
    inline CreateProductRequest& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}

    /**
     * <p>Support information about the product.</p>
     */
    inline CreateProductRequest& WithSupportDescription(Aws::String&& value) { SetSupportDescription(value); return *this;}

    /**
     * <p>Support information about the product.</p>
     */
    inline CreateProductRequest& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}

    /**
     * <p>Contact email for product support.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }

    /**
     * <p>Contact email for product support.</p>
     */
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>Contact email for product support.</p>
     */
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>Contact email for product support.</p>
     */
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }

    /**
     * <p>Contact email for product support.</p>
     */
    inline CreateProductRequest& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>Contact email for product support.</p>
     */
    inline CreateProductRequest& WithSupportEmail(Aws::String&& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>Contact email for product support.</p>
     */
    inline CreateProductRequest& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}

    /**
     * <p>Contact URL for product support.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }

    /**
     * <p>Contact URL for product support.</p>
     */
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }

    /**
     * <p>Contact URL for product support.</p>
     */
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }

    /**
     * <p>Contact URL for product support.</p>
     */
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }

    /**
     * <p>Contact URL for product support.</p>
     */
    inline CreateProductRequest& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}

    /**
     * <p>Contact URL for product support.</p>
     */
    inline CreateProductRequest& WithSupportUrl(Aws::String&& value) { SetSupportUrl(value); return *this;}

    /**
     * <p>Contact URL for product support.</p>
     */
    inline CreateProductRequest& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}

    /**
     * <p>The type of the product to create.</p>
     */
    inline const ProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The type of the product to create.</p>
     */
    inline void SetProductType(const ProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The type of the product to create.</p>
     */
    inline void SetProductType(ProductType&& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The type of the product to create.</p>
     */
    inline CreateProductRequest& WithProductType(const ProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The type of the product to create.</p>
     */
    inline CreateProductRequest& WithProductType(ProductType&& value) { SetProductType(value); return *this;}

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline CreateProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline CreateProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline CreateProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associate with the new product.</p>
     */
    inline CreateProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Parameters for the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactProperties& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }

    /**
     * <p>Parameters for the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactParameters(const ProvisioningArtifactProperties& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = value; }

    /**
     * <p>Parameters for the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactParameters(ProvisioningArtifactProperties&& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = value; }

    /**
     * <p>Parameters for the provisioning artifact.</p>
     */
    inline CreateProductRequest& WithProvisioningArtifactParameters(const ProvisioningArtifactProperties& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>Parameters for the provisioning artifact.</p>
     */
    inline CreateProductRequest& WithProvisioningArtifactParameters(ProvisioningArtifactProperties&& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProductRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProductRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProductRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_owner;
    bool m_ownerHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_distributor;
    bool m_distributorHasBeenSet;
    Aws::String m_supportDescription;
    bool m_supportDescriptionHasBeenSet;
    Aws::String m_supportEmail;
    bool m_supportEmailHasBeenSet;
    Aws::String m_supportUrl;
    bool m_supportUrlHasBeenSet;
    ProductType m_productType;
    bool m_productTypeHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    ProvisioningArtifactProperties m_provisioningArtifactParameters;
    bool m_provisioningArtifactParametersHasBeenSet;
    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
