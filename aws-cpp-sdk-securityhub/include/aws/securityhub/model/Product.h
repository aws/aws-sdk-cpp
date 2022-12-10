/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/IntegrationType.h>
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
  class Product
  {
  public:
    AWS_SECURITYHUB_API Product();
    AWS_SECURITYHUB_API Product(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Product& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline const Aws::Vector<IntegrationType>& GetIntegrationTypes() const{ return m_integrationTypes; }

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline bool IntegrationTypesHasBeenSet() const { return m_integrationTypesHasBeenSet; }

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline void SetIntegrationTypes(const Aws::Vector<IntegrationType>& value) { m_integrationTypesHasBeenSet = true; m_integrationTypes = value; }

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline void SetIntegrationTypes(Aws::Vector<IntegrationType>&& value) { m_integrationTypesHasBeenSet = true; m_integrationTypes = std::move(value); }

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline Product& WithIntegrationTypes(const Aws::Vector<IntegrationType>& value) { SetIntegrationTypes(value); return *this;}

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline Product& WithIntegrationTypes(Aws::Vector<IntegrationType>&& value) { SetIntegrationTypes(std::move(value)); return *this;}

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline Product& AddIntegrationTypes(const IntegrationType& value) { m_integrationTypesHasBeenSet = true; m_integrationTypes.push_back(value); return *this; }

    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline Product& AddIntegrationTypes(IntegrationType&& value) { m_integrationTypesHasBeenSet = true; m_integrationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline const Aws::String& GetMarketplaceUrl() const{ return m_marketplaceUrl; }

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline bool MarketplaceUrlHasBeenSet() const { return m_marketplaceUrlHasBeenSet; }

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline void SetMarketplaceUrl(const Aws::String& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = value; }

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline void SetMarketplaceUrl(Aws::String&& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = std::move(value); }

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline void SetMarketplaceUrl(const char* value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl.assign(value); }

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline Product& WithMarketplaceUrl(const Aws::String& value) { SetMarketplaceUrl(value); return *this;}

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline Product& WithMarketplaceUrl(Aws::String&& value) { SetMarketplaceUrl(std::move(value)); return *this;}

    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline Product& WithMarketplaceUrl(const char* value) { SetMarketplaceUrl(value); return *this;}


    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline const Aws::String& GetActivationUrl() const{ return m_activationUrl; }

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline bool ActivationUrlHasBeenSet() const { return m_activationUrlHasBeenSet; }

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline void SetActivationUrl(const Aws::String& value) { m_activationUrlHasBeenSet = true; m_activationUrl = value; }

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline void SetActivationUrl(Aws::String&& value) { m_activationUrlHasBeenSet = true; m_activationUrl = std::move(value); }

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline void SetActivationUrl(const char* value) { m_activationUrlHasBeenSet = true; m_activationUrl.assign(value); }

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline Product& WithActivationUrl(const Aws::String& value) { SetActivationUrl(value); return *this;}

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline Product& WithActivationUrl(Aws::String&& value) { SetActivationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
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
    bool m_productArnHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<IntegrationType> m_integrationTypes;
    bool m_integrationTypesHasBeenSet = false;

    Aws::String m_marketplaceUrl;
    bool m_marketplaceUrlHasBeenSet = false;

    Aws::String m_activationUrl;
    bool m_activationUrlHasBeenSet = false;

    Aws::String m_productSubscriptionResourcePolicy;
    bool m_productSubscriptionResourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
