/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class DisassociateUserRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DisassociateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateUser"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The domain name of the user.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain name of the user.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain name of the user.</p>
     */
    inline DisassociateUserRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline DisassociateUserRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline DisassociateUserRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline DisassociateUserRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline DisassociateUserRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline DisassociateUserRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline DisassociateUserRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline DisassociateUserRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline DisassociateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline DisassociateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline DisassociateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
