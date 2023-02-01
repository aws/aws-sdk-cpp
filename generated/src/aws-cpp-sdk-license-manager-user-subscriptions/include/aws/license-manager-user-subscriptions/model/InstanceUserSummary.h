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


    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetAssociationDate() const{ return m_associationDate; }

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline bool AssociationDateHasBeenSet() const { return m_associationDateHasBeenSet; }

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline void SetAssociationDate(const Aws::String& value) { m_associationDateHasBeenSet = true; m_associationDate = value; }

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline void SetAssociationDate(Aws::String&& value) { m_associationDateHasBeenSet = true; m_associationDate = std::move(value); }

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline void SetAssociationDate(const char* value) { m_associationDateHasBeenSet = true; m_associationDate.assign(value); }

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithAssociationDate(const Aws::String& value) { SetAssociationDate(value); return *this;}

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithAssociationDate(Aws::String&& value) { SetAssociationDate(std::move(value)); return *this;}

    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithAssociationDate(const char* value) { SetAssociationDate(value); return *this;}


    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline const Aws::String& GetDisassociationDate() const{ return m_disassociationDate; }

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline bool DisassociationDateHasBeenSet() const { return m_disassociationDateHasBeenSet; }

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline void SetDisassociationDate(const Aws::String& value) { m_disassociationDateHasBeenSet = true; m_disassociationDate = value; }

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline void SetDisassociationDate(Aws::String&& value) { m_disassociationDateHasBeenSet = true; m_disassociationDate = std::move(value); }

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline void SetDisassociationDate(const char* value) { m_disassociationDateHasBeenSet = true; m_disassociationDate.assign(value); }

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithDisassociationDate(const Aws::String& value) { SetDisassociationDate(value); return *this;}

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithDisassociationDate(Aws::String&& value) { SetDisassociationDate(std::move(value)); return *this;}

    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithDisassociationDate(const char* value) { SetDisassociationDate(value); return *this;}


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
    inline InstanceUserSummary& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline InstanceUserSummary& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain name of the user.</p>
     */
    inline InstanceUserSummary& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline InstanceUserSummary& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline InstanceUserSummary& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


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
    inline InstanceUserSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline InstanceUserSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline InstanceUserSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline InstanceUserSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


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
    inline InstanceUserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline InstanceUserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline InstanceUserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}

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
