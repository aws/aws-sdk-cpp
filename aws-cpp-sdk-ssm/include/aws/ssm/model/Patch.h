/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Represents metadata about a patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Patch">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API Patch
  {
  public:
    Patch();
    Patch(Aws::Utils::Json::JsonView jsonValue);
    Patch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline Patch& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline Patch& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch (this is different than the Microsoft Knowledge Base
     * ID).</p>
     */
    inline Patch& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date the patch was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline void SetReleaseDate(const Aws::Utils::DateTime& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline void SetReleaseDate(Aws::Utils::DateTime&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>The date the patch was released.</p>
     */
    inline Patch& WithReleaseDate(const Aws::Utils::DateTime& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>The date the patch was released.</p>
     */
    inline Patch& WithReleaseDate(Aws::Utils::DateTime&& value) { SetReleaseDate(std::move(value)); return *this;}


    /**
     * <p>The title of the patch.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the patch.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The description of the patch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the patch.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline const Aws::String& GetContentUrl() const{ return m_contentUrl; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline bool ContentUrlHasBeenSet() const { return m_contentUrlHasBeenSet; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(const Aws::String& value) { m_contentUrlHasBeenSet = true; m_contentUrl = value; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(Aws::String&& value) { m_contentUrlHasBeenSet = true; m_contentUrl = std::move(value); }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(const char* value) { m_contentUrlHasBeenSet = true; m_contentUrl.assign(value); }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(const Aws::String& value) { SetContentUrl(value); return *this;}

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(Aws::String&& value) { SetContentUrl(std::move(value)); return *this;}

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(const char* value) { SetContentUrl(value); return *this;}


    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline const Aws::String& GetProductFamily() const{ return m_productFamily; }

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline bool ProductFamilyHasBeenSet() const { return m_productFamilyHasBeenSet; }

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline void SetProductFamily(const Aws::String& value) { m_productFamilyHasBeenSet = true; m_productFamily = value; }

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline void SetProductFamily(Aws::String&& value) { m_productFamilyHasBeenSet = true; m_productFamily = std::move(value); }

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline void SetProductFamily(const char* value) { m_productFamilyHasBeenSet = true; m_productFamily.assign(value); }

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline Patch& WithProductFamily(const Aws::String& value) { SetProductFamily(value); return *this;}

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline Patch& WithProductFamily(Aws::String&& value) { SetProductFamily(std::move(value)); return *this;}

    /**
     * <p>The product family the patch is applicable for (for example, Windows).</p>
     */
    inline Patch& WithProductFamily(const char* value) { SetProductFamily(value); return *this;}


    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline Patch& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline Patch& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The specific product the patch is applicable for (for example,
     * WindowsServer2016).</p>
     */
    inline Patch& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline Patch& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline Patch& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline Patch& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline const Aws::String& GetMsrcSeverity() const{ return m_msrcSeverity; }

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline bool MsrcSeverityHasBeenSet() const { return m_msrcSeverityHasBeenSet; }

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline void SetMsrcSeverity(const Aws::String& value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity = value; }

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline void SetMsrcSeverity(Aws::String&& value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity = std::move(value); }

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline void SetMsrcSeverity(const char* value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity.assign(value); }

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline Patch& WithMsrcSeverity(const Aws::String& value) { SetMsrcSeverity(value); return *this;}

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline Patch& WithMsrcSeverity(Aws::String&& value) { SetMsrcSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity of the patch (for example Critical, Important, Moderate).</p>
     */
    inline Patch& WithMsrcSeverity(const char* value) { SetMsrcSeverity(value); return *this;}


    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline const Aws::String& GetKbNumber() const{ return m_kbNumber; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline bool KbNumberHasBeenSet() const { return m_kbNumberHasBeenSet; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKbNumber(const Aws::String& value) { m_kbNumberHasBeenSet = true; m_kbNumber = value; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKbNumber(Aws::String&& value) { m_kbNumberHasBeenSet = true; m_kbNumber = std::move(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKbNumber(const char* value) { m_kbNumberHasBeenSet = true; m_kbNumber.assign(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline Patch& WithKbNumber(const Aws::String& value) { SetKbNumber(value); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline Patch& WithKbNumber(Aws::String&& value) { SetKbNumber(std::move(value)); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline Patch& WithKbNumber(const char* value) { SetKbNumber(value); return *this;}


    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline const Aws::String& GetMsrcNumber() const{ return m_msrcNumber; }

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline bool MsrcNumberHasBeenSet() const { return m_msrcNumberHasBeenSet; }

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline void SetMsrcNumber(const Aws::String& value) { m_msrcNumberHasBeenSet = true; m_msrcNumber = value; }

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline void SetMsrcNumber(Aws::String&& value) { m_msrcNumberHasBeenSet = true; m_msrcNumber = std::move(value); }

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline void SetMsrcNumber(const char* value) { m_msrcNumberHasBeenSet = true; m_msrcNumber.assign(value); }

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline Patch& WithMsrcNumber(const Aws::String& value) { SetMsrcNumber(value); return *this;}

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline Patch& WithMsrcNumber(Aws::String&& value) { SetMsrcNumber(std::move(value)); return *this;}

    /**
     * <p>The ID of the MSRC bulletin the patch is related to.</p>
     */
    inline Patch& WithMsrcNumber(const char* value) { SetMsrcNumber(value); return *this;}


    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_releaseDate;
    bool m_releaseDateHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_contentUrl;
    bool m_contentUrlHasBeenSet;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet;

    Aws::String m_productFamily;
    bool m_productFamilyHasBeenSet;

    Aws::String m_product;
    bool m_productHasBeenSet;

    Aws::String m_classification;
    bool m_classificationHasBeenSet;

    Aws::String m_msrcSeverity;
    bool m_msrcSeverityHasBeenSet;

    Aws::String m_kbNumber;
    bool m_kbNumberHasBeenSet;

    Aws::String m_msrcNumber;
    bool m_msrcNumberHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
