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
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult() = default;
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeUserResult& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const { return m_distinguishedName; }
    template<typename DistinguishedNameT = Aws::String>
    void SetDistinguishedName(DistinguishedNameT&& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = std::forward<DistinguishedNameT>(value); }
    template<typename DistinguishedNameT = Aws::String>
    DescribeUserResult& WithDistinguishedName(DistinguishedNameT&& value) { SetDistinguishedName(std::forward<DistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    DescribeUserResult& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the user account is active. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DescribeUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    DescribeUserResult& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The attribute values that are returned for the attribute names that are
     * included in the request. </p>  <p> Attribute names are case insensitive.
     * </p> 
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const { return m_otherAttributes; }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    void SetOtherAttributes(OtherAttributesT&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::forward<OtherAttributesT>(value); }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    DescribeUserResult& WithOtherAttributes(OtherAttributesT&& value) { SetOtherAttributes(std::forward<OtherAttributesT>(value)); return *this;}
    template<typename OtherAttributesKeyT = Aws::String, typename OtherAttributesValueT = AttributeValue>
    DescribeUserResult& AddOtherAttributes(OtherAttributesKeyT&& key, OtherAttributesValueT&& value) {
      m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::forward<OtherAttributesKeyT>(key), std::forward<OtherAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the user. </p>
     */
    inline const Aws::String& GetRealm() const { return m_realm; }
    template<typename RealmT = Aws::String>
    void SetRealm(RealmT&& value) { m_realmHasBeenSet = true; m_realm = std::forward<RealmT>(value); }
    template<typename RealmT = Aws::String>
    DescribeUserResult& WithRealm(RealmT&& value) { SetRealm(std::forward<RealmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    DescribeUserResult& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the user. </p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    DescribeUserResult& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    DescribeUserResult& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The UPN that is an Internet-style login name for a user and is based on the
     * Internet standard <a href="https://datatracker.ietf.org/doc/html/rfc822">RFC
     * 822</a>. The UPN is shorter than the distinguished name and easier to remember.
     * </p>
     */
    inline const Aws::String& GetUserPrincipalName() const { return m_userPrincipalName; }
    template<typename UserPrincipalNameT = Aws::String>
    void SetUserPrincipalName(UserPrincipalNameT&& value) { m_userPrincipalNameHasBeenSet = true; m_userPrincipalName = std::forward<UserPrincipalNameT>(value); }
    template<typename UserPrincipalNameT = Aws::String>
    DescribeUserResult& WithUserPrincipalName(UserPrincipalNameT&& value) { SetUserPrincipalName(std::forward<UserPrincipalNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_distinguishedName;
    bool m_distinguishedNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;
    bool m_otherAttributesHasBeenSet = false;

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_userPrincipalName;
    bool m_userPrincipalNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
