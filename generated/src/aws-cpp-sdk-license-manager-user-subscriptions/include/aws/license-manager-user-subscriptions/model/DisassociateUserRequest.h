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


    ///@{
    /**
     * <p>The domain name of the Active Directory that contains information for the
     * user to disassociate.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DisassociateUserRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DisassociateUserRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DisassociateUserRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies details for the Active Directory identity
     * provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline DisassociateUserRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline DisassociateUserRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance which provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DisassociateUserRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DisassociateUserRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DisassociateUserRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user to disassociate from the EC2
     * instance.</p>
     */
    inline const Aws::String& GetInstanceUserArn() const{ return m_instanceUserArn; }
    inline bool InstanceUserArnHasBeenSet() const { return m_instanceUserArnHasBeenSet; }
    inline void SetInstanceUserArn(const Aws::String& value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn = value; }
    inline void SetInstanceUserArn(Aws::String&& value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn = std::move(value); }
    inline void SetInstanceUserArn(const char* value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn.assign(value); }
    inline DisassociateUserRequest& WithInstanceUserArn(const Aws::String& value) { SetInstanceUserArn(value); return *this;}
    inline DisassociateUserRequest& WithInstanceUserArn(Aws::String&& value) { SetInstanceUserArn(std::move(value)); return *this;}
    inline DisassociateUserRequest& WithInstanceUserArn(const char* value) { SetInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name from the Active Directory identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline DisassociateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline DisassociateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline DisassociateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceUserArn;
    bool m_instanceUserArnHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
