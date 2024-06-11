/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/Name.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/Email.h>
#include <aws/identitystore/model/Address.h>
#include <aws/identitystore/model/PhoneNumber.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public IdentityStoreRequest
  {
  public:
    AWS_IDENTITYSTORE_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline CreateUserRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline CreateUserRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline CreateUserRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.
     * <code>Administrator</code> and <code>AWSAdministrators</code> are reserved names
     * and can't be used for users or groups.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the name of the user.</p>
     */
    inline const Name& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Name& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Name&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline CreateUserRequest& WithName(const Name& value) { SetName(value); return *this;}
    inline CreateUserRequest& WithName(Name&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the name of the user. This value is typically formatted
     * for display when the user is referenced. For example, "John Doe." </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateUserRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateUserRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateUserRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline const Aws::String& GetNickName() const{ return m_nickName; }
    inline bool NickNameHasBeenSet() const { return m_nickNameHasBeenSet; }
    inline void SetNickName(const Aws::String& value) { m_nickNameHasBeenSet = true; m_nickName = value; }
    inline void SetNickName(Aws::String&& value) { m_nickNameHasBeenSet = true; m_nickName = std::move(value); }
    inline void SetNickName(const char* value) { m_nickNameHasBeenSet = true; m_nickName.assign(value); }
    inline CreateUserRequest& WithNickName(const Aws::String& value) { SetNickName(value); return *this;}
    inline CreateUserRequest& WithNickName(Aws::String&& value) { SetNickName(std::move(value)); return *this;}
    inline CreateUserRequest& WithNickName(const char* value) { SetNickName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing a URL that might be associated with the user.</p>
     */
    inline const Aws::String& GetProfileUrl() const{ return m_profileUrl; }
    inline bool ProfileUrlHasBeenSet() const { return m_profileUrlHasBeenSet; }
    inline void SetProfileUrl(const Aws::String& value) { m_profileUrlHasBeenSet = true; m_profileUrl = value; }
    inline void SetProfileUrl(Aws::String&& value) { m_profileUrlHasBeenSet = true; m_profileUrl = std::move(value); }
    inline void SetProfileUrl(const char* value) { m_profileUrlHasBeenSet = true; m_profileUrl.assign(value); }
    inline CreateUserRequest& WithProfileUrl(const Aws::String& value) { SetProfileUrl(value); return *this;}
    inline CreateUserRequest& WithProfileUrl(Aws::String&& value) { SetProfileUrl(std::move(value)); return *this;}
    inline CreateUserRequest& WithProfileUrl(const char* value) { SetProfileUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline const Aws::Vector<Email>& GetEmails() const{ return m_emails; }
    inline bool EmailsHasBeenSet() const { return m_emailsHasBeenSet; }
    inline void SetEmails(const Aws::Vector<Email>& value) { m_emailsHasBeenSet = true; m_emails = value; }
    inline void SetEmails(Aws::Vector<Email>&& value) { m_emailsHasBeenSet = true; m_emails = std::move(value); }
    inline CreateUserRequest& WithEmails(const Aws::Vector<Email>& value) { SetEmails(value); return *this;}
    inline CreateUserRequest& WithEmails(Aws::Vector<Email>&& value) { SetEmails(std::move(value)); return *this;}
    inline CreateUserRequest& AddEmails(const Email& value) { m_emailsHasBeenSet = true; m_emails.push_back(value); return *this; }
    inline CreateUserRequest& AddEmails(Email&& value) { m_emailsHasBeenSet = true; m_emails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addressesHasBeenSet = true; m_addresses = value; }
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }
    inline CreateUserRequest& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}
    inline CreateUserRequest& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}
    inline CreateUserRequest& AddAddresses(const Address& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }
    inline CreateUserRequest& AddAddresses(Address&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }
    inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = value; }
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::move(value); }
    inline CreateUserRequest& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}
    inline CreateUserRequest& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}
    inline CreateUserRequest& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(value); return *this; }
    inline CreateUserRequest& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string indicating the type of user. Possible values are left unspecified.
     * The value can vary based on your specific use case.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const Aws::String& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(Aws::String&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline void SetUserType(const char* value) { m_userTypeHasBeenSet = true; m_userType.assign(value); }
    inline CreateUserRequest& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}
    inline CreateUserRequest& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}
    inline CreateUserRequest& WithUserType(const char* value) { SetUserType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the title of the user. Possible values are left
     * unspecified. The value can vary based on your specific use case.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CreateUserRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CreateUserRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CreateUserRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline const Aws::String& GetPreferredLanguage() const{ return m_preferredLanguage; }
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }
    inline void SetPreferredLanguage(const Aws::String& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }
    inline void SetPreferredLanguage(Aws::String&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }
    inline void SetPreferredLanguage(const char* value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage.assign(value); }
    inline CreateUserRequest& WithPreferredLanguage(const Aws::String& value) { SetPreferredLanguage(value); return *this;}
    inline CreateUserRequest& WithPreferredLanguage(Aws::String&& value) { SetPreferredLanguage(std::move(value)); return *this;}
    inline CreateUserRequest& WithPreferredLanguage(const char* value) { SetPreferredLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the geographical region or location of the user.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline CreateUserRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline CreateUserRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline CreateUserRequest& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the time zone of the user.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline CreateUserRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline CreateUserRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline CreateUserRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}
  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Name m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_nickName;
    bool m_nickNameHasBeenSet = false;

    Aws::String m_profileUrl;
    bool m_profileUrlHasBeenSet = false;

    Aws::Vector<Email> m_emails;
    bool m_emailsHasBeenSet = false;

    Aws::Vector<Address> m_addresses;
    bool m_addressesHasBeenSet = false;

    Aws::Vector<PhoneNumber> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;

    Aws::String m_userType;
    bool m_userTypeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_preferredLanguage;
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
