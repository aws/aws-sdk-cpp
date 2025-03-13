/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/account/model/AlternateContactType.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class PutAlternateContactRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API PutAlternateContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAlternateContact"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the 12 digit account ID number of the Amazon Web Services account
     * that you want to access or modify with this operation.</p> <p>If you do not
     * specify this parameter, it defaults to the Amazon Web Services account of the
     * identity used to call the operation.</p> <p>To use this parameter, the caller
     * must be an identity in the <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
     * management account</a> or a delegated administrator account, and the specified
     * account ID must be a member account in the same organization. The organization
     * must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
     * features enabled</a>, and the organization must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-trusted-access.html">trusted
     * access</a> enabled for the Account Management service, and optionally a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-delegated-admin.html">delegated
     * admin</a> account assigned.</p>  <p>The management account can't specify
     * its own <code>AccountId</code>; it must call the operation in standalone context
     * by not including the <code>AccountId</code> parameter.</p>  <p>To call
     * this operation on an account that is not a member of an organization, then don't
     * specify this parameter, and call the operation using an identity belonging to
     * the account whose contacts you wish to retrieve or modify.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutAlternateContactRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline AlternateContactType GetAlternateContactType() const { return m_alternateContactType; }
    inline bool AlternateContactTypeHasBeenSet() const { return m_alternateContactTypeHasBeenSet; }
    inline void SetAlternateContactType(AlternateContactType value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = value; }
    inline PutAlternateContactRequest& WithAlternateContactType(AlternateContactType value) { SetAlternateContactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    PutAlternateContactRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutAlternateContactRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PutAlternateContactRequest& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    PutAlternateContactRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AlternateContactType m_alternateContactType{AlternateContactType::NOT_SET};
    bool m_alternateContactTypeHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
