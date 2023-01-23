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
    AWS_ACCOUNT_API PutAlternateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAlternateContact"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


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
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

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
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

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
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

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
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

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
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

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
    inline PutAlternateContactRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

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
    inline PutAlternateContactRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

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
    inline PutAlternateContactRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline const AlternateContactType& GetAlternateContactType() const{ return m_alternateContactType; }

    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline bool AlternateContactTypeHasBeenSet() const { return m_alternateContactTypeHasBeenSet; }

    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline void SetAlternateContactType(const AlternateContactType& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = value; }

    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline void SetAlternateContactType(AlternateContactType&& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = std::move(value); }

    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline PutAlternateContactRequest& WithAlternateContactType(const AlternateContactType& value) { SetAlternateContactType(value); return *this;}

    /**
     * <p>Specifies which alternate contact you want to create or update.</p>
     */
    inline PutAlternateContactRequest& WithAlternateContactType(AlternateContactType&& value) { SetAlternateContactType(std::move(value)); return *this;}


    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline PutAlternateContactRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline PutAlternateContactRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>Specifies an email address for the alternate contact. </p>
     */
    inline PutAlternateContactRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies a name for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>Specifies a phone number for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>Specifies a title for the alternate contact.</p>
     */
    inline PutAlternateContactRequest& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AlternateContactType m_alternateContactType;
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
