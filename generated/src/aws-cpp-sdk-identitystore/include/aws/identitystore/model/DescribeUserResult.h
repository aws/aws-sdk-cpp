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


    ///@{
    /**
     * <p>A unique string used to identify the user. The length limit is 128
     * characters. This value can consist of letters, accented characters, symbols,
     * numbers, and punctuation. This value is specified at the time the user is
     * created and stored as an attribute of the user object in the identity store.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline void SetUserName(const Aws::String& value) { m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userName.assign(value); }
    inline DescribeUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline DescribeUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline DescribeUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline DescribeUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline DescribeUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline DescribeUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const{ return m_externalIds; }
    inline void SetExternalIds(const Aws::Vector<ExternalId>& value) { m_externalIds = value; }
    inline void SetExternalIds(Aws::Vector<ExternalId>&& value) { m_externalIds = std::move(value); }
    inline DescribeUserResult& WithExternalIds(const Aws::Vector<ExternalId>& value) { SetExternalIds(value); return *this;}
    inline DescribeUserResult& WithExternalIds(Aws::Vector<ExternalId>&& value) { SetExternalIds(std::move(value)); return *this;}
    inline DescribeUserResult& AddExternalIds(const ExternalId& value) { m_externalIds.push_back(value); return *this; }
    inline DescribeUserResult& AddExternalIds(ExternalId&& value) { m_externalIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Name& GetName() const{ return m_name; }
    inline void SetName(const Name& value) { m_name = value; }
    inline void SetName(Name&& value) { m_name = std::move(value); }
    inline DescribeUserResult& WithName(const Name& value) { SetName(value); return *this;}
    inline DescribeUserResult& WithName(Name&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeUserResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeUserResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeUserResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternative descriptive name for the user.</p>
     */
    inline const Aws::String& GetNickName() const{ return m_nickName; }
    inline void SetNickName(const Aws::String& value) { m_nickName = value; }
    inline void SetNickName(Aws::String&& value) { m_nickName = std::move(value); }
    inline void SetNickName(const char* value) { m_nickName.assign(value); }
    inline DescribeUserResult& WithNickName(const Aws::String& value) { SetNickName(value); return *this;}
    inline DescribeUserResult& WithNickName(Aws::String&& value) { SetNickName(std::move(value)); return *this;}
    inline DescribeUserResult& WithNickName(const char* value) { SetNickName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for the user's profile.</p>
     */
    inline const Aws::String& GetProfileUrl() const{ return m_profileUrl; }
    inline void SetProfileUrl(const Aws::String& value) { m_profileUrl = value; }
    inline void SetProfileUrl(Aws::String&& value) { m_profileUrl = std::move(value); }
    inline void SetProfileUrl(const char* value) { m_profileUrl.assign(value); }
    inline DescribeUserResult& WithProfileUrl(const Aws::String& value) { SetProfileUrl(value); return *this;}
    inline DescribeUserResult& WithProfileUrl(Aws::String&& value) { SetProfileUrl(std::move(value)); return *this;}
    inline DescribeUserResult& WithProfileUrl(const char* value) { SetProfileUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user.</p>
     */
    inline const Aws::Vector<Email>& GetEmails() const{ return m_emails; }
    inline void SetEmails(const Aws::Vector<Email>& value) { m_emails = value; }
    inline void SetEmails(Aws::Vector<Email>&& value) { m_emails = std::move(value); }
    inline DescribeUserResult& WithEmails(const Aws::Vector<Email>& value) { SetEmails(value); return *this;}
    inline DescribeUserResult& WithEmails(Aws::Vector<Email>&& value) { SetEmails(std::move(value)); return *this;}
    inline DescribeUserResult& AddEmails(const Email& value) { m_emails.push_back(value); return *this; }
    inline DescribeUserResult& AddEmails(Email&& value) { m_emails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The physical address of the user.</p>
     */
    inline const Aws::Vector<Address>& GetAddresses() const{ return m_addresses; }
    inline void SetAddresses(const Aws::Vector<Address>& value) { m_addresses = value; }
    inline void SetAddresses(Aws::Vector<Address>&& value) { m_addresses = std::move(value); }
    inline DescribeUserResult& WithAddresses(const Aws::Vector<Address>& value) { SetAddresses(value); return *this;}
    inline DescribeUserResult& WithAddresses(Aws::Vector<Address>&& value) { SetAddresses(std::move(value)); return *this;}
    inline DescribeUserResult& AddAddresses(const Address& value) { m_addresses.push_back(value); return *this; }
    inline DescribeUserResult& AddAddresses(Address&& value) { m_addresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>PhoneNumber</code> objects associated with a user.</p>
     */
    inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }
    inline void SetPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { m_phoneNumbers = value; }
    inline void SetPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { m_phoneNumbers = std::move(value); }
    inline DescribeUserResult& WithPhoneNumbers(const Aws::Vector<PhoneNumber>& value) { SetPhoneNumbers(value); return *this;}
    inline DescribeUserResult& WithPhoneNumbers(Aws::Vector<PhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}
    inline DescribeUserResult& AddPhoneNumbers(const PhoneNumber& value) { m_phoneNumbers.push_back(value); return *this; }
    inline DescribeUserResult& AddPhoneNumbers(PhoneNumber&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string indicating the type of user.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }
    inline void SetUserType(const Aws::String& value) { m_userType = value; }
    inline void SetUserType(Aws::String&& value) { m_userType = std::move(value); }
    inline void SetUserType(const char* value) { m_userType.assign(value); }
    inline DescribeUserResult& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}
    inline DescribeUserResult& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}
    inline DescribeUserResult& WithUserType(const char* value) { SetUserType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the title of the user.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline DescribeUserResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline DescribeUserResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline DescribeUserResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred language of the user.</p>
     */
    inline const Aws::String& GetPreferredLanguage() const{ return m_preferredLanguage; }
    inline void SetPreferredLanguage(const Aws::String& value) { m_preferredLanguage = value; }
    inline void SetPreferredLanguage(Aws::String&& value) { m_preferredLanguage = std::move(value); }
    inline void SetPreferredLanguage(const char* value) { m_preferredLanguage.assign(value); }
    inline DescribeUserResult& WithPreferredLanguage(const Aws::String& value) { SetPreferredLanguage(value); return *this;}
    inline DescribeUserResult& WithPreferredLanguage(Aws::String&& value) { SetPreferredLanguage(std::move(value)); return *this;}
    inline DescribeUserResult& WithPreferredLanguage(const char* value) { SetPreferredLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the geographical region or location of the user.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline void SetLocale(const Aws::String& value) { m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_locale.assign(value); }
    inline DescribeUserResult& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline DescribeUserResult& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline DescribeUserResult& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for a user.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }
    inline DescribeUserResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline DescribeUserResult& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline DescribeUserResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }
    inline DescribeUserResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline DescribeUserResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline DescribeUserResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
