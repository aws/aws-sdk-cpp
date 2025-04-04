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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p> A user object that contains identifying information and attributes for a
   * specified user. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/User">AWS
   * API Reference</a></p>
   */
  class User
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API User() = default;
    AWS_DIRECTORYSERVICEDATA_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const { return m_distinguishedName; }
    inline bool DistinguishedNameHasBeenSet() const { return m_distinguishedNameHasBeenSet; }
    template<typename DistinguishedNameT = Aws::String>
    void SetDistinguishedName(DistinguishedNameT&& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = std::forward<DistinguishedNameT>(value); }
    template<typename DistinguishedNameT = Aws::String>
    User& WithDistinguishedName(DistinguishedNameT&& value) { SetDistinguishedName(std::forward<DistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    User& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the user account is active. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline User& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    User& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression that includes one or more attributes, data types, and values
     * of a user.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const { return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    void SetOtherAttributes(OtherAttributesT&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::forward<OtherAttributesT>(value); }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    User& WithOtherAttributes(OtherAttributesT&& value) { SetOtherAttributes(std::forward<OtherAttributesT>(value)); return *this;}
    template<typename OtherAttributesKeyT = Aws::String, typename OtherAttributesValueT = AttributeValue>
    User& AddOtherAttributes(OtherAttributesKeyT&& key, OtherAttributesValueT&& value) {
      m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::forward<OtherAttributesKeyT>(key), std::forward<OtherAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    User& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the user. </p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    User& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    User& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The UPN that is an internet-style login name for a user and based on the
     * internet standard <a href="https://datatracker.ietf.org/doc/html/rfc822">RFC
     * 822</a>. The UPN is shorter than the distinguished name and easier to remember.
     * </p>
     */
    inline const Aws::String& GetUserPrincipalName() const { return m_userPrincipalName; }
    inline bool UserPrincipalNameHasBeenSet() const { return m_userPrincipalNameHasBeenSet; }
    template<typename UserPrincipalNameT = Aws::String>
    void SetUserPrincipalName(UserPrincipalNameT&& value) { m_userPrincipalNameHasBeenSet = true; m_userPrincipalName = std::forward<UserPrincipalNameT>(value); }
    template<typename UserPrincipalNameT = Aws::String>
    User& WithUserPrincipalName(UserPrincipalNameT&& value) { SetUserPrincipalName(std::forward<UserPrincipalNameT>(value)); return *this;}
    ///@}
  private:

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

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_userPrincipalName;
    bool m_userPrincipalNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
