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
    AWS_DIRECTORYSERVICEDATA_API User();
    AWS_DIRECTORYSERVICEDATA_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const{ return m_distinguishedName; }
    inline bool DistinguishedNameHasBeenSet() const { return m_distinguishedNameHasBeenSet; }
    inline void SetDistinguishedName(const Aws::String& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = value; }
    inline void SetDistinguishedName(Aws::String&& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = std::move(value); }
    inline void SetDistinguishedName(const char* value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName.assign(value); }
    inline User& WithDistinguishedName(const Aws::String& value) { SetDistinguishedName(value); return *this;}
    inline User& WithDistinguishedName(Aws::String&& value) { SetDistinguishedName(std::move(value)); return *this;}
    inline User& WithDistinguishedName(const char* value) { SetDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline User& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline User& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline User& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the user account is active. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline User& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }
    inline User& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline User& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline User& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression that includes one or more attributes, data types, and values
     * of a user.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::move(value); }
    inline User& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline User& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline User& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    inline User& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline User& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline User& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline User& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline User& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline User& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline User& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline User& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the user. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    inline void SetSID(const Aws::String& value) { m_sIDHasBeenSet = true; m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sIDHasBeenSet = true; m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sIDHasBeenSet = true; m_sID.assign(value); }
    inline User& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline User& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline User& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    inline void SetSurname(const Aws::String& value) { m_surnameHasBeenSet = true; m_surname = value; }
    inline void SetSurname(Aws::String&& value) { m_surnameHasBeenSet = true; m_surname = std::move(value); }
    inline void SetSurname(const char* value) { m_surnameHasBeenSet = true; m_surname.assign(value); }
    inline User& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline User& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline User& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The UPN that is an internet-style login name for a user and based on the
     * internet standard <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a>.
     * The UPN is shorter than the distinguished name and easier to remember. </p>
     */
    inline const Aws::String& GetUserPrincipalName() const{ return m_userPrincipalName; }
    inline bool UserPrincipalNameHasBeenSet() const { return m_userPrincipalNameHasBeenSet; }
    inline void SetUserPrincipalName(const Aws::String& value) { m_userPrincipalNameHasBeenSet = true; m_userPrincipalName = value; }
    inline void SetUserPrincipalName(Aws::String&& value) { m_userPrincipalNameHasBeenSet = true; m_userPrincipalName = std::move(value); }
    inline void SetUserPrincipalName(const char* value) { m_userPrincipalNameHasBeenSet = true; m_userPrincipalName.assign(value); }
    inline User& WithUserPrincipalName(const Aws::String& value) { SetUserPrincipalName(value); return *this;}
    inline User& WithUserPrincipalName(Aws::String&& value) { SetUserPrincipalName(std::move(value)); return *this;}
    inline User& WithUserPrincipalName(const char* value) { SetUserPrincipalName(value); return *this;}
    ///@}
  private:

    Aws::String m_distinguishedName;
    bool m_distinguishedNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    bool m_enabled;
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
