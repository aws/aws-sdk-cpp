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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name from the identity provider for the user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    InstanceUserSummary& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance that provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceUserSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>IdentityProvider</code> resource specifies details about the
     * identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const { return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    template<typename IdentityProviderT = IdentityProvider>
    void SetIdentityProvider(IdentityProviderT&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::forward<IdentityProviderT>(value); }
    template<typename IdentityProviderT = IdentityProvider>
    InstanceUserSummary& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a user associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    InstanceUserSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the instance user.</p>
     */
    inline const Aws::String& GetInstanceUserArn() const { return m_instanceUserArn; }
    inline bool InstanceUserArnHasBeenSet() const { return m_instanceUserArnHasBeenSet; }
    template<typename InstanceUserArnT = Aws::String>
    void SetInstanceUserArn(InstanceUserArnT&& value) { m_instanceUserArnHasBeenSet = true; m_instanceUserArn = std::forward<InstanceUserArnT>(value); }
    template<typename InstanceUserArnT = Aws::String>
    InstanceUserSummary& WithInstanceUserArn(InstanceUserArnT&& value) { SetInstanceUserArn(std::forward<InstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for users of an EC2 instance.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    InstanceUserSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the Active Directory that contains the user information
     * for the product subscription.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    InstanceUserSummary& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a user was associated with an EC2 instance.</p>
     */
    inline const Aws::String& GetAssociationDate() const { return m_associationDate; }
    inline bool AssociationDateHasBeenSet() const { return m_associationDateHasBeenSet; }
    template<typename AssociationDateT = Aws::String>
    void SetAssociationDate(AssociationDateT&& value) { m_associationDateHasBeenSet = true; m_associationDate = std::forward<AssociationDateT>(value); }
    template<typename AssociationDateT = Aws::String>
    InstanceUserSummary& WithAssociationDate(AssociationDateT&& value) { SetAssociationDate(std::forward<AssociationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a user was disassociated from an EC2 instance.</p>
     */
    inline const Aws::String& GetDisassociationDate() const { return m_disassociationDate; }
    inline bool DisassociationDateHasBeenSet() const { return m_disassociationDateHasBeenSet; }
    template<typename DisassociationDateT = Aws::String>
    void SetDisassociationDate(DisassociationDateT&& value) { m_disassociationDateHasBeenSet = true; m_disassociationDate = std::forward<DisassociationDateT>(value); }
    template<typename DisassociationDateT = Aws::String>
    InstanceUserSummary& WithDisassociationDate(DisassociationDateT&& value) { SetDisassociationDate(std::forward<DisassociationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_instanceUserArn;
    bool m_instanceUserArnHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_associationDate;
    bool m_associationDateHasBeenSet = false;

    Aws::String m_disassociationDate;
    bool m_disassociationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
