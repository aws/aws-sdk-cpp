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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactGuidance.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateProvisioningArtifactRequest : public ServiceCatalogRequest
  {
  public:
    UpdateProvisioningArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisioningArtifact"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisioningArtifactRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisioningArtifactRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisioningArtifactRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline const ProvisioningArtifactGuidance& GetGuidance() const{ return m_guidance; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline void SetGuidance(const ProvisioningArtifactGuidance& value) { m_guidanceHasBeenSet = true; m_guidance = value; }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline void SetGuidance(ProvisioningArtifactGuidance&& value) { m_guidanceHasBeenSet = true; m_guidance = std::move(value); }

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithGuidance(const ProvisioningArtifactGuidance& value) { SetGuidance(value); return *this;}

    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p> <p>The <code>DEFAULT</code> value
     * indicates that the product version is active.</p> <p>The administrator can set
     * the guidance to <code>DEPRECATED</code> to inform users that the product version
     * is deprecated. Users are able to make updates to a provisioned product of a
     * deprecated version but cannot launch new provisioned products using a deprecated
     * version.</p>
     */
    inline UpdateProvisioningArtifactRequest& WithGuidance(ProvisioningArtifactGuidance&& value) { SetGuidance(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;

    ProvisioningArtifactGuidance m_guidance;
    bool m_guidanceHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
