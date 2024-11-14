/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Describes users of an EC2 instance providing user-based
   * subscriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/InstanceUserSummary">AWS
   * API Reference</a></p>
   */
  class InstanceUserSummary
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetAssociationDate() const{ return m_associationDate; }
    inline bool AssociationDateHasBeenSet() const { return m_associationDateHasBeenSet; }
    inline void SetAssociationDate(const Aws::String& value) { m_associationDateHasBeenSet = true; m_associationDate = value; }
    inline void SetAssociationDate(Aws::String&& value) { m_associationDateHasBeenSet = true; m_associationDate = std::move(value); }
    inline void SetAssociationDate(const char* value) { m_associationDateHasBeenSet = true; m_associationDate.assign(value); }
    inline InstanceUserSummary& WithAssociationDate(const Aws::String& value) { SetAssociationDate(value); return *this;}
    inline InstanceUserSummary& WithAssociationDate(Aws::String&& value) { SetAssociationDate(std::move(value)); return *this;}
    inline InstanceUserSummary& WithAssociationDate(const char* value) { SetAssociationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline const Aws::String& GetDisassociationDate() const{ return m_disassociationDate; }
    inline bool DisassociationDateHasBeenSet() const { return m_disassociationDateHasBeenSet; }
    inline void SetDisassociationDate(const Aws::String& value) { m_disassociationDateHasBeenSet = true; m_disassociationDate = value; }
    inline void SetDisassociationDate(Aws::String&& value) { m_disassociationDateHasBeenSet = true; m_disassociationDate = std::move(value); }
    inline void SetDisassociationDate(const char* value) { m_disassociationDateHasBeenSet = true; m_disassociationDate.assign(value); }
    inline InstanceUserSummary& WithDisassociationDate(const Aws::String& value) { SetDisassociationDate(value); return *this;}
    inline InstanceUserSummary& WithDisassociationDate(Aws::String&& value) { SetDisassociationDate(std::move(value)); return *this;}
    inline InstanceUserSummary& WithDisassociationDate(const char* value) { SetDisassociationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user information
     * for the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline InstanceUserSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline InstanceUserSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline InstanceUserSummary& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>IdentityProvider</code> resource specifies details about the
     * identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline InstanceUserSummary& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline InstanceUserSummary& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance that provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceUserSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceUserSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceUserSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the instance user.</p>
     */
    inline const Aws::String& GetInstanceUserArn() const{ return m_instanceUserArn; }
    inline bool InstanceUserArnHasBeenSet() const { return m_instanceUserArnHasBeenSet; }
    inline void SetInstanceUserArn(const Aws::String& value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn = value; }
    inline void SetInstanceUserArn(Aws::String&& value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn = std::move(value); }
    inline void SetInstanceUserArn(const char* value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn.assign(value); }
    inline InstanceUserSummary& WithInstanceUserArn(const Aws::String& value) { SetInstanceUserArn(value); return *this;}
    inline InstanceUserSummary& WithInstanceUserArn(Aws::String&& value) { SetInstanceUserArn(std::move(value)); return *this;}
    inline InstanceUserSummary& WithInstanceUserArn(const char* value) { SetInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline InstanceUserSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline InstanceUserSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline InstanceUserSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline InstanceUserSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline InstanceUserSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline InstanceUserSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline InstanceUserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline InstanceUserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline InstanceUserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_associationDate;
    bool m_associationDateHasBeenSet = false;

    Aws::String m_disassociationDate;
    bool m_disassociationDateHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceUserArn;
    bool m_instanceUserArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
