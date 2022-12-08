/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningPreferences.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
#include <aws/servicecatalog/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class UpdateProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisionedProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProductName(const char* value) { SetProductName(value); return *this;}


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
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const{ return m_provisioningArtifactName; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const Aws::String& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = value; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(Aws::String&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::move(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const char* value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName.assign(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}


    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const{ return m_pathName; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const Aws::String& value) { m_pathNameHasBeenSet = true; m_pathName = value; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(Aws::String&& value) { m_pathNameHasBeenSet = true; m_pathName = std::move(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const char* value) { m_pathNameHasBeenSet = true; m_pathName.assign(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathName(const Aws::String& value) { SetPathName(value); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathName(Aws::String&& value) { SetPathName(std::move(value)); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline UpdateProvisionedProductRequest& WithPathName(const char* value) { SetPathName(value); return *this;}


    /**
     * <p>The new parameters.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>The new parameters.</p>
     */
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }

    /**
     * <p>The new parameters.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>The new parameters.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }

    /**
     * <p>The new parameters.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>The new parameters.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}

    /**
     * <p>The new parameters.</p>
     */
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(const UpdateProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>The new parameters.</p>
     */
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(UpdateProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline const UpdateProvisioningPreferences& GetProvisioningPreferences() const{ return m_provisioningPreferences; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline bool ProvisioningPreferencesHasBeenSet() const { return m_provisioningPreferencesHasBeenSet; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline void SetProvisioningPreferences(const UpdateProvisioningPreferences& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = value; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline void SetProvisioningPreferences(UpdateProvisioningPreferences&& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = std::move(value); }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningPreferences(const UpdateProvisioningPreferences& value) { SetProvisioningPreferences(value); return *this;}

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline UpdateProvisionedProductRequest& WithProvisioningPreferences(UpdateProvisioningPreferences&& value) { SetProvisioningPreferences(std::move(value)); return *this;}


    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline UpdateProvisionedProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline UpdateProvisionedProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline UpdateProvisionedProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline UpdateProvisionedProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

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
    inline UpdateProvisionedProductRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline UpdateProvisionedProductRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_provisioningArtifactName;
    bool m_provisioningArtifactNameHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::String m_pathName;
    bool m_pathNameHasBeenSet = false;

    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;

    UpdateProvisioningPreferences m_provisioningPreferences;
    bool m_provisioningPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
