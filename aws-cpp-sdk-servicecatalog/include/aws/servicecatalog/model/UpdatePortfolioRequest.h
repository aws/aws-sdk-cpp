﻿/*
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
  class AWS_SERVICECATALOG_API UpdatePortfolioRequest : public ServiceCatalogRequest
  {
  public:
    UpdatePortfolioRequest();
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
    inline UpdatePortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdatePortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline UpdatePortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline UpdatePortfolioRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline UpdatePortfolioRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the portfolio for the update request.</p>
     */
    inline UpdatePortfolioRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline UpdatePortfolioRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline UpdatePortfolioRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline UpdatePortfolioRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated text description of the portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline UpdatePortfolioRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline UpdatePortfolioRequest& WithProviderName(Aws::String&& value) { SetProviderName(value); return *this;}

    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline UpdatePortfolioRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = value; }

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(value); return *this;}

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline UpdatePortfolioRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>Tags to add to the existing list of tags associated with the portfolio.</p>
     */
    inline UpdatePortfolioRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTags() const{ return m_removeTags; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline void SetRemoveTags(const Aws::Vector<Aws::String>& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline void SetRemoveTags(Aws::Vector<Aws::String>&& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithRemoveTags(const Aws::Vector<Aws::String>& value) { SetRemoveTags(value); return *this;}

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline UpdatePortfolioRequest& WithRemoveTags(Aws::Vector<Aws::String>&& value) { SetRemoveTags(value); return *this;}

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline UpdatePortfolioRequest& AddRemoveTags(const Aws::String& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline UpdatePortfolioRequest& AddRemoveTags(Aws::String&& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

    /**
     * <p>Tags to remove from the existing list of tags associated with the
     * portfolio.</p>
     */
    inline UpdatePortfolioRequest& AddRemoveTags(const char* value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;
    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet;
    Aws::Vector<Aws::String> m_removeTags;
    bool m_removeTagsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
