/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/Name.h>
#include <aws/identitystore/model/ExternalId.h>
#include <aws/identitystore/model/Email.h>
#include <aws/identitystore/model/Address.h>
#include <aws/identitystore/model/PhoneNumber.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>A user object that contains a specified user’s metadata and
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/User">AWS
   * API Reference</a></p>
   */
  class User
  {
  public:
    AWS_IDENTITYSTORE_API User();
    AWS_IDENTITYSTORE_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const{ return m_externalIds; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline bool ExternalIdsHasBeenSet() const { return m_externalIdsHasBeenSet; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(const Aws::Vector<ExternalId>& value) { m_externalIdsHasBeenSet = true; m_externalIds = value; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(Aws::Vector<ExternalId>&& value) { m_externalIdsHasBeenSet = true; m_externalIds = std::move(value); }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline User& WithExternalIds(const Aws::Vector<ExternalId>& value) { SetExternalIds(value); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline User& WithExternalIds(Aws::Vector<ExternalId>&& value) { SetExternalIds(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline User& AddExternalIds(const ExternalId& value) { m_externalIdsHasBeenSet = true; m_externalIds.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline User& AddExternalIds(ExternalId&& value) { m_externalIdsHasBeenSet = true; m_externalIds.push_back(std::move(value)); return *this; }


    /**
     * <p>An object containing the user's name.</p>
     */
    inline const Name& GetName() const{ return m_name; }

    /**
     * <p>An object containing the user's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An object containing the user's name.</p>
     */
    inline void SetName(const Name& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An object containing the user's name.</p>
     */
    inline void SetName(Name&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An object containing the user's name.</p>
     */
    inline User& WithName(const Name& value) { SetName(value); return *this;}

    /**
     * <p>An object containing the user's name.</p>
     */
    inline User& WithName(Name&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline User& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline User& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's name that's formatted for display when the
     * user is referenced. For example, "John Doe."</p>
     */
    inline User& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline const Aws::String& GetNickName() const{ return m_nickName; }

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline bool NickNameHasBeenSet() const { return m_nickNameHasBeenSet; }

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline void SetNickName(const Aws::String& value) { m_nickNameHasBeenSet = true; m_nickName = value; }

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline void SetNickName(Aws::String&& value) { m_nickNameHasBeenSet = true; m_nickName = std::move(value); }

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline void SetNickName(const char* value) { m_nickNameHasBeenSet = true; m_nickName.assign(value); }

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline User& WithNickName(const Aws::String& value) { SetNickName(value); return *this;}

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline User& WithNickName(Aws::String&& value) { SetNickName(std::move(value)); return *this;}

    /**
     * <p>A string containing an alternate name for the user.</p>
     */
    inline User& WithNickName(const char* value) { SetNickName(value); return *this;}


    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline const Aws::String& GetProfileUrl() const{ return m_profileUrl; }

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline bool ProfileUrlHasBeenSet() const { return m_profileUrlHasBeenSet; }

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline void SetProfileUrl(const Aws::String& value) { m_profileUrlHasBeenSet = true; m_profileUrl = value; }

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline void SetProfileUrl(Aws::String&& value) { m_profileUrlHasBeenSet = true; m_profileUrl = std::move(value); }

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline void SetProfileUrl(const char* value) { m_profileUrlHasBeenSet = true; m_profileUrl.assign(value); }

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline User& WithProfileUrl(const Aws::String& value) { SetProfileUrl(value); return *this;}

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline User& WithProfileUrl(Aws::String&& value) { SetProfileUrl(std::move(value)); return *this;}

    /**
     * <p>A string containing a URL that may be associated with the user.</p>
     */
    inline User& WithProfileUrl(const char* value) { SetProfileUrl(value); return *this;}


    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline const Aws::Vector<Email>& GetEmails() const{ return m_emails; }

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline bool EmailsHasBeenSet() const { return m_emailsHasBeenSet; }

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline void SetEmails(const Aws::Vector<Email>& value) { m_emailsHasBeenSet = true; m_emails = value; }

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline void SetEmails(Aws::Vector<Email>&& value) { m_emailsHasBeenSet = true; m_emails = std::move(value); }

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline User& WithEmails(const Aws::Vector<Email>& value) { SetEmails(value); return *this;}

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline User& WithEmails(Aws::Vector<Email>&& value) { SetEmails(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline User& AddEmails(const Email& value) { m_emailsHasBeenSet = true; m_emails.push_back(value); return *this; }

    /**
     * <p>A list of <code>Email</code> objects containing email addresses associated
     * with the user.</p>
     */
    inline User& AddEmails(Email&& value) { m_emailsHasBeenSet = true; m_emails.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline User& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline User& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline User& AddAddresses(const Address& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

    /**
     * <p>A list of <code>Address</code> objects containing addresses associated with
     * the user.</p>
     */
    inline User& AddAddresses(Address&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = value; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::move(value); }

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline User& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline User& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline User& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
     * associated with the user.</p>
     */
    inline User& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetUserType(const Aws::String& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetUserType(Aws::String&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetUserType(const char* value) { m_userTypeHasBeenSet = true; m_userType.assign(value); }

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}

    /**
     * <p>A string indicating the user's type. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithUserType(const char* value) { SetUserType(value); return *this;}


    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's title. Possible values depend on each
     * customer's specific needs, so they are left unspecified.</p>
     */
    inline User& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline const Aws::String& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline void SetPreferredLanguage(const Aws::String& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline void SetPreferredLanguage(Aws::String&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline void SetPreferredLanguage(const char* value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage.assign(value); }

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline User& WithPreferredLanguage(const Aws::String& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline User& WithPreferredLanguage(Aws::String&& value) { SetPreferredLanguage(std::move(value)); return *this;}

    /**
     * <p>A string containing the preferred language of the user. For example,
     * "American English" or "en-us."</p>
     */
    inline User& WithPreferredLanguage(const char* value) { SetPreferredLanguage(value); return *this;}


    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline User& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline User& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline User& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline User& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline User& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's time zone.</p>
     */
    inline User& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline User& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline User& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline User& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<ExternalId> m_externalIds;
    bool m_externalIdsHasBeenSet = false;

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

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
