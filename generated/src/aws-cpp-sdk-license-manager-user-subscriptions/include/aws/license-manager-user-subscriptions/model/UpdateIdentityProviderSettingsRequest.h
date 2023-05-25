/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/UpdateSettings.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class UpdateIdentityProviderSettingsRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityProviderSettings"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }

    
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }

    
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }

    
    inline UpdateIdentityProviderSettingsRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    
    inline UpdateIdentityProviderSettingsRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline UpdateIdentityProviderSettingsRequest& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline UpdateIdentityProviderSettingsRequest& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline UpdateIdentityProviderSettingsRequest& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline const UpdateSettings& GetUpdateSettings() const{ return m_updateSettings; }

    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline bool UpdateSettingsHasBeenSet() const { return m_updateSettingsHasBeenSet; }

    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline void SetUpdateSettings(const UpdateSettings& value) { m_updateSettingsHasBeenSet = true; m_updateSettings = value; }

    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline void SetUpdateSettings(UpdateSettings&& value) { m_updateSettingsHasBeenSet = true; m_updateSettings = std::move(value); }

    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline UpdateIdentityProviderSettingsRequest& WithUpdateSettings(const UpdateSettings& value) { SetUpdateSettings(value); return *this;}

    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline UpdateIdentityProviderSettingsRequest& WithUpdateSettings(UpdateSettings&& value) { SetUpdateSettings(std::move(value)); return *this;}

  private:

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    UpdateSettings m_updateSettings;
    bool m_updateSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
