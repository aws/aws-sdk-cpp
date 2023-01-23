/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/Settings.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class RegisterIdentityProviderRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API RegisterIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterIdentityProvider"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline RegisterIdentityProviderRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline RegisterIdentityProviderRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


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
    inline RegisterIdentityProviderRequest& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline RegisterIdentityProviderRequest& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline RegisterIdentityProviderRequest& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline RegisterIdentityProviderRequest& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>The registered identity provider’s product related configuration settings
     * such as the subnets to provision VPC endpoints.</p>
     */
    inline RegisterIdentityProviderRequest& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
