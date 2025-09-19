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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityProviderSettings"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const IdentityProvider& GetIdentityProvider() const { return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    template<typename IdentityProviderT = IdentityProvider>
    void SetIdentityProvider(IdentityProviderT&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::forward<IdentityProviderT>(value); }
    template<typename IdentityProviderT = IdentityProvider>
    UpdateIdentityProviderSettingsRequest& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p> <p>Valid values:
     * <code>VISUAL_STUDIO_ENTERPRISE</code> | <code>VISUAL_STUDIO_PROFESSIONAL</code>
     * | <code>OFFICE_PROFESSIONAL_PLUS</code> | <code>REMOTE_DESKTOP_SERVICES</code>
     * </p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    UpdateIdentityProviderSettingsRequest& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity provider to update.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const { return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    template<typename IdentityProviderArnT = Aws::String>
    void SetIdentityProviderArn(IdentityProviderArnT&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::forward<IdentityProviderArnT>(value); }
    template<typename IdentityProviderArnT = Aws::String>
    UpdateIdentityProviderSettingsRequest& WithIdentityProviderArn(IdentityProviderArnT&& value) { SetIdentityProviderArn(std::forward<IdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the registered identity provider’s product related configuration
     * settings. You can update any combination of settings in a single operation such
     * as the:</p> <ul> <li> <p>Subnets which you want to add to provision VPC
     * endpoints.</p> </li> <li> <p>Subnets which you want to remove the VPC endpoints
     * from.</p> </li> <li> <p>Security group ID which permits traffic to the VPC
     * endpoints.</p> </li> </ul>
     */
    inline const UpdateSettings& GetUpdateSettings() const { return m_updateSettings; }
    inline bool UpdateSettingsHasBeenSet() const { return m_updateSettingsHasBeenSet; }
    template<typename UpdateSettingsT = UpdateSettings>
    void SetUpdateSettings(UpdateSettingsT&& value) { m_updateSettingsHasBeenSet = true; m_updateSettings = std::forward<UpdateSettingsT>(value); }
    template<typename UpdateSettingsT = UpdateSettings>
    UpdateIdentityProviderSettingsRequest& WithUpdateSettings(UpdateSettingsT&& value) { SetUpdateSettings(std::forward<UpdateSettingsT>(value)); return *this;}
    ///@}
  private:

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    UpdateSettings m_updateSettings;
    bool m_updateSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
