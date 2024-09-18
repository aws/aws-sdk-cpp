/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/directory-service-data/model/AttributeValue.h>
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
namespace DirectoryServiceData
{
namespace Model
{
  class DescribeUserResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult();
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline DescribeUserResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeUserResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeUserResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const{ return m_distinguishedName; }
    inline void SetDistinguishedName(const Aws::String& value) { m_distinguishedName = value; }
    inline void SetDistinguishedName(Aws::String&& value) { m_distinguishedName = std::move(value); }
    inline void SetDistinguishedName(const char* value) { m_distinguishedName.assign(value); }
    inline DescribeUserResult& WithDistinguishedName(const Aws::String& value) { SetDistinguishedName(value); return *this;}
    inline DescribeUserResult& WithDistinguishedName(Aws::String&& value) { SetDistinguishedName(std::move(value)); return *this;}
    inline DescribeUserResult& WithDistinguishedName(const char* value) { SetDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }
    inline DescribeUserResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline DescribeUserResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline DescribeUserResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the user account is active. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline void SetEnabled(bool value) { m_enabled = value; }
    inline DescribeUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline void SetGivenName(const Aws::String& value) { m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenName.assign(value); }
    inline DescribeUserResult& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline DescribeUserResult& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline DescribeUserResult& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The attribute values that are returned for the attribute names that are
     * included in the request. </p>  <p> Attribute names are case insensitive.
     * </p> 
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributes = std::move(value); }
    inline DescribeUserResult& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline DescribeUserResult& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline DescribeUserResult& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributes.emplace(key, value); return *this; }
    inline DescribeUserResult& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline DescribeUserResult& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline DescribeUserResult& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeUserResult& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline DescribeUserResult& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the user. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline void SetRealm(const Aws::String& value) { m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realm.assign(value); }
    inline DescribeUserResult& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline DescribeUserResult& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline DescribeUserResult& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountName.assign(value); }
    inline DescribeUserResult& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline DescribeUserResult& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline DescribeUserResult& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the user. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline void SetSID(const Aws::String& value) { m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sID.assign(value); }
    inline DescribeUserResult& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline DescribeUserResult& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline DescribeUserResult& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }
    inline void SetSurname(const Aws::String& value) { m_surname = value; }
    inline void SetSurname(Aws::String&& value) { m_surname = std::move(value); }
    inline void SetSurname(const char* value) { m_surname.assign(value); }
    inline DescribeUserResult& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline DescribeUserResult& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline DescribeUserResult& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The UPN that is an Internet-style login name for a user and is based on the
     * Internet standard <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a>.
     * The UPN is shorter than the distinguished name and easier to remember. </p>
     */
    inline const Aws::String& GetUserPrincipalName() const{ return m_userPrincipalName; }
    inline void SetUserPrincipalName(const Aws::String& value) { m_userPrincipalName = value; }
    inline void SetUserPrincipalName(Aws::String&& value) { m_userPrincipalName = std::move(value); }
    inline void SetUserPrincipalName(const char* value) { m_userPrincipalName.assign(value); }
    inline DescribeUserResult& WithUserPrincipalName(const Aws::String& value) { SetUserPrincipalName(value); return *this;}
    inline DescribeUserResult& WithUserPrincipalName(Aws::String&& value) { SetUserPrincipalName(std::move(value)); return *this;}
    inline DescribeUserResult& WithUserPrincipalName(const char* value) { SetUserPrincipalName(value); return *this;}
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

    Aws::String m_directoryId;

    Aws::String m_distinguishedName;

    Aws::String m_emailAddress;

    bool m_enabled;

    Aws::String m_givenName;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;

    Aws::String m_realm;

    Aws::String m_sAMAccountName;

    Aws::String m_sID;

    Aws::String m_surname;

    Aws::String m_userPrincipalName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
