/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class DeregisterIdentityProviderRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterIdentityProvider"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An object that specifies details for the Active Directory identity
     * provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline DeregisterIdentityProviderRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline DeregisterIdentityProviderRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the identity provider to
     * deregister.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = value; }
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::move(value); }
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn.assign(value); }
    inline DeregisterIdentityProviderRequest& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}
    inline DeregisterIdentityProviderRequest& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}
    inline DeregisterIdentityProviderRequest& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p> <p>Valid values:
     * <code>VISUAL_STUDIO_ENTERPRISE</code> | <code>VISUAL_STUDIO_PROFESSIONAL</code>
     * | <code>OFFICE_PROFESSIONAL_PLUS</code> </p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }
    inline DeregisterIdentityProviderRequest& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}
    inline DeregisterIdentityProviderRequest& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}
    inline DeregisterIdentityProviderRequest& WithProduct(const char* value) { SetProduct(value); return *this;}
    ///@}
  private:

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
