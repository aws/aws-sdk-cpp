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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IdentityStore
{
namespace Model
{
  class DescribeUserResult
  {
  public:
    AWS_IDENTITYSTORE_API DescribeUserResult();
    AWS_IDENTITYSTORE_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const{ return m_externalIds; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(const Aws::Vector<ExternalId>& value) { m_externalIds = value; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(Aws::Vector<ExternalId>&& value) { m_externalIds = std::move(value); }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeUserResult& WithExternalIds(const Aws::Vector<ExternalId>& value) { SetExternalIds(value); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeUserResult& WithExternalIds(Aws::Vector<ExternalId>&& value) { SetExternalIds(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeUserResult& AddExternalIds(const ExternalId& value) { m_externalIds.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeUserResult& AddExternalIds(ExternalId&& value) { m_externalIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the user.</p>
     */
    inline const Name& GetName() const{ return m_name; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetName(const Name& value) { m_name = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetName(Name&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline DescribeUserResult& WithName(const Name& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline DescribeUserResult& WithName(Name&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The user's name value for display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The user's name value for display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The user's name value for display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The user's name value for display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The user's name value for display.</p>
     */
    inline DescribeUserResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The user's name value for display.</p>
     */
    inline DescribeUserResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The user's name value for display.</p>
     */
    inline DescribeUserResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline const Aws::String& GetNickName() const{ return m_nickName; }

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline void SetNickName(const Aws::String& value) { m_nickName = value; }

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline void SetNickName(Aws::String&& value) { m_nickName = std::move(value); }

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline void SetNickName(const char* value) { m_nickName.assign(value); }

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline DescribeUserResult& WithNickName(const Aws::String& value) { SetNickName(value); return *this;}

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline DescribeUserResult& WithNickName(Aws::String&& value) { SetNickName(std::move(value)); return *this;}

    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline DescribeUserResult& WithNickName(const char* value) { SetNickName(value); return *this;}


    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline const Aws::String& GetProfileUrl() const{ return m_profileUrl; }

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline void SetProfileUrl(const Aws::String& value) { m_profileUrl = value; }

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline void SetProfileUrl(Aws::String&& value) { m_profileUrl = std::move(value); }

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline void SetProfileUrl(const char* value) { m_profileUrl.assign(value); }

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline DescribeUserResult& WithProfileUrl(const Aws::String& value) { SetProfileUrl(value); return *this;}

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline DescribeUserResult& WithProfileUrl(Aws::String&& value) { SetProfileUrl(std::move(value)); return *this;}

    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline DescribeUserResult& WithProfileUrl(const char* value) { SetProfileUrl(value); return *this;}


    /**
     * <p>The user's email value.</p>
     */
    inline const Aws::Vector<Email>& GetEmails() const{ return m_emails; }

    /**
     * <p>The user's email value.</p>
     */
    inline void SetEmails(const Aws::Vector<Email>& value) { m_emails = value; }

    /**
     * <p>The user's email value.</p>
     */
    inline void SetEmails(Aws::Vector<Email>&& value) { m_emails = std::move(value); }

    /**
     * <p>The user's email value.</p>
     */
    inline DescribeUserResult& WithEmails(const Aws::Vector<Email>& value) { SetEmails(value); return *this;}

    /**
     * <p>The user's email value.</p>
     */
    inline DescribeUserResult& WithEmails(Aws::Vector<Email>&& value) { SetEmails(std::move(value)); return *this;}

    /**
     * <p>The user's email value.</p>
     */
    inline DescribeUserResult& AddEmails(const Email& value) { m_emails.push_back(value); return *this; }

    /**
     * <p>The user's email value.</p>
     */
    inline DescribeUserResult& AddEmails(Email&& value) { m_emails.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's physical address.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>The user's physical address.</p>
     */
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addresses = value; }

    /**
     * <p>The user's physical address.</p>
     */
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addresses = std::move(value); }

    /**
     * <p>The user's physical address.</p>
     */
    inline DescribeUserResult& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}

    /**
     * <p>The user's physical address.</p>
     */
    inline DescribeUserResult& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>The user's physical address.</p>
     */
    inline DescribeUserResult& AddAddresses(const Address& value) { m_addresses.push_back(value); return *this; }

    /**
     * <p>The user's physical address.</p>
     */
    inline DescribeUserResult& AddAddresses(Address&& value) { m_addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { m_phoneNumbers = value; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { m_phoneNumbers = std::move(value); }

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline DescribeUserResult& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline DescribeUserResult& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline DescribeUserResult& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline DescribeUserResult& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>A string indicating the user's type.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline void SetUserType(const Aws::String& value) { m_userType = value; }

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline void SetUserType(Aws::String&& value) { m_userType = std::move(value); }

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline void SetUserType(const char* value) { m_userType.assign(value); }

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline DescribeUserResult& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline DescribeUserResult& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}

    /**
     * <p>A string indicating the user's type.</p>
     */
    inline DescribeUserResult& WithUserType(const char* value) { SetUserType(value); return *this;}


    /**
     * <p>A string containing the user's title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A string containing the user's title.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_title = value; }

    /**
     * <p>A string containing the user's title.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }

    /**
     * <p>A string containing the user's title.</p>
     */
    inline void SetTitle(const char* value) { m_title.assign(value); }

    /**
     * <p>A string containing the user's title.</p>
     */
    inline DescribeUserResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A string containing the user's title.</p>
     */
    inline DescribeUserResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's title.</p>
     */
    inline DescribeUserResult& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The preferred language of the user.</p>
     */
    inline const Aws::String& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>The preferred language of the user.</p>
     */
    inline void SetPreferredLanguage(const Aws::String& value) { m_preferredLanguage = value; }

    /**
     * <p>The preferred language of the user.</p>
     */
    inline void SetPreferredLanguage(Aws::String&& value) { m_preferredLanguage = std::move(value); }

    /**
     * <p>The preferred language of the user.</p>
     */
    inline void SetPreferredLanguage(const char* value) { m_preferredLanguage.assign(value); }

    /**
     * <p>The preferred language of the user.</p>
     */
    inline DescribeUserResult& WithPreferredLanguage(const Aws::String& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>The preferred language of the user.</p>
     */
    inline DescribeUserResult& WithPreferredLanguage(Aws::String&& value) { SetPreferredLanguage(std::move(value)); return *this;}

    /**
     * <p>The preferred language of the user.</p>
     */
    inline DescribeUserResult& WithPreferredLanguage(const char* value) { SetPreferredLanguage(value); return *this;}


    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_locale = value; }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_locale = std::move(value); }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline void SetLocale(const char* value) { m_locale.assign(value); }

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline DescribeUserResult& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline DescribeUserResult& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>A string containing the user's geographical region or location.</p>
     */
    inline DescribeUserResult& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>The time zone for a user.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone for a user.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }

    /**
     * <p>The time zone for a user.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezone = std::move(value); }

    /**
     * <p>The time zone for a user.</p>
     */
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }

    /**
     * <p>The time zone for a user.</p>
     */
    inline DescribeUserResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone for a user.</p>
     */
    inline DescribeUserResult& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone for a user.</p>
     */
    inline DescribeUserResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeUserResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeUserResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeUserResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

  private:

    Aws::String m_userName;

    Aws::String m_userId;

    Aws::Vector<ExternalId> m_externalIds;

    Name m_name;

    Aws::String m_displayName;

    Aws::String m_nickName;

    Aws::String m_profileUrl;

    Aws::Vector<Email> m_emails;

    Aws::Vector<Address> m_addresses;

    Aws::Vector<PhoneNumber> m_phoneNumbers;

    Aws::String m_userType;

    Aws::String m_title;

    Aws::String m_preferredLanguage;

    Aws::String m_locale;

    Aws::String m_timezone;

    Aws::String m_identityStoreId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
