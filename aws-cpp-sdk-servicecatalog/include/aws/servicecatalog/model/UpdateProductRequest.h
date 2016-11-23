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
#include <aws/servicecatalog/model/Tag.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateProductRequest : public ServiceCatalogRequest
  {
  public:
    UpdateProductRequest();
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
    inline UpdateProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdateProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdateProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline UpdateProductRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline UpdateProductRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the product for the update request.</p>
     */
    inline UpdateProductRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The updated product name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated product name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated product name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated product name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated product name.</p>
     */
    inline UpdateProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated product name.</p>
     */
    inline UpdateProductRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The updated product name.</p>
     */
    inline UpdateProductRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The updated owner of the product.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The updated owner of the product.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The updated owner of the product.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The updated owner of the product.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The updated owner of the product.</p>
     */
    inline UpdateProductRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The updated owner of the product.</p>
     */
    inline UpdateProductRequest& WithOwner(Aws::String&& value) { SetOwner(value); return *this;}

    /**
     * <p>The updated owner of the product.</p>
     */
    inline UpdateProductRequest& WithOwner(const char* value) { SetOwner(value); return *this;}

    /**
     * <p>The updated text description of the product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated text description of the product.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated text description of the product.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated text description of the product.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated text description of the product.</p>
     */
    inline UpdateProductRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated text description of the product.</p>
     */
    inline UpdateProductRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated text description of the product.</p>
     */
    inline UpdateProductRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = value; }

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline UpdateProductRequest& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline UpdateProductRequest& WithDistributor(Aws::String&& value) { SetDistributor(value); return *this;}

    /**
     * <p>The updated distributor of the product.</p>
     */
    inline UpdateProductRequest& WithDistributor(const char* value) { SetDistributor(value); return *this;}

    /**
     * <p>The updated support description for the product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }

    /**
     * <p>The updated support description for the product.</p>
     */
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }

    /**
     * <p>The updated support description for the product.</p>
     */
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }

    /**
     * <p>The updated support description for the product.</p>
     */
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }

    /**
     * <p>The updated support description for the product.</p>
     */
    inline UpdateProductRequest& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}

    /**
     * <p>The updated support description for the product.</p>
     */
    inline UpdateProductRequest& WithSupportDescription(Aws::String&& value) { SetSupportDescription(value); return *this;}

    /**
     * <p>The updated support description for the product.</p>
     */
    inline UpdateProductRequest& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}

    /**
     * <p>The updated support email for the product.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }

    /**
     * <p>The updated support email for the product.</p>
     */
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>The updated support email for the product.</p>
     */
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }

    /**
     * <p>The updated support email for the product.</p>
     */
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }

    /**
     * <p>The updated support email for the product.</p>
     */
    inline UpdateProductRequest& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>The updated support email for the product.</p>
     */
    inline UpdateProductRequest& WithSupportEmail(Aws::String&& value) { SetSupportEmail(value); return *this;}

    /**
     * <p>The updated support email for the product.</p>
     */
    inline UpdateProductRequest& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline UpdateProductRequest& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline UpdateProductRequest& WithSupportUrl(Aws::String&& value) { SetSupportUrl(value); return *this;}

    /**
     * <p>The updated support URL for the product.</p>
     */
    inline UpdateProductRequest& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline UpdateProductRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline UpdateProductRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline UpdateProductRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>Tags to add to the existing list of tags associated with the product.</p>
     */
    inline UpdateProductRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTags() const{ return m_removeTags; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline void SetRemoveTags(const Aws::Vector<Aws::String>& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline void SetRemoveTags(Aws::Vector<Aws::String>&& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline UpdateProductRequest& WithRemoveTags(const Aws::Vector<Aws::String>& value) { SetRemoveTags(value); return *this;}

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline UpdateProductRequest& WithRemoveTags(Aws::Vector<Aws::String>&& value) { SetRemoveTags(value); return *this;}

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline UpdateProductRequest& AddRemoveTags(const Aws::String& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline UpdateProductRequest& AddRemoveTags(Aws::String&& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * product.</p>
     */
    inline UpdateProductRequest& AddRemoveTags(const char* value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
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
    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet;
    Aws::Vector<Aws::String> m_removeTags;
    bool m_removeTagsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
