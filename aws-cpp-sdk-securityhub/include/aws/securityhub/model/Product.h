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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains details about a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Product">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Product
  {
  public:
    Product();
    Product(Aws::Utils::Json::JsonView jsonValue);
    Product& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline Product& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline Product& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}

    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline Product& WithProductArn(const char* value) { SetProductArn(value); return *this;}


    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The name of the product.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The name of the product.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The name of the product.</p>
     */
    inline Product& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline Product& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the product.</p>
     */
    inline Product& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline Product& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline Product& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}

    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline Product& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}


    /**
     * <p>A description of the product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the product.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the product.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the product.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the product.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the product.</p>
     */
    inline Product& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the product.</p>
     */
    inline Product& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the product.</p>
     */
    inline Product& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The categories assigned to the product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const{ return m_categories; }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline void SetCategories(const Aws::Vector<Aws::String>& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline void SetCategories(Aws::Vector<Aws::String>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline Product& WithCategories(const Aws::Vector<Aws::String>& value) { SetCategories(value); return *this;}

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline Product& WithCategories(Aws::Vector<Aws::String>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline Product& AddCategories(const Aws::String& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline Product& AddCategories(Aws::String&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }

    /**
     * <p>The categories assigned to the product.</p>
     */
    inline Product& AddCategories(const char* value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }


    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline const Aws::String& GetMarketplaceUrl() const{ return m_marketplaceUrl; }

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline bool MarketplaceUrlHasBeenSet() const { return m_marketplaceUrlHasBeenSet; }

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline void SetMarketplaceUrl(const Aws::String& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = value; }

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline void SetMarketplaceUrl(Aws::String&& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = std::move(value); }

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline void SetMarketplaceUrl(const char* value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl.assign(value); }

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline Product& WithMarketplaceUrl(const Aws::String& value) { SetMarketplaceUrl(value); return *this;}

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline Product& WithMarketplaceUrl(Aws::String&& value) { SetMarketplaceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the page that contains more information about the product.</p>
     */
    inline Product& WithMarketplaceUrl(const char* value) { SetMarketplaceUrl(value); return *this;}


    /**
     * <p>The URL used to activate the product.</p>
     */
    inline const Aws::String& GetActivationUrl() const{ return m_activationUrl; }

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline bool ActivationUrlHasBeenSet() const { return m_activationUrlHasBeenSet; }

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline void SetActivationUrl(const Aws::String& value) { m_activationUrlHasBeenSet = true; m_activationUrl = value; }

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline void SetActivationUrl(Aws::String&& value) { m_activationUrlHasBeenSet = true; m_activationUrl = std::move(value); }

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline void SetActivationUrl(const char* value) { m_activationUrlHasBeenSet = true; m_activationUrl.assign(value); }

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline Product& WithActivationUrl(const Aws::String& value) { SetActivationUrl(value); return *this;}

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline Product& WithActivationUrl(Aws::String&& value) { SetActivationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL used to activate the product.</p>
     */
    inline Product& WithActivationUrl(const char* value) { SetActivationUrl(value); return *this;}


    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline const Aws::String& GetProductSubscriptionResourcePolicy() const{ return m_productSubscriptionResourcePolicy; }

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline bool ProductSubscriptionResourcePolicyHasBeenSet() const { return m_productSubscriptionResourcePolicyHasBeenSet; }

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline void SetProductSubscriptionResourcePolicy(const Aws::String& value) { m_productSubscriptionResourcePolicyHasBeenSet = true; m_productSubscriptionResourcePolicy = value; }

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline void SetProductSubscriptionResourcePolicy(Aws::String&& value) { m_productSubscriptionResourcePolicyHasBeenSet = true; m_productSubscriptionResourcePolicy = std::move(value); }

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline void SetProductSubscriptionResourcePolicy(const char* value) { m_productSubscriptionResourcePolicyHasBeenSet = true; m_productSubscriptionResourcePolicy.assign(value); }

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline Product& WithProductSubscriptionResourcePolicy(const Aws::String& value) { SetProductSubscriptionResourcePolicy(value); return *this;}

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline Product& WithProductSubscriptionResourcePolicy(Aws::String&& value) { SetProductSubscriptionResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline Product& WithProductSubscriptionResourcePolicy(const char* value) { SetProductSubscriptionResourcePolicy(value); return *this;}

  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet;

    Aws::String m_productName;
    bool m_productNameHasBeenSet;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet;

    Aws::String m_marketplaceUrl;
    bool m_marketplaceUrlHasBeenSet;

    Aws::String m_activationUrl;
    bool m_activationUrlHasBeenSet;

    Aws::String m_productSubscriptionResourcePolicy;
    bool m_productSubscriptionResourcePolicyHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
